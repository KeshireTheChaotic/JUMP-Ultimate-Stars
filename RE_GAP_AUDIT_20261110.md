# Reverse-engineering gap audit — 2026-11-10

Measured from the current Ghidra layout exports (`reverse_engineering/functions_layout`), the layout reports (`reverse_engineering/reports/layout`), the Editor (`Editor/`, 607 unit tests and the GUI smoke test pass) and the port (`port/`). Every number below was counted for this audit.

## 0. Urgent: missing files
| Gap | Detail |
|---|---|
| `docs\Research` and `docs\Proposals` emptied | The folders exist again, but the old research was cleaned out (2026-11-10). The Editor still cites research files by name 38 times (FORMATS.md 15, README 3, gametables.py, BATTLE_AI_TRACE.md …); those citations now point at deleted files. Tools that only write reports there work again. Tools that read earlier research CSVs will stop on a missing file, e.g. `audit_full_game_archive_decoding.py` (`ALL_BIN_ASSET_INVENTORY_20261106.csv`). `tests/test_research_enums.py` skips without it. |

## 1. Code analysis (Ghidra)
| Area | Measured state | Gap |
|---|---|---|
| Function names | 2,541 of 15,186 exported functions named. 12,645 are `FUN_` (83%). | Per program, named/total: main 1,770/5,980, ov06 battle 26/1,025, ov08 DWC 2/1,109, ov10 WiFiGame 23/1,499, ov05 33/671, ov01 39/532, ov00 40/346, ARM7 87/904. ov12 (AL engine) is the best covered: 342/1,224. |
| Battle AI overlay | `ov11_refs.json`: 0 references reach ov11-only code; the overlay manager never loads ov11. | **Contradiction:** the Editor's AI semantics (AIPM selector profiles, AIMV navigation graph, ai_param rating) come from ov11 code. Find out which code reads `chr/ai/*` in the shipped game (ov06 / ov10 / main) before relying on those meanings. |
| Game-code naming | 79 ambiguous cases. 72 are engine-header template copies (`ALControllerImp::Create`, `ALWidgetImp::Create`, `ALObjectImp::PostSyncMessage` …). | ov07 0x02165158 (`CommuMenuError_WiFi_Add` vs `_Wrls_Add`) is still open. |
| Classes | 166 `jus_Class_<vtable>` classes have no name. | About 40 are built inline by unnamed builders (e.g. ov01 `0216ba10`, ov04 `0216094c`, ov07 `021695c0`, property factory `FUN_02020f7c`). |
| Indirect flow | 40 "Could not recover jumptable" and 52 `UNRECOVERED_JUMPTABLE`. | Most are known: 33 conditional returns, plus the division routines. ov08 0x0215209C jumps into code that was never disassembled. |
| Cross-program calls | 5 unresolved slot calls in scene_map. 20 call targets have no function anywhere; 6 are data-as-code, 14 are unexplained. | AGENTS.md still says 17 unresolved slot calls and 6 unlabelled scenes. scene_map now labels all 46 scenes, so AGENTS.md is out of date. |
| SDK | Touch sampler (0x0380504C/529C/5494), touch init 0x03804F3C, RTC command layer, WM, GX/VRAM init 0x02065058 | Not named. |

## 2. Data formats
| Status | Files / fields |
|---|---|
| No verified schema (53 file instances) | 50 demo MDF files, the opening VXDS audio track (video decodes), `opening/pattern.bin`, `stage/SuddenDeath.bin` |
| Researched layout, not read by the Editor | `battle/tutorial0–5.bin` and `deckmake/tutorial.bin` (12-byte commands, opcode table 0x0209DECC); deck `p*.bin` (0x40 bytes); the NitroFS inside `dwc/utility.bin` |
| Structure known, field meanings open | `jpower.bin` cells (5×3×20 bytes); `secret.bin` +0/+2; `commwin.bin` header bytes 0–2; numeric fields of `piece`/`bgm`/`location`/`demo`; StaffRoll row kinds; deck placement bits 8–12; AIPM header beyond +0x04/+0x0C; AIMV node head; ai_param fields except the +0x2E rating |
| Loader not traced (Editor marks as Inferred) | ALTM header bytes and BG slot/priority/scroll; Common/chr portrait pairing (`…aa`/`…va` → `…a.dig`, `…ab` → `…b.dig`; fits all 231 maps); 8bpp extended-palette banks; ALMT keyed-track start (heuristic); interpolator 0x494C curve (taken as linear) |
| Open engine fields | ALMT `EffectFlags`; ALOD property descriptors; DSIG v2 `b7`; ALAR2 flag bit 1 and attribute bit 24 vs 25; DSTX 0x05/0x06 placement; stage `.cam`; stage BIN 8-byte trailer; `chara_action` sub-codes; collider class names (+0x00 is a precedence code); 41 shot handler/bit combinations |
| Runtime behaviour (port only; out of scope for the Editor) | In-game draw order of overlapping pieces; collision response; projectile paths (they depend on input, PRNG and stage state) |

## 3. Editor (features the RE data does not support yet)
- **Screen:** runtime position, priority, scroll phase and blending are not traced. LCD routing is unknown for scenes without a traced swap. Scene-constructor dispatch needs a downstream trace. Character sprites on menus depend on runtime state. Layer screen/scroll is a name heuristic.
- **Level:** ALTM loader not traced; the stage table words passed to FUN_020734E0/0207361C may be music, not confirmed.
- **Koma:** mission and evolution unlock tables are not traced.
- **Sound:** for characters that have koma of several sizes, which sound bank cue 0x0402 plays depends on the deck, so the Editor only previews it.
- **Game tables** (`gametables.py`) are read-only; there is no writer for jquiz, commwin, StaffRoll, jpower and the others.
- **Roster** is hard-coded in ARM9: characters can be replaced, not added.
- **Audio playback:** SDAT names are resolved; sequences are not played.

### Out of scope for the Editor: engine recreation
The Editor edits and previews data; it does not re-create the engine. These are not Editor gaps (they belong to the native port, if anywhere):
- physics and collision response (floor/wall reactions, knockback, hits);
- live projectile travel, beam extension and steering, which depend on input, PRNG and stage state;
- frame-perfect runtime composition: live scroll phase, blending, GX matrices and the in-game draw order of overlapping pieces;
- AI decision-making and live sound-bank selection that depend on the battle state.

Previews of these stay source previews (authored data only), as they are today.

## 4. Native port
- 4 of 46 scenes translated (Copyright, Opening, Title, TopMenu); 42 are placeholders.
- 32 `ISceneExternals` callees are untranslated.
- Not done:
  - saving (RecordSave 0x02072AB4);
  - audio;
  - text (ALText/AFT; a font trace exists in `reverse_engineering/docs/AFT_FONT_RASTERIZATION_TRACE_20261108.md`);
  - an engine widget/node layer;
  - 3D/blending (the renderer is GDI);
  - soft reset (FUN_0206dcec);
  - Opening PassMark/Secret;
  - TopMenu character display and unlock effect.
- No melonDS comparison of timing, colours or layering.

## 5. Suggested order
1. Remove or rewrite the 38 citations of deleted research files, and make the audit tools work without the old research CSVs. (Original game data can be re-extracted from `JUS.nds`, so `data` needs no separate backup.)
2. Resolve the ov11 contradiction: find the live consumer of `chr/ai/*`.
3. Battle overlay ov06 naming (26/1,025): the playable slice and most Editor semantics depend on it.
4. Port: save writing and text rendering (the P1 items in TODO.md).
5. Tutorial scripts and deck p-files: small formats with research already done.
