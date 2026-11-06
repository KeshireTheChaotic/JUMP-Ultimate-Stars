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

The window follows the 2D animation editors of Unity (Animation window + Inspector),
Godot (AnimationPlayer dock, SpriteFrames) and Unreal (Paper2D Flipbook/Sprite editors):
a resource browser on the left (each workspace shows its own), the workspaces
**Animation** / **Sprite** (the Move Lab, Ctrl+1/2), **Koma** / **Level** / **Screen**
(the JUS Studio suite, Ctrl+4/5/6) and **Archive** (Ctrl+3), a dark engine-style theme,
tooltips, undo/redo and keyboard shortcuts (F1 lists them all). Layout and evidence rules
for every workspace: `docs/STUDIO_WORKSPACES.md`.

* **Animation workspace** — *Moves* list (filter, ⟳ = looping) | *Viewport* (wheel zoom,
  middle-drag pan, Frame; sprites, **spawned effects** (GenerateID, incl. nested spawns
  and common `efc/` effects, front/behind the character), collision boxes, onion skin,
  pursuer effect with traced follow smoothing or target-only reference; an explicit first-position
  seed is required for standalone move replay — all toggled from **Show ▾**) | *Inspector* (move
  ID/length/loop, the selected track, key or NoteTrack events, editable in place; for an
  effect row: spawn node/key/tick, EffectFlags, ParentLink, DrawPrio, **stored renderer priority**
  (high-first submission only, not a proven front/back rule), and anchor). Below it,
  the dock-style **Timeline**: a *Spawned effects* group with one clip bar per GenerateID
  key (double-click opens the effect's own move), transport (⏮ ◀| ◀ ▶ ▶ |▶ ⏭,
  tick field, loop, speed), Fit, ruler with draggable playhead, per-node groups that
  collapse, ◆ keys with hold bars (values step), ⚑ NoteTrack event flags coloured by
  category, Marker labels with **jump arcs** (0xFF80+n → label 0xFF00+n) and dashed
  **branch arcs** from NoteTrack branch commands to their Marker labels, and read-only
  pursuer-effect rows. Click = scrub/select, drag a key = retime, double-click = edit,
  right-click = add/delete key or event, edit as text, delete track; Ctrl+wheel zooms.
  K adds a key at the playhead, E adds an event, Delete removes the selected key.
* **Sprite workspace** — viewport where pieces are selected by clicking, moved by dragging
  or arrow keys (Shift = 8 px), with onion skin and bank preview; *Details* with typed piece
  fields (index, x, y, shape, flips, 2bpp, bank) and a palette you click to assign banks;
  a thumbnail **Frames** filmstrip with flipbook playback and replace/append/re-layout/
  delete/export; atlas import/export and palette editing for effects.
* **Koma workspace** — `koma/koma.aar` browser grouped by series | card canvas: the art
  laid out on its card shape (5×4 grid from `bin/kshape.bin`, selected by the
  `bin/koma.bin` card) or as a strip, with Select / Pencil / Picker (V/B/I) and pixel grid |
  Inspector with the card record (series → art prefix from the game table, art index, raw bytes; card
  choice), a same-size **shape picker**, the 16-colour palette and evidence | Panels strip,
  **Shapes** dictionary (66 shipped variants), panel / card PNG export, panel PNG import,
  Edit / New / Remove variant (5×4 polyomino and reference migration), Apply (art →
  `koma.aar`, dictionary → `bin/kshape.bin`, selectors → `bin/koma.bin`). All edits are
  undoable. Deck placement is not part of this editor. Additional variants require
  emulator testing because runtime shape-array capacity is not yet traced.
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
