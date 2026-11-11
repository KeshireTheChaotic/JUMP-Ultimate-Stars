"""Native ALMT CollisionType -> character combat-record cross references.

Sources: ARM9 main 0207D440 (work IDs <0x100 index builtin ROM
0209FC2C; >=0x100 index chr/col record id-0x100), main 02080F14
(+0x05 signed contact magnitude, +0x03 signed status selector,
+0x07 contact accumulator, +0x0C/0x0D signed knockback), and
ov06 02153CE8 (character impact visual/effect routing).

No final HP-loss calculation is asserted. CollisionType values in the
ALMT file are edited through existing timeline controls; these source
diagnostics recompute directly from its current, possibly edited, tracks.
"""
from __future__ import annotations

from dataclasses import dataclass
import re

from jus_formats import chrbin, collisionwork
from jus_formats.chrbin_semantics import native_reaction_route
from .project import join

_WORK_RE = re.compile(r'^CollisionType(\d+)$')
_SOURCE_ARCHIVE = 'chr/ChrBin.aar'


@dataclass(frozen=True)
class MoveContact:
    node: int
    field: str
    tick: int | None
    work_id: int
    source_path: str
    record_index: int | None
    record: chrbin.ColRecord | None


def col_table(root, form: str):
    """(source path, chr/col RecordTable or None) for a character form like 'bb_b_01'."""
    if not re.fullmatch(r'[a-z]{2}_[bsh]_\d{2}', form or '', re.IGNORECASE):
        return None, None
    member = f'chr/col/{form}.bin'
    path = join(_SOURCE_ARCHIVE, member)
    if not root.exists(path):
        return path, None
    table = chrbin.parse(root.read(path), member)
    return path, table if table.stride == 20 else None


def record_summary(rec: chrbin.ColRecord) -> str:
    v = rec.field_values()
    status = v['status']
    lane = 'off' if not status else f'{"+" if status > 0 else "−"}{abs(status)}'
    return (f'reaction {v["reaction"]}, base HP damage {v["base_damage"]}, '
            f'SP pressure {v["contact"]}, hit-stun {v["accumulator"]:+d}, status {lane}, '
            f'knockback {v["knockback_x"]},{v["knockback_y"]}')


def collision_choices(root, form: str) -> list[tuple[int, str]]:
    """Every CollisionType value the character can address (main 0207D440).

    0 = none; 1..0xFF = builtin ROM records (0x0209FC2C + id*20, bytes not in
    the extracted data); 0x100+i = this character's chr/col row i.
    """
    out = [(0, '0 — none (no collision record)')]
    _path, table = col_table(root, form)
    if table is not None:
        for i in range(table.count):
            out.append((collisionwork.AUTHORED_WORK_BASE + i,
                        f'0x{collisionwork.AUTHORED_WORK_BASE + i:04X} — {form} row {i}: '
                        f'{record_summary(table.col_record(i))}'))
    for wid in range(1, collisionwork.AUTHORED_WORK_BASE):
        addr = collisionwork.resolve_collision_work(wid, 0).address_or_offset
        out.append((wid, f'0x{wid:04X} — builtin record (ROM 0x{addr:08X})'))
    return out


#: chr/col +0x01 reaction index -> label (ov06 0215AF34, 16-entry table 0x021713E8)
def reaction_choices() -> list[tuple[int, str]]:
    out = []
    for i in range(16):
        r = native_reaction_route(i)
        out.append((i, f'{i} — {r.interpretation} (ALMT 0x{r.primary_resource:02X}/0x{r.alternate_resource:02X})'))
    return out


#: chr/col +0x00: main 0207D440 only separates zero from nonzero; 0207FBD0
#: compares the value as a precedence code. 0..7 occur in the shipped data.
def class_choices() -> list[tuple[int, str]]:
    return [(0, '0 — zero-class branch (work flag 0x20000000)')] + [
        (n, f'{n} — nonzero class (work flag 0x10000000), precedence {n}') for n in range(1, 8)]


#: chr/col +0x03 sign selects the lane (main 02080F14): >0 work +0x172/+0x168,
#: <0 work +0x173/+0x16A; the smaller signed value wins a lane. |id| 0x17 also
#: ORs +0x14 into work +0x182 (negative lane only).
STATUS_LANES = ('Off', 'Positive lane (+0x172)', 'Negative lane (+0x173)')


def status_lane(value: int) -> tuple[str, int]:
    return (STATUS_LANES[0], 0) if value == 0 else (
        (STATUS_LANES[1], value) if value > 0 else (STATUS_LANES[2], -value))


def status_value(lane: str, ident: int) -> int:
    if lane == STATUS_LANES[0]:
        return 0
    if not 1 <= ident <= (127 if lane == STATUS_LANES[1] else 128):
        raise ValueError('Status ID must be 1..127 (1..128 on the negative lane)')
    return ident if lane == STATUS_LANES[1] else -ident


def collisions_for_move(root, form: str, move) -> tuple[MoveContact, ...]:
    """Read static/keyed ALMT CollisionType source IDs; skip disabled zero.

    Built-in IDs 1..255 have a proven ROM address but their native record
    bytes are not in the extracted character table, so record=None.
    """
    if not re.fullmatch(r'[a-z]{2}_[bsh]_\d{2}', form, re.IGNORECASE):
        return ()
    member = f'chr/col/{form}.bin'
    path = join(_SOURCE_ARCHIVE, member)
    source = None
    if root.exists(path):
        source = chrbin.parse(root.read(path), member)
        if source.stride != 20:
            source = None
    out = []
    seen = set()
    for ni, node in enumerate(move.nodes):
        if node is None:
            continue
        for track in node.tracks:
            if track.opaque or not _WORK_RE.fullmatch(track.field):
                continue
            points = ((key.tick, key.value) for key in track.keys) if track.keyed else ((None, track.value),)
            for tick, raw_value in points:
                if not isinstance(raw_value, int) or raw_value <= 0 or raw_value > 0xFFFF:
                    continue
                key = (ni, track.field, tick, raw_value)
                if key in seen:
                    continue
                seen.add(key)
                rec = None
                index = raw_value - 0x100 if raw_value >= 0x100 else None
                if index is not None and source is not None and 0 <= index < source.count:
                    rec = source.col_record(index)
                out.append(MoveContact(ni, track.field, tick, raw_value, path, index, rec))
    return tuple(out)
