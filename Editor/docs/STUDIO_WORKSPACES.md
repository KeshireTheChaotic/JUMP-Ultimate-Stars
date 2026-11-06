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

## Level (Ctrl+5) — `app/workspaces/level.py` + `missions.py` + `mapobjects.py`

The Level Workspace now mirrors the original J-Galaxy map navigation. The
left-hand tree is **space node → galaxy cluster → world/planet → mission**,
using the three explicit child-ID arrays in `jgalaxy.bin` rather than inferring
relationships from display names. The four graph section sizes are 0x3C,
0x48, 0x40 and 0x88 bytes respectively. Their runtime traversal is traced in
ARM9 overlay 00 at 0x02153CFC. Unlinked records appear in a diagnostic branch
rather than being silently hidden. A filter searches the whole hierarchy.

| Area | Content |
|---|---|
| Left browser | Space nodes (J-Space etc.) > galaxy clusters (Demoniac etc.) > planets > missions. Shows original CP932 titles and mission type/definition ID. |
| Viewport | Mission's assigned stage, background layers, tile Select/Paint/Picker tools, collision and spawn projections. |
| Right inspector | **Mission / Rewards**: editable CP932 title, world/mission links, stage, environment gate, raw battle rule, opponent count, time value, goal codes, Koma/resource rewards, and experimental clone/delete. **Stage / Map**: stage and layer facts. |
| Bottom dock | **Map objects**: spawners, item markers, trigger/gimmick positions and timers, collision shapes, moving platforms/paths and conveyors; **Map layers**, **Tile set**, read-only raw data, runtime diagnostics, Problems. |
| Persistence | In-memory edit → Undo/Redo → Apply (reparse, validate name/reference integrity, stage codecs) → Save archive. Structural cloning modifies known binary counts and offsets but remains emulator-unverified. |

**Encoding safety:** all graph and mission/battle names are displayed as strict
CP932 (Windows Shift-JIS) with exact re-encoding; noncanonical or malformed
original bytes are shown as hex and left untouched. Explicit title edits must
round-trip in CP932 and fit the existing 0x70-byte name field. The Apply path
checks changed title fields without requiring malformed originals to be
rewritten. `tools/verify_cp932_names.py --data <extracted data root>` produces
a per-title comparison of CP932 and strict `shift_jis` against exact name
bytes. **The full original-data audit must be run with the actual game data;
no original name corpus was mounted for this patch**. The two codecs are not
interchangeable for CP932 extensions.

**Scope / known gaps:** map tree items use text/glyph labels; exact in-game
space/galaxy/world sprites cannot be bound until the corresponding asset atlas
and ID-to-sprite mapping are located in the game data. Stage object cloning
is not proven safe for savegame or runtime references. The raw battle rule and
time selectors remain numerical because their gameplay enums are incompletely
classified. Triggers are labeled from currently understood gimmick classes;
not every unclassified gimmick or camera field is editable. Test with a fresh
save in melonDS.

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
* Level `.cam` and unclassified `.mob`/`.bin` fields remain read-only; known spawner, physics, collider and gimmick fields have bounded editing. Screen
  backgrounds remain preview-only pending BG slot/priority/scroll tracing.
* Emulator verification of ALTM rendering, effect draw order and pursuer motion.

### DSTX 0x05/0x06 diagnostic (2026-11-05)

The Screen workspace now reads and inspects the four-byte tile-panel descriptors of these layouts, and displays their count/base tile/dimensions. See `docs/EFFECT_AND_FORMATS_TRACE_20261105.md`. Their auxiliary placement section remains opaque and read-only; this is not sprite/background drawing support.
