# COTMRecomp

Static recompilation of **Castlevania: Circle of the Moon (USA)** for modern
Windows PCs, built on the [GBARecomp](https://github.com/mstan/gbarecomp)
framework (ARM7TDMI / ARMv4T → C++).

The original game logic runs as native code against a shared GBA hardware
runtime (PPU, DMA, timers, IRQ, SRAM, input) instead of inside a full-system
emulator. Unresolved paths fall back to a loud, self-healing interpreter.

## License

**PolyForm Noncommercial License 1.0.0** — see [LICENSE](LICENSE).

This project links and is built with **GBARecomp** (same license). You may
use, study, modify, and share it for **noncommercial purposes only**.
Commercial use requires a separate license from the GBARecomp author
(https://1379.tech). Details in [THIRD_PARTY.md](THIRD_PARTY.md).

## What this repository contains

| Path | Contents |
|------|----------|
| `src/main.cpp` | Hand-written host: ROM identity + `run_game()` |
| `src/generated/` | **Recompiled cart C++** (not shipped — regenerate locally) |
| `symbols/cotm_functions.tsv` | Functional names for known guest functions |
| `game.toml` | Reviewed recompile config (named seeds, code-copy, save type) |
| `CMakeLists.txt` | Builds `cotm.exe` against GBARecomp |
| `scripts/generate.ps1` | Local generator wrapper |
| `docs/PROGRESS.md` | Development log |
| `docs/screenshots/` | boot / title / menu frames |

## What this repository does **not** contain

- Game ROM (`.gba`) — dump your own legally owned cartridge.
- GBA BIOS — provide your own dump locally.
- ROM-derived generated C++ (`recomp/generated_official/`) — run the
  generator locally so this repo never publishes Konami's code.
- Build trees / prebuilt `cotm.exe` — build locally (see below).

## Requirements

- CMake ≥ 3.20, Ninja (or Make), C++20 compiler (MSVC or MinGW-w64)
- SDL2 development package
- [GBARecomp](https://github.com/mstan/gbarecomp) source tree
  (default expected at `../gbarecomp-main`)
- `gba_recompile` tool from that tree (build target `gba_recompile`)

## Build

```powershell
# 1. Generate cart code from YOUR legally dumped ROM
.\scripts\generate.ps1 -Rom "path\to\Castlevania - Circle of the Moon (USA).gba"

# 2. Configure + build
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release -DSDL2_ROOT="C:\path\to\SDL2"
cmake --build build --config Release

# 3. Run (pass ROM/BIOS paths)
.\build\cotm.exe --rom "path\to\game.gba" --bios "path\to\gba_bios.bin" --config game.toml
```

See `scripts/generate.ps1` and `docs/PROGRESS.md` for reviewed `[[extra_func]]`
/ `[[code_copy]]` notes used in `game.toml`.

## Controls

Standard GBA mapping (see the GBARecomp runtime host window). Native 240×160
viewport only.

## Save type

SRAM (`save = "sram"` in `game.toml`). Detected at runtime from the
`SRAM_V` signature in the ROM.

## Legal

- The **game** is © Konami. You must supply your own ROM and BIOS.
- Generated cart C++ is a derivative of the ROM — **do not publish it**.
- GBARecomp framework is © Matthew Stanley, PolyForm Noncommercial 1.0.0.
- “Castlevania”, “Circle of the Moon”, and “Konami” are trademarks of their
  owners. Unofficial fan project; not affiliated with or endorsed by Konami
  or Nintendo.

## Credits

- [GBARecomp](https://github.com/mstan/gbarecomp) — Matthew Stanley
- `arm-recomp-core`, `rbengine`, `recomp-net` — MIT
- SDL2 — zlib License
