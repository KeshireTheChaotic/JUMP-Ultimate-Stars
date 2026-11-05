"""JUS J-Galaxy mission definitions and world progression graph.

Field offsets cross-checked against shipped jgalaxy/jgalaxy.aar and ARM9:
  FUN_0207538C: battle/mission table record stride 0xA4
  overlay1 FUN_0214CD20: node record stride 0x88, node +8/+0B/+0C
  overlay1 FUN_0214E380: node +0x12 + 0x14*slot signed Koma grant,
      -1 sentinel for six u16 resources at +0x14..+0x1E.

Undecoded fields are retained verbatim. No insertion/removal of world nodes,
objectives or definitions: the game's save bitmaps and pointers depend on IDs.
"""
from __future__ import annotations

import struct
from dataclasses import dataclass

RECORD_SIZE = 0xA4
NODE_SIZE = 0x88
REWARD_SIZE = 0x14
REWARD_SLOTS = 6
HEADER_SIZE = 0x18
GALAXY_SIZE = 0x3C
LOCATION_SIZE = 0x48
PLANET_SIZE = 0x40
NAMES_SIZE = 0x70  # mission/battle name: runtime reads gameplay flags from +0x70


def _u16(data, at):
    return struct.unpack_from('<H', data, at)[0]


def _s16(data, at):
    return struct.unpack_from('<h', data, at)[0]


def _u32(data, at):
    return struct.unpack_from('<I', data, at)[0]


def _name(raw):
    return raw.split(b'\x00', 1)[0].decode('ascii', 'replace')


@dataclass(frozen=True)
class BattleDefinition:
    index: int
    name: str
    data: bytes


class DefinitionTable:
    """Fixed-index battle.bin and mission.bin tables (4-byte count header)."""

    def __init__(self, data: bytes):
        if len(data) < 4:
            raise ValueError('Definition table is truncated')
        count = _u32(data, 0)
        if count > 4096 or len(data) != 4 + count * RECORD_SIZE:
            raise ValueError('Definition table has invalid count or record length')
        self._data = bytearray(data)
        self.count = count

    @classmethod
    def parse(cls, blob):
        return cls(blob)

    def _start(self, index):
        if not 0 <= index < self.count:
            raise IndexError(f'definition ID {index} out of range (0..{self.count - 1})')
        return 4 + index * RECORD_SIZE

    def get(self, index):
        base = self._start(index)
        b = bytes(self._data[base:base + RECORD_SIZE])
        return BattleDefinition(index, _name(b[:NAMES_SIZE]), b)

    def rename(self, index, title):
        """Only overwrite the known ASCII name field; preserve battle settings."""
        if '\x00' in title:
            raise ValueError('Title cannot include a NUL byte')
        try:
            raw = title.encode('ascii')
        except UnicodeEncodeError as exc:
            raise ValueError('Mission title must use ASCII') from exc
        if not raw or len(raw) >= NAMES_SIZE:
            raise ValueError(f'Mission title must contain 1–{NAMES_SIZE - 1} ASCII bytes')
        base = self._start(index)
        old = self._data[base:base + NAMES_SIZE]
        end = old.find(0)
        if end < 0:
            raise ValueError('Cannot safely rename: original title is not NUL-terminated')
        # Preserve all unknown bytes after the original terminator. This is a
        # fixed-size name field in the ROM; only its first 0x70 bytes are used.
        self._data[base:base + NAMES_SIZE] = raw + b'\x00' * (NAMES_SIZE - len(raw))

    def build(self):
        return bytes(self._data)


@dataclass(frozen=True)
class Reward:
    slot: int
    goal_code: int
    koma_id: int
    resources: tuple[int, int, int, int, int, int]
    raw: bytes

    @property
    def is_koma(self):
        return self.koma_id >= 0


@dataclass(frozen=True)
class ProgressionNode:
    index: int
    definition_id: int
    planet_id: int
    goal_count: int
    flags: int
    rewards: tuple[Reward, ...]
    raw: bytes

    @property
    def mission(self):
        return bool(self.flags & 0x04)


class GalaxyGraph:
    """The exact shipped five-part jgalaxy.bin layout.

    The header gives the offsets/counts of the four graph sections. The last
    section's endpoint must equal file size; unknown record bytes are retained.
    """

    def __init__(self, blob: bytes):
        if len(blob) < HEADER_SIZE:
            raise ValueError('jgalaxy.bin truncated header')
        counts = struct.unpack_from('<4H', blob)
        offsets = struct.unpack_from('<4I', blob, 8)
        if any(c > 16384 for c in counts):
            raise ValueError('jgalaxy.bin unreasonable counts')
        gal, loc, planet, node = offsets
        cgal, cloc, cplanet, cnode = counts
        sections = ((gal, cgal, GALAXY_SIZE),
                    (loc, cloc, LOCATION_SIZE),
                    (node, cnode, NODE_SIZE),
                    (planet, cplanet, PLANET_SIZE))
        ordered = sorted(sections)
        if gal < HEADER_SIZE or any(start + count * size > len(blob)
                                    for start, count, size in sections):
            raise ValueError('jgalaxy.bin out-of-bounds section')
        if any(ordered[i][0] + ordered[i][1] * ordered[i][2] > ordered[i+1][0]
               for i in range(len(ordered) - 1)):
            raise ValueError('jgalaxy.bin sections overlap')
        if node + cnode * NODE_SIZE > planet:
            raise ValueError('jgalaxy.bin node table overlaps planet table')
        self._data = bytearray(blob)
        self.galaxy_count, self.location_count, self.planet_count, self.node_count = counts
        self.galaxy_off, self.location_off, self.planet_off, self.node_off = offsets

    @classmethod
    def parse(cls, blob):
        return cls(blob)

    def _node_start(self, index):
        if not 0 <= index < self.node_count:
            raise IndexError('progression node index out of range')
        return self.node_off + index * NODE_SIZE

    def galaxy_name(self, i):
        if not 0 <= i < self.galaxy_count:
            raise IndexError('galaxy ID out of range')
        b = self.galaxy_off + i * GALAXY_SIZE
        return _name(self._data[b:b+32])

    def planet_name(self, i):
        if not 0 <= i < self.planet_count:
            raise IndexError('planet ID out of range')
        b = self.planet_off + i * PLANET_SIZE
        return _name(self._data[b:b+32])

    def get(self, index):
        start = self._node_start(index)
        buf = bytes(self._data[start:start + NODE_SIZE])
        n_goals = buf[0x0B]
        if n_goals > REWARD_SLOTS:
            raise ValueError(f'node {index} has {n_goals} goal slots (max six)')
        rewards = []
        for j in range(n_goals):
            p = 0x10 + REWARD_SIZE * j
            raw = buf[p:p+REWARD_SIZE]
            rewards.append(Reward(j, _u16(raw, 0), _s16(raw, 2),
                                  struct.unpack_from('<6H', raw, 4), raw))
        return ProgressionNode(index, buf[8], buf[0x0A], n_goals, buf[0x0C], tuple(rewards), buf)

    def _reward_start(self, node_id, slot):
        node = self.get(node_id)
        if not 0 <= slot < node.goal_count:
            raise IndexError(f'node {node_id} goal slot {slot} is inactive')
        return self._node_start(node_id) + 0x10 + slot * REWARD_SIZE

    def grant_koma(self, node_id, slot, koma_id, *, card_count):
        if not isinstance(koma_id, int) or not 0 <= koma_id < min(32768, card_count):
            raise ValueError(f'Koma ID must be in 0..{min(32768, card_count)-1}')
        pos = self._reward_start(node_id, slot)
        struct.pack_into('<h', self._data, pos + 2, koma_id)
        # Preserve dormant resource fields and all unknown goal metadata.

    def grant_resources(self, node_id, slot, resources):
        resources = tuple(int(v) for v in resources)
        if len(resources) != 6 or any(v < 0 or v > 65535 for v in resources):
            raise ValueError('A resource reward requires exactly six u16 quantities')
        pos = self._reward_start(node_id, slot)
        struct.pack_into('<h6H', self._data, pos + 2, -1, *resources)

    def validate_references(self, missions, battles, card_count):
        problems = []
        for i in range(self.node_count):
            node = self.get(i)
            if node.planet_id >= self.planet_count:
                problems.append(f'node {i}: planet {node.planet_id} does not exist')
            n = missions.count if node.mission else battles.count
            if node.definition_id >= n:
                problems.append(f'node {i}: definition {node.definition_id} >= {n}')
            for reward in node.rewards:
                if reward.koma_id < -1 or reward.koma_id >= card_count:
                    problems.append(f'node {i}/slot {reward.slot}: Koma {reward.koma_id} invalid')
        return problems

    def build(self):
        return bytes(self._data)
