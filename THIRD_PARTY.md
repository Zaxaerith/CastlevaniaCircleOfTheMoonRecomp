# Third-party components and legal notes

## Project license

**COTMRecomp is licensed under the PolyForm Noncommercial License 1.0.0**
(the full text is in `LICENSE`).

This is the same license as **GBARecomp** / **SnesRecomp** (author: mstan /
Matthew Stanley). The project links `gbarecomp_runtime` and is built with
`gba_recompile`, so the combined work inherits that noncommercial-only
posture. Do **not** relicense this project as MIT/GPL/Apache.

**PolyForm Noncommercial 1.0.0 is not OSI open source.** It allows
noncommercial use, modification, and sharing; it forbids commercial use
unless you obtain a separate license from the author
(https://1379.tech).

---

## License matrix

| Component | Role | License | Commercial OK? |
|-----------|------|---------|----------------|
| **COTMRecomp** (this repo) | Game host + config + docs | **PolyForm Noncommercial 1.0.0** | **No** |
| **GBARecomp** (`gba_recompile`, `gbarecomp_runtime`) | Static recompiler + GBA hardware runtime | **PolyForm Noncommercial 1.0.0** | **No** |
| **SnesRecomp** (same author; not used in this project) | SNES recompiler CLI | **PolyForm Noncommercial 1.0.0** | **No** |
| **arm-recomp-core** | ARM/Thumb decode, IR, interpreter core | MIT | Yes |
| **rbengine** | Runtime comms helpers | MIT | Yes |
| **recomp-net** | Netplay | MIT | Yes |
| **SDL2** | Window / input / audio host | zlib License | Yes |
| **Generated cart C++** (`recomp/generated_official/`) | ROM → C++ translation | Not licensed here | **No — do not publish** |
| **Castlevania: Circle of the Moon** | The game | © Konami | **No** |
| **GBA BIOS** | Boot ROM | © Nintendo (or open replacement) | **No** for Nintendo's BIOS |

---

## ROM-derived generated code

`gba_recompile --rom game.gba` emits `recompiled_*.cpp` / `dispatch_table.cpp`
that express the copyrighted game. Those files are **derivative works of
Konami's ROM**.

- `.gitignore` excludes `recomp/generated*` so they are never pushed.
- Users generate the shards **locally** (`scripts/generate.ps1`).
- Do **not** publish the generated shards. The same applies to GBA BIOS dumps.

---

## Trademarks

“Castlevania”, “Circle of the Moon”, and “Konami” are trademarks of their
owners. Unofficial fan project; not affiliated with or endorsed by Konami or
Nintendo.

---

## Upstream

- GBARecomp: https://github.com/mstan/gbarecomp
- PolyForm Noncommercial 1.0.0: https://polyformproject.org/licenses/noncommercial/1.0.0
- Commercial licensing: https://1379.tech
- SDL2: https://www.libsdl.org/ (zlib)
