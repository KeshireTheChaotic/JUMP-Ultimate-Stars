# JUS Editor redundancy audit — implementation phase 1

Date: 2026-11-08. Source authority remains original game data and ARM9 code. Changes are confined to the editor and audit reports; existing unrelated working-tree edits are preserved.

| Audit | Status | Files / implementation |
|---|---|---|
| R01 — NoteTrack | Implemented | `jus_package/notecommands.py` shared event iterator; `motion.py`, `sounds.py`, `effectlinks.py`, `spawns.py` use it |
| R02 — mission transactions | Implemented | `app/workspaces/missions.py`: `_edit_shared_definition` clones, validates, checks shared references, confirms, then commits to correct table |
| R03 — roster selection | Implemented | `app/workspaces/roster.py`: guarded `_select_action` used by card/move navigation |
| R04 — sprite bounds | Implemented | `jus_package/spritegeometry.py` pure bounds helper used in four `app/editor.py` loops; caller-specific translations and collision handling remain separate |
| R05 — scene metadata | Partial | `jus_package/screenintegrity.py`, `tools/verify_scene_indexes.py`, `tests/test_screen_index_integrity.py` cross-check source/registry/manifest/ROM tables |
| R06 — legacy scene index | Deferred | Original v1 JSON retained as a required v2 generation input |
| R07 — imports | Implemented | Seven unused bindings removed; widget package re-exports preserved |
| R08 — EditorApp monolith | Partial | Extracted pure geometry only, no risky UI rewrite |
| R09/R10/R11 | Preserved | Keep distinct binary format accessors, explicit title ROM variants, and existing SuiteWorkspace browser helper |

## Behavior guarantees

- Shared NoteTrack traversal returns original tick, node index, ordinal, label and command; it does not merge gameplay opcode semantics or invent callback ordering. Malformed/missing tracks are skipped as before.
- Mission stage/battle edit helper does not checkpoint on no-op, invalid input or cancelled shared-edit confirmation. New-save-only create/delete paths are unchanged.
- Roster navigation retains Tk selection reentrancy protection.
- Sprite geometry respects authored TextureID, BoundsIndex, image offsets, explicit caller translations, and omitted/missing frames. It does not alter original collision or world transform logic.
- Metadata checks compare all 46 original IDs, 48 screen variants, source paths, routing, visibility, and callback-family inventories. No original callgraph evidence is discarded.

## Verification

- Full unit suite: **379 tests passed, 1 skipped**, exit 0. Existing nonfatal Tk teardown messages appeared.
- New focused tests: 9 for NoteTrack, mission guard, roster, sprite bounds; 3 for scene-index integrity.
- GUI smoke passes: mission editing/undo/Apply/Save; spawn lifecycle; all-46-scene navigation; source editing.
- Known older GUI assertion mismatch: gui_effect_reference_actions_smoke.py expects four instances at db_b_01 move41 tick55 but current game data projects one. The exact prior and refactored NoteTrack scanners produce eight identical events and the same one projected instance; see reverse_engineering/docs/diagnose_r01_effect_projection_20261108.py. The pre-existing expectation is left untouched and needs separate investigation.

## Deferred next steps

Canonical scene generator migration with a clean v1→v2 repro and cross-file validation; remove legacy v1 from shipped package only after its dependent generator is migrated; further cohesive EditorApp reductions following separate GUI tests; investigate the stale effect GUI assertion without changing source semantics.

Updated standalone interactive audit: `docs/JUS_EDITOR_REDUNDANCY_AUDIT_IMPLEMENTATION_20261108.html`. Original game data, save files and decompiled code were not modified. Changes remain uncommitted.