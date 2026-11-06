"""Battle AI data in ``chr/ChrBin.aar`` (read-only), traced from overlay 11.

Overlay 11 holds the battle AI (BattleAI.cpp, BattleAI_Deck.cpp, BattleAI_Move.cpp,
BattleAI_State.cpp, BattleAI_JobAtkBrh.cpp, BattleAI_JobAtkCmd.cpp).  It reads
three data files:

``chr/ai/<id>.bin`` — **AIPM, AI attack profile** (267 files = 74 battle + 193
support characters).  ``BattleAIDeck_Create`` (0x02174330) opens it by the
character's roster name (battle table 0x020924B0 / support 0x02092700) and asks
``FUN_02174F58(aipm, FUN_021733B4(selector))``:

* +0 ``'AIPM'``, +4 4 bytes (00 01 FF FE in every file), +8 23 × s32 block
  offsets (−1 = none).  Byte table 0x02181100 maps selector n → index n−1, so
  index i is **input selector i+1** (jus_formats.battleinput).  Data check:
  indices 2–11 exist in exactly the 74 battle files, indices 12–21 in
  55/51/41/16/11 files (the characters with 4/5/6/7/8-koma specials).
  Support characters use block 0 or 1 (BattleAIDeck_Create: koma +8 == 1 → 0).
* block: 0x9C-byte header (+0x04 selector number, +0x0C u8 record count) then
  count × 0x20-byte **hit records** (one 0x20 slot is still reserved when the
  count is 0).
* hit record: s16 x, y, half-width, half-height (attack box, facing right,
  relative to the character), +0x14/+0x16 s16 active ticks (the AI's per-move
  frame counter +0xBE is tested against them, 0x02175AD0), +0x0C power and
  +0x18/+0x19 bytes copied from the move's ``chr/col`` record (+0x04, bytes 0/1),
  +0x1A s8 status (|value| indexes a 42-entry weight table 0x02181166),
  +0x1B flag.  Checked against db_b_01: B-neutral's record (31,−26,21,14,
  ticks 9–12, power 8) is exactly CollisionRect1 [10,−40,53,−11] enabled
  9–12 and chr/col record 0 (+0x04 = 8).

``chr/ai/move/<stage>/{f,n,s}_m.bin`` — **AIMV, AI navigation graph**.
``BattleAIMove_Create`` (0x0217693C, path builder 0x02177060) copies 7 movement
rows of 0x28 bytes (offsets at +4) and links, per stage collider, 7 lists (one
per movement row) of up to 16 reachable collider ids (s8, −1 ends a list).
Node i is collider i of the stage .bin (node count = collider count on all 36
stages).  The three files are alternative profiles for different characters.

``chr/ai/ai_param.bin`` — 0x30-byte records indexed by a per-character byte
(+0x34 of the character record); ov12 ``JArena_ParamResult`` (0x021C56D0) uses
byte +0x2E as a rating.  Other fields are not traced.
"""
from __future__ import annotations

import struct
from dataclasses import dataclass, field

AIPM_SLOTS = 23
RECORD_SIZE = 0x20
BLOCK_HEADER = 0x9C
AIMV_ROWS = 7
AIMV_NODE_SIZE = 8 + AIMV_ROWS * 16
PARAM_SIZE = 0x30


@dataclass(frozen=True)
class HitRecord:
    raw: bytes

    @property
    def box(self) -> tuple[int, int, int, int]:
        """(x, y, half_w, half_h): centre and half-size, facing right."""
        return struct.unpack_from('<4h', self.raw, 0)

    @property
    def rect(self) -> tuple[int, int, int, int]:
        x, y, hw, hh = self.box
        return x - hw, y - hh, x + hw, y + hh

    @property
    def active(self) -> tuple[int, int]:
        return struct.unpack_from('<hh', self.raw, 0x14)

    @property
    def power(self) -> int:
        return struct.unpack_from('<i', self.raw, 0x0C)[0]

    @property
    def value2(self) -> int:
        return struct.unpack_from('<i', self.raw, 0x10)[0]

    @property
    def col_byte0(self) -> int:
        return self.raw[0x18]

    @property
    def col_byte1(self) -> int:
        return self.raw[0x19]

    @property
    def status(self) -> int:
        return struct.unpack_from('<b', self.raw, 0x1A)[0]

    @property
    def flag(self) -> int:
        return self.raw[0x1B]

    @property
    def reach(self) -> str:
        """The distance class BattleAIDeck_Create derives from x + half-width."""
        r = self.box[0] + self.box[2]
        return 'near' if r < 0x50 else 'mid' if r < 0xA0 else 'far'


@dataclass(frozen=True)
class AttackBlock:
    index: int                 # selector - 1
    offset: int
    header: bytes
    records: tuple[HitRecord, ...]

    @property
    def selector(self) -> int:
        return self.index + 1


@dataclass
class AttackProfile:
    raw: bytes
    blocks: dict[int, AttackBlock] = field(default_factory=dict)

    def for_selector(self, selector: int) -> AttackBlock | None:
        return self.blocks.get(selector - 1)


def parse_aipm(blob: bytes) -> AttackProfile:
    if blob[:4] != b'AIPM' or len(blob) < 8 + 4 * AIPM_SLOTS:
        raise ValueError('not an AIPM AI attack profile')
    prof = AttackProfile(blob)
    for i in range(AIPM_SLOTS):
        o = struct.unpack_from('<i', blob, 8 + 4 * i)[0]
        if o < 0:
            continue
        if o + BLOCK_HEADER > len(blob):
            raise ValueError(f'AIPM block {i} outside the file')
        n = blob[o + 0x0C]
        end = o + BLOCK_HEADER + RECORD_SIZE * max(n, 1)
        if end > len(blob):
            raise ValueError(f'AIPM block {i}: {n} records overrun the file')
        recs = tuple(HitRecord(blob[o + BLOCK_HEADER + RECORD_SIZE * k:o + BLOCK_HEADER + RECORD_SIZE * (k + 1)])
                     for k in range(n))
        prof.blocks[i] = AttackBlock(i, o, blob[o:o + BLOCK_HEADER], recs)
    return prof


@dataclass(frozen=True)
class NavNode:
    index: int                 # = stage collider index
    head: bytes                # 8 bytes, not traced
    links: tuple[tuple[int, ...], ...]   # per movement row: reachable collider ids


@dataclass
class NavGraph:
    raw: bytes
    rows: tuple[bytes, ...]    # 7 × 0x28-byte movement parameter rows (not traced)
    nodes: tuple[NavNode, ...]

    def edges(self, row: int) -> list[tuple[int, int]]:
        return [(n.index, t) for n in self.nodes for t in n.links[row]]


def parse_aimv(blob: bytes) -> NavGraph:
    if blob[:4] != b'AIMV':
        raise ValueError('not an AIMV AI navigation graph')
    row_offs = struct.unpack_from('<7I', blob, 4)
    rows = tuple(blob[o:o + 0x28] for o in row_offs)
    first_row = min(row_offs)
    node_offs = [struct.unpack_from('<i', blob, p)[0] for p in range(0x20, first_row, 4)]
    nodes = []
    for i, o in enumerate(node_offs):
        if o + AIMV_NODE_SIZE > len(blob):
            raise ValueError(f'AIMV node {i} outside the file')
        lists = []
        for k in range(AIMV_ROWS):
            ids = []
            for b in struct.unpack_from('<16b', blob, o + 8 + 16 * k):
                if b < 0:
                    break
                ids.append(b)
            lists.append(tuple(ids))
        nodes.append(NavNode(i, blob[o:o + 8], tuple(lists)))
    return NavGraph(blob, rows, tuple(nodes))


@dataclass
class AiParams:
    raw: bytes

    @property
    def count(self) -> int:
        return len(self.raw) // PARAM_SIZE

    def record(self, i: int) -> bytes:
        return self.raw[i * PARAM_SIZE:(i + 1) * PARAM_SIZE]

    def rating(self, i: int) -> int:
        """Byte +0x2E (J-Arena result rating, ov12 0x021C56D0)."""
        return self.record(i)[0x2E]


def parse_ai_param(blob: bytes) -> AiParams:
    if len(blob) % PARAM_SIZE:
        raise ValueError('ai_param.bin is not a whole number of 0x30-byte records')
    return AiParams(blob)


AIPM_PATH = 'chr/ChrBin.aar|chr/ai/{cid}.bin'
AIMV_PATH = 'chr/ChrBin.aar|chr/ai/move/{stem}/{profile}_m.bin'
AIMV_PROFILES = ('f', 'n', 's')
