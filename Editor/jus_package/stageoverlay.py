"""Stage-space geometry used by the Level workspace overlays.

ARM9 02083FCC (BG creation) passes each .bin BG record x/y directly to
0206C9F8; ARM9 02085D74 initializes moving floors from s16 x/y << 8.
Ov06 02166FD4 consumes .bin collision geometry as signed 24.8 coordinates;
.mob item/grip/gimmick points also use signed 24.8.  All are **world
pixels**, not positions relative to the ALTM layer's upper-left corner.

No camera-space offset or 192-pixel compensation belongs in the overlay.
The BG record position is the world origin of that particular ALTM image.
"""
from __future__ import annotations

from dataclasses import dataclass


@dataclass(frozen=True)
class Marker:
    kind: str
    index: int
    x: float
    y: float
    label: str
    # Child spawn points, like hazard emitters, are anchored to a parent object.
    parent: tuple[str, int] | None = None


@dataclass(frozen=True)
class PathStep:
    floor: int
    step: int
    kind: str
    start: tuple[float, float]
    end: tuple[float, float]
    count: int | None = None


#: .bin BG record i loads ALTM resource 0x400000+i and tiles 0x400100+i
#: (ARM9 BattleMapBG_Create 02083FCC → FUN_02084F10).  In every shipped stage
#: archive those ids belong to the *reversed* file suffixes:
#:   0x400000 bg_xx_02.atm (the 1408×1024 play layer), 0x400001 bg_xx_01.atm,
#:   0x400002 bg_xx_00.atm, 0x400003 bg_xx_sud.atm (slot-0 substitute that
#:   reuses tiles 0x400100 = bg_xx_02.dtx).
SUFFIX_SLOT = {'_02': 0, '_01': 1, '_00': 2, '_sud': 0}


def bg_slot(stage_stem: str, layer_name: str) -> int | None:
    """BG record index for a stage ALTM layer, from its resource id (see SUFFIX_SLOT).

    The whole stem must match, so ``bg_cm_02_01`` of stem ``bg_cm_02`` is slot 1
    and an unrelated archive with a similar suffix is not mapped.
    """
    if not layer_name.startswith(stage_stem):
        return None
    return SUFFIX_SLOT.get(layer_name[len(stage_stem):])


def bg_draw_order(layers, geometry, stage_stem: str):
    """Back-to-front paint order of the stage BG layers.

    Record +6 is the BG priority (BattleMapBG_SetPriority changes it at run
    time, FUN_02084EEC): a larger value is further back.  On a tie the DS draws
    the lower BG number in front; slot i is BG i+1 (FUN_0203B414(i + 1)), so the
    higher slot goes behind.  Tk paints in list order → emit back layers first.
    Without a .bin, archive order is kept.
    """
    if geometry is None:
        return list(layers)
    def key(layer):
        index = bg_slot(stage_stem, layer.name)
        if index is None or index >= len(geometry.layers):
            return (-1, 0)
        return geometry.layers[index].draw_priority, index
    return sorted(layers, key=key, reverse=True)


def authored_paths(mob) -> tuple[PathStep, ...]:
    """Decode every *absolute* move target and stationary wait command.

    Segment starts are the immediately preceding endpoint, with the original
    floor position as the initial endpoint.  A wrap from the final command
    back to the start isn't an authored segment and isn't fabricated.
    """
    if mob is None:
        return ()
    result = []
    for i, floor in enumerate(mob.floors):
        xy = float(floor.x), float(floor.y)
        for j, command in enumerate(floor.path_commands):
            if command.kind == 0 and command.x is not None and command.y is not None:
                target = float(command.x), float(command.y)
                result.append(PathStep(i, j, 'move', xy, target))
                xy = target
            elif command.kind == 1:
                result.append(PathStep(i, j, 'wait', xy, xy, command.count))
            else:
                result.append(PathStep(i, j, 'unknown', xy, xy))
    return tuple(result)


def authored_markers(mob, geo) -> tuple[Marker, ...]:
    """Every authored point, independent of runtime RNG or mission gate."""
    out = []
    if mob is not None:
        for i, floor in enumerate(mob.floors):
            out.append(Marker('floor', i, floor.x, floor.y, f'F{i}'))
        for i, record in enumerate(mob.item_candidates):
            out.append(Marker('item', i, *record.pixel_xy, f'I{i}'))
        if mob.items is not None:
            for i, (x, y) in enumerate(mob.items.symbols):
                out.append(Marker('symbol', i, x, y, f'S{i}'))
        for i, record in enumerate(mob.grips):
            out.append(Marker('grip', i, *record.pixel_xy, f'R{i}'))
        for i, record in enumerate(mob.gimmicks):
            kind = 'trigger' if record.type_id in (1, 2, 8, 9, 10) else 'gimmick'
            out.append(Marker(kind, i, *record.pixel_xy, f'G{i}'))
            for j, (x, y) in enumerate(record.points):
                out.append(Marker('emitter', j, x, y, f'G{i}.{j}', (kind, i)))
    if geo is not None:
        for i, (x, y) in enumerate(geo.start_points):
            # Unused player starts are commonly stored as zeros.
            if x != 0 or y != 0:
                out.append(Marker('start', i, x, y, f'P{i}'))
    return tuple(out)


def marker_for_selection(mob, geo, kind: str, index: int) -> Marker | None:
    """Resolve an editable map-object ID to its current staged world point."""
    if kind == 'path':
        for path in authored_paths(mob):
            if index == (path.floor << 8) | path.step:
                return Marker(kind, index, *path.end, f'P{path.floor}.{path.step}')
    for marker in authored_markers(mob, geo):
        if (marker.kind, marker.index) == (kind, index):
            return marker
    if kind == 'collider' and geo is not None and 0 <= index < len(geo.collision_boxes):
        c = geo.collision_boxes[index]
        return Marker(kind, index, c.x + c.width / 2, c.y + c.height / 2, f'C{index}')
    return None
