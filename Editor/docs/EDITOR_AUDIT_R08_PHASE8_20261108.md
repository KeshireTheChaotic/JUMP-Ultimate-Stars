# JUS Editor — R08 Phase 8: source-backed projection extraction

Date: 2026-11-08  
Status: **R08 partial; Phase 8 implemented and verified**  
Editor: `D:\Library\Development\JUS\publish\JUMP-Ultimate-Stars\Editor`  
Original-code authority: `D:\Library\Development\JUS\reverse_engineering`

## Scope and invariants

Eight original methods were moved from `EditorApp` to `app/renderers/projection.py` without interpreting new game behavior. The original `EditorApp` method names, signatures, callback entrypoints and state mutation ordering remain as delegates. The new module receives the active editor as `editor`; this is a responsibility split, not a claim that geometry is independent of Tk state.

The moved bodies were copied with **identifier-token-only `self` → `editor`** rebinding. Strings, comments, loops, source lookups, exception behavior, list ordering, coordinate-space transformations, generated-effect age sampling and playhead restoration are unchanged. Source-confirmed shot birth sprites are **not** extrapolated into projectile travel/contact. Renderer geometry does not become a claim about original collision or runtime priority/GX blending.

No original game assets, unpacked data, original binary/ROM/overlay bytes, source Ghidra C, player saved decks or reverse-engineering source files were edited. R05 deterministic canonical 46-scene metadata and R06 original V2 code-reference trace remain intact. No illustrative screenshots were generated.

## Method-by-method migration

| Source-backed responsibility | Original methods | Destination |
|---|---|---|
| Viewport framing across original and child animation spans | `frame_view`, `_move_scope_extent`, `_move_extent` | `app/renderers/projection.py` |
| Source-confirmed shot-birth extents and `chr/shot/<form>.bin` reads | `_handler00_launch_extents`, `_shot_events_current` | same |
| Authored spawn projection, selected-instance filter | `spawn_projection`, `_visible_spawn_instances` | same |
| Original frame-dependent root-motion origin | `_animation_origin` | same |

**Controller size:** 1,570 → 1,434 physical lines (136 removed, 8.7% of Phase 7 controller size); original pre-audit estimate approximately 4,350 lines. There are now **138 relocated original method bodies** with fingerprint coverage across Phases 3–8 (75 before Phase 7 + 55 in Phase 7 + 8 here); `__init__` session assignment order is separately source-locked.

## Source evidence and reproducibility

- `docs/EDITOR_R08_PROJECTION_SOURCE_SNAPSHOT_20261108.json`: eight complete original method texts, pre-extraction line ranges, original/edit-transformed SHA-256 strings and original controller hash.
- Original controller SHA-256 from immediately before Phase 8: `0cc911f488a790a49162c8d79cf4360fd2436daef54ce006f89566daaaa3d113` (text normalized to LF for hash).
- `tests/fixtures/editor_r08_phase8_projection_hashes.json`: eight exact transformed function-body hashes, portable after extraction.
- `tests/test_r08_projection_phase8.py`: 12 tests verifying raw source→token-only transformed method matching, entrypoint thin delegates and behavioral contracts.
- `tools/apply_r08_phase8.py`: one-time guarded relocation script; refuses to overwrite its existing destination/snapshot (do not rerun).
- `tools/build_r08_phase8_report.py`: builds the Phase 8 interactive report from the preserved Phase 7 finding catalog.
- `docs/JUS_EDITOR_REDUNDANCY_AUDIT_PHASE8_R08_20261108.html`: interactive filtering/review/export of the 11 original audit findings, updated R08 evidence and implementation status.

The new regressions assert authored collision rectangle padding, source-keyed launch lookups, shot-BIN parser error disclosure, tick restoration when an extent raises, root-motion origin gating, unknown/no-index behavior, spawn selection identity and original projection options. These do not substitute for native ROM execution, and source-unverified paths remain labeled as such.

## Verified tests — Windows host

1. `py -3 -m unittest discover -s tests -p test_r08_projection_phase8.py -q`: **12/12 passed**.
2. `py -3 -m unittest discover -s tests -p test_r08_*.py -q`: **54/54 passed** (existing Phase 8 tests add 12 more).
3. `py -3 -m unittest discover -s tests -q`: **463 run, 462 passed, one skipped**, runtime approximately 66 seconds.
4. `py -3 tools/verify_scene_indexes.py --help`: native scene integrity check reports **46 IDs and original overlay/variant/visibility/callback catalogs in agreement**.
5. All seven Windows GUI regression scripts passed after supplying their documented data-root arguments where required:
   - `tests/gui_smoke.py`: animation key retime/undo, spawn/pursuer, sprite nudge/undo, apply/save, Koma, level, mission, screen and archive navigation.
   - `tests/gui_move_text_links_smoke.py`: original Koma ↔ ALMT/BIN cross-navigation.
   - `tests/gui_shot_source_visual_smoke.py`: real Bobobo source fragments and explicit unknown contact behavior.
   - `tests/gui_all_46_native_scene_ids_smoke.py`: all 46 IDs; 28 source-backed BG scenes, 18 unknown runtime/indirect BG scenes without fabricated pictures.
   - `tests/gui_screen_source_edit_smoke.py`: source asset editing and data-root staging without modifying original files.
   - `tests/gui_spawn_lifecycle_smoke.py`: seven authored effects and source selection/isolation at tick 30.
   - `tests/gui_shot_inspector_smoke.py`: original shot/collision record inspector.

The original 7-script batch was split into three runs solely because three scripts require an explicit `DATA_ROOT` argument; initial missing-argument `IndexError` exits were test invocation errors. All seven were subsequently executed successfully with the correct arguments. These are not application failures.

The suite emits previous nonfatal Tk `after` teardown messages and the existing `test_package.py` Pillow file-handle ResourceWarning. The test runner still reports `OK (skipped=1)`; these warnings are not interpreted as native game behavior or new regressions.

## Remaining R08 work

The controller is still the high-level Tk coordinator. Its longest intact responsibilities include Koma/source move selection and reachability (e.g. `open_move_resource`), archive member table population and selection, window destruction, and some preview refresh and workspace interaction glue. Further extraction should proceed only with pinned source and callback/undo/error regressions, not by rewriting engine-derived state or replacing original evidence with render approximations.

**R05 and R06 remain complete. R08 remains partial** following this verified Phase 8.
