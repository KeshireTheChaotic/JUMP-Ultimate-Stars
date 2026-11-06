# Level Workspace — patch notes

## Layout

- **Left**: the in-game navigation structure is read from the original `jgalaxy.bin` graph:
  `space node > galaxy cluster > world/planet > mission/battle`.
  This reads three explicit parent/child ID arrays, not a guessed order.
  Parent selections display their metadata; mission selections load the stage
  referenced by the battle definition. Unlinked/malformed records are surfaced
  rather than silently misassigned.
- **Right**: scrollable mission detail and reward authoring (titles, IDs, battle
  rule/opponents/time, raw goal codes, Koma and resource rewards, shared stage
  flags), alongside a stage/map Inspector tab.
- **Bottom**: Map Objects editor: item spawns, spawn weights and interval,
  gimmick/trigger position/timer values, grip points, collision shapes, platform
  position/movement/path commands, conveyors; plus Map Layers, Tile Set, stage
  raw data, preview, and validation diagnostics.

## Binary implementation and safety

- Graph child offsets are cross-checked with `reverse_engineering/functions_layout/arm9_ov00/arm9_ov00_02153cfc.c`:
  space record 0x3C bytes: count +0x2C / child IDs +0x2D;
  location record 0x48 bytes: child IDs +0x38 / count +0x44;
  planet record 0x40 bytes: count +0x30 / mission-node IDs +0x31;
  mission-node record 0x88 bytes: definition selector +0x08.
- Mission/battle table's +0x75 stage ID, +0x76 rule, +0x79 zero-based
  opponent count, +0x7A u16 time and +0x7C environment bit are edited only
  at those known offsets. Unknown fields remain unchanged.
- `decode_name` replaces `ascii(errors='replace')` with strict CP932 and an
  explicit raw-hex display for non-roundtripping original strings.
  `encode_name` rejects Unicode that cannot strictly encode and return to the
  exact same string, NULs, empty names, and title-field overflows. Only the
  requested name bytes plus terminator change; no other title bytes are
  rewritten. `validate_name_edits` compares original versus new title fields
  just before Apply and rejects changes that do not round-trip exactly.
- Object edits are bounded by verified byte layouts, applied to in-memory
  copies, parser-tested, undoable and then saved by the existing archive stack.
  Structural cloning adjusts section offsets/counts and is **experimental**;
  runtime references and saves are unverified.

## Verification and outstanding work

Automated tests use synthetic fixtures, so no copyrighted game files are included
in the patch. Run in the Editor root:

```bash
python -m pytest -q
xvfb-run -a python tests/gui_level_workspace_patch_smoke.py
xvfb-run -a python tests/gui_missions_smoke.py
xvfb-run -a python tests/gui_level_smoke.py
```

Windows equivalents omit `xvfb-run`.

**Original assets not available during this patch:** `data.zip` and `JUS.zip`
were not accessible in this environment. Thus this change does **not** claim
byte-level validation of the game's original Japanese name corpus, nor does it
map the actual galaxy/world icon sprites yet. The tree currently uses labels
and generic glyphs. With extracted game data available, complete the audit:

```powershell
py -3 tools\verify_cp932_names.py --data "D:\Library\Development\JUS\data" --out cp932_original_names.json
```

The report lists exact original bytes, CP932 decoding and round-trip status,
strict `shift_jis` comparison, and flags any exceptions. Inspect exceptions
rather than rewriting malformed original strings. Then identify sprite/atlas
member IDs for each node/galaxy/world and implement the corresponding previews.
Always validate saved changes and structural edits in melonDS using a fresh save.
