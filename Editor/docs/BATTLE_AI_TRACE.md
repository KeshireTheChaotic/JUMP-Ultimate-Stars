# Battle AI data (overlay 11) and small bin tables — 2026-11-06

Static trace of the SHA-verified overlay 11 plus the shipped `chr/ChrBin.aar`. No
emulator capture. Parser: `jus_formats/battleai.py`; tests: `tests/test_battleai_bins.py`.

## Where the AI lives

Overlay 11 is the battle AI. Its source files are `BattleAI.cpp`, `BattleAI_Deck.cpp`,
`BattleAI_Move.cpp`, `BattleAI_State.cpp`, `BattleAI_JobAtkBrh.cpp` and
`BattleAI_JobAtkCmd.cpp`. `BattleAI_Create` (0x02172A60) loads `chr/ai/ai_param.bin`
and builds one AI object ('AOBJ') per player, each with a command node and a branch
node (`BattleAIObj_CreateCommandNode` / `BattleAIObj_CreateBranchNode`).

AGENTS.md notes that the overlay manager never selects ov11; how ov11 becomes
resident is not traced here.

## chr/ai/&lt;id&gt;.bin — AIPM, AI attack profile (267 files)

`BattleAIDeck_Create` (0x02174330) opens `chr/ai/` + the character's roster name +
`.bin` for every deck card (battle table 0x020924B0, support 0x02092700), then reads
blocks with `FUN_02174F58(file, FUN_021733B4(selector))`.

| Bytes | Meaning | Evidence |
|---|---|---|
| +0 | `'AIPM'` | data |
| +4 | 00 01 FF FE in all files | data |
| +8 | 23 × s32 block offsets, −1 = none | `FUN_02174F58` |
| table 0x02181100 | selector n → index n−1 (0 → none) | overlay 11 bytes |

Index i is **input selector i+1** (`jus_formats.battleinput`). Indices 2–11 occur in
exactly the 74 battle-character files, and indices 12–21 in 55/51/41/16/11 files:
the characters with 4/5/6/7/8-koma specials. The other 193 files are support
characters, which use block 0 or 1.

**Block:** a 0x9C-byte header (+0x04 selector number, +0x0C u8 hit count), then
count × 0x20-byte hit records. One record slot stays reserved when the count is 0.

| Record field | Meaning | Evidence |
|---|---|---|
| +0..+7 s16 ×4 | attack box: centre x, y, half-width, half-height (facing right) | x + half-width gives the near/mid/far reach class (< 0x50 / < 0xA0) in BattleAIDeck_Create; matches the move's CollisionRect |
| +0x14 / +0x16 s16 | active ticks (first, last) | 0x02175AD0 tests the AI's frame counter +0xBE against them |
| +0x0C s32 | power: copy of the move's `chr/col` record +0x04 | data; the AI scores power × 2 + (+0x10) |
| +0x10 s32 | second score term | BattleAIDeck_Create |
| +0x18 / +0x19 u8 | copies of chr/col bytes 0 / 1 | data |
| +0x1A s8 | status; \|value\| indexes the 42-entry weight table 0x02181166 | BattleAIDeck_Create |
| +0x1B u8 | flag; with +0x18 < 4 → attack flag 0x80, else 0x100 | 0x02175AD0 |

**Cross-check (db_b_01, B neutral = selector 1, move 0x5C11E):**

| Source | Box | Active ticks | Power |
|---|---|---|---|
| AIPM record | (31, −26, 21, 14) | 9–12 | 8 |
| Move tracks / chr/col | CollisionRect1 [10, −40, 53, −11] | CollisionEnable1 on 9–12 | col record 0 +0x04 = 8 |

## chr/ai/move/&lt;stage&gt;/{f,n,s}_m.bin — AIMV, AI navigation graph (108 files)

`BattleAIMove_Create` (0x0217693C; path builder 0x02177060) reads the file as:

| Part | Content |
|---|---|
| +4 | 7 offsets to 7 movement rows of 0x28 bytes (copied into the AI object; row contents not traced) |
| +0x20 | node offsets |
| each 0x78-byte node | 8-byte head, then 7 lists (one per movement row) of up to 16 reachable node ids, ended by −1 |

Node i is collider i of the stage `.bin`; the node count equals the collider count on
all 36 stages. The three files are alternative profiles chosen per character.

## chr/ai/ai_param.bin

89 × 0x30-byte records. ov12 `JArena_ParamResult` (0x021C56D0) indexes them with a
per-character byte (+0x34) and reads +0x2E as a rating. The other fields are not traced.

## Editor

* **Animation:** for a battle character's base table, the move list gets a Control
  column. The viewport draws the AI hit boxes (dashed, solid while active); toggle
  "AI attack profile" under Show. The inspector lists the hits.
* **Level:** the header has "AI nav" (off / all / row 0–6) and a profile (f/n/s).
  Links are drawn between collider top centres.
* **Archive:** selecting a chr/ai member shows its decoded summary.

## Small tables (`jus_formats/bintables.py`)

* **Text tables** (self-relative CP932, `|` = space): `komatxt.bin` (890 Koma names,
  shown in the Koma inspector), `chr_s_t.bin` (193 × 9), `ability_t.bin` (57 × 3),
  `rulemess.bin` (22 × 3 messages + a number), `title.bin`, `infoname.bin`.
* **Deck presets** (`deck/Deck.aar`, 0x5C bytes, `FUN_02070A28`): 16 × {u16 Koma id,
  u16 placement} plus a 28-byte CP932 name. Placement bits 0–3 / 4–7 are the
  column / row on the 5×4 board: with the cards' shapes, all 1,788 cards in the 295
  presets fit the board. Bits 8–11 and 0x1000 are raw. The 0x40-byte `p*.bin` files
  are another format, not decoded.

## Still undecoded

* AIPM block header beyond +0x04/+0x0C; the AIMV movement rows and node head; the
  ai_param fields. The decision logic itself is in BattleAI_State/JobAtk, not traced.
* jquiz.bin, the counted 8-byte UI and J-Galaxy tables, the tutorials, StaffRoll /
  TitleOrder, commwin / demo / piece / jpower / bgm / location / pname / secret,
  deck p-files, dwc/utility.bin.
