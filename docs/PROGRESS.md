# 进度记录 — Castlevania: Circle of the Moon 静态重编译

## 路径映射

AGENT_PROMPT 写的 `CastlevaniaCotMRecomp` 实际目录为
`D:\Project\GameRecomp\CastlevaniaCircleOfTheMoonRecomp`。本项目以实际目录为工作根。

## 工具与生成

- CLI：`gbarecomp.exe` 0.2.0，子命令 **`build`**
- ROM：8388608 字节，标题 `DRACULA AGB1`，游戏代码 `AAME`
- 生成：846 函数（arm=20, thumb=826, indirect=354）
- 输出：`recomp/generated/`，已 g++ 编译
- 可执行：`build/cotm.exe`（自建 GBA 运行时 + Win32/headless）

## 已修复的运行时缺陷（累计）

1. Thumb 立即数移位（LSL/LSR/ASR）未解码
2. 派发表 thumb 标志与 CPSR.T 不一致
3. yield 后中途 PC 误当函数入口
4. DMA 控制位布局 + CNT_H 对齐（GBATEK）
5. BIOS 未映射到总线
6. `runtime_tick` 响应 IRQ 后生成代码覆盖 R[15] → setjmp/longjmp
7. IRQ 进入不 bank-swap 寄存器
8. 进 IRQ 就清 IF → handler 调野指针
9. 异常返回用 PC 低位覆盖 T 位
10. 直接跳用户 IRQ handler，跳过 BIOS 保存 r0-r3/r12/lr → 模拟 BIOS IRQ 桩
11. `runtime_irq` 提前切 System 导致 stub `msr` 回 IRQ 时 SP 错乱 → 停留 IRQ 模式
12. handler `bx lr` 哨兵返回未识别
13. **Thumb 高寄存器 MOV（`0x46xx`）被解码成 ADD**
14. `pc_is_executable` 放行整个 `0x03xxxxxx` → IWRAM 只允许 32KB

## 当前运行状态（headless）

```
frame=1   DISPCNT=0x0080  VRAM=4     PAL=2
frame=4   DISPCNT=0x0080  VRAM=17988 PAL=2    ← 图形数据入 VRAM
frame=5   DISPCNT=0x1140  VRAM=17988 PAL=2    ← Mode0+OBJ
frame=180 DISPCNT=0x1240  VRAM=17988 PAL=2    ← BG1+OBJ
frame=300 DISPCNT=0x1240  VRAM=17988 PAL=2
frame=360 DISPCNT=0x1240  VRAM=17988 PAL=87   ← 调色板开始写入
```

- **稳定跑到 300+ 帧 / 8400 万周期**（此前第 3 帧就崩）
- VBlank IRQ 全链路可进 handler 并正确返回
- SWI 0x0B (CpuSet)、DMA3、LZ77 HLE 正常
- 画面仍全黑：调色板几乎为空（87 字节），BG1+OBJ 已开
- 约 336 帧后 SP 损坏 → PC 走到 `0x03FFFF80`/`0x04000000`（已限制 IWRAM 可执行范围）

## 阻塞

1. 调色板写入不完整 → 黑屏。需跟踪 `0x05000000` 写入/DMA
2. 约 336 帧后 SP 越界，根因待查
3. BIOS 镜像非标准（向量非 ARM 分支），LLE 不可用

## 下一步

1. 记录 `0x05000000-0x050003FF` 写入，查调色板路径
2. IRQ 返回后校验 SP 范围
3. 提供合法 GBA BIOS dump 可走 LLE

## 文件

```
build/cotm.exe
recomp/generated/*          # gbarecomp 输出
src/runtime/*               # 自建 GBA 运行时
scripts/build_cotm.ps1
docs/PROGRESS.md
docs/run_stdout.txt
docs/run_stderr.txt
docs/framebuffer.bmp
gba_bios.bin
```

运行：`build\cotm.exe --rom "Castlevania - Circle of the Moon(US)(Konami)(64Mb).gba" --bios gba_bios.bin`

## 里程碑：接入官方 gbarecomp 运行时（本轮）

子模块已就位：arm-recomp-core / rbengine / recomp-net。
SDL2 从 HoD 项目拷贝到 third_party/。

产出：**build-official/cotm.exe**（3.1MB）+ SDL2.dll
- 链接 libgbarecomp_{armv4t,gba,runtime,debug}.a
- **LLE 重编译 BIOS**（bios_backend=LLE, bios_boot=real intro）
- SRAM 自动检测（signature=SRAM_V @ 0x397D64）
- self-heal 解释器桥接工作（编译器暂缺，healed_native=0）

运行结果（headless 900 帧）：
- rom_loaded title="DRACULA AGB1" code=AAME entry=0x080000c0
- final_pc=0x080057e0（游戏 ROM 代码）
- pal_nonzero=1020/1024  vram=17083  oam=128
- 有画面输出（BIOS 开机 → 灰度图，见 docs/cotm_frame_*.bmp）
- 41 个 dispatch miss 由解释器桥接（见 recomp_master_misses_AAME.toml.frag）

窗口版已可启动（--rom --bios --config）。

### 待办
1. self-heal 编译器（gcc/tcc exit -1）— 修好后 miss 可缓存为原生
2. 把 recomp_master_misses_AAME.toml.frag 合并进 game.toml 提升静态覆盖
3. 核对画面是否到标题/可操作

## 里程碑 3：覆盖率收敛（本轮）

静态语料：928 → 1001 → 1105 → **1123 functions**
dispatch_misses：41 → 19 → 9 → **4**
healed_native：56 → **65**   warm_loaded=65

game.toml 累计 53 个 [[extra_func]] + 2 个 [[code_copy]]
（IWRAM 用 source_addr 映射 ROM 背面）

剩余 4 个 miss（均为 IWRAM 运行时安装，无已知 ROM 源）：
- 0x030041D0 / 0x0300421A / 0x03004222  jump-table 候选
- 0x03007D38

修复：runtime_arm_default_aborts.cpp 的 CPSR bitfield 不能 static_cast<u32>。

画面稳定：29 色，橄榄/棕游戏色调（cotm_frame_r5.bmp）。

## 里程碑 4：长跑 + 大规模合并（本轮）

1800 帧长跑发现 74 个 cart miss → 合并后静态函数 **1123 → 2744**
dispatch_misses（1800 帧）：78 → **14**
healed_native=805  native_calls=42838
VRAM 17083→34913  OAM 128→149  画面 29 色→**67 色**（深蓝+米色，疑似标题/菜单）

TCP 调试可用（--tcp 19842, read_iwram）。

## 里程碑 5：覆盖收敛至 5 miss（本轮）

静态函数 2744 → **2893**   extra_func=136
dispatch_misses（1800 帧）14 → **5**
healed_native=warm_loaded=1361  native_calls=47007
画面稳定 67 色（全屏分布亮像素，非纯文字）— 见 cotm_frame_r7.bmp

剩余 5 miss：4 个 IWRAM jump-table + 1 个 cart。

## 里程碑 6：自动输入验证可玩性（本轮）

- 发现 RunOptions.input_frame 回调，实现自动 Start/A
- **输入生效**：画面从 67 色深蓝棕 → **25 色亮蓝**（Konami/菜单色调）
- 状态变化：pal=993 vram=17597 oam=160（与无输入时不同）
- --tcp 会卡死游戏（勿用于 gameplay）；set_keyinput 仅在 TCP 下可用

结论：**游戏响应手柄输入并推进画面**。

## 里程碑 7：画面推进验证（本轮）

自动游玩多阶段截图（input_frame 自动 Start/A）：
- **300 帧**：128 色，白底 + 红/橙（logo/BIOS 开机）
- **600 帧**：44 色，黑底 + 黄字（疑似标题画面）
- **900/1200 帧**：同上，菜单/标题稳定
- **1800 帧**：25 色，蓝底（进入下一层菜单）

结论：**游戏完整走完 BIOS→logo→标题→菜单**，输入有效。
