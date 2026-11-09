# Screen workspace — metadata-driven scene composition

**Source-authority update 2026-11-08:** Original ARM9 source now establishes native initial BG priorities (arm9_main_02042d14.c: main 1/0/2/3; sub 3/2/1/0), not the melonDS screenshot or BG slot heuristic. Eighteen scenes now have original source background routing and all 46 have ARM9 code asset reference browsing. Raw asset files and all 146 InfoDeck messages are editable; engine layout is hard-coded/read-only. See RE docs SCREEN_CODE_AUTHORITY_EDITING_TRACE_20261108.md.


**Implemented:** 2026-11-07. This is a UI-only/editor-source change: no ROM, original AAR, original ALMT, and no reverse-engineering function files have been patched to change layouts.

## Usage
1. Open the extracted original game-data root and choose **Screen** (Ctrl+6). **Scenes** is the default view. The browser lists all **46 original scene IDs**, with outgoing transitions as child rows; selecting a transition opens its destination scene.
2. The initial scene is **03 TopMenu**. The canvas shows original ALTM/DSIG backgrounds from its assigned archive and **verified widget sprite frames** in their original, traced two-dimensional positions. Use the Layers dock or click a visible opaque pixel to select a widget. Double-click or choose **Edit selected sprite**.
3. The existing **Sprite** workspace opens the exact referenced nested DSTX archive and the ALMT-selected initial frame. Its piece selection, move/resize, palette and import/edit operations persist through the existing **Apply sprite** and **Save** workflow. Return to **Screen**; the composed sprite image refreshes from staged data.
4. Change to **Screens** to inspect the uncomposited ALTM backgrounds, or **Elements** to examine sprite-cell atlases or DSTX 0x05/0x06 tile panels as before.

## Portability and provenance
The portable, self-contained scene manifest is `jus_package/screen_metadata.json`. It is derived from the original reverse-engineered scene dispatch and verified overlay images:
- `D:\Library\Development\JUS\reverse_engineering\docs\SCREEN_WORKSPACE_TRACE_20261107.md`
- `D:\Library\Development\JUS\reverse_engineering\docs\SCREEN_NAV_GRAPH.json`
- `D:\Library\Development\JUS\reverse_engineering\docs\SCREEN_BUTTON_LAYOUT_TOPMENU.json`
- `D:\Library\Development\JUS\reverse_engineering\docs\SCREEN_BUTTON_LAYOUT_JARENA.json`

Original resource pixels are loaded **at runtime** from the user's selected game data root; the manifest contains no copied sprite artwork, just evidence-backed link paths, move IDs, positions and graph edges. The implementation is `jus_package/screencomposition.py` and `app/workspaces/screen.py`. Metadata regeneration script: `reverse_engineering/docs/export_screen_metadata.py`.

## Verified reconstruction coverage

| Scene | Widget count | Layout provenance | Sprite source |
|---|---:|---|---|
| 03 TopMenu | 8 | ARM9 overlay 0 table at 0x0216003C, 0x18-byte records, Y+0x14; widget selection IDs 0–7 | `topmenu/topmenu.aar|topmenu/top_button00.aar` `top_button00.dtx/.amt` (move IDs 0x50000C–13) |
| 21 J-Arena top menu | 4 | ARM9 overlay 3 `JArenaTopMenu::JATopMenu_Add`, constructor x=48+32i,y=184, selector byte table at 0x0215D444 | `JArena/JArena.aar|JArena/arena_top_obj.aar` `arena_top_obj.dtx/.amt` (move IDs 0x810005–08) |

At the current tick-zero snapshot, TopMenu's eight actual ALMT frames are 3, 51, 11, 15, 52, 23, 27, 31; J-Arena's are 12, 13, 14, 15. The renderer **parses the user's current ALMT** to compute those frames rather than hard-coding frame indices. It uses the original pixel decoder with alpha hit testing, not invented hitbox sizes or placeholder images.

All 46 original IDs, 94 transition/assignment/queue sites and mapped scene-family archives are in the browser, but **not every scene has individual widget positions traced**. The other scenes currently display their available archive-background previews without fabricating unmapped sprite placement.

## Explicit non-goals and evidence limits
- Code-backed placement **cannot be moved, edited, or saved** through the Screen workspace. Only resource-backed sprite frames/pieces/palette edits are committed by the existing Sprite workspace.
- **Updated 2026-11-08:** the 12 mapped TopMenu/J-Arena widgets are confirmed on **Bottom** by source-backed main-renderer linkage and `POWCNT1` swap bit 15 = 0. The editor now calculates their physical LCD from the renderer engine and verified scene-entry swap, rather than treating Bottom as a filename heuristic. Ten scene-entry LCD configurations are recorded in `screen_metadata.json`; RuleSelect has a callback-driven swap. See `D:\Library\Development\JUS\reverse_engineering\docs\SCREEN_DISPLAY_ROUTING_TRACE_20261108.md`. Per-asset background assignment, priority and scrolling still retain unsaved preview heuristics; no emulator capture was used as evidence.
- J-Arena has a transition animation between Y=344 and Y=184; scene composition currently shows the constructor target pose at the authored sprite's tick-zero frame. The movement is not simulated here.
- Alpha-based picking is an editor convenience; it is not a claim about the original game's collision geometry.
- AAR family associations outside verified constructor cases are marked **inferred**, and unresolved scene IDs have no manufactured images.
- Selecting an edge uses the **typed graph**; a queued or save-gated edge is displayed for navigation/research, not as a false clickable original button.

## Validation performed
```powershell
$env:JUS_DATA_ROOT = 'D:\Library\Development\JUS\data'
py -3 -m unittest tests.test_screen_composition tests.test_screen_nested tests.test_screen_classify
py -3 tests\gui_screen_scene_composition_smoke.py D:\Library\Development\JUS\data
py -3 tests\gui_screen_nested_smoke.py D:\Library\Development\JUS\data
py -3 tests\gui_screen_layout_smoke.py
```
All listed tests passed on 2026-11-07. The new GUI test edits a sprite **only in the editor's in-memory DataRoot**, uses **Apply sprite**, verifies its content changed and that the Scene view refreshes, then exits without writing the modified original game data to disk.

## 2026-11-08 follow-up: NCCL, native LCD backgrounds, editable mode descriptions

The earlier archive-only background preview is superseded in **Scenes** mode for source-backed scene IDs 02, 03, 04, 06, 07, 21, 32, and 34. Native constructors bind background instances to engine/BG slots and may load loose `.atm`/`.dig` assets absent from the selected scene archive. CommonInfo uses both a sub-engine info window and info background; character/series pictures and relevant solo/multiplayer/Database variants have dropdown choices. Scroll/space animation is intentionally frozen in the editor, with explicit animation labels.

The eight TopMenu buttons, four J-Arena buttons, and mode records in RuleSelect and Options now link to source-backed three-line CP932 explanations. Selecting a TopMenu/J-Arena sprite shows **editable explanation text** in Inspector. RuleSelect and Options expose original selectable message records in the Layers dock/Inspector even where clickable sprite XY is not traced. **Apply explanation** stages synchronized changes to all 42 original `bin/info/*.bin` resources in `bin/InfoDeck.aar`; **Save** persists them. Original AFT glyph rasterization has now been decoded and implemented from `jskfont.aft` itself, including CP932 codes, blank `|` and pixel spacing. Remaining fidelity issues are dynamic font palette tint, conditional index-0 handling, and exact hardware BG priorities. See `D:\Library\Development\JUS\reverse_engineering\docs\AFT_FONT_RASTERIZATION_TRACE_20261108.md`. See `D:\Library\Development\JUS\reverse_engineering\docs\SCREEN_NCL_TEXT_VARIANT_TRACE_20261108.md`.

## Next layout-proof targets
- Match J-Galaxy's three code-generated menu widgets (overlay 2 at 0x02155940) to original sprite ALMT and scene ID 16 callbacks.
- Extract DeckSelect, Option, Database and Communication widget/coordinate tables and confirm the original DS screen routing and BG configuration per branch.
- Use emulator captures to verify hardware BG priority, exact screen composition and widget hit-zone behavior. Keep unresolved placements absent from the WYSIWYG composition until confirmed.

**Full regression run:** `py -3 -m unittest discover -s tests -p 'test_*.py' -q` completed with **331 tests passing, 1 skipped** (exit 0). The existing suite emitted a Pillow ResourceWarning and several late Tkinter `after` callback warnings during fixture teardown; those warnings did not fail tests. `git diff --check` passed for the edited tracked Screen files.
