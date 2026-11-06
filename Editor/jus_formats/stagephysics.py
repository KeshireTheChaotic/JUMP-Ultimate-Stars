"""Stage runtime data (``stage/bg_xx.bin`` and ``.mob``), read-only.

Formats traced from ARM9 main + overlay 6 (see docs/STAGE_RUNTIME_TRACE.md).
Nothing here rebuilds a file; parsers validate every declared length so an
unknown layout fails loudly instead of being silently resynchronised.

``.bin`` — six u32 section offsets at 0:
  0  three background layer records + their animation scripts
     (BattleMapBG_Create / _SetAnime / _SetPriority, ARM9 0x02083FCC)
  1  0x34-byte header + 0x8000-byte grid (BattleMapInit: piVar2[4]/[5])
  2  collision descriptors, 0x18 bytes, count header +0x2E
  3  wall records, 0x14 bytes, count header +0x2C (BattleMapInitWall 0x021671E8)
  4  conveyor records, 8 bytes, count header +0x2D (BattleMapInitConveyor)
  5  8 trailing bytes (unknown)

``.mob`` — four u32 section offsets at 0:
  0  moving floors (BattleMapMoveFloorCreate 0x02085704, Init 0x02085D74)
  1  item spawn configuration + candidates (BattleMapLoadItem 0x021644C4)
  2  grip points (BattleMapGripLoad 0x02166B48)
  3  gimmicks (BattleMapGimmick_Create 0x02163188)

Coordinates: ``.mob`` points and gimmicks are 24.8 fixed; floor records,
paths and BG layer positions are whole pixels.  World x = main-layer pixel
x − 192 (layer record 0 is placed at (−192, 0)).
"""
from __future__ import annotations

import struct
from dataclasses import dataclass, field


def u16(b: bytes, p: int) -> int: return struct.unpack_from('<H', b, p)[0]
def s16(b: bytes, p: int) -> int: return struct.unpack_from('<h', b, p)[0]
def u32(b: bytes, p: int) -> int: return struct.unpack_from('<I', b, p)[0]
def s32(b: bytes, p: int) -> int: return struct.unpack_from('<i', b, p)[0]
def s8(b: bytes, p: int) -> int: return struct.unpack_from('<b', b, p)[0]


#: ARM9 0x02092EA8: moving-floor speed by record +0x1C (24.8 px per frame → 0.5, 1, 1.5 px)
FLOOR_SPEEDS = (128, 256, 384)

#: record +0x20 → init 0x020A00C0 / per-frame update 0x020A00A8
FLOOR_MOTION = {
    0: ('Path loop', 'follows its path commands forever (0x020860F8)'),
    1: ('Blink', 'toggles solid/not solid each time its animation ends (0x02086178)'),
    2: ('Sink', 'sinks 0.5 px/frame while stood on, rises back to its start (0x02086264)'),
    3: ('Ride path', 'follows its path only while stood on, otherwise stops (0x02086310)'),
    4: ('Crumble', 'breaks after 3×120 frames stood on, gone for 360 frames (0x02086364)'),
    5: ('Path loop', 'same handlers as kind 0 (0x02085EDC / 0x020860F8)'),
}

#: gimmick type (+0x0C) → (label, init, update, behaviour).  Labels describe the
#: traced behaviour; the game has no names for them.
GIMMICK_TYPES = {
    0: ('Reactive prop', 0x021638A4, 0x02163AE0,
        'plays its reaction when its object flag 0x80000000 is set (hit)'),
    1: ('Timed toggle', 0x021638DC, 0x02163B14,
        'waits param0 frames, switches state (SE 0x7A/0x4D), stays param1 frames, repeats'),
    2: ('Conveyor switch', 0x02163900, 0x02163BFC,
        'when hit: toggles the listed conveyors (0x02162CC0) and its own motion'),
    3: ('Static prop', 0x02163928, 0x02163ADC, 'object with flag 0x10000000; no update'),
    4: ('Hazard spawner', 0x02163954, 0x02163D30,
        'every 121 frames spawns hazard 0x02172438 at a random listed point'),
    5: ('Warned drop', 0x02163994, 0x02163DC0,
        'every 121 frames picks a random listed point, SE 0x7A/0x4C, spawns hazard 0x02172458 there'),
    6: ('Hazard spawner', 0x021639C4, 0x02163E60,
        'every 181 frames spawns hazard 0x02172478 at a random listed point'),
    7: ('Emitter', 0x02163A1C, 0x02163ADC, 'no update; used as a position by trap switches (type 8)'),
    8: ('Trap switch', 0x02163900, 0x02163EE4,
        'when hit: spawns hazard 0x021724D8 at each listed gimmick, re-arms after 180 frames'),
    9: ('Floor switch', 0x02163900, 0x02164034,
        'when hit: stops the listed moving floors for 180 frames (0x02085C40)'),
    10: ('Stage event', 0x02163A68, 0x0216417C,
         'every param0+1 frames: warning at 60/30 frames before (SE 0x4A), event for param1+1 '
         'frames (SE 0x4B, battle flag 0x3C bit 2)'),
    11: ('Cannon', 0x02163A80, 0x02164254,
         'idle 180 frames, aims, fires a projectile 16 frames later (SE 0x4E); turns when hit'),
}

#: BG animation script record types (BattleMapBG_Create switch)
BG_ANIM_TYPES = {
    0: 'Palette fade', 1: 'Palette rotate', 2: 'Scroll band', 3: 'Camera parallax',
    4: 'Priority by camera Y', 5: 'Sprite loop',
}


# ====================================================================== .mob
@dataclass(frozen=True)
class StageSection:
    index: int
    kind: int
    count: int
    offset: int
    size: int


@dataclass(frozen=True)
class FloorPathCommand:
    """Eight-byte path command (ARM9 0x02085EDC): type 0 = move to (x, y) at the
    floor's speed, type 1 = wait ``count`` (+1) frames."""
    offset: int
    kind: int
    x: int | None
    y: int | None
    count: int | None
    raw: bytes


@dataclass(frozen=True)
class MovingFloor:
    offset: int
    byte_length: int
    x: int                      # +4 s16 start, whole pixels
    y: int                      # +6
    segments: int               # +0x1D
    motion_kind: int            # +0x20
    speed_index: int            # +0x1C
    path_commands: tuple[FloorPathCommand, ...]
    raw: bytes

    @property
    def half_width(self) -> int:     # +8 (= −(s8)+2 on every shipped floor; inferred)
        return u16(self.raw, 8)

    @property
    def top_offset(self) -> int:     # +3 s8
        return s8(self.raw, 3)

    @property
    def thickness(self) -> int:      # +0xA (inferred)
        return u16(self.raw, 0xA)

    @property
    def sprite(self) -> int:         # +0x1F → motion 0x401100 + n in bg_xx_floor.aar
        return self.raw[0x1F]

    @property
    def speed(self) -> int | None:
        return FLOOR_SPEEDS[self.speed_index] if self.speed_index < len(FLOOR_SPEEDS) else None


@dataclass(frozen=True)
class PointRecord:
    offset: int
    x_fixed: int
    y_fixed: int
    raw: bytes

    @property
    def pixel_xy(self):
        return (self.x_fixed / 256.0, self.y_fixed / 256.0)


@dataclass(frozen=True)
class ItemConfig:
    """``.mob`` section 1 header (BattleMapLoadItem 0x021644C4, spawner 0x021650D0)."""
    item_set: int               # +4 → item/item01.aar / item02.aar (0x02172568)
    stage_weight: int           # +5 % of the stage weights vs bin item/itemprob.ipf
    interval: int               # +6 u16 frames between spawns (+0x14E)
    weights: tuple[int, ...]    # +8..+0xD
    jpower_weights: tuple[int, ...]   # +0xE..+0x13
    symbol_count: int           # +0x14: 8-byte symbol points after the candidates
    jpower_factor: int          # +0x15
    categories: tuple[tuple[int, int], ...]   # +0x18: 3 × {u8 weight %, u8 ...} (0x0216646C)
    symbols: tuple[tuple[int, int], ...]


@dataclass(frozen=True)
class GimmickRecord:
    offset: int
    byte_length: int
    type_id: int
    raw: bytes

    @property
    def x_fixed(self) -> int:
        return s32(self.raw, 4)

    @property
    def y_fixed(self) -> int:
        return s32(self.raw, 8)

    @property
    def pixel_xy(self):
        return (self.x_fixed / 256.0, self.y_fixed / 256.0)

    @property
    def sprite(self) -> int:         # +0xD → motion 0x401200 + n in bg_xx_gimmick.aar
        return self.raw[0xD]

    @property
    def params(self) -> bytes:
        return self.raw[0x10:]

    @property
    def label(self) -> str:
        return GIMMICK_TYPES.get(self.type_id, (f'type {self.type_id}',))[0]

    @property
    def timers(self) -> tuple[int, int] | None:
        """Type 1 (off, on) and type 10 (interval, duration) u16 parameters."""
        if self.type_id in (1, 10) and len(self.params) >= 4:
            return u16(self.params, 0), u16(self.params, 2)
        return None

    @property
    def points(self) -> tuple[tuple[float, float], ...]:
        """Types 4/5/6: u32 count + count × (s32 x, s32 y) 24.8 spawn points."""
        if self.type_id not in (4, 5, 6) or len(self.params) < 4:
            return ()
        n = u32(self.params, 0)
        return tuple((s32(self.params, 4 + 8 * i) / 256, s32(self.params, 8 + 8 * i) / 256) for i in range(n))

    @property
    def targets(self) -> tuple[int, ...]:
        """Types 2/8/9: u32 count + byte ids (conveyors / gimmicks / moving floors)."""
        if self.type_id not in (2, 8, 9) or len(self.params) < 4:
            return ()
        n = u32(self.params, 0)
        return tuple(self.params[4:4 + n])


@dataclass(frozen=True)
class StageMob:
    raw: bytes
    sections: tuple[StageSection, ...]
    floors: tuple[MovingFloor, ...]
    item_candidates: tuple[PointRecord, ...]
    grips: tuple[PointRecord, ...]
    gimmicks: tuple[GimmickRecord, ...]
    item_tail_bytes: int
    items: ItemConfig | None = None


def _parse_items(blob: bytes, start: int, end: int, count: int) -> ItemConfig:
    h = blob[start:start + 0x24]
    nsym = h[0x14]
    cand_end = start + 0x24 + 12 * count
    if cand_end + 8 * nsym != end:
        raise ValueError(f'.mob item section: {count} candidates + {nsym} symbol points do not fill it')
    symbols = tuple((s32(blob, cand_end + 8 * i) / 256, s32(blob, cand_end + 8 * i + 4) / 256)
                    for i in range(nsym))
    return ItemConfig(h[4], s8(h, 5), u16(h, 6), tuple(s8(h, 8 + i) for i in range(6)),
                      tuple(s8(h, 0xE + i) for i in range(6)), nsym, s8(h, 0x15),
                      tuple((h[0x18 + 4 * i], h[0x19 + 4 * i]) for i in range(3)), symbols)


def parse_mob(blob: bytes) -> StageMob:
    if len(blob) < 32:
        raise ValueError('stage .mob truncated')
    offs = struct.unpack_from('<4I', blob)
    if offs[0] != 0x10 or tuple(sorted(offs)) != offs or offs[-1] >= len(blob):
        raise ValueError('stage .mob section offsets invalid')
    ends = offs[1:] + (len(blob),)
    parts = []
    for i, (start, end) in enumerate(zip(offs, ends)):
        if end - start < 4:
            raise ValueError(f'.mob section {i} shorter than header')
        kind, count, declared = struct.unpack_from('<BBH', blob, start)
        if kind != (0, 1, 2, 2)[i]:
            raise ValueError(f'.mob section {i} unexpected kind {kind}')
        if i < 3 and declared != end - start:
            raise ValueError(f'.mob section {i} declared {declared} bytes, actual {end - start}')
        parts.append(StageSection(i, kind, count, start, end - start))
    floors = []
    start, end = offs[0], ends[0]
    p = start + 4
    for _ in range(parts[0].count):
        if p + 0x24 > end:
            raise ValueError('.mob moving-floor record truncated')
        size = u16(blob, p)
        nseg = blob[p + 0x1D]
        if size < 0x24 + nseg * 8 or p + size > end:
            raise ValueError('.mob moving-floor stride/path count invalid')
        commands = []
        for i in range(nseg):
            cp = p + 0x24 + i * 8
            kind = blob[cp]
            commands.append(FloorPathCommand(cp, kind,
                                             s16(blob, cp + 4) if kind == 0 else None,
                                             s16(blob, cp + 6) if kind == 0 else None,
                                             s16(blob, cp + 4) if kind == 1 else None,
                                             blob[cp:cp + 8]))
        floors.append(MovingFloor(p, size, s16(blob, p + 4), s16(blob, p + 6),
                                  nseg, blob[p + 0x20], blob[p + 0x1C],
                                  tuple(commands), blob[p:p + size]))
        p += size
    if p != end:
        raise ValueError(f'.mob moving-floor section has {end - p} trailing bytes')
    # Item candidates at section1+0x24 (FUN_021662C4), symbol points after them.
    start, end = offs[1], ends[1]
    p = start + 0x24
    nitems = parts[1].count
    if p + 12 * nitems > end:
        raise ValueError('.mob item-candidate list extends outside section')
    items = tuple(PointRecord(p + i * 12, s32(blob, p + i * 12), s32(blob, p + i * 12 + 4),
                              blob[p + i * 12:p + i * 12 + 12]) for i in range(nitems))
    item_tail = end - p - 12 * nitems
    config = _parse_items(blob, start, end, nitems)
    start, end = offs[2], ends[2]
    if end - start != 4 + 12 * parts[2].count:
        raise ValueError('.mob grip list length/count mismatch')
    p = start + 4
    grips = tuple(PointRecord(p + i * 12, s32(blob, p + i * 12), s32(blob, p + i * 12 + 4),
                              blob[p + i * 12:p + i * 12 + 12]) for i in range(parts[2].count))
    start, end = offs[3], ends[3]
    p = start + 4
    gimmicks = []
    for _ in range(parts[3].count):
        if p + 0x10 > end:
            raise ValueError('.mob gimmick record truncated')
        size = u32(blob, p)
        if size < 0x10 or p + size > end:
            raise ValueError('.mob gimmick stride invalid')
        gimmicks.append(GimmickRecord(p, size, blob[p + 0x0C], blob[p:p + size]))
        p += size
    if p != end:
        raise ValueError('.mob gimmick section has trailing bytes')
    return StageMob(blob, tuple(parts), tuple(floors), items, grips, tuple(gimmicks), item_tail, config)


# ====================================================================== .bin
@dataclass(frozen=True)
class BgAnim:
    """One BattleMapBG animation record (type u32 + body)."""
    offset: int
    kind: int
    body: bytes                  # bytes after the type word

    @property
    def label(self) -> str:
        return BG_ANIM_TYPES.get(self.kind, f'type {self.kind}')

    # -- type 0: CommonPaletteAnime kind 3 on one colour (ping-pong fade)
    #    body {u32 steps, u16 target BGR555, u8 colour index, u8}
    # -- type 1: CommonPaletteAnime kind 0/1 rotation
    #    body {u16 period, u8 start, u8, u8 count, u8, u8 step, u8 bit0 = rotate left}
    # -- type 2: line-scroll band (0x02047AA0, update 0x02085034)
    #    body {s16 x0, s16 y0, u16 tile row, u8 count, u8, count × {s16 dx, s16 dy, u16 frames, u16}}
    # -- type 3: camera parallax (0x020850EC) body 8 × s16
    # -- type 4: BG priority by camera Y (0x02085314) body {u8 count, u8 default, u16, count × {u16 y, u8 prio, u8}}
    # -- type 5: sprite cell loop (0x020854C4)
    #    body {s16 x, s16 y, u8 count, s8 player, u16 cell0, count × {u16 frames, u8 cell, u8}}

    def fields(self) -> dict:
        b = self.body
        k = self.kind
        if k == 0:
            return {'steps': u32(b, 0), 'colour': u16(b, 4), 'index': b[6]}
        if k == 1:
            return {'period': u16(b, 0), 'start': b[2], 'count': b[4], 'step': b[6], 'left': bool(b[7] & 1)}
        if k == 2:
            n = b[6]
            return {'x0': s16(b, 0), 'y0': s16(b, 2), 'row': u16(b, 4), 'continuous': n == 1,
                    'steps': [(s16(b, 8 + 8 * i), s16(b, 10 + 8 * i), u16(b, 12 + 8 * i)) for i in range(n)]}
        if k == 3:
            v = struct.unpack_from('<8h', b, 0)
            return {'cam_x': (v[0], v[2]), 'cam_y': (v[1], v[3]), 'out_x': (v[4], v[6]), 'out_y': (v[5], v[7])}
        if k == 4:
            return {'default': b[1], 'switches': [(u16(b, 4 + 4 * i), b[6 + 4 * i]) for i in range(b[0])]}
        if k == 5:
            n = b[4]
            return {'x': s16(b, 0), 'y': s16(b, 2), 'player': s8(b, 5), 'cell0': u16(b, 6),
                    'steps': [(u16(b, 8 + 4 * i), b[10 + 4 * i]) for i in range(n)]}
        return {}

    def summary(self) -> str:
        f = self.fields()
        k = self.kind
        if k == 0:
            return f'colour {f["index"]} ⇄ #{f["colour"]:04X} over {f["steps"]} steps'
        if k == 1:
            return (f'colours {f["start"]}..{f["start"] + f["count"] - 1} rotate {"left" if f["left"] else "right"} '
                    f'by {f["step"]} every {f["period"] + 1} frames')
        if k == 2:
            st = f['steps']
            if f['continuous']:
                return f'rows from {f["row"] * 8}px: {st[0][0] / 4096:+.3f}, {st[0][1] / 4096:+.3f} px/frame'
            return f'rows from {f["row"] * 8}px: {len(st)}-step loop, {sum(s[2] + 1 for s in st)} frames'
        if k == 3:
            return f'camera x {f["cam_x"]} → layer x {f["out_x"]}; camera y {f["cam_y"]} → layer y {f["out_y"]}'
        if k == 4:
            return f'priority {f["default"]}, ' + ', '.join(f'{p} below y {y}' for y, p in f['switches'])
        if k == 5:
            return (f'cells {[c for _, c in f["steps"]]} at ({f["x"]}, {f["y"]})'
                    + (f', player {f["player"]}' if f['player'] >= 0 else ''))
        return self.body.hex()


_BG_LEN = {0: lambda b: 12, 1: lambda b: 12, 2: lambda b: 12 + b[10] * 8, 3: lambda b: 20,
           4: lambda b: 8 + b[4] * 4, 5: lambda b: 12 + b[8] * 4}


@dataclass(frozen=True)
class BgLayer:
    """BattleMapBG layer record; record i draws resources 0x400000+i (ALTM) / 0x400100+i (tiles)."""
    index: int
    offset: int
    x: int
    y: int
    draw_priority: int       # +6 → FUN_02084EEC (draw-link priority, high draws first)
    bg_priority: int         # +7 → FUN_0203D0B4
    f8: int                  # +8 → FUN_0203D478 (meaning not traced)
    enabled: int             # +9: 0 = no layer; else <<10 to vfunc +0x90
    anims: tuple[BgAnim, ...]


@dataclass(frozen=True)
class Conveyor:
    index: int
    raw: bytes

    @property
    def speed(self) -> int:
        return s16(self.raw, 0)


@dataclass(frozen=True)
class StageGeometry:
    raw: bytes
    offsets: tuple[int, ...]
    grid_header: bytes
    grid_data: bytes
    collision_records: tuple[bytes, ...]
    wall_records: tuple[bytes, ...]
    aux_data: bytes
    layers: tuple[BgLayer, ...] = ()
    conveyors: tuple[Conveyor, ...] = ()

    @property
    def start_points(self) -> tuple[tuple[int, int], ...]:
        """Grid header +8: four x then four y (24.8) — player start points (inferred)."""
        xs = struct.unpack_from('<4i', self.grid_header, 8)
        ys = struct.unpack_from('<4i', self.grid_header, 0x18)
        return tuple((x // 256, y // 256) for x, y in zip(xs, ys))


def parse_bg_layers(blob: bytes, start: int, end: int) -> tuple[BgLayer, ...]:
    layers = []
    p = start
    for i in range(3):
        if p + 12 > end:
            raise ValueError(f'stage .bin BG layer {i} truncated')
        size = u16(blob, p + 4)
        q = p + 12
        anims = []
        for _ in range(blob[p + 10]):
            kind = u32(blob, q)
            if kind not in _BG_LEN:
                raise ValueError(f'stage .bin BG layer {i}: animation type {kind} not traced')
            ln = _BG_LEN[kind](blob[q:q + 12])
            anims.append(BgAnim(q, kind, blob[q + 4:q + ln]))
            q += ln
        if q != p + size:
            raise ValueError(f'stage .bin BG layer {i}: animations end at +{q - p}, record is {size} bytes')
        layers.append(BgLayer(i, p, s16(blob, p), s16(blob, p + 2), blob[p + 6], blob[p + 7], blob[p + 8],
                              blob[p + 9], tuple(anims)))
        p += size
    if p != end:
        raise ValueError(f'stage .bin BG section has {end - p} trailing bytes')
    return tuple(layers)


def parse_stage_bin(blob: bytes) -> StageGeometry:
    if len(blob) < 24:
        raise ValueError('stage .bin header truncated')
    offs = struct.unpack_from('<6I', blob)
    if offs[0] != 24 or tuple(sorted(offs)) != offs or offs[-1] > len(blob):
        raise ValueError('stage .bin section offsets invalid')
    if offs[2] - offs[1] != 0x8034:
        raise ValueError('stage .bin grid section is not expected 0x34 + 0x8000 bytes')
    hdr = blob[offs[1]:offs[1] + 0x34]
    ncoll = u16(hdr, 0x2E)
    nwall = hdr[0x2C]
    nconv = hdr[0x2D]
    if offs[3] - offs[2] != ncoll * 24:
        raise ValueError('stage .bin collision descriptor count/stride mismatch')
    if offs[4] - offs[3] != nwall * 20:
        raise ValueError('stage .bin wall descriptor count/stride mismatch')
    if offs[5] - offs[4] != nconv * 8:
        raise ValueError('stage .bin conveyor count/stride mismatch')
    collision = tuple(blob[offs[2] + i * 24:offs[2] + (i + 1) * 24] for i in range(ncoll))
    wall = tuple(blob[offs[3] + i * 20:offs[3] + (i + 1) * 20] for i in range(nwall))
    conveyors = tuple(Conveyor(i, blob[offs[4] + 8 * i:offs[4] + 8 * i + 8]) for i in range(nconv))
    return StageGeometry(blob, offs, hdr, blob[offs[1] + 0x34:offs[2]], collision, wall,
                         blob[offs[4]:], parse_bg_layers(blob, offs[0], offs[1]), conveyors)
