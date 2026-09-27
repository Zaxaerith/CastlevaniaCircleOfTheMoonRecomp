# Third-party licenses and legal notes

This document is the license analysis for **COTMRecomp**. Read it before
forking, redistributing binaries, or commercializing anything derived from
this project.

---

## 1. License matrix

| Component | Role | License | Commercial OK? |
|-----------|------|---------|----------------|
| **GBARecomp** (`gba_recompile`, `gbarecomp_runtime`) — *the tool used by this project* | Static recompiler + GBA hardware runtime | **PolyForm Noncommercial 1.0.0** | **No** (contact author) |
| **SnesRecomp** (same author mstan; not used here) | SNES static recompiler CLI | **PolyForm Noncommercial 1.0.0** | **No** (contact author) |
| **arm-recomp-core** | ARM/Thumb decode, IR, interpreter core (submodule of GBARecomp) | **MIT** | Yes |
| **rbengine** | Runtime comms helpers (submodule) | **MIT** | Yes |
| **recomp-net** | Netplay (submodule) | **MIT** | Yes |
| **SDL2** | Window / input / audio host | **zlib License** | Yes |
| **COTMRecomp host glue** (`src/main.cpp`, `game.toml`, `CMakeLists.txt`, scripts, docs) | Game project wrapper | **MIT** (see `LICENSE`) | Yes for *this glue only* |
| **Generated cart C++** (`recomp/generated_official/`) | ROM → C++ translation | **Not licensed by this repo** | **No — do not publish** |
| **Castlevania: Circle of the Moon** (ROM) | The game | **© Konami** | **No** |
| **GBA BIOS** | Boot ROM | **© Nintendo** (or open replacement) | **No** for Nintendo's BIOS |

---

## 2. PolyForm Noncommercial 1.0.0 (GBARecomp / SnesRecomp)

**Why it is not “normal MIT/GPL”:**

- **Not OSI open source.** PolyForm Noncommercial grants copyright use only
  for **noncommercial purposes**. It is not free software under the FSF/OSI
  definitions because it restricts field of use (commercial).
- **No sublicensing.** You cannot relicense the framework as MIT/GPL/Apache
  when you redistribute it or link it into a combined binary.
- **Patent clause** is limited; commercial patent use on behalf of a company
  ends the patent grant.
- **Commercial licensing** is available from the author
  (https://1379.tech — see the LICENSE file in the GBARecomp tree).

**Practical consequence for this project:**

A build of `cotm.exe` **links `libgbarecomp_runtime` and friends**. The
resulting binary is therefore subject to PolyForm Noncommercial. You may:

- Use, study, modify, and share the project for **noncommercial** purposes
  (personal play, education, research, open discussion) under the framework
  terms.
- **Not** sell it, use it in a commercial product/service, or otherwise
  exploit it commercially without a separate license from the GBARecomp author.

The MIT license on this repo's glue **does not** strip that restriction from
the linked binary.

---

## 3. GBARecomp (this project) and SnesRecomp (same author)

This project is a **GBA** game (Circle of the Moon) and uses **GBARecomp**
(`gba_recompile` + `gbarecomp_runtime`) — **not** the SNES toolchain.

Both **GBARecomp** and **SnesRecomp** are authored by **mstan / Matthew
Stanley** and ship under the same **PolyForm Noncommercial 1.0.0** terms.
Whatever you have seen about SnesRecomp's license applies equally to
GBARecomp: **no commercial use without a separate license**. Do not treat
either as MIT/GPL.

If you also consume `snesrecomp-cli` (other projects in the same workspace),
that binary is likewise PolyForm Noncommercial.

---

## 4. ROM-derived generated code

`gba_recompile --rom game.gba` emits `recompiled_*.cpp` / `dispatch_table.cpp`
that **express the copyrighted game**. Those files are **derivative works of
Konami's ROM**.

- **This repository's `.gitignore` excludes `recomp/generated*`** so that
  ROM-derived C++ is never pushed to GitHub.
- Users who hold a legal ROM generate the shards **locally** (see
  `scripts/generate.ps1`).
- Do **not** open-source the generated shards “because they are C++ text”.
  They remain a translation of the game.

The same rule applies to **GBA BIOS** dumps: never publish them. GBARecomp
can recompile a BIOS you supply locally (`gba_recompile --bios`).

---

## 5. Trademark and naming

“Castlevania”, “Circle of the Moon”, and “Konami” are trademarks of their
owners. This project is an unofficial, fan-made technical demonstration and
is not affiliated with or endorsed by Konami or Nintendo.

---

## 6. Recommended posture for the public repo

1. Ship: host glue (`src/`, `game.toml`, `CMakeLists.txt`, `scripts/`, docs).
2. Do **not** ship: ROM, BIOS, `recomp/generated*`, prebuilt `cotm.exe`.
3. State clearly in README: users need their own ROM/BIOS; the framework is
   PolyForm Noncommercial; the game is © Konami.
4. Keep `THIRD_PARTY.md` and `LICENSE` (with the dependency note) in the tree.

That combination is honest, reviewable, and does not attempt to relicense
Konami's game or Matthew Stanley's framework.

---

## 7. Upstream links

- GBARecomp: https://github.com/mstan/gbarecomp
- SnesRecomp / tooling author: https://1379.tech
- PolyForm Noncommercial 1.0.0: https://polyformproject.org/licenses/noncommercial/1.0.0
- SDL2: https://www.libsdl.org/ (zlib License)
