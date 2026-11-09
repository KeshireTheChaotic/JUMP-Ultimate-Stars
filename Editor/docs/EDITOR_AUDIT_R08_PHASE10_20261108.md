# JUS Editor redundancy audit — R08 Phase 10

Date: 2026-11-08

Status: Phase 10 implemented; R08 remains partial.

Project: D:\Library\Development\JUS\publish\JUMP-Ultimate-Stars\Editor

Original reverse engineering: D:\Library\Development\JUS\reverse_engineering

## Scope

14 original EditorApp methods moved with identifier-token-only self-to-editor rebinding; three methods explicitly receive the unchanged hx formatter. All original EditorApp public method signatures remain delegates. No ROM, overlays, extracted source assets, player saves, Ghidra C, source-based screen pipeline or undocumented game behavior was altered. Source evidence is authoritative over emulator observations.

## Extracted responsibilities

| New module | Methods | Behavior |
|---|---:|---|
| app/lifecycle/effect_sources.py | 4 | Original AMT scanning, effect catalog, pursuer BIN, effect jump |
| app/timeline/presentation_ops.py | 7 | Original NoteTrack physics/sound, event tooltips and field formatting |
| app/renderers/viewport_ops.py | 3 | Original viewport refresh, sprite cache and zoom |

**Controller size:** 1,190 to 1,070 physical lines, 120 lines removed. Pre-audit approximately 4,350. 170 relocated methods have original source-body SHA-256 coverage across Phases 3–10. Startup and super().destroy() remain within Tk controller.

## Source evidence and regression coverage

- Original Phase 10 controller SHA-256: 8f67312d9949d7a5192b66cfb58273d58808cbb6603073fffb30dacfd2813feb
- docs/EDITOR_R08_PHASE10_SOURCE_SNAPSHOT_20261108.json: original source text, method line ranges, original and transformed fingerprints.
- tests/fixtures/editor_r08_phase10_method_hashes.json: portable SHA-256 fingerprints.
- tests/test_r08_phase10_coordination.py: 15 new tests verifying original source/sig parity, live AMT priority, BIN parse failures, navigation cancellation, audio sequence/card selection, tooltip evidence, ALMT formatting, refresh order, sprite negative cache and zoom clamping.
- tools/apply_r08_phase10.py: one-time guarded extraction; do not re-run on existing output.
- tools/build_r08_phase10_report.py: validates the unit and GUI logs, and creates both reports.
- docs/JUS_EDITOR_REDUNDANCY_AUDIT_PHASE10_R08_20261108.html: interactive updated findings.

## Verification

- All 14 original moved body hash and public signature checks passed.
- 15 new source/behavior tests passed.
- Full post-cleanup suite: 491 run; 490 passed; 1 skipped. Log: docs/_r08_phase10_full_unit_log.txt.
- Nine GUI checks passed: editor retime/undo, original Koma/ALMT navigation, native shot preview, 46 original scene IDs, original scene source edit/staging, spawn lifecycle, shot/collision Archive Inspector, source input bitmasks and isolated Koma-shape Apply/Save/reload fixture. Log: docs/_r08_phase10_gui_log.txt.
- Original 46 native scene ID, overlay/variant/visibility/ROM callback index check passed.
- Pre-existing nonfatal Tk after-teardown messages and resource-handle warning may appear.

## Outstanding independent issue

The pre-existing gui_effect_reference_actions_smoke.py fixture expects 4 projected instances but currently finds 1. This mismatch predates Phase 10 and is NOT included in the nine passing GUI checks. No runtime effect inference, synthetic sprite preview or assertion rewriting was introduced.

## Remaining R08

Only 8 non-delegated EditorApp methods remain: __init__, _set_roster_clips, _arrow, _open_doc, _int, text_to_notes, destroy and _value_hint. Lifecycle ownership, compatibility and original binary round trips should remain protected. R05 and R06 remain implemented. All work local and uncommitted.
