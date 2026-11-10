# JUMP Ultimate Stars — reverse engineering, editor and native port

Research and tooling for the Nintendo DS game *JUMP Ultimate Stars* (game code `AJUJ`).

**No game data is included.** This repository contains no ROM, no extracted files and no
graphics, sound or other assets from the game. To use the tools you need your own dump of the
cartridge. The supported image has SHA256
`52e262163e0d304c96f3cd05b2be0e948c16725bda58a8a8635cf4a0afa111bd`.

## Contents

| Folder | What it is |
|---|---|
| `port/` | C# (.NET 10) native port in progress. The Windows host defaults to external extracted data; see [port setup](port/README.md). Includes ROM/NitroFS tools, ARM9 verification and xUnit tests. Tests look for `JUS.nds` in a parent directory or in `JUS_ROOT`. |
| `Editor/` | Python editor for the game's resource formats (sprites, animations, note-track events, packages). See `Editor/README.md` and `Editor/docs/`. |
| `reverse_engineering/functions_layout/` | Ghidra export per program (ARM9 main, ARM7 main, overlays 0–13): one `.asm`, `.c` and `.json` per function, plus a `functions.tsv` index. Addresses are runtime addresses (autoload blocks and overlays at their load address). |

## Function export format

- `<program>/<program>_<address>.asm` — disassembly with runtime addresses.
- `<program>/<program>_<address>.c` — Ghidra decompiler output.
- `<program>/<program>_<address>.json` — metadata: name, Thumb/ARM, size, callees, unresolved call targets.
- `<program>/functions.tsv` — every function in the program with its entry, name, size and memory block.

Names come from SDK code patterns, the game's own `__FILE__`/`__FUNCTION__` allocator strings and
recovered C++ vtables. Names that start with `FUN_`, `jus_` or `jus_Class_` are ours.
