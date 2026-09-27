# CastlevaniaCircleOfTheMoonRecomp

[![Platform](https://img.shields.io/badge/platform-Windows-blue)](#building-from-source)
[![Language](https://img.shields.io/badge/language-C%2B%2B20-orange)](#what-static-recompilation-means-here)
[![License](https://img.shields.io/badge/license-PolyForm--Noncommercial--1.0.0-blue)](LICENSE)

Native static recompilation of **Castlevania: Circle of the Moon (GBA, USA)** into a standalone Windows executable using the [GBARecomp](https://github.com/mstan/gbarecomp) framework.

---

## What "static recompilation" means here

The ARM7TDMI (ARM/Thumb) machine code from the original cartridge is statically translated to native C++ — every discovered guest function is compiled as a real translation unit in `src/generated/`.

**The rest of the GBA is not recompiled — it is hardware**:

* **PPU** (text / affine BGs, OBJ, bitmap modes), **DMA**, **timers**, **IRQ**, **SRAM saves**, and **input** run through the GBARecomp hardware runtime (`gbarecomp_runtime`).
* **BIOS** is recompiled and dispatched LLE (real boot path), not high-level stubbed.
* Unresolved or RAM-installed code paths fall through to a **self-healing interpreter**, then compile into a persistent native cache.

This follows the established architecture of modern static recompilation projects: **recompile the CPU, emulate the silicon**.

---

## Current Status & Features

- [x] **Boot chain verified**: LLE BIOS intro → game cart entry → title / menu frames captured.
- [x] **SRAM saves**: Auto-detected (`SRAM_V` in ROM), 32 KiB flush on exit.
- [x] **Native host**: SDL2 window, gamepad + keyboard, native 240×160 GBA viewport.
- [x] **Self-healing coverage**: Dispatch misses bridge via interpreter and cache as native DLLs.
- [x] **Reviewed recompile config**: Named guest functions (`gf_vblank_irq_handler`, `gf_game_state_flag_poll`, …), `[[extra_func]]` / `[[code_copy]]` seeds in `game.toml`.
- [ ] **Full static coverage**: A small set of IWRAM-installed paths still interpret at runtime.

---

## Quick Start (ROM Requirement)

> [!IMPORTANT]
> **Legal Notice**: This repository does **NOT** contain any copyrighted ROM data, BIOS images, game assets, or proprietary Konami / Nintendo code. You must provide your own legally obtained ROM (and optionally a GBA BIOS dump) to build and run the game.

### Verified ROM Information

| Field | Value |
| :--- | :--- |
| **Game** | Castlevania: Circle of the Moon (USA) |
| **Internal title** | `DRACULA AGB1` |
| **Game code** | `AAME` |
| **File size** | `8,388,608` bytes (8 MiB) |
| **SHA-1** | `d661b01eb94186435723ac03344792c11c20c522` |
| **CRC32** | `E310970F` |
| **Save type** | SRAM (32 KiB), signature `SRAM_V` |

Place your dump at the project root or pass `--rom` at runtime.

---

## One-click build (bring your own ROM)

### Windows (PowerShell)

```powershell
# From the repository root
.\build.ps1 -Rom "path\to\Castlevania - Circle of the Moon (USA).gba"
```

This will:

1. Generate ROM-derived C++ into `src/generated/` (not published in git).
2. Configure and compile `build/cotm.exe` with CMake + Ninja.
3. Leave `cotm.exe` + `SDL2.dll` under `build/` for you to run.

### Run the game

```powershell
.\build\cotm.exe --rom "path\to\game.gba" --bios "path\to\gba_bios.bin" --config game.toml
```

`--bios` is optional if you rely on GBARecomp’s bundled recompiled BIOS path; a local dump is recommended for full LLE.

---

## Controls

Default GBARecomp host bindings:

| Action | Keyboard | GBA |
| :--- | :--- | :--- |
| **D-Pad** | Arrow keys | D-Pad |
| **A** | `X` | A |
| **B** | `Z` | B |
| **L** | `C` | L |
| **R** | `V` | R |
| **Start** | `Enter` | Start |
| **Select** | `Right Shift` | Select |
| **Fullscreen** | `F11` / `Alt+Enter` | — |
| **Quit** | `Esc` | — |

Gamepads (Xbox / PlayStation / Switch Pro / generic USB) are supported via SDL2 GameController.

---

## Building from Source (manual)

### Prerequisites

* **CMake** (>= 3.20)
* **C++20 compiler**: MSVC or MinGW-w64 (GCC/Clang)
* **Ninja** (recommended) or Make
* **SDL2** development package
* **[GBARecomp](https://github.com/mstan/gbarecomp)** source tree (default `../gbarecomp-main`)

### Windows

```powershell
git clone https://github.com/Zaxaerith/CastlevaniaCircleOfTheMoonRecomp.git
cd CastlevaniaCircleOfTheMoonRecomp

# 1) Generate cart C++ from YOUR ROM
.\scripts\generate.ps1 -Rom "path\to\game.gba"

# 2) Configure + build
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release -DSDL2_ROOT="C:\path\to\SDL2"
cmake --build build --target cotm

# 3) Run
.\build\cotm.exe --rom "path\to\game.gba" --bios "path\to\gba_bios.bin" --config game.toml
```

Or run the automated helper:

```powershell
.\build.ps1 -Rom "path\to\game.gba"
```

### Linux / macOS (host build of the framework + game)

```bash
# deps (Debian/Ubuntu)
sudo apt install -y build-essential cmake ninja-build libsdl2-dev

git clone --recurse-submodules https://github.com/mstan/gbarecomp.git ../gbarecomp-main
./scripts/generate.sh --rom /path/to/game.gba
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build --target cotm
```

---

## Repository Structure

```
CastlevaniaCircleOfTheMoonRecomp/
├── CMakeLists.txt              # Builds cotm.exe against GBARecomp
├── README.md                   # This file
├── LICENSE                     # PolyForm Noncommercial License 1.0.0
├── THIRD_PARTY.md              # Dependency & legal notes
├── build.ps1                   # One-click generate + build (BYO ROM)
├── game.toml                   # Reviewed recompile config (named seeds, code_copy, SRAM)
├── symbols/
│   └── cotm_functions.tsv      # Functional names for guest functions
├── src/
│   ├── main.cpp                # Host entry (ROM identity + run_game)
│   └── game/                   # Recompiled native C++ (by function module)
│       ├── boot_system.cpp             # Cart entry, BIOS handoff, boot init
│       ├── memory_dma.cpp              # EWRAM clear/fill, DMA helpers
│       ├── engine_scene.cpp            # Game-state flags, scene loader
│       ├── gameplay_core.cpp           # Mid-ROM gameplay systems
│       ├── save_system.cpp             # SRAM / save probing
│       ├── world_actors.cpp            # World, actors, large ROM mid/late
│       ├── ui_audio.cpp                # UI, menus, audio drivers
│       ├── engine_tail.cpp             # Late-ROM engine / tables
│       ├── iwram_reloc.cpp             # IWRAM-installed code copies
│       ├── jump_tables.cpp             # Auto-detected jump-table bodies
│       ├── engine_hot.cpp              # Hot miss-log stubs
│       ├── recomp_dispatch.cpp         # Function dispatch table
│       ├── symbol_map.cpp              # PC → name map for debug
│       ├── modules.h                   # Module index
│       └── recompiled.h                # Generated prototypes
├── scripts/
│   ├── generate.ps1            # gba_recompile wrapper
│   └── split_generated.py      # Shards → src/game modules
└── docs/
    ├── PROGRESS.md             # Development log
    └── screenshots/            # Boot / title / menu frames
```

Recompiled guest code lives in **`src/game/`** as functionally named modules (SMK-style). Monolithic shards under `src/generated/` are only an intermediate from `gba_recompile` and are not published.

---

## License

This project is a recompiled derivative work based on [GBARecomp](https://github.com/mstan/gbarecomp) and is licensed under the **PolyForm Noncommercial License 1.0.0**.

* **Source-available / noncommercial**: personal use, study, research, non-profit testing are permitted.
* **Commercial use prohibited**: commercial use or monetized distribution is not allowed under the upstream license.
* **Upstream copyright**: `Copyright (c) 2026 Matthew Stanley` (GBARecomp / SnesRecomp).
* Full text: [LICENSE](LICENSE). Dependency breakdown: [THIRD_PARTY.md](THIRD_PARTY.md).

---

## Credits & Acknowledgments

* **[Zaxaerith](https://github.com/Zaxaerith)** — project porting, recompilation integration, host runtime, tooling.
* **Konami** — original creators of *Castlevania: Circle of the Moon* (2001).
* **[mstan](https://github.com/mstan)** — author of [GBARecomp](https://github.com/mstan/gbarecomp) and pioneer of GBA static recompilation.
* **arm-recomp-core / rbengine / recomp-net** — MIT-licensed supporting libraries.
* **SDL2** — zlib License.
* Everyone in the GBA reverse-engineering and recompilation community.

