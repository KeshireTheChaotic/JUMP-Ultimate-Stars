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
| Viewport | panels in a row (page arrangement unknown), Select/Pencil/Picker, pixel grid ≥6× |
| Inspector | asset/panel facts, clickable 16-colour palette (double-click edits), evidence |
| Bottom | Panels strip; Import/Export panel PNG, Export all, Apply; Problems |

Codec `jus_formats/koma.py`: Direct, 898/898 byte-exact. Editable now (pixels, palette,
PNG import), undoable, Apply → Save writes `koma.aar`.
Next: where-used links, page/deck layout once researched.

## Level (Ctrl+5) — `app/workspaces/level.py` (v1 visual-only, locked scope)

| Area | Content |
|---|---|
| Browser | 36 `bg_xx` stage sets (+ shared `SuddenDeath.bin`): layers / floor / gimmick / data |
| Viewport | background layers composited back→front in list order; tile hover readout; click inspects a tile |
| Layers | Backgrounds (eye toggles; `*_sud` alternates start hidden) · **Read-only overlays**: camera, objects, stage table, collision, gimmicks — *unavailable*, never drawn |
| Inspector | layer map/storage/tiles/banks/pairing + evidence; tile entry; overlay provenance |
| Bottom | Tile set sheet; Stage data (read-only hex of .cam/.mob/.bin, gimmick member list); Problems; layer/composite PNG export |

Codecs: `jus_formats/altm.py` (Inferred; 1,558/1,558 decode), `jus_package/tilemap.py`,
`jus_package/scenes.py`. No save path exists for overlays.
Next: background tile painting (the ALTM encoder already re-packs edited maps),
BG priority/scroll from the stage code, then camera/mob tracing.

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
Next: DSTX 0x05/0x06 layout parser, screen sprite/animation layers on the shared
timeline, hit-zone overlay later.

## References (Ctrl+7) — `app/workspaces/references.py`

| Area | Content |
|---|---|
| Browser | search (name / resource id / move id), type filter, archive tree when empty |
| Viewport | reference viewer: referencers → selected → dependencies (Unreal style), click to re-centre, Back |
| Inspector | resource facts, group, *Open in workspace*, per-move filter, reference counts + evidence |
| Bottom | Referenced by · Uses (exact move/node/key/tick or record) · Unresolved · Summary |

Registry `jus_package/registry.py`: 12,733 resources, 25,348 references, 0 unresolved
on the shipped data. Ids resolve in the source's group (one character's archives or the
top-level file), then `efc/*.aar`. Built on a background thread from a separate
read-only `DataRoot`, so it reflects the files on disk; rebuilt after Save.

## Not done / open

* Registry: dependency-driven preview invalidation and cross-archive transactions
  (docs/04) build on this index next; edges for DSTX 0x05/0x06 layouts, ALOD and
  stage .bin/.cam/.mob wait for their formats.
* Level/Screen editing (they are viewers plus exports in this round).
* Emulator verification of ALTM rendering, effect draw order and pursuer motion.
