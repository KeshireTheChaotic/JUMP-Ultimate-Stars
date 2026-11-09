# JUS Editor — R08 redundancy audit, phase 6
Date: 2026-11-08
Status: R08 substantially advanced; high-level EditorApp controller retains UI ownership.

## Source authority and scope

Editor: D:\Library\Development\JUS\publish\JUMP-Ultimate-Stars\Editor
RE: D:\Library\Development\JUS\reverse_engineering
Original source and ROM layout are authoritative. No emulator-derived
placement, synthetic screenshot, changed player saved-deck character, or
unverified engine behavior was introduced. Original game assets, ROM,
verified overlay binaries, decompiled C and save data were not modified.

R05 canonical scene generation and R06 retired legacy scene-index pipeline
remain intact. This work changed editor application code and its own tests,
not the original data root.

## Phase 6 extraction

| New module | Original EditorApp methods (all compatibility wrappers retained) |
|---|---|
| app/lifecycle/history_ops.py | _doc, _almt_snapshot, _sprite_snapshot, checkpoint, _restore_almt, _restore_sprite, undo, redo, _history_step, _update_undo_label |
| app/lifecycle/document_ops.py | update_dirty, confirm_discard, apply_current, save, revert, export_package, import_package, run_task |
| app/lifecycle/resource_ops.py | choose_root, open_root, populate_tree, on_resource_open, on_resource_select, _project_context, open_table, select_container, load_almt, load_sprite |
| app/lifecycle/apply_ops.py | mark_almt, apply_almt, export_almt_json, import_almt_json, apply_move_props, _after_piece_edit, apply_piece, mark_sprite, apply_sprite, export_frames, _ask_png_origin, import_frame, relayout_frame, delete_frame, export_atlas, import_atlas, edit_palette, _palette_done, extract_member, replace_member, add_member, remove_member, after_archive_edit |

51 relocated methods / 4 module responsibilities in this phase. EditorApp
was 2,725 lines at phase start and is now 2,125 lines after import cleanup,
a decrease of 600. Prior-to-audit EditorApp was 4,350 lines.
The earlier 24 extracted methods and 75-line session initializer remain
in their established presenter, renderer and lifecycle modules.
Overall 75 moved methods have source-body fingerprint coverage.

All 51 method bodies were captured before refactoring; only lexical
self-to-editor receiver rebinding is permitted. Original callback names,
widget event order, original coordinates, source bytes, undo and
staging semantics are otherwise preserved. This is a *responsibility split*:
the modules still receive the active editor object, so this is not a claim
of complete independent service injection or zero coupling.

## Circular import and dead-code cleanup

The original parse_int behavior is now in app/parsing.py. app/editor.py
re-exports that function for backward compatibility, and the new apply
controller imports from app.parsing rather than importing the EditorApp
module in reverse. AST static inspection found no remaining unused
import bindings in the main controller. Original integer syntax
(int(str(value).strip(), 0)) is unchanged.

## Verifiable source evidence

Pre-extraction SHA-256 and original line-range snapshots:
- reverse_engineering/docs/EDITOR_R08_HISTORY_SOURCE_SNAPSHOT_20261108.json
- reverse_engineering/docs/EDITOR_R08_DOCUMENT_SOURCE_SNAPSHOT_20261108.json
- reverse_engineering/docs/EDITOR_R08_RESOURCES_SOURCE_SNAPSHOT_20261108.json
- reverse_engineering/docs/EDITOR_R08_APPLY_SOURCE_SNAPSHOT_20261108.json

Portable test baselines:
- Editor/tests/fixtures/editor_r08_document_method_hashes.json (51 source-body hashes)
- Editor/tests/fixtures/editor_r08_method_hashes.json (previous 24 source-body hashes)
- Editor/tests/fixtures/editor_r08_session_hash.json (original startup order)

New tests:
- tests/test_r08_document_lifecycle.py: 13 tests including all 51
  source fingerprints, save cancel/success/failure, pending suite edits,
  undo checkpoint/restoration, invalid ALMT/root, canceled selection
- tests/test_r08_apply_transactions.py: 9 tests for original ALMT
  binary re-validation and archive spans, invalid serialization,
  embedded sprite DSIG updates, palette validation and checkpoint
  order, and archive-member confirmation / reindex order

Additional original-code regressions still cover native ALMT effects,
Koma links, original screen/scene asset editing, 46 source IDs and ROM
callback entries.

## Validation

Final unit suite: 429 tests run; 428 passed, one skipped.
R05 original C/ROM: 350 source-pointer/line checks passed.
Native scene index: 46 IDs, 94 transitions, 28 source-backed BG scenes,
48 variants and 6 callback families agreed.
R06: portable V1 absent; historical source report archived.
Final Windows GUI regression: 7/7 tests passed, including general editor save/undo, source-backed projectile rendering, original Koma BIN text navigation, 46 original native scenes, scene asset editing and staging, GenerateID spawn lifecycle, and typed Archive shot/collision inspectors. No original game assets or player saves were modified.

Existing nonfatal Tk after-teardown output and a test fixture's
ResourceWarning are not interpreted as game-runtime failures.

## Next R08 boundary

Remaining EditorApp responsibilities include interactive timeline edits
and selection state, viewport pointer/drag state, playback and audio control,
and the core high-level Inspector coordination. Each requires further event
ordering, exception behavior and GUI interaction tests.

Note that mechanical relocation preserves existing staging semantics,
including cases where an operation writes one staged asset before a later
related build fails. That is a separate transactional-integrity improvement,
not silently changed during this redundancy audit.

All modifications are local and uncommitted.
