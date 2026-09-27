#!/usr/bin/env python3
"""Split gbarecomp shards into functionally named src/game/*.cpp modules.

Reads src/generated/recompiled_*.cpp + recompiled.h and emits themed
translation units (SMK-style bankNN_* files).
"""
from __future__ import annotations

import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
GEN = ROOT / "src" / "generated"
OUT = ROOT / "src" / "game"

# Address/name → module (checked in order)
RULES = [
    (r"^gf_(autojt_|jump_)", "jump_tables"),
    (r"^gf_.*iwram", "iwram_reloc"),
    (r"^gf_(cart_|start_vector|boot_)", "boot_system"),
    (r"^gf_(ewram_|mem_|clear_)", "memory_dma"),
    (r"^gf_(game_state_|scene_)", "engine_scene"),
    (r"^gf_(vblank_|irq_|timer_)", "irq_timers"),
    (r"^gf_(save_|sram_)", "save_system"),
    (r"^gf_(gfx_|decode_)", "gfx_decode"),
    (r"^gf_.*audio", "audio_driver"),
    (r"^gf_.*engine_hot", "engine_hot"),
    (0x03000000, 0x03008000, "iwram_reloc"),
    (0x08000000, 0x08002000, "boot_system"),
    (0x08002000, 0x08004000, "memory_dma"),
    (0x08004000, 0x08008000, "engine_scene"),
    (0x08008000, 0x08010000, "gameplay_core"),
    (0x08010000, 0x08020000, "save_system"),
    (0x08020000, 0x08080000, "world_actors"),
    (0x08080000, 0x080C0000, "ui_audio"),
    (0x080C0000, 0x08100000, "engine_tail"),
]


def pick_module(name: str, addr: int) -> str:
    for rule in RULES:
        if isinstance(rule[0], str):
            if re.search(rule[0], name):
                return rule[1]
        else:
            lo, hi, mod = rule
            if lo <= addr < hi:
                return mod
    if addr >= 0x08000000:
        return "cart_misc"
    return "misc"


def main() -> int:
    hdr = (GEN / "recompiled.h").read_text(encoding="utf-8", errors="replace")
    sigs = re.findall(
        r"void\s+(gf_\w+)\(void\);\s*/\*\s*(0x[0-9A-Fa-f]+)\s+(arm|thumb)\s*\*/",
        hdr,
    )
    by_name = {n: (int(a, 16), m) for n, a, m in sigs}
    print(f"functions in header: {len(by_name)}")

    # Concatenate shards and split function bodies
    body_re = re.compile(
        r"^(void\s+gf_\w+\(void\)\s*\{)", re.M
    )
    chunks: dict[str, str] = {}
    for shard in sorted(GEN.glob("recompiled_*.cpp")):
        text = shard.read_text(encoding="utf-8", errors="replace")
        starts = [m.start() for m in body_re.finditer(text)]
        # also grab file-level comments once via first function's preceding text
        for i, s in enumerate(starts):
            e = starts[i + 1] if i + 1 < len(starts) else len(text)
            chunk = text[s:e]
            m = re.match(r"void\s+(gf_\w+)\(void\)", chunk)
            if not m:
                continue
            name = m.group(1)
            chunks[name] = chunk.rstrip() + "\n\n"
    print(f"function bodies parsed: {len(chunks)}")

    modules: dict[str, list[str]] = {}
    for name, chunk in chunks.items():
        addr, mode = by_name.get(name, (0, "thumb"))
        mod = pick_module(name, addr)
        modules.setdefault(mod, []).append((addr, name, mode, chunk))

    OUT.mkdir(parents=True, exist_ok=True)
    for old in OUT.glob("*.cpp"):
        old.unlink()
    for old in OUT.glob("*.h"):
        old.unlink()

    manifest = []
    for mod in sorted(modules):
        entries = sorted(modules[mod], key=lambda t: (t[0], t[1]))
        path = OUT / f"{mod}.cpp"
        lines = [
            f"/* Auto-split from gbarecomp shards. Module: {mod}",
            f" * {len(entries)} guest functions. Do not hand-edit function bodies.",
            " */",
            "",
            '#include "generated/recompiled.h"',
            "",
        ]
        for addr, name, mode, chunk in entries:
            lines.append(f"/* 0x{addr:08X} {mode} */")
            lines.append(chunk)
        path.write_text("\n".join(lines), encoding="utf-8")
        manifest.append((mod, len(entries), path.name))
        print(f"  {path.name:28s}  {len(entries):4d} funcs")

    # summary header
    (OUT / "modules.h").write_text(
        "/* Functional module index for recompiled guest code (src/game/). */\n"
        "#pragma once\n"
        + "".join(
            f"// {n:28s}  {c:4d} functions  -> {f}\n" for n, c, f in manifest
        ),
        encoding="utf-8",
    )
    print(f"total modules: {len(modules)}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
