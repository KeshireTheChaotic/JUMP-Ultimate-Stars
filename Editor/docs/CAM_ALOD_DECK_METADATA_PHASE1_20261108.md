# JUS source format recovery — CAM, ALOD, deck companion metadata
**2026-11-08 | Stage 1 implementation and evidence audit**

Project: `D:\Library\Development\JUS\publish\JUMP-Ultimate-Stars\Editor`

Original game assets: `D:\Library\Development\JUS\Data`. Decompiled and verified code: `D:\Library\Development\JUS\reverse_engineering`. All original data, ROM, overlays, and Ghidra function C source remain unchanged. The Editor working tree is uncommitted.

## Scope and confidence

In this phase we recovered binary schemas and introduced source-preserving codecs and inspector support. **Runtime semantics are separate**: neither a plausible coordinate arrangement nor a raw numeric metadata byte can legitimately be given a game-facing behavior name without tracing its original consumer.

| Format | Shipped corpus | New Editor implementation | Runtime open issues |
|---|---|---|---|
| Stage `.cam` | **36/36** round trips, 35×32 bytes, 1×36 bytes | `jus_formats/stagecamera.py`, Level source inspector, signed 16-bit pair replacement | Native loader still unidentified, origin/zoom/clamp/scroll policy unknown |
| ALOD `.aod` | **1,247/1,247** round trips, **1,078/1,078** observed descriptors `0x10` | `jus_formats/alod.py` exact 4-byte parent edit, Archive node inspector | Arbitrary runtime hierarchy mutations; unobserved property descriptor classes |
| Deck `pNNN.bin` | **75/75** 64-byte companion files, all paired | `jus_formats/deckcompanion.py` strict UTF-16LE/CP932 + raw metadata updates; Archive field inspector | Semantic names for bytes +0x34–0x37; lifecycle of +0x3C; full deck high placement bits |

## Stage CAM source

Header contains three `s16,s16` pairs at `+0x00/+0x04/+0x08`, `u8` values `+0x0C/+0x0D` (mode and count by observation), zero reserved `u16 +0x0E`, followed by `count` signed point pairs at `+0x10`. The unusual `bg_old_yo.cam` has an additional closing point. **Raw-point presentation only**: no invented camera polygon or rendered scroll.

Native source: `reverse_engineering/functions_layout/arm9_ov06/arm9_ov06_0214cd20.c` invokes `BattleCamera::Battle_CameraCreate` (`02151be8.c`) before `BattleMap::BattleMapInit` (`02161cb4.c`). The relevant stage loader decompilation is partially truncated, and a direct ".cam" string is absent from verified main ARM9/ov06, so a native CAM resource consumer is **not verified**.



## ALOD source

Scanned original 317 top-level archives plus nested ALAR content, resulting in 1,247 ALOD files, 2,326 original nodes (1,248 SP and 1,078 GN), all 1,078 observed properties using descriptor `0x00000010` with four-character existing parent-node IDs. The 529 files declaring `ParentNodeID` were identified; no additional shipped property descriptor exists in the corpus. Source property registration: `reverse_engineering/functions_layout/arm9_main/arm9_main_02020f7c.c`. Safe patching changes only the exact source four-byte property value; no claim is made about game-safe arbitrary reparenting.



## Deck source

Distinguish **92-byte full Koma-slot deck assets** (`arm9_main_02070a28.c`, 0x5C copy) from **64-byte companion `pNNN.bin` records** (`arm9_main_02070b5c.c`, 0x40 copy). The latter comprises 20 UTF-16LE bytes, 32 CP932 bytes, and 12 numeric metadata bytes. The runtime's 0x4C-byte record has 12 additional bytes **not present in the disk file**.

Original code consumers for companion metadata:
- `arm9_main_0207263c.c`: byte +0x34 setter; `arm9_ov06_0216002c.c` call.
- `arm9_main_0207265c.c`: byte +0x35 setter; `arm9_main_02070d64.c` and overlay5 calls.
- `arm9_main_0207267c.c`: byte +0x36 setter; `arm9_ov07_02151888.c` call.
- `arm9_main_020725ac.c` and `020725bc.c`: +0x3C nonzero and equality checks.
- `arm9_main_0207269c.c`: +0x3C write; overlay10 reset calls.

No fabricated "cost", "power", "rarity" or "reward" labels were assigned. The Archive inspector exposes numeric hex values and original-byte source slices; the codecs permit independently edited UTF-16LE, CP932 and byte metadata with strict bounds.



## Validation

- `tests/test_stage_camera_structural.py`: 4.
- `tests/test_alod_parent_edit_corpus.py`: 3.
- `tests/test_deck_companion_metadata.py`: 3.
- `tests/test_format_inspectors_camera_alod_deck.py`: 4.
- 14 new regression checks total, source fixtures use the existing extracted game data read-only.
- `docs/_cam_alod_deck_full_unit_20261108.log`: full suite result to be checked rather than inferred.
- `docs/_cam_alod_deck_gui_20261108.log`: nine GUI source-backed smoke checks, not the historical independent effect-reference mismatch.
- Original 46 scene IDs verified through `tools/verify_scene_indexes.py`.

## Next engineering steps

1. Trace the true native CAM loader/consumer to identify coordinate and camera-state semantics before allowing a WYSIWYG camera projection.
2. Verify original ALOD runtime ownership/parent constraints and generalization to new property descriptors before expanding structural authoring.
3. Trace the outstanding deck +0x34–0x37 semantics and high placement bits in 92-byte full decks. Metadata is editable in a bounded codec while unsupported engine meanings remain raw.

The existing generic Archive replace/staging path remains available for raw byte edits. Newly implemented typed codec operations and inspectors do not automatically assert new original-game functionality.
