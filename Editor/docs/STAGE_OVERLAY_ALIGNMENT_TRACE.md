# Level Workspace — stage-space alignment, objects, and physics paths

## Root cause and runtime evidence

The previous renderer treated all discovered ALTM maps as simultaneously visible, painted them in archive/filename order, and located them by loosely interpreting the filename's final underscore suffix. The bottom object editor decoded every source object, but the *viewport* drew only a subset of the simulated objects: at most four seeded item picks, visible dynamic floors/gimmicks, and optional colliders. It never drew authored path lines, all item candidates, grips, item symbols or hazard emitter positions. Consequently there was no reliable visual match between the object list and the level background.

Ghidra traces in `reverse_engineering/functions_layout` (from the supplied reverse-engineering archive) establish these data paths:

| Data | ARM9/overlay consumer | Decoding / placement |
|---|---|---|
| Three BG layer records | `arm9_main_02083fcc.c` (`BattleMapBG_Create`) | Each record contributes signed `s16 x, y` at `+0, +2`; position passed directly as x/y `<< 12` to the background-layer transform. At `+9`, zero means no instantiated BG. Draw link priority is at `+6` (high-first traversal). |
| BG image resources | same function, `FUN_02084f10` calls | Slot 0 uses tile map resource `0x400000` with tile image `0x400100`; slots 1/2 use `0x400001/2` with `0x400101/2`. The sudden-death variant replaces slot 0 using map `0x400003` with **the slot-0 tile image** `0x400100`. |
| Moving floor start | `arm9_main_02085d74.c` | Floor record `s16 x,y` at `+4,+6` converted to 24.8 in the physics runtime (`<< 8`). |
| Floor path commands | `arm9_main_02085edc.c` | Each 8-byte command is relative *to the command buffer*, but movement targets are **absolute world coordinates** (`s16 x,y` at command `+4,+6`). Type 1 is an in-place wait, not a line segment. |
| Item/grip/gimmick spawn positions | `.mob` parser, `BattleMapLoadItem`, `BattleMapGripLoad`, `BattleMapGimmick_Create` | Source records hold signed 24.8 coordinates; divide by 256 for world pixels. Include **all** authored candidates regardless of runtime RNG or mission environment gate. |
| Collision rectangles | `arm9_ov06_02166fd4.c` | Descriptor positions `+0,+4`, extents `+8,+0C` are signed 24.8; `+14` is type and `+16` wall linkage. Draw `(x, y, x+width, y+height)` in stage world space. |
| Character start points | `.bin` grid header `+8`, `+18` | Four x and y 24.8 values. Omit unset `(0, 0)` starts in viewport; preserve fractional coordinates. |

**Critical invariant:** an object's world pixel `(x,y)` is drawn with `Viewport.to_screen(x,y)`. A background pixel `(u,v)` from a stage ALTM layer is drawn at `Viewport.to_screen(record.x+u, record.y+v)`. No ad hoc `+192`, `-192`, local BG-origin subtraction, or camera delta is applied to authored objects. Background parallax changes background position; the object's raw stage location remains fixed.

## Implementation

- `jus_package/stageoverlay.py` is the shared, GUI-independent geometry projection: exact stage-stem/slot mapping, BG draw order, authored marker inventory, per-floor paths including waits and per-selection location.
- `jus_package/scenes.py` pairs the `*_sud` ALTM resource with BG0's graphics when its own DSIG is absent; this matches the runtime resource-ID call instead of borrowing the first same-size layer (often BG2).
- `app/workspaces/level.py` defaults to BG layers with `enabled != 0`; inactive layers remain user-toggleable for inspection. It sorts active rendered layers by traced draw link priority. Layer list rows display record x/y, priority and inactive status. The exported composite uses the **same world origins and order** (including negative offsets), rather than alpha-compositing all images at `(0,0)`.
- The viewport draws all authored item candidates, symbol spawn points, grip points, starts, gimmicks, and their child emitters; all collision rectangles; and all moving-floor path segments. Paths use exactly `dash=(2,3)`, the Animation Workspace's dotted-line style. Wait commands get a stationary marker; terminal waypoints get index labels. Runtime floor positions remain an optional, separately simulated overlay.
- The bottom Map Objects ribbon provides Markers, Dotted paths, Colliders toggles and Frame all objects. Clicking an object in Select mode opens and selects its editable record. Selecting an off-screen record in the object list pans it into view. Edited staged bytes update geometry on the next redraw; all edits still use the existing undo/Apply/Save pipeline.
- The parser bounds-checks hazard/gimmick child-point counts before displaying them and retains fractional 24.8 start-point positions.

## Verification

```bash
python -m pytest -q
xvfb-run -a python tests/gui_stage_overlay_smoke.py
xvfb-run -a python tests/gui_level_workspace_patch_smoke.py
xvfb-run -a python tests/gui_level_smoke.py
```

The unit tests verify exact slot identification for stems containing digits, background priority order, path movement/wait geometry, full authored marker placement and immediate refresh from staged edits. The GUI test checks actual canvas-drawn dotted path endpoint coordinates and collider rectangle coordinates, selection from viewport, and redraw after waypoint edit. These tests use *synthetic* assets.

## Remaining verification boundary

The original extracted `data.zip` / JUS stage assets could not be read in this session, so `bg_cm_02` and its camera/parallax behavior have **not** been compared pixel-for-pixel with the game. The `.cam` camera projection and palette/scanline effects are still approximate previews. Non-path floor movement types (blink, sink, crumble) are not fabricated as authored paths. Do not treat these as emulator-perfect physics or use them to infer unrecorded trigger events. For a reliable regression, load `bg_cm_02` with authentic extracted archives and compare frames, camera positions, collision boxes, and floor waypoints against melonDS.
