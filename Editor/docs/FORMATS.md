# JUS resource formats — as implemented in `jus_formats`

All values little-endian. "Verified" means checked against every relevant file in
`D:\Library\Development\JUS\data` by `tests/roundtrip_scan.py` / `tests/sprite_scan.py`
(2026-11-04) unless stated otherwise.

**2026-11-10 external research reconciliation:** See
[`JUS_RESEARCH_RECONCILIATION_20261110.md`](JUS_RESEARCH_RECONCILIATION_20261110.md)
before importing field names or derived tables from `jus-research-main.zip`.
In particular, its `docs/formats/Combat-Formats.md` misidentifies the
Koma purchase/evolution table `bin/jpower.bin` as combat damage data and
assigns incorrect labels to several `chr/col` bytes. Native source-backed
`jus_formats/jpower.py` and `jus_formats/chrbin.py` take precedence.
Battle-Koma nature resolution from `koma.bin +0x0B` is available as
read-only `jus_formats.kshape.native_card_nature`.

**2026-11-10 native combat follow-up:** The source and ROM verification in
[`NATIVE_COMBAT_VERIFICATION_20261110.md`](NATIVE_COMBAT_VERIFICATION_20261110.md)
establishes `chr/col +0x04` as the **signed base HP-damage byte**,
`+0x05` as a separate SP-pressure contribution, and `+0x07` as a
hit-stun contribution. `+0x0E` also indexes the engine's damage-gate
class table, independently of its impact-effect use. Original `jpower.bin`
remains the Koma purchase/evolution table. In `jus_formats.chrbin`,
the old keys `contact` and `accumulator` are retained as compatibility
aliases with corrected labels; `base_damage` is an editable native field.

## Corpus results

| Check | Result |
|---|---|
| ALAR v2 parse → build byte-identical (incl. nested, DSCP-unwrapped) | 1517 / 1517 |
| ALAR v3 parse → build byte-identical | 32 / 32 |
| ALAR member name hashes reproduced | 12,733 / 12,733 |
| ALAR2 header id range rule | 1517 / 1517 |
| ALMT parse → build, forced re-encode of every move, JSON round trip | 1547 / 1547 each |
| ALMT tracks needing opaque storage | none: `NoteTrack` bodies (1842) decode and rebuild exactly via `jus_formats.notetrack` |
| ALMT archive span rule (attributes low 16 = max move id − entry id + 1) | 1547 / 1547 |
| ALOD pass-through | 1247 / 1247 |
| DSIG parse → build (v1 and v2/0x40, standalone and embedded in sprite DSTX) | 4155 / 4155 |
| DSTX sprite tables (flags 0x03/0x83) parse → build | all character/effect files |
| Character frames: decode → re-encode with same layout byte-identical | 16,819 / 16,827 (other 8 differ only in hidden padding) |

| Koma DSTX v1 flags 0x04 parse → build (`jus_formats.koma`) | 898 / 898 (all 6×6-tile panels) |
| ALTM decode, every row exactly `map_w` entries (`jus_formats.altm`) | 1,558 / 1,558 (1,431 raw byte-identical, 127 packed) |
| GenerateID move ids resolved (character tables or `efc/*.aar`) | 1,538 / 1,538 keys in the first 60 characters |

DSTX flags 0x05/0x06 (menu/stage tile-panel layouts) are decoded by the separate
read-only panel map parser in jus_formats.dstx; the sprite-piece parser still
rejects them. Mode 5 uses u8 cells; mode 6 uses u16 LE cells. The parser
retains all original bytes. Flags 0x04 (koma panels) has its own codec below.

## Koma panels — DSTX v1 flags 0x04 (`jus_formats.koma`)

`'DSTX' u8 1, u8 0x04, u16 panel_count, u16 data_end`, then per panel
`u16 first_tile, u8 width_tiles, u8 height_tiles`, zero padding to `data_end`, then an
embedded DSIG v1 mode 0x10 (4bpp 8×8 tiles, one bank; `w08 = 8`, `w0A = 8 × tiles`).
Every panel is 6×6 tiles (48×48 px); tile 0 is unused and panel *n* starts at tile
`1 + 36n`, tiles row-major. Evidence: **Direct** (byte-exact on all 898 files; a panel
edit leaves neighbouring panels untouched). How panels sit on the card is given by
`bin/kshape.bin` + `bin/koma.bin`, below. Player deck serialization is outside the editor scope.

## Koma card shapes — `bin/kshape.bin` + `bin/koma.bin` (`jus_formats.kshape`)

From the 2026-11-05 trace package (`docs/JUS_GitHub_Sound_Koma_Trace_20261105.zip`),
re-verified here; both files rebuild byte-for-byte. **Direct.**

* `kshape.bin`: `u32 start[8]`, `u32 count[8]` (`[1,2,6,12,14,14,13,4]` = 66 shapes), then
  24-byte shapes: `u8 cell[20]` (**5 columns × 4 rows**, row-major; 0 empty, 1..n = art panel)
  + `u32 mask` (bit `row*5+col` set exactly for occupied cells — true for all 66).
  **Correction:** the trace package (and the first port) read the grid as 4 columns × 5 rows.
  ARM9 `FUN_02076E38` walks it as `row*5 + col` (rows < 4, columns < 5) and copies it onto
  the deck board, which is 5 cells wide (`FUN_020790F0` draws 5 × 4 cells of 48 px). With the
  right width, shape 9 is a 2×2 square and multi-panel art reads continuously.
* `koma.bin`: 890 × 12-byte cards. `+0 u16 index` (= record number), `+4 series id`,
  `+5 art index`, `+6 type` (0 battle koma, 1 support, 2 other), `+7 character record`
  (`chr_b.bin` / `chr_s.bin`), `+8 size−1`, `+9 variant`; other bytes unknown and
  preserved. Changing a card selector changes only `+8/+9` of that card.
  Editing a variant writes the corresponding `kshape.bin` shape and its derived mask;
  adding a variant increases a group count and shifts later global shape indices,
  without changing existing variant selectors. Removal requires explicit migration
  of any references (which may update multiple card selectors). A changed variant
  count is format-valid but runtime memory bounds have not been traced.
* Card → art (**Direct**): `FUN_020790F0` fills `koma/??_??.dtx` with the prefix table at
  `0x0209E840` (`roster.KOMA_SERIES_PREFIXES`, indexed by `+4`) and `+5` as two digits. The
  table settles the ids that panel counts alone could not: 2 = `is`, 11 = `nb`, 17 = `tz`,
  22 = `tl`, 35 = `mo`. Every card's size equals its art's panel count. Empty deck cells are
  drawn with `koma/dt_20.dtx`; `dt_21..dt_27` have no card.
* Shipped anomaly: shape 59 (size 7, variant 10) labels panel 4 twice and omits 5; card
  678 (`hk_10`) uses it. Reported, never renumbered.
* `bin/*.bin` are loose files: `DataRoot.write_file` stages them and Save writes them
  (with the same `.orig` backup rule as archives).

## Sound cues — SSAR mapping (`jus_package.sounds`, `jus_formats.roster`)

* `0x0400` → SSAR 122 `SEQ_BATTLE` (**Direct**). `0x0401`/`0x0402` → character
  `+0xA4`/`+0xA6`, filled from the form record (`ov06 FUN_02157114`).
* SSARs are named after the character id: `0x0401` = `SEQ_<CHAR>` (e.g. `SEQ_KN_B_01`),
  `0x0402` = `SEQ_<CHAR>_<k>` for moves in `chr/<char>_<k>.aar` — battle and support alike
  (**Inferred**, symbol match). On the shipped data: battle `0x0401` 442/442, support
  `0x0402` 418/431 (same as the trace package's CSV, all 431 agree).
* **Where the bank comes from (Direct, ARM9 main):** a "form" is a koma card in the deck.
  `FUN_02076E38` builds one deck node per `koma.bin` card (byte +6 type, +7 character
  record, +8 size−1) and zero-fills its form record; the type's init fills it —
  battle `FUN_02077C0C`: `+0x1E` (→ `+0xA4`, `0x0401`) = `chr_b.bin[+7] + 0x30`,
  `+0x20` (→ `+0xA6`, `0x0402`) = `chr_b.bin[+7] + 0x32 + (size−4)·2` (sizes 4–8);
  support `FUN_02077CB8`: `+0x20` = `chr_s.bin[+7] + 0x10 + (size−2)·2` (20-byte records,
  sizes 2–3), `+0x1E` never written. `Battle_CharaDataInit` / `FUN_0215F3E0` registers the
  nodes, `FUN_02157114` copies `+0x1E/+0x20` into the NoteTrack object's `+0xA4/+0xA6`.
  Every non-zero slot names `SEQ_<CHAR>` / `SEQ_<CHAR>_<size>` (battle 187/187, support
  242/242): the special-move archive `chr/<char>_<k>.aar` is the *k*-cell koma.
* `0x0402` in `<char>_<k>.aar`: slot *k*; a 0 slot is a real silence. In a base archive
  (moves shared by every koma) it is the deployed koma's slot — a deck choice. Resolved when
  `koma.bin` deploys the character at one size only (59 battle cues); otherwise the cue lists
  each size's outcome (371 battle cues) and the Sound inspector's *Deployed as* choice
  auditions one (a preview, evidence Unknown). The earlier "only archive whose sequence count
  fits" rule is dropped: it guessed, the game does not.
* Support `0x0401` (**Direct**): the summon (`ov06 FUN_021574CC` case 7) gives the support
  its own NoteTrack (`Battle_NoteTrackCreate` zero-fills 0xA8 bytes) and sets only `+0xA6`
  from the support form record — `+0xA4` stays 0, so it plays nothing. Spawned effect actors
  (`ov06 FUN_0216FB10`) copy their parent's `+0xA4/+0xA6`.
* The "missing" support banks (`na_s_02_2`, `ds_s_03_2`, `oj_s_01_2`, 11 cues): those
  supports' `chr_s.bin` slots are both 0, so `+0xA6` = 0 and the cue is silent in the game
  (**Direct**) — no bank is missing. `dn_s_25` (2 cues in its base archive) has 2- and
  3-cell support koma: the deck decides, like battle base-archive cues.
* **Record order (Direct):** the game names character archives from tables indexed by
  record — battle `{char *id, u32 res_base}[74]` at `0x020924B0` (`FUN_02074728`), support
  `[193]` at `0x02092700` (`FUN_02074CF4`), suffixes `'', _2 … _8` at `0x0209F198` by koma
  size. `jus_formats.roster` holds them (`BATTLE_IDS`, `SUPPORT_IDS`). Record 0 is `db_b_01`
  (Goku), record 47 `bb_b_01`: the earlier sorted-order mapping, which made `bb_b_01` play
  Goku's `SEQ_DB_B_01_5`, was wrong (the trace package's audit missed this). The
  `chr_b_t.bin` name blocks (53 Shift-JIS strings per record) agree and are kept as a check.

## ALTM tile maps (`jus_formats.altm`, resource type 0x46)

Evidence: **Inferred from data** (structure consistent with all 1,558 files; the ARM9
loader is not traced). Header 24 bytes: `'ALTM' u8 0, u8 flags (0x03 raw / 0x07 packed),
u8 2, u8 0, bytes 0C 0A 0B 00 (unknown, kept), u16 tile_w=8, u16 tile_h=8, u16 map_w,
u16 map_h, u32 0`.

* Raw: `map_w × map_h` u16 entries, row-major.
* Packed (flag bit 2): `u16 mode=2`, `u16 row_offset[map_h]` (bytes from the data start;
  identical rows share an offset), then per row commands `u16 cmd, u16 pattern[(cmd&0x3F)+1]`:
  `cmd>>8` = run length (0 = 256); the pattern repeats over the run; `cmd&0x40` = the tile
  number steps +1 per repetition, with `cmd&0x80` the step is −1. A row ends after
  `map_w` entries. No file uses 0x80 without 0x40.
* Entries are DS text-BG entries: bits 0–9 tile, 10 H-flip, 11 V-flip, 12–15 bank.
* Tiles: the same-stem `.dig` (DSIG v1 0x10 4bpp or 0x11 8bpp), or the DSIG embedded in a
  same-stem `.dtx` (flags 0x06). For 8bpp tile sets with more than 16 banks the entry's
  bank bits select a 256-colour extended palette slot (`bank × 256`); this is what makes
  `bg_xx_00` stage skies render correctly (**Inferred**, visual check). Maps without a
  same-stem image (`bg_xx_sud`) are shown with the tiles of the same-sized map (guess).
* The re-encoder shares identical rows and packs fills, repeating patterns and
  sequential runs; it is valid but not byte-identical to the original packer.
* Not decoded: which BG slot/screen a layer uses, its priority, scroll/parallax.

## Stage data (`stage/stage.aar`)

Per stage stem `bg_xx`: `bg_xx.aar` (ALTM layers + tiles), optional `bg_xx_floor.aar`
and `bg_xx_gimmick.aar`, and `bg_xx.bin` / `.cam` (32 or 36 bytes) / `.mob`. `.bin`
(BG records, colliders, AI grid) and `.mob` (physics, spawns, gimmick objects) are
decoded in `jus_formats.stagephysics`; collider types are in
`docs/STAGE_COLLIDER_TYPES_TRACE.md` and the AI navigation in `docs/BATTLE_AI_TRACE.md`.
The Level workspace draws and edits the verified `.bin` / `.mob` fields.

**Camera `.cam` structural decode (2026-11-08):** `jus_formats.stagecamera` reads
all 36 original files byte-for-byte. Header: three pairs of signed LE 16-bit
words at +0x00/+0x04/+0x08; mode u8 +0x0C (1 in all originals), point count u8
+0x0D (4 in 35 files, 5 in bg_old_yo.cam), reserved u16 +0x0E (zero), then
count × 4-byte signed coordinate pairs from +0x10. The first point equals the
first header pair in every original. The Level inspector shows these raw values.
**Unresolved:** the original runtime meaning of the header pairs and points,
camera clamping, position and scroll origin; no guessed camera-space projection
is applied.

## GenerateID effect spawns (`jus_package.spawns`)

A non-zero keyed `GenerateID` spawns the effect move with that id when playback lands
exactly on the key (docs/03 §4). Spawns are identified by (node, key index, occurrence),
never deduplicated by id. Ids resolve in the character's own tables (`*_e<n>.amt`) or the
common `efc/comm_*.aar`. The projection anchors the effect at the spawning node's `2DPos`
on the spawn tick, reads `EffectFlags`, `ParentLink` and `DrawPrio` from that node at that
tick, plays one-shots for their length and loops open-ended, and recurses into nested
spawns. It does not simulate Marker loops/branches, facing, `LifeType`, ParentLink follow
or `DrawPrio` ordering (its comparison rule is not traced; the viewport offers
front/behind).

## Name hashes (`jus_formats.hashes`)

* `resource_hash` = ARM9 `FUN_020326b0`: `h ^= (signed char)c | (h << 1)` over 16 bits.
  Used for ALMT field-name hashes and for ALAR3 descriptor hashes when archive flag bit
  0x40 is set (ChrArc, ChrBin, ChrWin, Deck, InfoDeck).
* `rotl_hash`: `h = rotl16(h, 1) ^ c`. Used by every ALAR2 member preamble and by ALAR3
  archives without flag bit 0x40.
* Both hash the member path **without its extension** (`chr/bb_b_01`, `bb_b_01_e00`), so
  `x.dtx`/`x.dig`/`x.amt` share a hash.

## ALAR

ALAR2: `'ALAR' u8 2, u8 flags, u16 count, u32 id_low, u32 id_high`, then 16-byte entries
`{u32 id, u32 offset, u32 size, u32 attributes}`. Each member is preceded (4-byte aligned)
by `u16 0, char name[32], u16 rotl_hash(stem)`. `id_low` = lowest 24-bit id;
`id_high` = max over entries of `id + span − 1` (span = attributes low 16 bits when
attribute bit 30 is set, else 1). The id's top byte is the type (0x40 DSTX, 0x41 ALMT,
0x42 DSIG, 0x43 ALOD, 0x46 ALTM, 0x47 archive).

ALAR3: `'ALAR' u8 3, u8 flags, u16 count, u32 0, u32 count−1, u16 data_start,
u16 descriptor_offset[count]`; descriptor `{u32 id, u32 offset, u32 size, u32 attributes,
u16 hash, name NUL}` padded to 4; data 4-byte aligned.

Members may be DSCP-wrapped (`'DSCP'` + LZ10). The writer re-compresses only changed
members (LZ10 with minimum distance 2, i.e. VRAM-safe).

## ALMT (moves)

Header `'ALMT' u8 2, u8 flags, u8 nodes, u8 moves, u8 fields, 3×0`, node names (4 chars),
u32 move offsets, u16 field-name offsets (each name preceded by its `resource_hash`).
Move: `u32 id, u16 duration, u8 fps, u8 flags, u16 first_chunk+0x20,
u16 chunk_delta[nodes−1]` (0 = node absent), then per node chunk
`u8 static_count, u8 keyed_count, u8 field_ref[n], pad2, u16 body_offset[n]` and bodies
(static value padded to 2; keyed `{u16 tick, value padded to 2}… 0xFFFF`). Moves are
4-byte aligned. Value widths: see `almt.FIELD_WIDTHS` (from the baseline's ARM9 handler
audit); `CollisionRectN` is four s16, `2DPos` two s16.

### ALMT runtime semantics (traced in ARM9)

| Item | Behaviour | Evidence |
|---|---|---|
| Move `flags` bit 0 | **Loop**: playback wraps at `duration`; otherwise it ends, calls the end handler and starts the next queued move | `FUN_0201F11C` copies it to player bit 1; `FUN_0201BDEC` branches on it |
| Move `fps` | Never read by the player; 60 in all 13,238 moves | only id/duration/flags are read from the record |
| Time base | 20.12 fixed point, one tick per update at speed 0x1000 | `FUN_0201BDEC` |
| Keyed tracks | **Step**: a value holds until the next key. Field-reference bit 0x80 would select an interpolator (`vtable+0x90`); no shipped file uses it | `FUN_0201E1E4`; every property ctor stores a null interpolator |
| Value sizes | `size()` methods confirm the width table (2DRot/Marker/LifeType 2, TextureID/2DPos/DrawPrio/Alpha 4, Position/Scale 12, Color 16, Disp/Z*/BlendMode 1) | property vtables `+0x68` |
| `DrawPrio`, `Alpha` | 20.12 fixed point (0x1000 = 1.0) | value distribution (0x7F000, 0x1000, 0x800…) |
| `GenerateID` | Spawns move `<id>` only when playback lands **exactly** on the key tick and the value is non-zero (`vtable+0x124`). High word 0x01–0x1A = character tables, 0x21/0x22/0x23 = `efc/comm_a/b/c`; all 8,200+ non-zero values resolve to an existing move | `FUN_02016220`; corpus check |
| `Marker` | Marker values are **seek labels**; 0xFF80–0xFF8F automatically seek to the matching `0xFF00+n` label when entered (suppressible by player flag bit 2). Normal numeric Marker values are destinations used by conditional NoteTrack branches. | `FUN_0201F7EC` → vtable `0x0209CAC0+0xEC` (`FUN_0201BFA0`) → `+0xF0` (`FUN_0201F93C`) |
| `ParentLink` | Boolean (object `+0x78 = value != 0`) | setter `0x02016348` |
| ALAR attribute bit 30 | Set exactly when the entry's id span > 1 | all archives |

### NoteTrack (`jus_formats.notetrack`)

Body: `{u16 tick, s16 group_word_offset}…, 0xFFFF`; group (at record + 2·offset):
`s16 count, s16 command_word_offset[count]`; command: `u16 opcode` + fixed-size
arguments. A key fires when playback crosses its tick (`FUN_0201E4C8` → `FUN_0201E468`),
which hands each command to the owner's `vtable+0x6C`. In battle, `BattleNoteTrack`
(`FUN_02155688`, overlay 6) dispatches on the opcode high byte (table 0x0217200C), then
the low byte:

| Category | Meaning | Opcodes |
|---|---|---|
| 0x00 | **Branch/cancel**: arm one of 7 pending slots (`FUN_021565A4`, slot = table 0x021710A8[type]) with a condition and a target; when the condition holds the character receives `vtable+0xEC(target)` | 0x00–0x1D: input (mask table 0x02171098, stick direction), grounded / airborne / wall / hit-contact state bits, owner queries 0x41–0x49, immediate, stored label (0x13/0x14) |
| 0x01 | Physics | 0x100 stop, 0x101/0x102/0x106 flags, 0x103 velocity (vx·32 mirrored by facing, vy·−126), 0x104 velocity for N frames, 0x105/0x107 watches |
| 0x02 | Presentation | 0x200 screen effect (3 bytes), 0x201 show object |
| 0x03 | Character | 0x300 `chara_action(sub, a1..a6)` → battle character callback `FUN_02157A44` (~0x21 sub-codes: projectiles, state values, UI); 0x301 end track; 0x302 object flag 0x20000000 |
| 0x04 | **Sound** | 0x400 `SEQ_BATTLE` (SSAR 0x7A) index; 0x401 character SSAR (`bin/chr_b.bin` record +0x1E); 0x402 special-move SSAR (+0x20) |

Command sizes are fixed per opcode; the decoder rebuilds all 1,842 shipped NoteTracks
byte-for-byte and every opcode in the data is in the table. Branch-condition names that
cite state-field bits (e.g. "grounded" for `+0x78` bit 1) are inferred from the tests the
code performs, not from symbol names. The editor names sounds from `sound/JS2_sound.sdat`;
for 0x401/0x402 it picks the SSAR by archive name (`SEQ_BB_B_01`, `SEQ_BB_B_01_4`), which
matches the `chr_b.bin` table for the records checked but is not looked up from it.

## DSTX (frames)

`'DSTX' u8 version, u8 flags, u16 frame_count, u16 data_end`, u16 frame offsets relative
to +0x0A, frames `u16 count, {u16 index, s8 x, s8 y, u16 attr}[count]` (+ v2 bounds
`s16 l,t,r,b`; empty frames use 7FFF,7FFF,8001,8001). Frame data is padded to 4 at
`data_end`; then an embedded DSIG (flags bit 0x80 clear) or a 4-byte trailer (preserved).
`attr`: bits 0–3 OBJ shape/size code (DS `shape<<2|size`), 4 h-flip, 5 v-flip,
6 selects a 2bpp texture on the 3D renderer only (OAM ignores it),
8–15 are the full palette-bank byte.

## DSIG (images)

`'DSIG' u8 version, u8 mode, u8 banks, u8 b7, u16 w08, u16 w0A`, RGB555 palettes
(16 colours × banks, colour 0 transparent).

| Mode | Pixels | Piece `index` addresses |
|---|---|---|
| v2 0x40 | per-frame LZ10 streams of 4bpp tiles; table `u32 max_frame_bytes, u32 count, {u16 offset_words, u16 size}`; w08 = count+1, w0A = words after palettes | DSIG frame number; pieces back to back, **each on a 64-byte boundary** |
| v1 0x10 | 4bpp 8×8 tiles; w08 = 256, w0A = rows rounded up to whole 32-tile rows; payload holds exactly the used tiles | 32-byte tile number |
| v1 0x20 | PL4R: **4bpp linear source**, w08 × w0A, low nibble = left pixel | GX texture: UV cell `(index & 31)*8, (index >> 5)*8`; attribute bit 6 selects a 2bpp view with effective width `2*w08` |
| v1 0x50 | LCP4: as 0x20, LZ10-compressed source; uploaded directly after unpacking | same GX UV coordinates and per-piece bit-6 texture view as 0x20 |

## Corrections to the Move Lab v23 baseline

| Baseline claim | Finding | Evidence |
|---|---|---|
| DSTX v1 shape code 0 is 16×8 | Code 0 is **8×8**; in 0x40 frame streams every piece starts on a 64-byte boundary, so the 8×8 tile is followed by 32 padding bytes | 11,412/11,515 code-0 slots have an all-zero second half; frames render cleanly as 8×8 (16×8 adds a garbage column) |
| DSIG 0x20/0x50 source buffers must be 2bpp to support 2bpp pieces | **Source bytes are 4bpp-linear at width w08**, but the GPU can read the **same bytes as 2bpp** with effective width `2*w08` when piece attr bit 6 is set; index is a GPU UV cell, **not** a 16-pixel source offset | PL4R/LCP4 upload trace + GX draw format switch; 92,898 ChrArc pieces: 0 out-of-bounds with GPU UV, 9,920 with old decoder |
| `pixels.py`: mode 0x50 has reversed nibble order | Low nibble first, same as 0x20 | high-nibble-first renders are visibly jagged |
| 766 DSIG v1 0x10 images are "insufficient for the declared canvas" | w0A is rounded up to whole 32-tile rows; the payload intentionally stores only used tiles | max piece tile = payload tiles in all 372 embedded 0x10 images |
| DSTX v1 + DSIG v1 0x20 (common effects `efc/*`) unsupported | Same atlas rules as v2 effects; renders correctly | `efc/comm_a` explosion frames |
| ALOD `u16 @ record+8` is the parent node | It is the property **count**; `ParentNodeID` values are 4-char node names | `bb_b_01.aod` records |
| ALAR2 member preamble trailer / ALAR3 descriptor +0x10 unknown | Name hashes (above) | all members |
| DSIG v2 header +0x08/+0x0A/+0x0C+32·banks unknown | frame-table word count, word count after palettes, largest decompressed frame | all 248 files |
| NoteTrack offsets are relative to the payload start, command semantics unknown | Offsets are relative to each key **record**; commands are typed (branch, physics, presentation, character action, sound) | ARM9 player + ov06 dispatcher (above) |
| `GenerateID` 0x21–0x23 high words are unresolved namespaces | They address the common-effect archives `efc/comm_a/b/c` | every value resolves |

### Sprite attribute / loader findings (2026-11-04, partial)

* **Attr bits 8–15** are one palette-bank byte: both renderers copy 32 bytes from
  `palette + (attr >> 8) * 32` (OAM path `0x0203FDF0`, textured ITCM path `0x01FF8488`).
  The editor now uses the full byte (it previously used bits 8–11 only).
* **Attr bit 6** is read only by the textured renderer (ITCM `0x01FF804C`, vtable
  `0x020960DC`): clear = 16-colour texture (format 3), set = 4-colour texture (format 2,
  texture slot `+0x74 + 1`). The OAM renderer (`0x0203F5C8`) ignores it.
* **Resolved by PL4R/LCP4 texture-upload trace and ChrArc corpus:** the textured
  renderer uses `s = (index & 31) * 8`, `t = (index >> 5) * 8` (8x8 UV cells,
  32 columns). PL4R's `vfunc_11` (`0x02017C40`) reads a 4bpp-linear source
  (`w08 / 2` bytes per row). The upload path (`0x02044774` -> `0x0203EF0C`)
  passes PL4R's **unchanged** bytes; for LCP4 it first performs LZ10 decompression
  (`0x020519C8`) and passes the resulting **unchanged** bytes. There is no CPU
  atlas swizzle. The GX draw path (`0x01FF804C`) selects format 3 / 4bpp when
  bit 6 is clear, or format 2 / 2bpp with **width exponent +1** when set.
  Thus 2bpp texels reinterpret the original bytes at **twice the nominal DSIG
  width**, with unchanged row stride. The Move Lab now decodes each piece by
  texture format and GPU UV coordinates; PNG atlas editing still operates on
  the original native 4bpp source.
* DSIG runtime classes by mode: 0x10 `NCG1`, 0x11 `NG18`, 0x20 `PL4R`, 0x30 `NFC4`,
  0x40 `FFL4`, 0x50 `LCP4`. DSIG `b7` is never read by the loader.
* ALAR2 **flag byte bit 1** (value `0x02`, separating the observed `1` and `3`)
  selects a special resident-data splitting/rebasing path in archive-loader
  `jus_Class_02095ea0::vfunc_24` (`0x0200F8FC`); clear uses the straightforward
  header entry count. This is a loader policy, not a file-format variant.
* That split path calls archive `vfunc_25` (`0x0200FB70`), which returns the
  **top byte** of the entry's attributes. It checks `& 3` (attribute bits **24
  or 25**) to select a split boundary, and checks `& 0x80` (attribute bit 31)
  to adjust the allocation/copy position. Thus **attribute bit 24 participates
  in archive splitting**, but does not yet have a standalone semantic label;
  bit 25 must be investigated alongside it.
* Automatic sprite layout also now **replaces the full palette byte**
  (`~0xFF3F` masking) rather than leaving old bits 12–15 set when reassigning
  a bank. It retains bit 6 of the attribute rather than inventing 2bpp pixels.
* The `IndexedImage` pipeline used a single byte for `bank*16+colour`, silently
  assuming bank `<=15`, despite DSIG permitting up to 64 banks. It now uses
  16-bit indices when required. High-bank frame PNGs use RGBA with a private
  PNG metadata record to preserve indices on unmodified export/reimport.
  External image editors that remove the record can lose the original bank
  assignment when several banks contain identical RGB555 colours.

### Character corpus check (2026-11-04)

* `chr.zip` -> `ChrArc.aar`: **789** nested character archives, **1,669** LCP4
  mode-0x50 sprite files, **73** PL4R mode-0x20 sprite files. **92,898** associated
  DSTX piece occurrences; **78,462** carry bit 6 (2bpp). Every instance fits
  the corrected GX UV texture bounds. The former index*16 atlas rule wrongly
  exceeded the source image bounds for **9,920** instances. All 0x20/0x50
  buffers have `w08*w0A/2` decompressed bytes, exactly as expected.
* `ChrWin.aar`: **107** mode-0x20 sprite files; 453 piece occurrences. Exactly
  **one** UV rectangle exceeds the declared texture height: `hk_b_03.dtx`,
  index 128, attr `0x0048`, shape 8x16, UV `(0,32)` vs effective texture
  `128x32`. The editor clips off-texture texels to transparent; actual GPU
  behavior of this exceptional piece requires an emulator capture.
* Real samples of corrected effects now render coherent shapes, whereas the
  legacy atlas-index rule reads stripes or data beyond its declared source.
  Correct geometry, ordering and colors are not yet verified by an emulator
  frame capture. Reproduce the checks with
  `py -3 tests/validate_chr_textures.py --chr C:\path\to\chr.zip`.

Open items: ALMT field `EffectFlags`
(`CommonEffect.cpp` property, values 0/2/3/0x10/0xB…), full ALAR2 flag
bit-1 split lifecycle and the attribute bit-24 vs bit-25 distinction,
DSIG v2 `b7`, ALOD property
descriptors, ALTM screen/priority/scroll assignment, DSTX flags 0x05/0x06 (tile-panel auxiliary grids decoded; final screen draw/palette/parent placement pending), stage `.cam`, the exact battle-state
fields behind each branch condition, `chara_action` sub-code semantics, and in-game draw
order of overlapping effect pieces (the editor draws atlas pieces last-on-top and OBJ
pieces first-on-top, matching OAM priority). The DS draw path itself was not confirmed
in an emulator.

### NoteTrack-triggered Pursuer effects (2026-11-04)

Some visible effects are **not** represented by ALMT `GenerateID`. In the
battle overlay (`arm9_ov06`), `NoteTrack` opcode `0x0300` / `chara_action`
subcode **13** calls `FUN_021617A0`, whose two arguments select indices from
the current character's 8-byte `chr/effect/<character>.bin` records inside
`chr/ChrBin.aar` (u32 ALMT move ID + u32 metadata per record). Subcode **14**
calls `FUN_0216186C`, setting the pursuer's signed x/y target offset and snap
flag. `BattleCharaPursuer::FUN_021618E4` chooses one of the two move IDs and
passes it to `FUN_02023894` before showing the pursuer animation.

Concrete example: `dg_b_01.amt` move index 24 (`0x0004C118`) has both
`GenerateID` fields zero, but at tick 0 its NoteTrack selects effect table
slots 3/3 and target `(0,-53)`. Slot 3 is `0x0004C150`, which is move index 24
of `dg_b_01_e0.amt` (looped, 28 ticks, texture ID `0x0004C140`). Slots 0/1/2
are `0x0004C141`, `0x0004C142`, `0x0004C143` (`e0` moves 9/10/11);
those belong to **other** pursuer selections, not the direct link for move 24.

Editor behavior: pursuer updates are presented as a dedicated virtual track
with nested child-animation frames and collision keys. It does **not** add or
modify `GenerateID` keys. The overlay is anchored to the commanded *target*;
frame-perfect in-game location depends on previous follow state, facing,
movement smoothing, and which pursuer state wins at runtime. The two
configured move IDs are both exposed when they differ; an offline preview
cannot decide which is active from NoteTrack alone.


### Marker callback resolution and NoteTrack event editing (2026-11-04)

The base animation object's virtual table at ARM9 address `0x0209CAC0` maps
`vtable+0xEC` → `FUN_0201BFA0` and `vtable+0xF0` → `FUN_0201F93C`.
The latter searches the **Marker key table** for a matching value, reads its
key tick, and seeks via `vtable+0xB8`. Therefore `0xFF80+n` is an automatic
**goto** to `0xFF00+n`, not an arbitrary game event. For example,
`bb_b_01.amt` move 3 has label `0xFF00` at tick 4 and auto-goto `0xFF80`
at tick 6. Branch/cancel NoteTrack commands also use the label seek callback,
with their targets conditioned on input/combat state.

The `NoteTrack` editor is now a **typed event editor**: one row per command,
with 46 opcode choices (30 branch, 8 physics, 2 presentation, 3 character,
3 audio), typed argument inputs, a numeric character-action subcode selector,
raw-byte fallback, event add/edit/remove/duplicate, and tick relocation.
Multiple commands may share one tick; they preserve their relative order.
A right-click on a NoteTrack timeline row opens the add/remove workflow.
In the current shipped data subset, 44 of the 46 known opcode forms occur.
Only the layout and dispatch of all 46 opcodes are verified, not all
underlying game-state tests and character-action meanings.

An independent corpus scan of the uploaded `data.zip` found 1,842 NoteTrack
bodies, 17,791 commands and no unknown opcode values in 1,210 relevant ALMT
files. Among 6,010 Marker field values, 271 were in the special auto-goto
range (270 keyed, one static); this count does not imply 271 distinct jumps.


## DSTX 0x05/0x06 grid and ChrBin shot/col inspector (2026-11-06)

The Screen Workspace now inspects 0x05 and 0x06 DSTX panel-local tilemaps,
without treating them as OAM sprite-piece records. DSTX count N supplies N
four-byte panel descriptors (u16 first tile, u8 width, u8 height), followed by
N relative u16 auxiliary offsets and N row-major cell grids. Mode 5 stores
u8 per tile cell; mode 6 stores u16 LE per cell; every grid is width*height
and a final 0..3 zero-alignment byte tail is allowed. Source bytes always
roundtrip exactly. The Screen Resource inspector displays the chosen panel
index, source offsets, dimensions and first 16x16 raw hex cells. The original
50 DSTX members / 1,094 panels validate. Palette bit meaning and scene-level
placement remain unknown; no guessed screenshot preview is presented.

The Archive Workspace now displays typed read-only 32-byte chr/shot records,
with original dispatch handler ID/address, raw +4 u16 work parameter,
+6 signed lifetime (0 means effective 30), +8 behavior flags, +0x0C/+0x10
references, conditional +0x14 reference, overloaded selector at +0x1D,
and handler-0x0B +0x1E callback. Executable-backed flags are 0x1 (optional
reference), 0x4000 (X displacement), 0x10000 (audio selector), 0x80000
(Y displacement); all other bits are shown as raw unknown flags. The
20-byte chr/col records present +4 signed score/power and raw +0/+1
selector bytes without inventing gameplay names. The three namespaces
(ALMT CollisionType, chr/col byte0, chr/shot byte0) remain independent.
Original ChrBin census: 184 shot members / 1,258 records, and 281 col
members / 2,837 records, all roundtrip exactly. No AI editing features.

Verification: python -m unittest tests.test_dstx_layout_0506
tests.test_shot_runtime_fields; complete test discovery 227 tests, one
skipped, all passed; gui_screen_layout_smoke.py passed.


## P3 and P6 updates (2026-11-06)

The DSTX 0x05/0x06 Editor Elements inspector now renders actual selected
panel-local images from embedded DSIG 4bpp/8bpp tile and RGB555 palette bytes.
Mode5 has u8 tile cells; mode6 has u16 tile cells using the hardware BG
tile index/H,V-flip/palette-bank convention. 8bpp uses flat palette indexing,
including opaque colour16. A distinct pure read-only renderer
jus_formats/tilepanel.py returns RGBA source pixels; the GUI displays the
panel as an explicitly isolated resource (not an original hardware screenshot).
All 50 originals/1094 panels are rendered with no missing tiles/banks.

Shot/collision inspection now recognizes conditional u16 spawn cap at shot+2,
the +0x1D three-way audio route under shot flags bit0x10000, and
*handler-scoped* source-backed flags: 0x07(0x400,0x8000),
0x0D(0x200,0x400), and shared 0x0C/0x14(0x100).
It displays mechanical callback descriptions, raw unknown flags, and
chr/col's +2,+8,+0x0C,+0x10 original words; no invented gameplay collision
names.

No AI editing added. Actual scene-wide screen composition, physical LCD
presentation, user-visible col class names and untraced shot flags remain
future reverse-engineering tasks.


### Follow-through: collision work row resolution and conditional CLDS panel pieces
Original main ARM9 0207D440 now confirms that ALMT CollisionType work IDs
0x0100 and up resolve to chr/col source record (id - 0x0100)*20, while
lower IDs use a 20-byte ROM table starting 0209FC2C. Do not conflate
the **record's byte0 class** with this index. The new read-only
jus_formats/collisionwork.py holds 3 exact 32-entry ARM9 bit-mask tables
for chr/col+0x08 contributions to work+0x14/+0x18/+0x1C, and a local
CollisionRect-to-center/half-extents transform from ARM9 02079E40.
Archive inspector exposes class-zero vs nonzero runtime branches and raw
unknowns.

The new read-only jus_formats/panelmesh.py reconstructs the *conditional*
ARM9 02043C7C fallback CLDS six-byte pieces, with 4/2/1 horizontal spans,
original 17-entry width lookup (0..16), and signed-byte local coordinates.
The real source census is 1,035 supported panels and 59 panels that exceed
the lookup. Screen inspector labels this alternate mesh as conditional,
never as confirmed final scene composition.

All original game assets/ROM/Ghidra exports are untouched. No AI editing
functions have been added. Final emulator screen placement, LCD routing and
contact-result damage/guard/status are still unverified.

## Koma / move / BIN text source cross-reference

The Animation workspace shows original BIN-authored names, types and descriptions for the exact resource ID of sized Special A/B or support actions. Koma inspector shows all 14 shared+special actions for a type0 battle card, one 2-/3-Koma action for a type1 support card, and none for help/other cards. Navigation is bidirectional: Koma Inspector -> Open ALMT move; Animation Move Inspector -> choose source Koma card -> Open Koma card. The read-only mapper in jus_package/movelinks.py derives original text fields from bin/chr_b_t.bin (74 x 53 words, 51 text pointers) and bin/chr_s_t.bin (193 x 9 text pointers, ov05 0214E370/0214E3D4); the original Koma type, roster and size are from bin/koma.bin. Matching enforces the full 32-bit move ID and actual primary ALMT source member, rather than a guessed name or array index. Ordinary fighter inputs have only code-backed control labels, not invented source names. The Editor only normalizes | to spaces for display. Tests: tests/test_move_text_links.py, tests/gui_move_text_links_smoke.py.

## NoteTrack shot objects and source-frame inspection

The original battle 0x0300 NoteTrack chara_action subcode2 references a 0x20-byte chr/shot record, not a parent GenerateID child. In overlay6 FUN_0216B514, handler1 constructs a source ALMT animation from shot offset+0x14 if nonzero, and another from +0x0C; offset+0x10 is retained in separate work. Those are full animation IDs, NOT direct DSTX IDs. The Editor animation viewport Show > Shot animation sources displays original ALMT TextureID+BoundsIndex frames at their authored launch anchor, and the Shot objects timeline/inspector shows record/handler/animation IDs and nominal authored lifetime. This is a SOURCE DIAGNOSTIC ONLY, not frame-accurate DS projectile stretch, travel, hit or on-screen beam geometry. Other shot handlers are kept as numeric source events and are not assigned fictional art. For original ground/air/crouch input masks in Animation Inspector, see jus_formats/battleinput.py SOURCE_INPUT_CONDITIONS. Tests: tests/test_shot_visual_source.py, tests/gui_shot_source_visual_smoke.py, tests/test_battleinput_source_trace.py, tests/gui_battleinput_source_trace_smoke.py.

## Native dynamic effect geometry and shot work (read-only)

The original 26 callback table entries at overlay6 0x02172864 are exposed by jus_package/dynamicgeometry.py. Their runtime constructors, child translation, fixed-point velocity, stage collision and target/arc dependencies are kept distinct from ALMT GenerateID spawns and ChrBin persistent pursuer actions. The Animation Shot Inspector identifies native handler, raw shot fields, original ALMT source, source TextureID/frame, DSIG 0x50 or 0x20 GX atlas and DSTX pieces. For handler01 with a proven cardinal direction, launch child positions reproduce the native 0x1800 24.8 child spacing (24px); non-cardinal native float trig remains source-only. The editor still does NOT simulate full beam extension, dynamic shot travel, hits or frame-accurate DS GX matrices. GenerateID Inspector now reports child keyed geometry fields separately. Run tests/test_dynamic_geometry_code.py, tests/test_all_effect_geometry_source.py and tests/gui_shot_source_visual_smoke.py.

## Source-proven handler01 beam role lifecycle

The original constructor ROM array at ov06 0x02172864 maps shot handler01 to FUN_0216B4F4; a second 26-entry per-frame update array at 0x0217278C maps it to FUN_0216BA2C. Constructor 0216B514 creates record+0x14 initial anchored ALMT (when nonzero) then record+0x0C moving ALMT without a hit test. Updater 0216BA2C creates additional record+0x10 ALMT instances when native spacing/slot conditions pass. These source field roles are shared across the 68 original handler01 records; source+0x0C is not contact-only by construction. Handler01 sets work+0x26 bit2, bypassing ordinary record-lifetime countdown, so the current source-only preview cap is not native expiry. The Animation Shot Inspector shows all three source roles, original per-frame update callback and code provenance; it still does not extrapolate a fabricated full beam. Regression: tests/test_shot_handler01_lifecycle.py.

## Native shot source repeats and handler05 D-pad history

The Animation View and viewport Show menu support Handler01 repeats (unobstructed model). This projects actual original +0x10 child ALMT art at native 0216BA2C spacing counter events. The model is **not** an emulator frame reconstruction: it assumes one update/tick, fixed owner and facing, no hit/stage collision, free child actor slots and constant initial raw q8 velocity; post-birth XY is estimated. No synthetic pixels or fake beam polygon. Hiei (yh_b_03) 5-Koma Special B 0x9832C uses handler05 (constructor 0216B910; updater 0216BE0C), reads D-Pad delta0x40, keeps 128 historical XY/rotation samples and selects source 0x98357 (+0x0C head), 0x98358 (+0x10 body), 0x98359 (+0x18 terminal). This does NOT auto-home toward the opponent; the curved trail cannot be reconstructed without live input/history. Original source NoteTrack status event tick112 chara_action(10,18) resolves to code status36/0x24 callback 021593E8. The self-contact conditional branch is not yet proved. Tests: test_shotprojection_native.py, test_hiei_steered_ultimate.py, gui_shot_source_visual_smoke.py, gui_hiei_steering_source_smoke.py.


## ChrBin col/shot/effect native field completion (2026-11-08)

The preceding 2026-11-04/06 descriptions are preserved as historical research.
**Correction:** the second 32-bit word in an 8-byte `chr/effect` row is NOT an
unclassified monolithic metadata integer. Original overlay6 `FUN_02153CE8`
splits it into **u16 sound-slot index (+0x04)** and **u16 sound argument
(+0x06)**, guarded by the active per-character sound parameter slot value.
The first u32 (+0x00) is the full source ALMT effect animation ID.
Original BattlePrmData initializes sound slots to [FFFF,007A,FFFF,FFFF].
Source: ov06 `021702BC.c` and `02153CE8.c`.

Source-backed collider joins:
- `chr/col` is 20-byte records. Source byte +0x02 chooses prioritized impact
  flash; +0x03 is signed status selector; +0x05 is a signed native contact
  magnitude distinct from the overlapping +0x04 s32 threat score;
  +0x07 is an additional contact-accumulator byte;
  +0x0C/+0x0D signed knockback coefficients;
  +0x0E/+0x0F signed effect selectors;
  +0x10/+0x11 effect modifier/table indices; +0x12/+0x13 zero in originals.
- Native ov06 selector rule: **-1 disabled, 0..63 builtin, 64+ character
  effect row selector-64**. All 101 such 64+ authored original references
  resolve inside the matching `chr/effect` table; 0 bad references.
- Source class byte0 and secondary selector byte1 remain numeric. Special
  byte1==6 branch applies a state-dependent coefficient, but other human
  names remain unproved.
- `chr/shot` 32-byte records are dispatched via 26 original callbacks;
  20 authored handler IDs occur in 1,258 original records. Handler01
  +0x0C/+0x10/+0x14 child ALMT roles and handler05 terminal +0x18
  remain source-backed; no claim of an emulator-perfect lifetime or path.

The Archive inspector now shows **separate decoded contact fields, shot
handler-specific source fields, and chr/effect ALMT/sound rows**, including
cross-links from a collider into its effect row. The historical R08 shot/col
diagnostic formatter string remains byte-for-byte compatible. Raw source record
editing can be staged with `jus_formats.chrbin.RecordTable.replace_record`;
`EffectRecord` provides bounded animation ID/sound-slot updates. The original
data is never overwritten by the investigation.

Tests: `tests/test_chrbin_effect_contact_source.py`.
Unknowns: canonical collision class names, remaining shot handler flag semantics,
live impact/collision outcome geometry and final frame-perfect rendering.


## Native collision-reaction and shot-runtime semantics (2026-11-08 follow-up)

Original ARM9 0207FBD0 / 0207D440 prove collider+0x00 is a
**comparison/precedence class code**, not an official list of attack types.
Original overlay6 ROM at 0x021713E8 and 0x021721A0 provides all **16**
defender reaction indices (+0x01), their primary/alternate ALMT resource
offsets and original callbacks. Indices 9..12 select grabbed victim pose
resources 0x33..0x36; other entries now show code-backed reaction action,
with no invented move names. The Archive inspector reads these from
`jus_formats/chrbin_semantics.py`.

The original 26 shot constructor and update callback tables (overlay6
0x02172864/0x0217278C) also establish additional **handler-scoped**
control flags and dependent owner position, stage collision, bounce,
stop/fade and removal branches. Shot handler0x16 is now verified as a
**contact-dependent nested shot spawner**: +0x1E is a signed row index
within its own 0x20-byte shot table, and native 0216F8D8 calls 0216AB58
to create the nested shot on selected child contact bits. All six
original authored records point to valid existing shot rows.
`jus_formats.chrbin.ShotRecord.handler_16_nested_shot_index`
exposes this source link; the Archive inspector displays the actual next
handler and ALMT ID.

Original read-only corpus/ROM audit:
`tools/audit_native_chrbin_unresolved_semantics.py`.
New tests: `tests/test_chrbin_native_semantics.py`.
Exports: `CHR_COL_NATIVE_16_REACTION_ROUTES_20261108.csv`,
`CHR_SHOT_NATIVE_FLAG_WITNESSES_20261108.csv`,
`CHR_COL_SHOT_NATIVE_SEMANTICS_VALIDATION_20261108.json`.
The new evidence covers 26 actually authored handler/flag combinations;
41 more handler/bit combinations remain unclassified after excluding
already-proved global fields. These are NOT 41 unique flags. Exact live
projectile paths and player-facing names cannot be derived from these
source records without the runtime input, stage, target, PRNG and
collision-state history. No synthetic screenshots or effect geometry used.


## Stage BIN/MOB and exhaustive archive audit — 2026-11-08

The original 36 stage BIN/MOB pairs now have typed section coverage and byte-preserving
staged editing of additional original source fields. Original native source proves BG
+0x08 invokes renderer mode setter FUN_0203D478 (source 02083FCC), moving-floor
+2/+3 signed offsets and +0x1F sprite ALMT (source 02085D74 / 02085704), and
gimmick source +0x0C callback type / +0x0D ALMT variant (source 02163188).
The BIN eight-byte trailer is exposed as three **raw fields** u16/u16/u32
(first=0x0200, last=0 across all 36; second takes 13 values). Do not label the
trailer as physical width/height until the native consumer is traced.

Editor implementation: `jus_formats/stagephysics.py`, `jus_formats/stageauthoring.py`,
`app/workspaces/mapobjects.py`, `app/workspaces/level.py`.
Original validation: `tests/test_stage_bin_mob_completion.py`.


Recursive active Data inventory: **391 physical files, 1549 ALARs, 11575
leaf files, 1477/1477 BINs cataloged**. Exactly 53 active file instances have
no full verified schema: **50 demo MDF, 1 opening VXDS file, opening/pattern.bin,
and stage/SuddenDeath.bin**. Partial binary semantic fields in other formats
are tracked separately, including ALOD/AI/deck. Four ALFT AFT fonts are already
decoded; 12 inactive .aar.orig backups are not new runtime formats. The
independent backup comparison found **0 additional filenames** in the 5016
backup leaf members.

Reproducible scans: `tools/audit_full_game_archive_decoding.py` and
`tools/audit_alar_backups_vs_active.py` (they write their catalogs to
`D:\Library\Development\JUS\docs\Research`).

Decoded source-record structure is not evidence of gameplay-perfect runtime
simulation. All original game archives, ROM and Ghidra exports remain unchanged.

## Native codec reconciliation — 2026-11-10

Compared the current Editor codecs with the native-port parsers
(`port/src/Jus.Game/Assets/SpriteFormats.cs`, `AlFormats.cs`, and
`AlodFile.cs`) and original ARM9 functions, rather than inferring
layouts from screenshot appearance. The original `data/` tree was
read-only throughout.

| Family | Source corpus | Result |
| --- | ---: | --- |
| ALMT | 1,547 files; 13,238 motions; 63,718 tracks | All existing tracks retain native byte and JSON round-trip |
| ALOD | 1,247 | Byte-exact original data; parent descriptor remains explicitly bounded |
| DSIG 0x10 / 0x11 / 0x20 / 0x50 / 0x40 | 2,291 / 514 / 387 / 1,669 / 248 | All 5,109 DSIGs byte-exact, including 6 loose files |
| DSTX sprite 0x03 / 0x83 | 2,658 / 456 | All byte-exact; 0x83 stores a 4-byte external texture resource ID |
| DSTX Koma 0x04 | 898 | Byte-exact with the Koma-specific codec |
| DSTX panel layout 0x05 / 0x06 | 3 / 47 | Byte-exact with the separate panel tilemap decoder |

The Editor now supports the **optional ALMT interpolator encoding** read by
ARM9 main `0x0201F11C` and `0x0201F6F4`: high bit of a **keyed**
field reference selects a u16 interpolator identifier immediately before
the first key; the native resolver masks bit 0 of the relative offset
(`0x0201F6BC`/`0x0201F6F4`). The new `Track.interpolator` and
`Track.offset_low_bit` metadata round-trip through ALMT JSON and
survive edits. A static field reference may have index >=128; only keyed
references use bit 7 as a flag. **None of the 63,718 original tracks**
uses the interpolator flag or odd offset: original step/held-key behavior
has not been changed. This is a native serialization feature, **not**
an attempt to simulate runtime easing in the preview.

For DSTX 0x83, `DstxFile.external_texture_id` exposes the resource
word as read-only metadata without modifying `tail`, the original
source bytes. All 456 original references are nonzero, 24-bit IDs in
exactly four bytes. Existing source-backed texture resolution is
unchanged. DSIG v2/0x40 frame streams now parse the native u16
frame count plus a separately preserved u16 header word (rather than
interpreting the two together as a u32 count). The second word is zero
in all 248 original streams (16,849 frames); its runtime semantics
remain unknown, and nonzero values are preserved without being treated
as additional frames.

The original `tests/roundtrip_scan.py` previously misreported 948
valid Koma/panel-layout DSTX sources as decoder failures. It now
dispatches subtype 0x04 to `koma.parse`, 0x05/0x06 to
`dstx.parse_layout`, and 0x03/0x83 to `dstx.parse`. It follows each
original embedded DSIG at the DSTX data-end pointer and offers a
`--strict` failure exit on actual format errors or mismatches.
The strict scan has **4,062/4,062 DSTX, 5,103/5,103 archived DSIG,
1,547/1,547 ALMT and 1,247/1,247 ALOD** byte-exact outcomes;
there are no exceptions or nonidentical files.

Regression cases were added to the tracked `tests/test_formats.py`:
explicit interpolator and odd-offset wire bytes, JSON and edited
round-trip, static high field references, invalid selector rejection,
external 0x83 resource ID preservation, stream table count/reserved
word, and DSTX-family dispatch. Reproduce the original-data scan with
`py -3 tests/roundtrip_scan.py --strict`.
Full unit-suite verification: **617 tests, OK (2 skipped)** on Windows;
pre-existing Pillow unclosed-file and Tk after-destroy warnings remain.

**Remaining bounds:** native interpolator evaluation of new authored
tracks is not implemented in the preview; DSTX 0x05/0x06 screen-space
placement remains dependent on untraced scene code; and runtime-dependent
sprite geometry is outside the Editor's native-data authoring scope.
No gameplay behavior or invented rendering is claimed by these tests.

Character Forge is excluded from the recommended next-work roadmap;
its implementation was not modified or deleted in this reconciliation.
