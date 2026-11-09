# JUS Editor redundancy audit — R08 Phase 9

Date: 2026-11-08  
Status: **R08 partial; Phase 9 extraction completed and verified**  
Editor: `D:\Library\Development\JUS\publish\JUMP-Ultimate-Stars\Editor`  
Original reverse engineering: `D:\Library\Development\JUS\reverse_engineering`

## Scope and original-source authority

Phase 9 relocates 18 original `EditorApp` methods into three cohesive navigation modules. Original method names, Python method signatures, value-source selection, Tk callback ordering, cancellation semantics, checkpoint order, ALMT/BIN source verification and archive serializer boundaries are retained. The new helpers receive the active editor object as `editor`. Original `self` references are token-rebound, and the unchanged `hx` formatter is injected explicitly in six methods that already use it. No game-behavior reconstruction was added.

No original .nds/overlay bytes, unpacked game assets, source-reverse-engineered Ghidra code, player saved-deck character graphics or emulated screenshots were changed. R05 canonical scene metadata and R06 source trace remain unchanged. The original data is authoritative over emulator images.

## Extracted responsibilities and files

| Module | Original EditorApp methods | Count |
|---|---|---:|
| `app/lifecycle/roster_navigation.py` | `show_roster_sprite`, `_switch_almt`, `_ai_block`, `_move_xref`, `_move_source_form`, `_move_control_and_title`, `open_move_resource`, `open_koma_card`, `_battle_base_table` | 9 |
| `app/lifecycle/move_list.py` | `populate_moves`, `on_move_select`, `_move_row`, `duplicate_move`, `delete_move` | 5 |
| `app/lifecycle/archive_navigation.py` | `populate_archive`, `_selected_member`, `_table_details`, `rebuild_check` | 4 |

Before Phase 9: `EditorApp` 1,434 physical lines. After source extraction: 1,191. After removing one newly obsolete import line: **1,190**. Net **244 physical controller lines removed**; the pre-audit controller was approximately 4,350 lines. Across Phases 3–9, **156 relocated original method bodies** have portable source SHA-256 coverage (75 through Phase 6, 55 in Phase 7, 8 in Phase 8, 18 in Phase 9). `EditorApp.__init__` assignment order has its separate session contract.

## Original source snapshots and regression contracts

- `docs/EDITOR_R08_PHASE9_SOURCE_SNAPSHOT_20261108.json`: original controller SHA-256 `1e0d81fdbf15b7b5ed3c3fa154cd127ba4adcb8bf78b5b2abca9bdde9affba08`, all 18 original function source texts and line spans, original/transformed source SHA-256, and formatter-injection metadata.
- `tests/fixtures/editor_r08_phase9_method_hashes.json`: all 18 portable relocated-body fingerprints.
- `tests/test_r08_phase9_navigation.py`: 13 source and behavior tests. They assert original method source and public-signature equality; battle versus support ALMT source forms; AIPM source/cache; missing/nonexistent source rejection; discard cancellation; Koma/ALMT navigation and sound card order; hidden Tk events suppressed; move-state/viewport refresh ordering; ALAR type and original hash labels; member selection guard; read-only binary archive rebuild.
- `tools/apply_r08_phase9.py`: guarded one-time source extraction script (intentionally refuses to overwrite existing Phase 9 files; do not rerun).
- `tools/build_r08_phase9_report.py`: re-generates the interactive audit from the Phase 8 findings and inserts Phase 9 implementation evidence.
- `docs/JUS_EDITOR_REDUNDANCY_AUDIT_PHASE9_R08_20261108.html`: interactive audit, filtering, source locations, review notes, and CSV/JSON export. All 11 original findings retained.

The six `hx` dependency injections appear only on the new module callables. Their original `EditorApp` public signatures and underlying operation bodies are unchanged.

## Test and GUI verification

- **18/18** relocated original-source fingerprints and `EditorApp` signature comparisons passed.
- **13/13** new Phase 9 regression tests passed.
- Original existing R08 group: **66 passed** before adding the Phase 9 tests.
- Full Python regression suite, **rerun after import cleanup**: **476 run, 475 passed, one skipped**. Full output: `docs/_r08_phase9_final_unit_log.txt`.
- Original scene-index integrity check: **46 IDs**, matching original overlays, variants, visibility, and ROM callback catalogs.
- **Nine passing Windows GUI smoke checks** (eight source-asset workflows and one isolated synthetic Koma-shape fixture):
  1. `tests/gui_smoke.py` — animation retime/undo, Sprite/Koma, Level/Mission, Scene, Archive and Apply/Save.
  2. `tests/gui_move_text_links_smoke.py` — original Koma↔BIN/ALMT title/navigation links.
  3. `tests/gui_shot_source_visual_smoke.py` — native beam fragment visual sources without inferred contact.
  4. `tests/gui_all_46_native_scene_ids_smoke.py` — all 46 scene IDs, unknown backgrounds excluded.
  5. `tests/gui_screen_source_edit_smoke.py` — original source asset edit/staging.
  6. `tests/gui_spawn_lifecycle_smoke.py` — source-confirmed GenerateID effects and isolation.
  7. `tests/gui_shot_inspector_smoke.py` — original shot and collision Archive inspectors.
  8. `tests/gui_battleinput_source_trace_smoke.py` — source-backed button input bitmasks and unnamed normal action.
  9. `tests/gui_koma_shape_smoke.py` — shape-variant edits, Apply, Save, and byte-preserving reload (synthetic isolated fixture).

**Known historical discrepancy remains separate:** `tests/gui_effect_reference_actions_smoke.py` fails its `len(projection.instances) == 4` assertion with **1 actual instance** for its fixture. The Phase 7 interactive audit already recorded this exact expectation mismatch after independently confirming original/refactored command traversal parity. It is **not counted among the nine passing checks** and was not corrected by fabricating native effects or weakening the test. The Phase 9 refactor did not change the `spawns` projection pipeline.

Pre-existing nonfatal Tk `after` teardown errors and a test-package image-handle ResourceWarning occur during the unit run; the runner reports `OK (skipped=1)`.

## Remaining R08 responsibility

`EditorApp` is still a Tk application coordinator with startup/menu wiring, shortcut dispatch, cross-workspace previews, original source geometry support/refresh, parts of ALMT note serialization and archive selection coordination. Next refactors should keep method hash contracts, original-versioned source evidence, GUI event ordering, undo checkpoint sequence and original binary round trips. No entire Tk shell rewrite is justified.

**R05 and R06 remain complete. R08 remains partial.** All changes local and uncommitted.
