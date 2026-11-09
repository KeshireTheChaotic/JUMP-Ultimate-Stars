# R06 — Legacy V1 scene-index retirement
Date: 2026-11-08

Editor: D:\Library\Development\JUS\publish\JUMP-Ultimate-Stars\Editor
Original RE authority: D:\Library\Development\JUS\reverse_engineering

## Status: Implemented

The V2 callgraph tracer previously loaded the portable V1 file but never referenced the loaded object. The actual original-code traversal came from SCREEN_NAV_GRAPH.json, decompiled ARM9/overlay C functions, source asset names, and verified original overlay pointer words. The redundant input has been removed.

reverse_engineering/docs/trace_scene_indirect_calls_v2.py now builds the same canonical 46-ID scene manifest as R05 from the original SCREEN_NAV_GRAPH.json and Editor/jus_package/screen_scene_authoring.json, using jus_package.scenebuilder.build_manifest. It compares that result to the installed R05 screen_metadata.json before tracing; archive candidates derive from the verified canonical manifest rather than a duplicate historical index.

The V2 tracer defaults to read-only --check; --output-dir stages its output elsewhere; guarded --write refuses to replace the portable V2 index if it differs from the prior R05 SHA fingerprint or if the original reverse-engineering source report disagrees.

reverse_engineering/docs/audit_all_scenes_code_assets.py remains available to regenerate the historical original depth-2 asset report but no longer writes Editor/jus_package/screen_code_sources.json.

The 220,111-byte duplicate Editor/jus_package/screen_code_sources.json was removed only after confirming its bytes are identical to the retained historical source report reverse_engineering/docs/SCREEN_CODE_ASSET_TRACE_20261108.json. The original historical V1 report was not deleted or modified. R06 is no longer an Editor runtime or trace-generation dependency.

## Fixed source parity

Original pre-migration V1 historical record SHA-256:
82a8e419a962d1abf88507ae15a48e7220d04262b41ed9073d00b894297668e1

Original pre-migration V2 index and reverse-engineering report SHA-256:
861256fb51e129230a0c2e3e9e097435d066933e4f556eea4a6687c3d747d0ca

The migrated tracer regenerated the exact same V2 bytes, including Windows CRLF formatting. Both its portable source index and reverse-engineering source report remain identical to the original frozen SHA-256. Metrics are unchanged:
- 46 scene IDs
- 1,617 referenced decompiled functions
- 471 original source asset reference sites
- 10 original binary-resolved indirect function pointers
- Original constructor edges, named/direct callgraph references, hardware sites, unresolved addresses and provenance fields: byte-identical (not merely JSON-semantic parity)

Proof: reverse_engineering/docs/R06_BEFORE_MIGRATION_SHA256_20261108.json

## New and updated files

- reverse_engineering/docs/trace_scene_indirect_calls_v2.py — original navigation and R05 authoring input; V1 load removed; safe checked/staged/guarded-write CLI
- reverse_engineering/docs/audit_all_scenes_code_assets.py — historical source audit retained, no portable V1 output
- Editor/jus_package/scenebuilder.py — source-chain documentation updated
- Editor/tools/rebuild_scene_catalog.py — truthful archived V1 status text
- Editor/tests/test_r06_scene_trace_migration.py — byte hashes, no V1 dependency, original-code re-trace, staged output parity and no live mutations
- Editor/tests/test_scene_canonical_timeline_refactors.py and Editor/tests/test_screen_index_integrity.py — require archived historical evidence, no longer require packaged V1
- Editor/jus_package/screen_code_sources.json — redundant portable copy retired; original RE archive preserved

## Regeneration commands

    py -3 D:\Library\Development\JUS\reverse_engineering\docs\trace_scene_indirect_calls_v2.py --check
    py -3 D:\Library\Development\JUS\reverse_engineering\docs\trace_scene_indirect_calls_v2.py --output-dir D:\Temp\JUSV2Trace
    py -3 D:\Library\Development\JUS\reverse_engineering\docs\trace_scene_indirect_calls_v2.py --write

When source evidence changes, stage and review the original code-derived output before guarded --write, then run the R05 scene catalog canonical rebuild. The source-backed scene renderer does not invent unknown native BG visibility, 3D states, projectile poses, or saved-deck character graphics.

## Verification

New R06 tests: 4/4 passed. R05 source-authority and native-index tests passed. Full Editor suite: 407 tests run, 406 passed, 1 skipped. Native 46-scene index validator passed. Original source/game data unmodified.

R06 is complete. R08 remains separately in progress. All changes are local and uncommitted; no original ROM, save, Ghidra C, or original game asset was modified.
