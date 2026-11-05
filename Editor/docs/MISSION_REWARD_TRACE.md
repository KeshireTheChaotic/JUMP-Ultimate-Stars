# JUS mission progression → Koma availability — ARM9 and shipped-file trace

**Evidence:** User-supplied `data(1).zip` and `reverse_engineering(1).zip`, 2026-11-05. Source consists of extracted `jgalaxy/jgalaxy.aar` and Ghidra-decompiled ARM9/overlay 1 functions. Parsing and archive rebuild verified using the original files. **No emulator frame or in-game reward validation yet.**

## Verified files and structures

| File | Bytes | Structure | Confidence |
|---|---:|---|---|
| `jgalaxy/jgalaxy.aar|jgalaxy/jgalaxy.bin` | 26,388 | World graph / mission reward records | Direct: executable and byte-checked |
| `jgalaxy/jgalaxy.aar|jgalaxy/mission.bin` | 9,188 | `u32 count=56` + 56×164-byte mission definitions | Direct |
| `jgalaxy/jgalaxy.aar|jgalaxy/battle.bin` | 12,304 | `u32 count=75` + 75×164-byte battle definitions | Direct |
| `bin/koma.bin` | 10,680 | 890×12-byte Koma card records | Direct |
| `bin/jpower.bin` | 94,544 | Loaded by evolution UI `JPowerData::JPowerData_Create`, layout pending | Direct loader, unknown records |

`jgalaxy.bin` contains 24-byte header `u16 galaxy_count=5, location_count=36, planet_count=65, node_count=142; u32 offsets to galaxy, location, planet, node sections`. Sections are contiguous in this order: galaxy at `0x18` (5×`0x3C`), location at `0x144` (36×`0x48`), node at `0xB64` (142×`0x88`), planet at `0x56D4` (65×`0x40`). The file ends precisely at `0x6714` (26,388).

Node record fields at offset from `node_start`:

| Offset | Width | Meaning |
|---|---:|---|
| `+0x08` | u8 | Definition index, mission or battle |
| `+0x0A` | u8 | Planet id |
| `+0x0B` | u8 | Active objective/reward count (max six) |
| `+0x0C` | u8 | Raw flags; bit `0x04` selects mission.bin rather than battle.bin |
| `+0x10 + 0x14*i` | u16 | Raw goal code, semantics not confirmed |
| `+0x12 + 0x14*i` | s16 | Koma grant index `>=0`, or `-1` for resource grant |
| `+0x14 + 0x14*i` | 6×u16 | Six numeric quantities if grant is `-1`; specific resource types are not confirmed |
| `+0x20 + 0x14*i` | 4 bytes | Unknown tail, retained |

The 142 nodes contain **671 active grants: 300 Koma / 371 resources**. All 300 original Koma ids are in the 0–889 card index range. Node `12` indexes mission definition `1` ("Wall Breaker"), with Koma rewards `559`, `560` and `556`, plus two resource-reward slots.

## Function-level executable proof

- Main `FUN_02075298`: constructs mission/battle definition table; count, record pointer.
- Main `FUN_0207538C`: computes `id*0xA4` to read a selected definition; consumes battle configuration at `+0x70..+0xA3`. These remain read-only because most meanings are not yet confirmed.
- Overlay 1 `FUN_0214CD20`: uses node flags `+0x0C & 0x04`, definition ID `+0x08`, and node goal count `+0x0B` for stage setup.
- Overlay 1 `FUN_0214E380` (`0x0214E380`): selects progression node by global node id multiplied by `0x88`; iterates newly cleared objective bits; reads **signed** grant ID at `+0x12+20*slot`. If `-1`, forwards six resources to `FUN_02072870`. Otherwise, checks the already-unlocked bitset and calls `FUN_02075F98` with **both** a Koma record pointer and ID. ARM instructions at `0x0214E4E8..0x0214E4F8` explicitly load `r1`=Koma ID, compute `r0`=pointer (`id*12 + card_base`) and `bl FUN_02075F98`.
- Main `FUN_02075F98`: passes ID through `FUN_02071360` (save unlock bitset), then reads card series at card pointer `+4` and forwards to `FUN_02071240` (series availability).
- Main `FUN_02071360`: sets Koma acquired bit at `DAT_020B0BAC + (id>>5)*4` and second derived bitset, flags save dirty, notifies save manager (`FUN_02073114`).
- Main `FUN_02075F08`: opens `bin/koma.bin` and derives card count from stream length divided by `0x0C`; this supports *count discovery* but does not prove all downstream UI/save/runtime bounds accept new card IDs.
- Overlay 5 `JPowerData::JPowerData_Create` (`0x021652E8`): opens `bin/jpower.bin`; overlay 5 `FUN_021646F4` calls `FUN_02075F98` on a Koma ID for an evolution/purchase outcome. This is a **separate acquisition pathway** to trace before implementing evolution editing.

**Evidence status:** The record offsets and control flow above are verified from decompilation plus assembly, and data-consistent. Cross-runtime emulator/console confirmation remains outstanding. Koma card indices beyond the 890 originals, dynamic shape-dictionary expansion, evolution dependencies and mission condition semantics are *not* confirmed safe to change.

## Editor behavior

**Missions (Ctrl+8)** browses nodes grouped by planet, displays the linked mission/battle title and raw goal codes, and edits only a reward slot's signed Koma ID, its `-1` sentinel and six resource quantities. Mission/battle definition titles are ASCII-editable, shared across nodes referencing that definition. All other bytes remain preserved. There are no node or slot insertions because these indices are referenced by game state and fixed-size save structures.

The canonical editor API stages edits in the nested archive, supports undo/redo, then Apply and atomic-per-file Save. Validations reject out-of-range Koma references and malformed layout; original archive rebuild is byte-exact. Runtime interpretation is not substituted for explicit testing on melonDS.

For a read-only manifest of all mission rewards:

```powershell
py -3 tools\trace_jgalaxy.py --data "D:\Library\Development\JUS\data" --out mission_rewards.json
```
