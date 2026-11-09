# Editor redundancy audit — R05 and R08, phase 2

2026-11-08. All work is local in D:\Library\Development\JUS\publish\JUMP-Ultimate-Stars\Editor. Original JUS assets, binaries, decompiled C and saved player decks were not modified. Existing uncommitted Editor/Level/Screen work was preserved.

## R05 — Canonical scene generation: implemented

- jus_package/screen_scene_authoring.json is the editable, code-evidence authoring input for archive associations, immutable widget placements, original LCD routing and runtime-only renderer classifications. Original scene IDs and transitions are not duplicated.
- jus_package/scenebuilder.py derives two portable editor outputs deterministically from original reverse_engineering/docs/SCREEN_NAV_GRAPH.json, the declarative evidence file, the original v2 callgraph, the ROM callback catalog, and source-backed screenvariants.py mappings.
- tools/rebuild_scene_catalog.py is the supported CLI. The default --check is read-only. --output-dir stages reproducible snapshots without touching the editor. --write safely regenerates derived outputs and screen_scene_build.lock.json after verified source checks and old SHA fingerprint comparison. A direct manual modification of generated data prevents overwriting it; reviewed changes in the authoring input are allowed.
- Schema/source guardrails protect the 46 scene IDs, 94 edges, 28 source-backed BG scenes, 48 code-backed scene variants, all six ROM callback families, 68 original callback table words, 350 code/ROM pointer and line checks, and immutable widget coordinates.
- tests/test_scene_canonical_timeline_refactors.py verifies deterministic independent snapshot runs, tampered source evidence rejection, source-change regeneration, and manual-output-drift refusal.
- The original screen_code_sources.json (v1) is retained unchanged. The original v2 trace regeneration script still references it. This keeps R06 deferred and safe.

Commands from the Editor directory:
    py -3 tools\rebuild_scene_catalog.py --check
    py -3 tools\rebuild_scene_catalog.py --output-dir D:\Temp\JUSSceneCheck
    py -3 tools\rebuild_scene_catalog.py --write
    py -3 tools\verify_scene_indexes.py

After editing only evidence-backed authoring declarations, stage and review the output, then use --write. Edits to the original 2D binding definitions are made in screenvariants.py with original ARM9 citations. The build never fills unproven backgrounds or renders saved-deck characters.

## R08 — EditorApp modularization: substantially advanced, still partial

- jus_package/timelineprojection.py now implements original authored ALMT state projection, NoteTrack rows and colors, first Marker target mapping, jump arcs, branch argument extraction, and shot inspector event selection without Tk dependencies. The EditorApp compatibility wrappers remain. The original unusual unsorted-key semantics are explicitly preserved rather than substituted with spawns.state_at.
- jus_package/chrdiagnostics.py formats original chr/shot and chr/col record descriptions with no Tk dependency. Differential tests compared pre-refactor EditorApp text and new formatters on 1,258 shot records and 2,837 collision records from 465 original ChrBin archive members; all 4,095 are identical. The golden hashes are in tests/fixtures/audit_chrbin_format_golden.json.
- app/inspectors/shot_source.py contains the original read-only 187-line shot-source Inspector presenter; app/inspectors/archive_member.py contains the original 119-line archive/member Inspector presenter. The EditorApp methods delegate to them without changing UI controls, engine behavior or data write paths.
- tests/test_chrdiagnostics_refactor.py and tests/test_scene_canonical_timeline_refactors.py cover original record rendering, presenter dispatch, malformed tracks, authored event ordering and renderer boundaries. The remaining general Tk Inspector and viewport shell still belong to EditorApp and will require separate changes; R08 is not falsely labeled entirely complete.
- The old general GUI smoke had two stale archive-preview assertions in Scenes mode (the new source-authoritative default). tests/gui_smoke.py now explicitly selects Screens mode for those legacy archive-preview checks; the temporary-mode differential test passed all assertions, without production rendering changes.

## Verification and limitations

- The canonical metadata was regenerated and checked from the original code sources, validating 350 C/ROM evidence sites.
- Clean rebuilds in two separate directories produced byte-identical JSON and build-lock snapshots.
- Focused R05/R08 tests pass, original ChrBin inspector GUI passes, original shot-source visual GUI passes, mission GUI passes, all-46-native-scene GUI passes, source-editing GUI passes, and the corrected general editor smoke passes.
- Final full unit suite: 393 tests passed, one skipped (including the new build-lock test). The corrected general Editor GUI smoke passed every assertion; canonical source rebuild and index integrity checks passed afterward.
- Existing nonfatal Tk teardown messages and unrelated test-package file-handle ResourceWarning were observed.
- The old GN effect reference-actions smoke expects four instances where baseline and refactor both produce one. A source-only differential at reverse_engineering/docs/diagnose_r01_effect_projection_20261108.py demonstrated identical original and refactored reference events. That unrelated expectation was not altered.

No original data, ROM, Ghidra C or saved game was modified. The editor changes remain local and uncommitted. R06 remains deferred until its v2 source trace generator can be migrated with parity proof.
