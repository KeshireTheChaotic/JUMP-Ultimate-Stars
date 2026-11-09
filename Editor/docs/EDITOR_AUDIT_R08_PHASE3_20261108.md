# JUS Editor redundancy audit — R08 continuation, phase 3

Date: 2026-11-08
Editor: D:\Library\Development\JUS\publish\JUMP-Ultimate-Stars\Editor
Original code authority: D:\Library\Development\JUS\reverse_engineering

## R08 changes

Ten existing large EditorApp methods were transferred behind compatible delegates. Original method bodies were transformed mechanically, keeping the same bound editor object and callbacks. No ROM, decompiled source, original data assets, saved decks, runtime layout, or fabricated preview was involved.

| Original EditorApp method | New source path | Responsibility |
|---|---|---|
| refresh_inspector | app/inspectors/move.py | Original move/BIN source text, Koma references, selected track/key UI |
| refresh_details | app/inspectors/sprite.py | DSTX/DSIG sprite properties and palette controls |
| _draw_shot_source_sprites | app/renderers/shot_source.py | Original ALMT source-frame shot preview |
| _build_animation | app/layouts/animation.py | Animation, timeline, viewport, UI and callback bindings |
| _build_sprite | app/layouts/sprite.py | Sprite and filmstrip UI/callback bindings |
| _build_archive | app/layouts/archive.py | Source archive UI |
| _timeline_rows | app/timeline/rows.py | Authored ALMT track rows, Marker, event arcs |
| _notetrack_effect_rows | app/timeline/rows.py | NoteTrack physics and sound rows |
| _spawn_rows | app/timeline/rows.py | Source-keyed GenerateID subtracks and teardown diagnostics |
| _shot_rows | app/timeline/rows.py | Original shot events and nominal spans |

EditorApp decreased from 3,964 lines at the start of this continuation to approximately 3,264 lines after method transfers and import cleanup. The original pre-audit EditorApp had 4,350 lines. Existing EditorApp method names still forward calls to their original responsibilities.

## Pre-extraction parity proof

Before each method was moved, its original source and transformed body SHA-256 were recorded under:
- reverse_engineering/docs/EDITOR_R08_PRESENTERS_SOURCE_SNAPSHOT_20261108.json
- reverse_engineering/docs/EDITOR_R08_LAYOUTS_SOURCE_SNAPSHOT_20261108.json
- reverse_engineering/docs/EDITOR_R08_TIMELINE_SOURCE_SNAPSHOT_20261108.json

tests/fixtures/editor_r08_method_hashes.json contains portable expected fingerprints. tests/test_r08_method_boundaries.py checks all ten transferred method bodies against these fingerprints, verifies delegates remain short and invokes key source-backed presenter states.

The original EditorApp._move_control_and_title method was proven byte-identical to the pre-refactor Git HEAD source. It deliberately omits title lookup from the hidden legacy Moves Tree in Roster mode to avoid decompression lag. The actual Inspector still shows verified original BIN move titles. The older gui_move_text_links_smoke.py test asserted the hidden Tree helper returned these titles; it was updated to check the visible source-backed Inspector instead, and passed for both battle and support moves. Production move text code is unchanged.

## Scene metadata and legacy inputs

R05 canonical metadata generation remains intact: the read-only check validates 46 original scene IDs, 94 original transitions, 28 original-code-backed BG scene IDs, 48 variants, six binary callback families, and 350 source-C/ROM evidence references. The code-backed widget layout remains immutable while original source assets stay editable.

R06 explicitly remains deferred. jus_package/screen_code_sources.json (v1) is still consumed by reverse_engineering/docs/trace_scene_indirect_calls_v2.py and is untouched. No source authority was replaced with emulator observations.

## Verified and known limitations

- Method-body fingerprint comparison: all 10 methods identical after mechanical rebinding.
- GUI: general editor smoke, source-backed projectile drawing smoke, and original battle/support move-title navigation smoke passed.
- Full unit suite after timeline extraction: 398 tests passed (1 skipped).
- R05 canonical scene rebuild check and cross-index verification passed after timeline extraction.
- Final full test and GUI run after the last import cleanup: 398 unit tests passed (one skipped), general GUI passed every check, Koma move-text navigation passed, and R05 canonical original-ROM metadata verification passed.
- Known unrelated old GN effect action test still expects four instances where both baseline and refactored NoteTrack traversal project one. Source-side differential is reverse_engineering/docs/diagnose_r01_effect_projection_20261108.py.
- Existing nonfatal Tk after-teardown diagnostics and a test-package file-handle warning were seen; original data behavior unaffected.

R08 is still not a total architectural split: the high-level Tk shell owns startup, menu/workspace routing, playback state, and overall viewport composition. These are next steps and must retain their original event/state behavior. All changes are local and uncommitted.
