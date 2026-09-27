# COTMRecomp

Static recompilation of **Castlevania: Circle of the Moon (USA)** for modern
Windows PCs, built on the [GBARecomp](https://github.com/mstan/gbarecomp)
framework (ARM7TDMI / ARMv4T → C++).

The original game logic runs as native code against a shared GBA hardware
runtime (PPU, DMA, timers, IRQ, SRAM, input) instead of inside a full-system
emulator. Unresolved paths fall back to a loud, self-healing interpreter.

## What this repository contains

| Path | Contents |
|------|----------|
| `src/main.cpp` | Host entry: ROM identity + `run_game()` |
| `game.toml` | Reviewed recompile config (seed functions, code-copy ranges, save type) |
| `CMakeLists.txt` | Links `cotm.exe` against the GBARecomp framework |
| `recomp/` | **Generated cart code goes here** (not shipped — see below) |
| `scripts/` | Generate + build helpers |
| `docs/PROGRESS.md` | Development log |
| `docs/screenshots/` | Captured frames (boot / title / menu) |

## What this repository does **not** contain

- Game ROM (`.gba`) — dump your own legally owned cartridge.
- GBA BIOS — provide your own dump locally.
- ROM-derived generated C++ (`recomp/generated_official/`) — run the
  generator locally so this repo never publishes Konami's code.

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

# 3. Run (pass ROM/BIOS paths; first run asks for them if omitted)
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

## License and legal

Read **[THIRD_PARTY.md](THIRD_PARTY.md)** before redistributing builds or
derivatives. Summary:

- GBARecomp / SnesRecomp framework: **PolyForm Noncommercial 1.0.0** —
  not OSI open source; commercial use requires a separate license from
  the author.
- This repo's host glue: MIT (see `LICENSE`).
- The **game** is © Konami. You must supply your own ROM and BIOS.
- Generated cart C++ is a derivative of the ROM — **do not publish it**.

## Credits

- [GBARecomp](https://github.com/mstan/gbarecomp) / SnesRecomp — Matthew Stanley
- `arm-recomp-core`, `rbengine`, `recomp-net` — MIT
- SDL2 — zlib License
