# JUS resource formats — as implemented in `jus_formats`

All values little-endian. "Verified" means checked against every relevant file in
`D:\Library\Development\JUS\data` by `tests/roundtrip_scan.py` / `tests/sprite_scan.py`
(2026-11-04) unless stated otherwise.

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

DSTX tables with flags 0x05/0x06 (menu screen layouts) are a different layout and
are rejected by the sprite parser; they pass through archives untouched. Flags 0x04
(koma panels) has its own codec, below.

## Koma panels — DSTX v1 flags 0x04 (`jus_formats.koma`)

`'DSTX' u8 1, u8 0x04, u16 panel_count, u16 data_end`, then per panel
`u16 first_tile, u8 width_tiles, u8 height_tiles`, zero padding to `data_end`, then an
embedded DSIG v1 mode 0x10 (4bpp 8×8 tiles, one bank; `w08 = 8`, `w0A = 8 × tiles`).
Every panel is 6×6 tiles (48×48 px); tile 0 is unused and panel *n* starts at tile
`1 + 36n`, tiles row-major. Evidence: **Direct** (byte-exact on all 898 files; a panel
edit leaves neighbouring panels untouched). How panels sit on the card is given by
`bin/kshape.bin` + `bin/koma.bin`, below; deck placement is still **unknown**.

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
  preserved. A shape edit changes only `+8/+9` of one card.
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
and `bg_xx_gimmick.aar`, and `bg_xx.bin` / `.cam` (32 bytes) / `.mob`. The `.bin`,
`.cam`, `.mob` formats, collision and gimmicks are **not decoded**; the Level editor
shows them read-only as raw bytes and never draws guessed geometry.

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
descriptors, ALTM screen/priority/scroll assignment, DSTX flags 0x05/0x06 (screen
layouts), stage `.bin`/`.cam`/`.mob`, the exact battle-state
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
