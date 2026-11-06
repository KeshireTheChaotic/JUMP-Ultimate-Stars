"""Lossless coordinate editing for verified stage .mob marker records.

Only the proven coordinate fields are writable.  Variable-length records,
counts, trigger opcodes, item probability settings and all unclassified bytes
remain untouched.  No new records are created.
"""
from __future__ import annotations

from decimal import Decimal, InvalidOperation
import struct

from .stagephysics import StageMob, parse_mob


def _coordinate(value: str | int | float, *, fixed: bool) -> int:
    try:
        exact = Decimal(str(value))
    except (InvalidOperation, ValueError) as exc:
        raise ValueError('Coordinates must be finite numbers') from exc
    if not exact.is_finite():
        raise ValueError('Coordinates must be finite numbers')
    unit = exact * (256 if fixed else 1)
    if unit != unit.to_integral_value():
        raise ValueError('Coordinates must use whole pixels for floors or 1/256-pixel steps for markers')
    number = int(unit)
    minimum, maximum = (-2147483648, 2147483647) if fixed else (-32768, 32767)
    if not minimum <= number <= maximum:
        raise ValueError('Coordinate is outside its signed binary field')
    return number


def format_coordinate(raw: int, *, fixed: bool) -> str:
    """Exact decimal display; re-entering a value never quantizes it."""
    if not fixed:
        return str(raw)
    return format(Decimal(raw) / Decimal(256), 'f')


def point_rows(mob: StageMob, kind: str) -> list[tuple[int, str, str, str]]:
    """Return (index, description, X, Y) for a bottom-ribbon category."""
    if kind == 'floor':
        return [(i, f'Floor {i} / {row.motion_kind}', str(row.x), str(row.y))
                for i, row in enumerate(mob.floors)]
    if kind == 'grip':
        source = mob.grips
        return [(i, f'Grip point {i}', format_coordinate(row.x_fixed, fixed=True),
                 format_coordinate(row.y_fixed, fixed=True)) for i, row in enumerate(source)]
    if kind == 'item':
        source = mob.item_candidates
        return [(i, f'Item candidate {i}', format_coordinate(row.x_fixed, fixed=True),
                 format_coordinate(row.y_fixed, fixed=True)) for i, row in enumerate(source)]
    if kind == 'symbol':
        return [(i, f'Symbol spawn {i}', format_coordinate(round(x * 256), fixed=True),
                 format_coordinate(round(y * 256), fixed=True))
                for i, (x, y) in enumerate(mob.items.symbols if mob.items else ())]
    if kind == 'gimmick':
        return [(i, f'{row.label} (type {row.type_id})',
                 format_coordinate(row.x_fixed, fixed=True),
                 format_coordinate(row.y_fixed, fixed=True)) for i, row in enumerate(mob.gimmicks)]
    raise ValueError(f'Unsupported marker kind: {kind}')


def patch_point(blob: bytes, kind: str, index: int, x: str, y: str) -> bytes:
    """Patch one verified XY pair, then reparse; preserve every other byte.

    floor: two s16 whole-pixel coordinates at record +4/+6;
    item, grip: two s32 24.8 coordinates at record +0/+4;
    gimmick: two s32 24.8 coordinates at record +4/+8;
    symbol: two s32 24.8 coordinates after the item-candidate records.
    """
    mob = parse_mob(blob)
    if not isinstance(index, int) or index < 0:
        raise IndexError('Marker index must be nonnegative')
    if kind == 'floor':
        rows = mob.floors
        fixed, start, fmt = False, (rows[index].offset + 4 if index < len(rows) else -1), '<hh'
    elif kind in ('item', 'grip'):
        rows = mob.item_candidates if kind == 'item' else mob.grips
        fixed, start, fmt = True, (rows[index].offset if index < len(rows) else -1), '<ii'
    elif kind == 'gimmick':
        rows = mob.gimmicks
        fixed, start, fmt = True, (rows[index].offset + 4 if index < len(rows) else -1), '<ii'
    elif kind == 'symbol':
        count = len(mob.items.symbols) if mob.items else 0
        fixed, fmt = True, '<ii'
        start = (mob.sections[1].offset + 0x24 +
                 12 * len(mob.item_candidates) + index * 8) if index < count else -1
    else:
        raise ValueError(f'Unsupported marker kind: {kind}')
    if start < 0:
        raise IndexError(f'{kind} marker {index} is missing')
    a, b = _coordinate(x, fixed=fixed), _coordinate(y, fixed=fixed)
    result = bytearray(blob)
    struct.pack_into(fmt, result, start, a, b)
    parsed = parse_mob(bytes(result))
    if (len(parsed.floors), len(parsed.grips), len(parsed.gimmicks),
            len(parsed.item_candidates)) != (
            len(mob.floors), len(mob.grips), len(mob.gimmicks),
            len(mob.item_candidates)):
        raise ValueError('Marker patch changed stage record structure')
    # Explicitly require every unknown byte to match the source.
    changed = [i for i, (old, new) in enumerate(zip(blob, result)) if old != new]
    if any(i < start or i >= start + struct.calcsize(fmt) for i in changed):
        raise ValueError('Marker patch modified an unexpected stage field')
    return bytes(result)
