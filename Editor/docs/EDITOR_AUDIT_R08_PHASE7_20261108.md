# JUS Editor redundancy audit — R08 Phase 7

Date: 2026-11-08  
Editor: D:\Library\Development\JUS\publish\JUMP-Ultimate-Stars\Editor  
Original-source authority: D:\Library\Development\JUS\reverse_engineering

## Status

R08 substantially advanced but **remains partial**. EditorApp was approximately 4,350 lines before the original redundancy audit, 2,125 lines after Phase 6, and **1,570 lines** after Phase 7. This phase moved **55 original methods** (23 timeline, nine playback, 19 sprite/UI and four source-backed Inspector presentations) while retaining original EditorApp method names as thin delegates.

No original game ROM or overlay bytes, extracted assets, player saved decks, Ghidra C, code-derived layout, or scene state was modified. All editor work remains local and uncommitted.

## Extracted source boundaries

| New module | Original methods | Responsibility |
|---|---:|---|
| app/timeline/interactions.py | 23 | Authored ALMT key/track selection, editing, NoteTrack events, retiming, context menu, tick navigation |
| app/lifecycle/playback.py | 9 | Audio decode readiness, scheduler, sound cues, audition cancellation and animation loop/stop |
| app/lifecycle/sprite_controls.py | 19 | Frame selection, piece hit-testing, drag/release, signed-byte coordinate clamping, palette widget, flipbook |
| app/inspectors/events.py | 4 | Source-backed effect, physics assumptions, sound and original NoteTrack event Inspector panels |

The original implementation bodies are preserved except lexical self-to-editor receiver rebinding and the explicit binding of the original hx formatter in the spawned-effect Inspector. Tk callbacks and ALMT editing/undo ordering remain unchanged.

EditorApp.destroy intentionally remains in the Tk controller: extracting its zero-argument super().destroy() could change lifecycle and widget cleanup semantics.

### Original source evidence retained

The original NoteTrack decoder in jus_formats/notetrack.py cites ARM9 FUN_0201f11c (track binding), FUN_0201e4c8 (event firing), FUN_0201e468 (command traversal) and ov06 FUN_02155688 (battle dispatcher). This editor refactor is not a claim to reproduce unknown native branch execution or runtime combat state. Collision, contact, priority/GX alpha, sound synthesis accuracy, and conditional runtime state remain qualified as before.

The R05 canonical 46-scene graph and R06 original-code V2 trace pipeline remain unchanged, with original ROM/overlay pointers authoritative rather than emulator placement.

## Pinned method source fingerprints

All 55 Phase 7 methods have source SHA-256 records captured before their relocation:

- reverse_engineering/docs/EDITOR_R08_TIMELINE_INTERACTIONS_SOURCE_SNAPSHOT_20261108.json — 23 methods
- reverse_engineering/docs/EDITOR_R08_PLAYBACK_SOURCE_SNAPSHOT_20261108.json — 9 methods
- reverse_engineering/docs/EDITOR_R08_SPRITE_UI_SOURCE_SNAPSHOT_20261108.json — 19 methods
- reverse_engineering/docs/EDITOR_R08_INSPECTOR_EVENTS_SOURCE_SNAPSHOT_20261108.json — 4 methods
- tests/fixtures/editor_r08_phase7_method_hashes.json — 51 portable hashes
- tests/fixtures/editor_r08_phase7_inspector_hashes.json — four portable hashes

The previous phases retain 75 additional original method hashes in tests/fixtures/editor_r08_method_hashes.json (24) and tests/fixtures/editor_r08_document_method_hashes.json (51), plus the initial-session source hash. Across all phases, **130 relocated original methods** have source-body fingerprint coverage.

### Historical evidence recovery limitation

The first Phase 7 source snapshot accidentally reused the earlier EDITOR_R08_TIMELINE_SOURCE_SNAPSHOT_20261108.json filename. The full new Phase 7 snapshot was moved to EDITOR_R08_TIMELINE_INTERACTIONS_SOURCE_SNAPSHOT_20261108.json. The earlier four Phase 3 original **method hashes, method sizes and destination paths** were restored from the existing, unchanged original source-locked tests/fixtures/editor_r08_method_hashes.json. The previous full-controller hash and source line positions were not recoverable; those fields were not invented. The original four method hashes remain verifiable through their pre-existing fixture.

## Regression coverage

New tests/test_r08_timeline_playback_sprite_phase7.py (17 tests):
- 51 original source-body SHA-256 comparisons
- Authored ALMT key retime, conflict/no-edit refusal and tick clamping
- Real notetrack.NoteTrack binary event merge at an existing tick
- Group selection not altering the active key
- Sound decode gating, playback scheduling, audition cancellation
- Stop-play cancellation order and looping/end boundaries
- Sprite signed-byte drag coordinate limits, checkpoint-on-release only, no-op boundary nudge

New tests/test_r08_inspector_phase7.py (five tests):
- Four original source-body SHA-256 comparisons
- Unresolved effect source warning
- Physics floor/collision inference remains labeled Unknown
- Sound-deck source uncertainty and original evidence labels
- Original binary NoteTrack Inspector event rendering

The existing GUI tests cover timeline retime+undo, Koma move text and original BIN references, source-backed projectile timing, sprite nudge, spawn lifecycle, all 46 native scenes and source-asset editing.

## Verification

- 55 of 55 Phase 7 original method bodies match pinned source hashes.
- All Phase 7 tests passed independently.
- EditorApp static import analysis found zero unused imports.
- All Python modules compile; no source formatting errors in git diff --check.
- Four core GUI smoke tests passed after timeline, playback and sprite extraction.
- Final full regression: **451 tests run, 450 passed, one skipped** (nonfatal existing Tk after-teardown and test-package file-handle warnings observed).
- Final Windows GUI suite: **7/7 passed** — general editor retime/undo and sprite nudge, original Koma/BIN navigation, source-backed projectile rendering, all 46 native scene IDs, source-asset edits/staging, spawn lifecycle and shot/collision Archive inspectors.
- R05 verification: **350 original C-line/ROM pointer checks**, 46 native scene IDs, 94 transitions, 28 source-backed BG scenes, 48 variants and six original callback families all passed.
- R06 remains source-backed, with the original historical V1 archived and original V2 callgraph index unchanged.

Nonfatal Tk after-teardown messages and a pre-existing test file-handle warning have occurred in prior suites. They do not imply original ROM/runtime behavior.

## Remaining R08

EditorApp still owns high-level workspace and Koma source selection, some original-source dynamic geometry/projection coordination, source reachability helpers, preview refresh and Tk window teardown. Further changes need independent callback-order/exception/undo checks. No unverified gameplay behavior or synthetic screenshots should be introduced.

R08 remains **partial**; R05 and R06 remain implemented.
