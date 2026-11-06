# JUS Studio workspaces — preliminary layouts (2026-11-05)

One application, one shell, separate workspaces (docs `01_CLAUDE_KICKOFF_PROMPT.md`,
`04_STUDIO_ARCHITECTURE.md`). Every workspace uses the same engine-editor layout as
the Move Lab (Unity Animation/Sprite Editor + Inspector, Godot AnimationPlayer/Scene
dock/SpriteFrames, Unreal Paper2D):

```
┌ toolbar: workspace tabs · undo/redo · Apply · Save · packages · unapplied/unsaved note ┐
├ browser ──────┬ viewport (zoom ¼×–12×, pan) ─────────┬ layers dock (where useful) ──────┤
│ this          │  header: tools · toggles · Frame     │ inspector (property grid +       │
│ workspace's   │                                      │ evidence badges)                 │
│ assets,       ├──────────────────────────────────────┴──────────────────────────────────┤
│ filter        │ bottom dock: tabs (timeline / frames / tiles / raw / problems) + tools  │
└───────────────┴──────────────────────────────────────────────────────────────────────────┘
```

Shared pieces (`app/`): `theme.py` (colours, `EVIDENCE` grades, tool toggles),
`widgets/viewport.py`, `widgets/inspector.py` (`evidence()` rows),
`widgets/filmstrip.py`, `widgets/dopesheet.py`, `widgets/tabs.py` (bottom dock),
`widgets/layers.py` (eye-toggle layer list), `workspaces/base.py` (`SuiteWorkspace`: the
layout, browser swap, undo snapshot hooks, Apply). Undo/redo goes through the shell's
`History` keyed per document; Apply writes into the in-memory archive tree; Save
rebuilds archives as before.

Evidence badges, everywhere: **Direct** (traced, or byte-exact on every file),
**Cross-checked**, **Inferred** (consistent with all data, loader not traced),
**Unknown** (not decoded: raw / read-only / unavailable).

## Move Lab — Animation, Sprite (Ctrl+1 / Ctrl+2)

Existing workspaces. New in this round: **spawned effects** in the Animation viewport
and timeline (`jus_package/spawns.py`): every keyed GenerateID (exact-tick spawn,
distinct per key and occurrence), character and common `efc/` effects, one level of
nested spawns in the timeline and full nesting in the viewport, a front/behind layer
choice (DrawPrio rule not traced), origin markers, an Inspector with provenance, and
double-click to open the effect's own move.

Next: Authored vs Visual Playback modes (scenario-selectable branches), loop-aware
projection, DrawPrio ordering once traced.

## Koma (Ctrl+4) — `app/workspaces/koma.py`

| Area | Content |
|---|---|
| Browser | `koma/koma.aar`, grouped by series prefix, panel counts |
| Viewport | Card mode: panels on the card's 5×4 shape grid (5 columns × 4 rows, the deck board width) (repeated/missing labels in red); Strip mode: art order; Select/Pencil/Picker, pixel grid ≥6× |
| Inspector | asset/panel facts; card record (series → art prefix from the ARM9 table 0x0209E840, art index, raw 12 bytes); same-size shape picker; palette; evidence |
| Bottom | Panels strip; Shapes (66 shipped; current highlighted; edit/create/remove same-size variants); panel/card PNG export, panel PNG import, Apply; Problems |

Codecs: `jus_formats/koma.py` (art, 898/898 byte-exact), `jus_formats/kshape.py` (shapes +
cards, byte-exact), `jus_package/komacards.py` (card ↔ art, Inferred). Apply writes art into `koma.aar` and stages `bin/kshape.bin` and/or `bin/koma.bin`; Save writes
all changed files. New dictionary counts have valid offsets but unverified runtime limits.
Next: Koma evolution/purchase graphs and new-card runtime constraints. Mission rewards are editable in the Level workspace; deck placement is explicitly out of scope.

## Level (Ctrl+5) — `app/workspaces/level.py` + `missions.py` (stages, J-Galaxy missions)

| Area | Content |
|---|---|
| Browser | **Stages**: 36 `bg_xx` sets (+ shared `SuddenDeath.bin`) labelled by battle stage index, mission count, layers / floor / gimmick / data · **J-Galaxy missions**: 142 progression nodes grouped by 65 planets (definition id and stage per node); one filter for both |
| Viewport | background layers composited back→front; tile hover readout; Select / Paint / Picker brush tools |
| Layers | Backgrounds (eye toggles; `*_sud` alternates start hidden) · **Read-only overlays**: camera, objects, stage table, collision, gimmicks — *unavailable*, never drawn |
| Inspector | selected mission (title, definition, stage index → stem, rule, opponents, time value); stage (battle stage index, table words, missions on this stage); layer map/storage/tiles/banks/pairing + evidence; tile entry, brush and unapplied status |
| Bottom | **Mission** (goal slots, reward editor, definition rename); Tile set sheet, palette bank and flip controls; Stage data (read-only hex of .cam/.mob/.bin, gimmick member list); Problems; PNG export |

Missions and stages are one workspace because every mission is a battle on a stage:
ARM9 `FUN_0207538C` copies definition `+0x75` to 0x020AFE9C → battle object +0x160,
which indexes the stage table at 0x02092D08 (36 × `{char *stem, s16, s16}`,
`jus_formats.roster.STAGES`, checked against the ARM9 by `tests/test_stage_table.py`).
Every one of the 56 mission and 75 battle definitions names a shipped stage set. The
two s16 words are passed by ov06 to `FUN_020734E0` / `FUN_0207361C` (likely music, not
verified). Rule (`+0x76`), opponent count (`+0x79`+1) and time (`+0x7A`) are shown read-only.

Mission rewards: overlay1 `FUN_0214E380` reads the node's 20-byte reward slots and passes
Koma IDs into main `FUN_02075F98` → `FUN_02071360` save unlock bits. The original
`jgalaxy.aar` (174 members) rebuilds byte-for-byte identically; changing one reward
preserves every other member. Goal/condition fields, unknown tail bytes, record counts and
IDs are fixed. Details: `docs/MISSION_REWARD_TRACE.md`. `bin/jpower.bin` (evolution) is
still read-only.

Codecs: `jus_formats/altm.py` (Inferred; 1,558/1,558 decode), `jus_package/tilemap.py`,
`jus_package/scenes.py`, `jus_formats/progression.py`. Undo/redo acts on the half shown in the
bottom dock (the Mission tab → progression files, any other tab → the stage's tile maps).
Apply writes both, with rebuild/reference validation. No save path exists for gameplay overlays.
Next: BG priority/scroll from the stage code, then camera/mob tracing.

## Screen (Ctrl+6) — `app/workspaces/screen.py`

| Area | Content |
|---|---|
| Browser | every menu/scene archive (excluding chr/efc/koma/stage/demo), nested archives expand lazily |
| Viewport | DS top + bottom 256×192 screens; optional "whole layers" ghost |
| Layers | backgrounds back→front; "not drawn yet": DSTX 0x05/0x06 layouts, sprites |
| Inspector | preview screen (Top/Bottom/Hidden), scroll X/Y (wraps like a text BG), order ▲▼, map facts, evidence |
| Bottom | Resources table (decoder + evidence per member, double-click a nested archive to open it); Problems |

Screen assignment uses a name heuristic (`top`/`under`…) and is a **preview only** — the
real BG slot, priority and scroll are not traced and nothing here is saved.
Nested DSTX/DSIG screen objects now have a selectable, read-only sprite frame preview
with nested archive search and correct member selection. ALMT time-driven playback and
DSTX 0x05/0x06 placement still await tracing. See `NESTED_AAR_SCREEN_AUDIT_20261105.md`.
Next: ALMT time-driven UI animations and verified on-screen sprite placement on the shared
timeline, hit-zone overlay later.

## Not done / open

* The References workspace was dropped (2026-11-05): where-used browsing is not an edit.
  `jus_package/registry.py` stays as a library (tests, save checks) for future
  dependency-driven invalidation.
* Level `.mob`/`.bin`/`.cam`, collision and gimmicks remain read-only. Screen
  backgrounds remain preview-only pending BG slot/priority/scroll tracing.
* Emulator verification of ALTM rendering, effect draw order and pursuer motion.

### DSTX 0x05/0x06 diagnostic (2026-11-05)

The Screen workspace now reads and inspects the four-byte tile-panel descriptors of these layouts, and displays their count/base tile/dimensions. See `docs/EFFECT_AND_FORMATS_TRACE_20261105.md`. Their auxiliary placement section remains opaque and read-only; this is not sprite/background drawing support.
