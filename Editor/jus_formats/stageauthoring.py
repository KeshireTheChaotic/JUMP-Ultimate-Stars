"""Conservative binary authoring for verified JUS stage objects.

Mutations affect known fields in .mob and .bin; unknown bytes are retained.
Structural additions use complete copies of existing records and are labelled
experimental, pending in-emulator validation of implicit object references.
"""
from __future__ import annotations

import struct
from dataclasses import dataclass

from . import stagephysics as sp


def _integer(value, low, high, label):
    try:
        n = int(value)
    except (ValueError, TypeError) as exc:
        raise ValueError(f'{label} must be an integer') from exc
    if not low <= n <= high:
        raise ValueError(f'{label} must be in [{low}, {high}]')
    return n


def _fixed(value, label):
    try:
        v = float(value)
        n = round(v * 256)
    except (ValueError, TypeError, OverflowError) as exc:
        raise ValueError(f'{label} must be a finite pixel coordinate') from exc
    if not -2147483648 <= n <= 2147483647 or abs(n / 256 - v) > 1e-7:
        raise ValueError(f'{label} must be representable as signed 24.8 fixed-point')
    return n


@dataclass(frozen=True)
class StageObject:
    kind: str
    index: int
    label: str


class StageObjects:
    """Undo-friendly in-memory stage geometry with parser-checked patching."""

    def __init__(self, mob: bytes | None = None, geo: bytes | None = None):
        self.mob = mob
        self.geo = geo
        self.original = (mob, geo)
        self.parse()

    def parse(self):
        self.m = sp.parse_mob(self.mob) if self.mob is not None else None
        self.g = sp.parse_stage_bin(self.geo) if self.geo is not None else None

    @property
    def dirty(self):
        return (self.mob, self.geo) != self.original

    def snapshot(self):
        return self.mob, self.geo

    def restore(self, snap):
        self.mob, self.geo = snap
        self.parse()

    def records(self) -> list[StageObject]:
        result = []
        if self.m:
            result.append(StageObject('spawner', 0, 'Item spawning settings'))
            result += [StageObject('item', i, f'Item spawn #{i}') for i in range(len(self.m.item_candidates))]
            result += [StageObject('symbol', i, f'Item symbol #{i}') for i in range(len(self.m.items.symbols))]
            result += [StageObject('grip', i, f'Grip point #{i}') for i in range(len(self.m.grips))]
            for i, f in enumerate(self.m.floors):
                result.append(StageObject('floor', i, f'Moving platform #{i} · {sp.FLOOR_MOTION.get(f.motion_kind, (f.motion_kind,))[0]}'))
                result += [StageObject('path', (i << 8) | j, f'Platform #{i} path step #{j}')
                           for j in range(len(f.path_commands))]
            for i, g in enumerate(self.m.gimmicks):
                category = 'trigger' if g.type_id in (1, 2, 8, 9, 10) else 'gimmick'
                result.append(StageObject(category, i, f'{g.label} #{i}'))
        if self.g:
            result += [StageObject('collider', i, f'Collision shape #{i} · type {c.type_id}')
                       for i, c in enumerate(self.g.collision_boxes)]
            result += [StageObject('conveyor', i, f'Conveyor #{i}') for i in range(len(self.g.conveyors))]
        return result

    def fields(self, kind: str, i: int) -> dict[str, object]:
        m, g = self.m, self.g
        if kind == 'spawner' and m and m.items:
            return {'interval': m.items.interval, 'item_set': m.items.item_set,
                    'stage_weight': m.items.stage_weight}
        if kind in ('item', 'grip') and m:
            v = (m.item_candidates if kind == 'item' else m.grips)[i]
            return {'x': v.x_fixed / 256, 'y': v.y_fixed / 256}
        if kind == 'symbol' and m:
            x, y = m.items.symbols[i]
            return {'x': x, 'y': y}
        if kind == 'floor' and m:
            f = m.floors[i]
            return {'x': f.x, 'y': f.y, 'speed_index': f.speed_index,
                    'motion_kind': f.motion_kind}
        if kind == 'path' and m:
            f, step = i >> 8, i & 0xff
            command = m.floors[f].path_commands[step]
            return {'x': command.x, 'y': command.y} if command.kind == 0 else {'wait_count': command.count}
        if kind in ('trigger', 'gimmick') and m:
            v = m.gimmicks[i]
            result = {'x': v.x_fixed / 256, 'y': v.y_fixed / 256}
            if v.timers:
                result.update(timer_0=v.timers[0], timer_1=v.timers[1])
            return result
        if kind == 'collider' and g:
            v = g.collision_boxes[i]
            return {'x': v.x, 'y': v.y, 'width': v.width, 'height': v.height, 'type_id': v.type_id}
        if kind == 'conveyor' and g:
            return {'speed': g.conveyors[i].speed}
        raise ValueError('Stage object does not exist')

    def edit(self, kind: str, i: int, values: dict[str, object]):
        expected = self.fields(kind, i)
        if set(values) != set(expected):
            raise ValueError('Object fields have changed; reselect and retry')
        if kind in ('collider', 'conveyor'):
            blob = bytearray(self.geo)
            if kind == 'collider':
                pos = self.g.offsets[2] + 24 * i
                for o, key in zip((0, 4, 8, 12), ('x', 'y', 'width', 'height')):
                    struct.pack_into('<i', blob, pos + o, _fixed(values[key], key))
                blob[pos + 0x14] = _integer(values['type_id'], 0, 255, 'type_id')
            else:
                struct.pack_into('<h', blob, self.g.offsets[4] + 8 * i,
                                 _integer(values['speed'], -32768, 32767, 'speed'))
            sp.parse_stage_bin(bytes(blob))
            self.geo = bytes(blob)
        else:
            blob = bytearray(self.mob)
            if kind == 'spawner':
                pos = self.m.sections[1].offset
                struct.pack_into('<H', blob, pos + 6, _integer(values['interval'], 0, 65535, 'interval'))
                blob[pos + 4] = _integer(values['item_set'], 0, 255, 'item_set')
                struct.pack_into('<b', blob, pos + 5, _integer(values['stage_weight'], -128, 127, 'stage_weight'))
            elif kind in ('item', 'grip'):
                v = (self.m.item_candidates if kind == 'item' else self.m.grips)[i]
                for j, key in enumerate(('x', 'y')):
                    struct.pack_into('<i', blob, v.offset + j * 4, _fixed(values[key], key))
            elif kind == 'symbol':
                section = self.m.sections[1]
                pos = section.offset + 0x24 + 12 * len(self.m.item_candidates) + i * 8
                for j, key in enumerate(('x', 'y')):
                    struct.pack_into('<i', blob, pos + j * 4, _fixed(values[key], key))
            elif kind == 'floor':
                v = self.m.floors[i]
                for j, key in enumerate(('x', 'y')):
                    struct.pack_into('<h', blob, v.offset + 4 + j * 2,
                                     _integer(values[key], -32768, 32767, key))
                blob[v.offset + 0x1C] = _integer(values['speed_index'], 0, 2, 'speed index')
                blob[v.offset + 0x20] = _integer(values['motion_kind'], 0, 5, 'motion kind')
            elif kind == 'path':
                f, j = i >> 8, i & 0xff
                v = self.m.floors[f].path_commands[j]
                if v.kind == 0:
                    for k, key in enumerate(('x', 'y')):
                        struct.pack_into('<h', blob, v.offset + 4 + 2 * k,
                                         _integer(values[key], -32768, 32767, key))
                else:
                    struct.pack_into('<h', blob, v.offset + 4,
                                     _integer(values['wait_count'], 0, 32767, 'wait_count'))
            elif kind in ('trigger', 'gimmick'):
                v = self.m.gimmicks[i]
                for j, key in enumerate(('x', 'y')):
                    struct.pack_into('<i', blob, v.offset + 4 + 4 * j, _fixed(values[key], key))
                if v.timers:
                    for j, key in enumerate(('timer_0', 'timer_1')):
                        struct.pack_into('<H', blob, v.offset + 0x10 + 2 * j,
                                         _integer(values[key], 0, 65535, key))
            else:
                raise ValueError('Unsupported object type')
            sp.parse_mob(bytes(blob))
            self.mob = bytes(blob)
        self.parse()

    def clone(self, kind: str, i: int) -> int:
        """Clone full existing record. Caller must test structural edits in game."""
        if kind == 'collider' and self.g:
            count = len(self.g.collision_records)
            if count >= 65535:
                raise ValueError('Collision count at format limit')
            start = self.g.offsets[3]
            blob = bytearray(self.geo)
            blob[start:start] = self.g.collision_records[i]
            for j in range(3, 6):
                struct.pack_into('<I', blob, j * 4, self.g.offsets[j] + 24)
            struct.pack_into('<H', blob, self.g.offsets[1] + 0x2E, count + 1)
            sp.parse_stage_bin(bytes(blob))
            self.geo = bytes(blob)
            self.parse()
            return count
        if not self.m or kind not in ('item', 'grip', 'floor', 'trigger', 'gimmick'):
            raise ValueError('Cloning this object type is not supported')
        section_id = {'floor': 0, 'item': 1, 'grip': 2, 'trigger': 3, 'gimmick': 3}[kind]
        section = self.m.sections[section_id]
        if section.count >= 255:
            raise ValueError('Stage section count at format limit')
        if kind == 'floor':
            obj = self.m.floors[i]
            sample = obj.raw
            at = section.offset + section.size
        elif kind == 'item':
            obj = self.m.item_candidates[i]
            sample = obj.raw
            at = section.offset + 0x24 + section.count * 12
        elif kind == 'grip':
            obj = self.m.grips[i]
            sample = obj.raw
            at = section.offset + section.size
        else:
            obj = self.m.gimmicks[i]
            sample = obj.raw
            at = section.offset + section.size
        blob = bytearray(self.mob)
        blob[at:at] = sample
        blob[section.offset + 1] += 1
        if section_id < 3:
            new_len = section.size + len(sample)
            if new_len > 65535:
                raise ValueError('Stage section size exceeds u16')
            struct.pack_into('<H', blob, section.offset + 2, new_len)
        for j in range(section_id + 1, 4):
            struct.pack_into('<I', blob, j * 4, self.m.sections[j].offset + len(sample))
        sp.parse_mob(bytes(blob))
        self.mob = bytes(blob)
        self.parse()
        return section.count
