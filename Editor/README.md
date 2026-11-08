# JUS Editor

Loads, edits and rebuilds Jump Ultimate Stars character/effect animations and sprites
from the extracted game data (`D:\Library\Development\JUS\data`), and imports/exports
full character and effect **sprite packages** (PNG frames + JSON) with ALAR
archive rebuilding. Based on JUS Move Lab v23; the format layer was rewritten as
read/write libraries and re-audited against the data (see `docs/FORMATS.md`).

## Run

```powershell
py -3 -m pip install -r requirements.txt
run_editor.bat                      # or: py -3 -m app.editor [--data <data root>]
```

Python 3.10+ with Tkinter and Pillow. The data root defaults to `JUS_DATA` (or
`JUS_DATA_ROOT`), else `D:\Library\Development\JUS\data`. `py -3 tests\gui_smoke.py`
drives the window against the real data.

## Editor

The **Roster** tab (Ctrl+1) unifies the existing Animation, Sprite and Koma
editors without replacing their parsers, undo systems or original serializers.
The left tree uses original koma.bin/kshape.bin, original roster BIN tables,
and archive-qualified ALMT resources.

- **Battle Characters (74)** -> character -> **Moves** and **Koma** (206 cards).
  Input-key icons and actual original Koma art are shown. Unmapped ALMT
  entries remain under Other / scripted animations, without invented controls.
- **Support Characters (193)** -> character -> **Koma** (372 cards).
  A support Koma Inspector can open its actual ALMT support-action editor.
- **Passive / Help Koma (312)** -> original series -> one-panel Koma.
  Original type-2 records are not assigned invented attack moves.

**Move selection:** animation viewport in the center, bottom Timeline with
Add/Remove Key and NoteTrack tools, editable Key Inspector on the right.
The Roster toolbar switches Animation / Sprite; Sprite uses the original
TextureID to select the related source image where available. The established
sprite frame/atlas editing, flipbook and controls are reused.

**Koma selection:** full-height 5x4 panel/sprite viewport, no bottom dock,
right Koma Info Inspector. Select/Pencil/Picker and import/export/shape
commands are available in the main viewport header. In Select mode, drag a
panel onto another panel to swap its placement, or into an empty cell to move
it. The grid must be a valid connected original 5x4 shape. Shared shape
editing explicitly prompts for clone (new-variant runtime capacity unverified),
modify all, or cancel. Painting original 4bpp pixels remains independent.

**Unillustrated ROM-source Koma:** Card #889 (Dr. Mashirito, ds_s_03) uses
koma/dt_19.dtx, which has only two identical flat-fill panels in the
original ROM; it is byte-identical to dt_09..dt_16. This is not a
sprite-decoding failure. The Roster labels the source as a ROM placeholder
and omits a misleading blank thumbnail. Koma Info keeps the actual tiles
editable, explains the limitation, and links to the **different**
illustrated Dr. Mashirito 2-Koma #428 (ds_09.dtx), without substituting
its art for #889. Any authentic replacement or modded dt_19.dtx is
preserved and no longer classified as the exact original placeholder.
See docs/Research/MASHIRITO_889_DT19_ORIGINAL_ROM_ART_VALIDATION_20261107.json
in the JUS project research directory.

Save now offers to Apply dirty suite workspaces including Koma even while
another Roster mode is visible. Original game data is not written until Save.

Top-level tabs: Roster, Level (Ctrl+5), Screen (Ctrl+6), Archive (Ctrl+3).
Ctrl+2 selects the Roster Sprite editor, Ctrl+4 selects the Roster Koma editor.
Non-character assets remain available in Archive.

**Original Koma-linked gameplay metadata:** The Passive/Help Koma Inspector
displays the source ability name, both description lines, and exact numeric
record bytes from bin/ability.bin and bin/ability_t.bin. Raw parameters whose
gameplay units are not proven stay labeled raw. Opening a character action from
a Koma carries the selected original card into NoteTrack sound decoding:
0x0402 resolves its source SSAR group from that Koma's original chr_b.bin or
chr_s.bin record, while source-ambiguous shared moves remain unselected.

**Generated effects:** The animation viewport's Frame action now includes
authored generated-effect extents across the move, not just the first pose.
Goku Cheap Joke (0x0005C12A) has two original GN child sprites at tick 7.
It also launches handler00 shot record1 at tick 33: the original ALMT
0x0005C16C draws its sprite and immediately generates nested child
0x0005C16B. Both are source-backed, and the viewport frames their extents.
The separate 0x0005C16D exit animation is conditional on native shot
retirement and is deliberately not rendered as a guaranteed launch effect.
Source/ROM proof, known conditional-runtime limits, and 312 passive-card
records are documented in
D:\Library\Development\JUS\docs\Research\ROSTER_GOKU_CHEAP_JOKE_SOUND_PASSIVE_IMPLEMENTATION_20261107.md.

* **Level workspace (Ctrl+5)** — left J-Galaxy hierarchy follows the in-game menu:
  **space node → galaxy cluster → world/planet → mission**, using verified child
  ID lists rather than name matching. The **right inspector** edits mission and
  battle definition titles (strict reversible CP932), planet/definition/stage,
  battle rule, opponent count, time value, environment gate, goal conditions,
  Koma/resource rewards, and experimental cloned/deleted mission definitions.
  The **bottom map ribbon** contains Map Objects (spawners, triggers, gimmick
  positions/timers, collision geometry, moving platforms/paths, conveyors),
  Map Layers, Tile Set, raw stage data and runtime diagnostics. The viewport
  shows editable ALTM stage tiles and object overlays. All staged changes support
  undo/redo, Apply and Save. Stage-record cloning and graph structural editing
  require new-save emulator testing; original menu sprites need asset-ID mapping.
  Run `python tools/verify_cp932_names.py --data <extracted game data>` for a
  read-only original-name CP932 vs Shift-JIS byte audit.
  Details: `docs/STUDIO_WORKSPACES.md` and `docs/LEVEL_WORKSPACE_PATCH.md`.
* **Screen workspace** — menu/scene archive browser with nested AAR expansion **and search** |
  dual 256×192 DS screens | background layers (ALTM) with preview-only screen/scroll/order |
  nested sprite objects (DSTX/DSIG) with selectable **Sprite frame**, auto-preview
  for archives without ALTM backgrounds, and linked ALMT/DSIG member inspection |
  Resources table with exact-member double-click, decoder evidence, and Problems.
  Sprite placement is centered for inspection, **not** runtime layout; ALMT
  animation playback remains pending. See `docs/NESTED_AAR_SCREEN_AUDIT_20261105.md`.
* **Archive workspace** — member table and details (type, resource id, attribute bits,
  verified name hash, size, DSCP) with extract/replace/add/remove and a rebuild check.
* Edits stay in memory with **undo/redo** (Ctrl+Z / Ctrl+Y) until **Apply** (Ctrl+Enter)
  writes the move table or sprite into its archive; the toolbar shows what is unapplied or
  unsaved.
* **Export package… / Import package…**: whole character (all ChrArc archives, `*c.aar`
  image archives, ChrBin tables, ChrWin sprites) or the selected archive.
* **Save to folder…** writes only changed files at their data-relative paths;
  **Save in place** stages replacement files beside their destinations, uses an atomic
  rename per file, retains a `.orig` backup on the first overwrite, and attempts to
  roll back all files if a multi-file commit fails. Dirty state is preserved on failure.
  Top-level DSCP-compressed AARs retain their compression wrapper after rebuild.
  This is not a global crash-proof transaction across multiple files.

## Packages

```
package.json                  manifest
units/<archive>/archive.json  members, ids, attributes, compression
units/<archive>/raw/…         original payloads (import base)
units/<archive>/*.amt.json    moves (authoritative)
units/<archive>/*.dig.json    palettes (editable: "XXXX" RGB555 hex or "#RRGGBB")
sprites/<sprite>/sprite.json  frames: PNG, canvas origin, pieces [index, x, y, attr]
sprites/<sprite>/frames/*.png indexed (banks 0-15) or RGBA (bank >=16) PNGs
sprites/<sprite>/atlas.png    native 4bpp effect source (edit this; frame PNGs are previews)
sprites/<sprite>/texture_2bpp.png  read-only 2bpp interpretation of same bytes
files/…                       loose members (ChrBin tables)
```

For mode 0x20/0x50 effect sprites, per-piece `index` maps to a 32-column
8x8-cell GPU texture grid, not `index*16` in the native atlas. Attribute bit 6
selects a 2bpp view with **twice** the 4bpp source width; the same uploaded bytes
are used in both modes. `sprite.json` exports `texture_xy` UV coordinates for
inspection/editing; `texture_2bpp.png` is a visualization, **not an editable
replacement** for native `atlas.png`. Legacy `atlas_xy` metadata is ignored
rather than using its incorrect mapping. See `docs/FORMATS.md`.

Keep PNGs indexed when using banks 0–15 to preserve palette identities. Frames
using bank 16+ are exported as RGBA with lossless embedded bank-index metadata.
Unmodified reimports preserve these banks; third-party image editors may remove
this metadata and duplicate colours across banks can then become ambiguous.
Unchanged content imports byte-identically. New frames can be
appended to `sprite.json` (`"pieces": []` → automatic layout); new moves can be added
to the `.amt.json` move list.

CLI:

```powershell
py -3 jus_editor_cli.py list
py -3 jus_editor_cli.py export bb_b_01 C:\work\bb_b_01
py -3 jus_editor_cli.py export-archive efc/comm_a.aar C:\work\comm_a
py -3 jus_editor_cli.py import C:\work\bb_b_01 --out C:\work\rebuilt_data
```

## Libraries

* `jus_formats/` — standalone (stdlib only) parse/build data structures: `alar`, `almt`,
  `alod`, `dstx`, `dsig`, `sprite`, `koma` (DSTX 0x04 panels), `altm` (tile maps),
  `notetrack`, `eventops`, `chrbin`, `sdat`, `binary` (LZ10 codec, DSCP), `hashes`.
* `jus_package/` — data-root project model, package import/export, PNG conversion,
  `spawns` (GenerateID projection), `effectlinks` (pursuer), `tilemap` (ALTM rendering),
  `scenes` (stage/screen layer discovery).

## Tests

```powershell
py -3 -m unittest discover -s tests -p "test_*.py"   # unit + end-to-end package tests
py -3 tests\roundtrip_scan.py                        # every archive/format in the data root
py -3 tests\sprite_scan.py                           # every character/effect frame
py -3 tests\validate_chr_textures.py --chr C:\work\chr.zip  # corpus address check
# GUI smoke with a generated synthetic stage fixture (needs Tkinter / a desktop):
py -3 tests\gui_level_smoke.py
py -3 tests\gui_screen_nested_smoke.py D:\Library\Development\JUS\data
```

## Pursuer effect timeline (NoteTrack)

Character moves can have an effect without a nonzero `GenerateID`. The editor
resolves `chara_action(13, slot_a, slot_b, …)` through
`chr/ChrBin.aar|chr/effect/<character>.bin` and `chara_action(14, x, y, snap, …)`
as its offset. The Animation tab now draws a per-field ALMT key canvas, a
Pursuer event row, and child-animation `BoundsIndex`/collision rows. Double-
click an editable source field to open its existing track editor. To edit a
child effect's collision fields, select the corresponding `*_e0.amt` table in
the Move table dropdown and edit the child move's tracks. Effect overlays are
shown at the commanded target, which may lag the object's true in-game position.

`JUS_DATA` is now recognized as the preferred data-root environment variable,
with `JUS_DATA_ROOT` retained for compatibility and
`D:\\Library\\Development\\JUS\\data` as the Windows default.

Regression target: `dg_b_01.amt` move 24 selects pursuer slot 3 twice, mapping
to `dg_b_01_e0.amt` move 24 (`0x4C150`), **not** e0 moves 9–11.

## Unresolved data capture (does not change game files)

`tools/trace_unknowns.py` emits bounded, non-destructive forensic JSON reports for
stage `.mob`/`.bin`/`.cam` files and controlled emulator deck-save differences.
See [docs/TRACE_COLLECTION.md](docs/TRACE_COLLECTION.md) for exact commands,
experiment controls and the evidence needed to decode native serialization.
Reports and the editor use **Unknown / Inferred / Direct** labels; raw candidates
are never advertised as native writable formats.

## Research: effect and format triage (2026-11-05)

Run `py -3 tools\audit_open_effects.py PATH_TO_EXTRACTED_DATA --out effects_audit.json`.
See `docs/EFFECT_AND_FORMATS_TRACE_20261105.md` for the baseline ARM9 draw-link comparisons,
rare EffectFlags samples, and read-only DSTX 0x05/0x06 descriptor parser. See
`docs/EFFECT_DRAW_ORDER_PURSUER_TRACE_20261105.md` for the DrawPrio property-to-drawable
setter trace, CommonEffect flag read-path, and overlay 6 pursuer smoothing/snap update
now used by the Animation preview. The Screen workspace can inspect tile-panel
descriptors but cannot yet render their auxiliary layout. DrawPrio front/back
composition and EffectFlags bit 0x0004 remain unverified.

## ParentLink / DrawPrio continuation (2026-11-05)

The Animation viewport's **Show → ParentLink translation follow** is now on by
default. It uses the linked/unlinked translation branches of ARM9
`0x0206CA8C`, including nested effect ancestry. Uncheck to compare against the
old spawn-snapshot preview. This preview is **not** a complete runtime transform
matrix: rotation, scale, facing, camera and owner bone mapping still need
verification. The existing manual **Effects Front/Behind** compositor remains
because the final `DrawPrio` submission traversal is not yet established.

See [docs/PARENTLINK_DRAWPRIO_CONTINUED_TRACE_20261105.md](docs/PARENTLINK_DRAWPRIO_CONTINUED_TRACE_20261105.md)
for the executable offsets, distinction between scheduler `Prio` and child
`DrawPrio`, evidence limits, and repeatable regression checks.

## ParentLink and DrawPrio trace (2026-11-05)

The original ARM9 confirms the spawned effect's `+0xD4` parent method is
`0x02022060`: it attaches both widget and transform-controller hierarchies.
The current preview intentionally follows **translation only**. `DrawPrio`
quantizes to a 16-bit renderer-link priority and the final CPU render
traversal submits high-priority links before low-priority links; GX/BG hardware
state still decides **visible front/back**. The Show menu's Front/Behind option
remains a manual visualization override, not a runtime-equivalent setting.

See `docs/PARENTLINK_DRAWPRIO_RENDER_TRAVERSAL_20261105.md` for the full
function chain, verified vtable pointers, and graphics leaf callbacks. Check
your extracted ARM9 image without modifying it using:

```powershell
py -3 tools\verify_draw_traversal.py D:\Library\Development\JUS\arm9.bin
```

### November 5 effect-lifetime reference trace

See `docs/EFFECT_LOOP_REFCOUNT_TRACE_20261105.md`. The Animation timeline now shows a
read-only **GN child ref+ (actions 4/5)** row. These are *reference increments*,
not destruction events. The editor deliberately leaves looping effects as
nominally open-ended until a real object-release/visibility trace is available.
Use `tools/audit_spawn_lifecycle.py` to inspect move 41 at tick 55 and
`tools/verify_effect_reference_path.py` to verify the original ARM9 vtables.

### Static-only GX aura lifetime trace (2026-11-05)

`docs/STATIC_EFFECT_LIFETIME_RENDER_TRACE_20261105.md` records the verified
`GenerateID` → `CommonEffect` → loop-event-6/deactivation-event-1 paths.
The `db_b_01` move 41 aura (`0x05C189`/`0x05C18A`) is genuinely looping,
and its repeated keys create separate objects; do not expire or deduplicate
these just to approximate the game's image.  Its `0x05C180` texture is a
GX `0x50` atlas.  The Inspector now labels this image mode and warns that
Tk's straight RGBA compositing is not DS polygon-alpha/depth compositing.
To verify the ARM9 vtable and call edges offline, run
`python tools/verify_lifetime_dispatch.py reverse_engineering.zip`.

### Original Koma and ALMT move-name links

In the Koma workspace, select a card: its Inspector displays actual size-specific Special A/B names and descriptions from bin/chr_b_t.bin (battle) or its 2-/3-Koma support action from bin/chr_s_t.bin. Select an entry in the Move chooser and click Open selected ALMT move to inspect its exact original animation resource. In Move Lab, select a named move and use the Koma references chooser and Open Koma card to return to the card art/shape. This is read-only metadata/navigation; no source BIN or ALMT text data is changed by browsing, and unnamed normal input actions remain explicitly unnamed.

### Shot objects and original normal-action input masks

In Animation, select a battle move that has a NoteTrack shot invocation. View > Shot animation sources (or the viewport Show dropdown) displays the original ALMT child frames for handler1 shot sources at the authored launch position; the shot timeline and Inspector show the shot record, handler, resource IDs and references. A giant collision box is NOT a rendered beam: static previews intentionally omit runtime geometry and projectile motion. Select a common input or Special move to see the original raw input mask and function in the Inspector. Ordinary unnamed base states remain unlabeled rather than receiving guessed move names. No JUS game assets are modified by previewing.

### Original projectile geometry inspection

In Animation, select a battle attack with NoteTrack chara_action(2), select the Shot objects timeline lane and inspect its original ChrBin handler, source ALMT/TextureID, GX sprite mode and code-backed motion/geometry family. For verified cardinal handler01 shots, the source children are spaced according to the native 24.8 work increment. View > Shot animation sources is a SOURCE-ONLY preview: it does not fake long beams or claim to display observed in-game movement. GenerateID and persistent pursuer effects are separate code paths. Original data is not written by inspecting these diagnostics.

### Handler01 constructor and repeating shot-body roles

The original constructor ROM array at ov06 0x02172864 maps shot handler01 to FUN_0216B4F4; a second 26-entry per-frame update array at 0x0217278C maps it to FUN_0216BA2C. Constructor 0216B514 creates record+0x14 initial anchored ALMT (when nonzero) then record+0x0C moving ALMT without a hit test. Updater 0216BA2C creates additional record+0x10 ALMT instances when native spacing/slot conditions pass. These source field roles are shared across the 68 original handler01 records; source+0x0C is not contact-only by construction. Handler01 sets work+0x26 bit2, bypassing ordinary record-lifetime countdown, so the current source-only preview cap is not native expiry. The Animation Shot Inspector shows all three source roles, original per-frame update callback and code provenance; it still does not extrapolate a fabricated full beam. Research: D:\Library\Development\JUS\docs\Research\HANDLER01_BEAM_FIELD_LIFECYCLE_PROOF_20261106.md. Regression: tests/test_shot_handler01_lifecycle.py.

### Source-derived projectile repeat preview and Hiei steering trace

For Bo-bobo 0x8412B, View > Shot animation sources plus View > Handler01 repeats (unobstructed model) show real original 0x84181 ALMT repeat segments. Counter-based source IDs are exact for cardinal source angles; post-birth XY is modeled, NOT proven native trajectory. The shot Inspector shows emitted source count and original callback evidence. For Hiei yh_b_03 / 0x9832C, the source head frame can be inspected, and the shot Inspector explains native D-Pad steering, the 128-position/angle ring, 12-child body and terminal source 0x98359, plus original status36 cue/callback. It does not fabricate a curved or tracking path. No original game files are changed by viewing either.
