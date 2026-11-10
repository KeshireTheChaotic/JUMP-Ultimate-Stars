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

Three modes: **Scenes** (default), **Screens** (archive background previews), and **Elements** (nested DSTX source frames and DSTX 0x05/0x06 tile-panel inspection).

| Area | Content |
|---|---|
| Browser | Scenes: 46 original scene IDs and typed transition edges; Screens: original menu-background archives; Elements: nested sprite archives |
| Viewport | Two 256×192 DS screens; evidence-backed widget sprite composition and source-frame alpha picking in Scenes mode |
| Layers | original background layers plus traced UI sprite widgets; no unverified widget placement |
| Inspector | native scene ID/overlay, source archive, selected widget origin (locked), move ID, frame, target, evidence and Edit Sprite action |
| Bottom | archive Resources, source atlas-frame inspector, and Problems |

`jus_package/screen_metadata.json` embeds read-only metadata extracted from the original ARM9 scene table and overlays. TopMenu (8 widgets) and J-Arena (4 widgets) currently have verified per-widget origins and move IDs. Their actual sprites and initial ALMT frames are loaded from original nested AARs at runtime. Double-clicking a composed sprite (or choosing **Edit selected sprite**) opens the corresponding frame in the existing source-aware Sprite workspace; Apply Sprite/Save persist the **resource edit**, while layout metadata stays immutable. See `SCREEN_SCENE_COMPOSITION_20261107.md`.

**Hardware routing traced 2026-11-08:** ARM9 `FUN_02043264` writes the display-swap bit in `POWCNT1` (0x04000304). Main graphics engine A is on Bottom when bit15=0, on Top when bit15=1. TopMenu and J-Arena's 12 mapped sprite widgets render with the main-engine context and are **verified Bottom**. Ten scene-entry swap configurations are metadata-backed; RuleSelect dynamically swaps later. The Scenes inspector shows confirmed engine/LCD mappings. See `D:\Library\Development\JUS\reverse_engineering\docs\SCREEN_DISPLAY_ROUTING_TRACE_20261108.md`.

**Native 46-ID renderer coverage (2026-11-08, supersedes the earlier 18-ID BG-count paragraph below):** The complete original ARM9 scene table has **46/46 classified native IDs** in jus_package/screen_native_registry.json. **28 IDs** now have at least one source-verified ALTM/DIG background binding; the remaining **18** are native movie, battle/stage, 3D, runtime sprite/result, or indirect callback renderers without verified static BG composition. All six original JQuiz, Communication, JGalaxy and JArena ROM callback families are indexed. Scenes9/10/33 use real KomaList/KomaState backgrounds, 17/19 conditional JGalaxy ClearList variants, 20 Ending variants, 22/28 J-Arena maps, 37/42 conditional Communication maps. No characters are rendered: these belong to the player saved decks. All original assets remain editable; native hardware positions/routing stay hard-coded; unresolved visuals are not invented. Original ROM source citations, exact per-ID status and tests are in reverse_engineering/docs/SCREEN_ALL_46_NATIVE_RENDERERS_TRACE_20261108.md.

**Indirect callback/render trace (2026-11-08):** Scene backgrounds are now source-backed for **18/46** IDs (00,02,03,04,05,06,07,08,15,18,21,29,30,32,34,36,38,40), from the original scene dispatch table, overlay ROM function-pointer words and loader functions. Scene0 Copyright loads original loose BGs without an invented archive; JQuiz18/40 uses verified post-dispatch callback states; Scene29 CommonInfo binds editable InfoDeck record 0x44; Communication36/38 preserves source-hidden BG2 instances. All 46 scene code paths, 35 original JQuiz/Commu selector table entries, CharaData action ID offsets and per-scene GPU-site evidence can be inspected in the Screen inspector and ARM9 Code References dock. Unknown scene BGs are neither displayed nor rasterized in Scenes mode. GPU blend/scroll phase and 28 scene compositions are still unresolved, not emulated. Complete source and ROM references: SCREEN_INDIRECT_RENDER_CALLBACK_TRACE_20261108.md in reverse_engineering/docs.

**Earlier source authority & editability (2026-11-08; superseded counts):** Original ARM9 code, not melonDS or filename heuristics, determines engine layout and initial BGxCNT priorities. 12 scene IDs (02,03,04,05,06,07,08,15,21,30,32,34) now have source-backed backgrounds, including DeckCheck, Input modes, VsCall and JPower. All 46 scenes have per-resource code references and function line citations; referenced resources are not automatically classified as on-screen. Source pixel, tile, animation, palette, font and binary data and all 146 InfoDeck records are editable via Edit source data / Edit InfoDeck text, with staged save and validation. Hard-coded positions, BG slots, LCD routing, priority, callbacks, scene transitions and collision remain read-only. See SCREEN_CODE_AUTHORITY_EDITING_TRACE_20261108.md in the RE docs.

**Scene variants and original explanation text (2026-11-08):** Scenes mode now reconstructs **source-backed BG instances and both physical LCDs** for scenes 02 Title, 03 TopMenu, 04 DeckSelect, 06 StageSelect, 07 RuleSelect, 21 J-Arena, 32 Database, and 34 Options. The top-screen CommonInfo backgrounds and optional per-series manga image are explicit sources, not duplicated/guessed thumbnails. Variant dropdowns separate solo/communication, runtime LCD swaps, character/series pictures, and Database subviews. Original NCCL `.ncl` palette banks decode correctly; the still preview can apply matching engine palette banks. **Original three-line explanation text** is linked to selectable TopMenu/J-Arena widgets and RuleSelect/Options mode records, and edits are staged safely in all 42 byte-identical `bin/info/*.bin` entries inside `bin/InfoDeck.aar`. Scroll/space animation remains frozen but is labeled in the Layers dock and inspector. Hard-coded layout cannot be edited. See `D:\Library\Development\JUS\reverse_engineering\docs\SCREEN_NCL_TEXT_VARIANT_TRACE_20261108.md`.

**AFT font rasterization traced 2026-11-08:** `jus_formats/aft.py` now extracts the original game glyph pixels from all four ALFT/AFT fonts (`jskfont`, `js8font`, `jskfont_q`, `DSFont`). The Screen workspace renders explanation text with original 6×14 `jskfont.aft` bitmap pixels, CP932 source string mapping, and the real intentionally blank `|` glyph, at code-backed 224×16 CommonInfo line positions. No system-font substitution. Original runtime palette/tint, hardware BG compositing, and some conditional font-draw branches remain to confirm. See `D:\Library\Development\JUS\reverse_engineering\docs\AFT_FONT_RASTERIZATION_TRACE_20261108.md`.

**TopMenu source authority:** The original ARM9 overlay0 function arm9_ov00_02153cfc.c proves the eight icon coordinates at y50/102, eight separate captions y+20, and two right-side widgets. arm9_ov12_021bcf1c.c proves the source icon/speech objects. The original ARM9 priority writer arm9_main_02042d14.c sets sub BG3 priority0 (front), BG2 priority1, BG1 priority2; no emulator-based draw-order rule is used. The first source-authoritative variant is the original constructor mode0; the JUS.ml2 screenshot and state are separately selectable secondary observations only (selected J-Quiz and dynamic character roster), not native geometry authority. Original character DSTX/ALMT and texture sources are editable, while their unknown live poses and Y remain unplaced. See TOPMENU_WYSIWYG_ELEMENT_TRACE_20261108.md and SCREEN_CODE_AUTHORITY_EDITING_TRACE_20261108.md in RE docs.

**Not fully reconstructed:** original active ALMT poses and Y of the two dynamic TopMenu characters, frame-by-frame galaxy effects, 28 other scenes' native BG composition, most scenes' widget placements, hardware font palette tint, runtime BG-priority callbacks/blend and scroll timing. `Screens` mode retains the existing unsaved background preview controls. Unverified widgets and screenshots are not fabricated. ALMT time-driven UI animation and DSTX 0x05/0x06 auxiliary placement still await tracing. See `NESTED_AAR_SCREEN_AUDIT_20261105.md`.

## Not done / open

* The References workspace was dropped (2026-11-05): where-used browsing is not an edit.
  `jus_package/registry.py` stays as a library (tests, save checks) for future
  dependency-driven invalidation.
* Level `.cam` and unclassified `.mob`/`.bin` fields remain read-only; known spawner, physics, collider and gimmick fields have bounded editing. Screen
  native BG instances are now source-backed for 12 scenes; remaining untraced scenes stay preview-only/hidden.
* Emulator verification of ALTM rendering, effect draw order and pursuer motion.

### DSTX 0x05/0x06 diagnostic (2026-11-05)

The Screen workspace now reads and inspects the four-byte tile-panel descriptors of these layouts, and displays their count/base tile/dimensions. See `docs/EFFECT_AND_FORMATS_TRACE_20261105.md`. Their auxiliary placement section remains opaque and read-only; this is not sprite/background drawing support.


## Tutorial script editing and normal-path mission links (2026-11-07)

Before other Level P0 tasks, the Level workspace now has a **Tutorial scripts**
bottom ribbon with direct source-backed editing of all seven original script
files: battle/tutorial0..5.bin and deckmake/tutorial.bin. The user can edit raw
opcode/arg1/arg2, insert or remove commands, and edit original CP932 text.
No automatic skip/bypass buttons exist. The native opcode 13 terminal cleanup
is retained, and original files remain unchanged until Level Apply / Save.

A J-Galaxy **battle** definition with rule 3 selects tutorial battle mode
0x0C on the normal scene path. Definition +0x70 chooses an existing script
slot 0–5. The right Mission Inspector shows this selector and lets it be
changed for rule-3 battle definitions (including clones); shared definition
warnings still apply. Original seven tutorial definitions: battle IDs
0,1,2,3,72,73,74, selecting slots 0,1,2,0,3,4,5. J-Galaxy contains 18
node references, including travel/warp nodes sharing definition 0: reference
alone does not prove the tutorial fight actually runs. None of the 56 original
mission.bin definitions use tutorial rule3. Other scene launch modes may
override normal battle type.

Additional *new* tutorial script slots are **not supported by mission data
alone**: original overlay6 uses six hardcoded pointer entries at 0x02171C20.
An extra .bin file or a new mission definition does not extend that table.
Deckmaking's one tutorial script is loaded via a separate overlay5 path.

New Editor tests/test_tutorial_workspace.py; full regression suite passed
327 tests, 1 skipped. No original Data, ROM, or Ghidra source was modified.
