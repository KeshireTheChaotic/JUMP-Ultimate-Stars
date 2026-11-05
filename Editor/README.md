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
a **Project** panel on the left, three workspaces (**Animation**, **Sprite**, **Archive**,
Ctrl+1/2/3), a dark engine-style theme, tooltips, undo/redo and keyboard shortcuts
(F1 lists them all).

* **Animation workspace** — *Moves* list (filter, ⟳ = looping) | *Viewport* (wheel zoom,
  middle-drag pan, Frame; sprites, collision boxes, onion skin, pursuer effect at its
  target) | *Inspector* (move ID/length/loop, the selected track, key or NoteTrack events,
  editable in place). Below it, the dock-style **Timeline**: transport (⏮ ◀| ◀ ▶ ▶ |▶ ⏭,
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
* **Archive workspace** — member table and details (type, resource id, attribute bits,
  verified name hash, size, DSCP) with extract/replace/add/remove and a rebuild check.
* Edits stay in memory with **undo/redo** (Ctrl+Z / Ctrl+Y) until **Apply** (Ctrl+Enter)
  writes the move table or sprite into its archive; the toolbar shows what is unapplied or
  unsaved.
* **Export package… / Import package…**: whole character (all ChrArc archives, `*c.aar`
  image archives, ChrBin tables, ChrWin sprites) or the selected archive.
* **Save to folder…** writes only the rebuilt archives at their data-relative paths;
  **Save in place** overwrites the data root and keeps a `.orig` copy of each file the
  first time.

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
  `alod`, `dstx`, `dsig`, `sprite`, `chrbin`, `binary` (LZ10 codec, DSCP), `hashes`.
* `jus_package/` — data-root project model, package import/export, PNG conversion.

## Tests

```powershell
py -3 -m unittest discover -s tests -p "test_*.py"   # unit + end-to-end package tests
py -3 tests\roundtrip_scan.py                        # every archive/format in the data root
py -3 tests\sprite_scan.py                           # every character/effect frame
py -3 tests\validate_chr_textures.py --chr C:\work\chr.zip  # corpus address check
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
