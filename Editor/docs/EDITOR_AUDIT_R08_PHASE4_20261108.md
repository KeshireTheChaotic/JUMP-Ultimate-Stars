# JUS Editor redundancy audit — R08 continuation, Phase 4
Date: 2026-11-08

Editor:
D:\Library\Development\JUS\publish\JUMP-Ultimate-Stars\Editor

Authoritative original data/code:
D:\Library\Development\JUS\reverse_engineering
D:\Library\Development\JUS\data

## Scope and result

This continuation isolates viewport renderers, menu/layout lifecycle, workspace switching, keyboard bindings, deferred sash positioning, and EditorApp's initial document/view state. Existing callbacks, original layout (engine vs authored source data), sprite coordinates, source frame selection, collision and AI overlays, active spawned-effect previews, and save/edit semantics remain in the original locations or are forwarded through compatibility method names.

No original game archive, unpacked asset, binary, save file, decompiled Ghidra C source, R05 original scene evidence index, or R06 legacy v1 trace index was modified. All edits are local and uncommitted. Existing unrelated uncommitted workspace changes were preserved.

## R08: source-preserving viewport renderer extraction

| Original EditorApp method | New module and entry point |
|---|---|
| _draw_node_sprites | app/renderers/animation.py::draw_node_sprites |
| _draw_animation | app/renderers/animation.py::draw_animation |
| _draw_animation_body | app/renderers/animation.py::draw_animation_body |
| _draw_motion | app/renderers/animation.py::draw_motion |
| _draw_spawns | app/renderers/animation.py::draw_spawns |
| _draw_pursuer | app/renderers/animation.py::draw_pursuer |
| _draw_sprite | app/renderers/sprite.py::draw_sprite |

The bodies were mechanically transferred, with only self-to-editor receiver and hx/_short_cue argument rebinding. Sprite body rendering still precedes/surrounds spawns according to its original effect-layer choice, HUD remains formed after source projection, and viewport translation uses the original context-manager with try/finally restore semantics. Original game code, which does not directly provide observed contact/terrain/projectile travel for these scenarios, remains the source authority. No arbitrary frames, screenshot-derived positioning or saved-deck characters were added.

## R08: menu, workspace and initialization lifecycle

| Original EditorApp method | New module and entry point |
|---|---|
| _build_menu | app/lifecycle/shell.py::build_menu |
| _build_layout | app/lifecycle/shell.py::build_layout |
| _build_project | app/lifecycle/shell.py::build_project |
| _init_sashes | app/lifecycle/shell.py::init_sashes |
| _init_sprite_sashes | app/lifecycle/shell.py::init_sprite_sashes |
| show_workspace | app/lifecycle/navigation.py::activate_workspace |
| _bind_shortcuts | app/lifecycle/navigation.py::bind_shortcuts |

app/lifecycle/session.py::initialize_editor_state contains the exact original 75-line block that initializes document, ALMT, sprite, animation, Koma and sound-preview state. It is invoked after T.apply_styles(self), before menu/layout/binding setup, and before the original delayed data-root open and audio polling. The original order and callback targets were preserved. The main EditorApp module retains short compatibility wrappers and controller state.

The extraction reduced EditorApp from 3,264 to 2,726 lines in this continuation, a reduction of 538 lines (~16.5%). Relative to the pre-audit ~4,350-line EditorApp, it is now ~37% smaller. This is a responsibility split, not a claim that all Tk dependencies have been removed. The source-bound UI presenters/renderers deliberately receive the active editor object to preserve event/state ordering.

## Source trace and validation

Mechanically transferred original methods have reproducible SHA-256 source/body records, captured **before extraction**:
- reverse_engineering/docs/EDITOR_R08_VIEWPORT_SOURCE_SNAPSHOT_20261108.json
- reverse_engineering/docs/EDITOR_R08_LIFECYCLE_SOURCE_SNAPSHOT_20261108.json
- reverse_engineering/docs/EDITOR_R08_SESSION_STATE_SOURCE_SNAPSHOT_20261108.json

Portably recorded source-fingerprint contracts:
- Editor/tests/fixtures/editor_r08_method_hashes.json — 24 extracted original method bodies (the prior 10 plus 14 additional), preserving exact binding-renamed body hashes
- Editor/tests/fixtures/editor_r08_session_hash.json — original 75-line initialization order and body hash

Additional tests:
- Editor/tests/test_r08_method_boundaries.py — all 24 transferred methods, pure source inspector guards and original selection behavior
- Editor/tests/test_r08_viewport_lifecycle.py — initialization order, no-source viewport guards, no-op invalid navigation, stop-playback-before-workspace-reparenting, original keyboard shortcut callback destinations

Focused Windows GUI regressions passed during this phase:
- tests/gui_smoke.py (all editor actions, undo/save, viewport/timeline, scene previews in explicit Screens mode)
- tests/gui_shot_source_visual_smoke.py (original projectile ALMT frames)
- tests/gui_move_text_links_smoke.py (original BIN-backed battle/support text)
- tests/gui_all_46_native_scene_ids_smoke.py (all 46 original scene IDs)
- tests/gui_spawn_lifecycle_smoke.py (spawn and teardown scene)
These validate that transfer did not fabricate poses or alter original inspected source data.

Final full unit suite: 403 tests run (402 passed, 1 skipped). The source/ROM canonical metadata check validated 350 original C-line and ROM pointer references, all 46 scene IDs, 94 transitions, 28 source-backed BG scenes, 48 variants, and six callback families. Seven Windows GUI smoke tests passed: general editor, source projectile rendering, battle/support BIN text navigation, all-46 scene navigation, source edit/staging, spawn lifecycle, and typed Archive shot/collision inspection. Existing nonfatal Tk after-teardown warnings were observed but caused no test failure.

## R05 and R06

R05 remains complete and unchanged. The canonical scene catalog generation reads original ARM9 navigation evidence and the declarative native scene authoring file, then verifies the original code/ROM bytes, immutable layout references and SHA-protected derived outputs. Its previous authoritative checks covered 46 IDs, 94 edges, 28 source-backed BG scenes, 48 code-backed variants and six callback families.

R06 remains explicitly deferred. The legacy jus_package/screen_code_sources.json v1 index is retained intact because reverse_engineering/docs/trace_scene_indirect_calls_v2.py consumes it. No metadata cleanup silently removed source evidence.

## Remaining R08

The main EditorApp still owns source-resource loading/edit transactions, some viewport interactions, asset import/export, apply/save orchestration, undo, selection routing and audio/playback control. Extract them incrementally with event-order and exception-behavior tests. The observed Tk after-teardown messages are nonfatal and unrelated to original game semantics. The older, separate GUI GN-effect expectation mismatch is not fixed by inventing runtime contact/termination behavior.

All Phase 4 code remains local and uncommitted; the authoritative game assets and reverse-engineered code are unchanged.
