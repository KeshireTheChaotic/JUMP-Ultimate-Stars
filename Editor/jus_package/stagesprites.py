"""Stage object sprites: moving floors and gimmicks, as the battle loads them.

Traced loading path (ARM9 main + overlay 6):

* Moving floors — ``BattleMapObj::BattleMapMoveFloorCreate`` (0x02085704) opens
  ``stage/<stem>_floor.aar`` and, per ``.mob`` floor record, creates the object
  with resource base 0x401100 (``BattleMapMoveFloorInit`` 0x02085D74 →
  FUN_02085AAC(obj, 0x401100, …)) and starts motion ``0x401100 + rec[+0x1F]``
  (FUN_02023894).  The node is placed at the record's (x, y) (<<8, then <<4
  into the transform, 0x02085D74).  Blink/crumble floors switch to motion
  ``base + state`` / ``base + 3 + state`` (0x02086178 / 0x02086364).
* Gimmicks — ``BattleMapGimmick::BattleMapGimmick_Create`` (0x02163188) opens
  ``stage/<stem>_gimmick.aar``; the per-type init spawns the object with
  FUN_0216378C → FUN_02163630, which places it at the record's 24.8 (x, y) and
  starts motion ``0x401200 + rec[+0x0D]``.  Types 4–7 only register resource
  ids (no object of their own).

Each motion is an ALMT move on node ``SP01`` whose ``BoundsIndex`` track picks
a DSTX cell (step keys, last key held; loop flag 1 wraps).  The cell's parts
carry their own offsets from the object origin, so a cell is drawn at
``(x + left, y + top)``.
"""
from __future__ import annotations

from dataclasses import dataclass

from jus_formats import almt, dsig as dsigmod, dstx as dstxmod, sprite as spritemod

from . import images
from .project import DataRoot

FLOOR_BASE = 0x401100
GIMMICK_BASE = 0x401200
#: gimmick types whose init creates a drawn object (FUN_0216378C); 4–7 do not
GIMMICK_OBJECT_TYPES = frozenset({0, 1, 2, 3, 8, 9, 11})


@dataclass(frozen=True)
class SpriteFrame:
    image: object            # PIL RGBA
    left: int
    top: int
    cell: int
    motion: int


def cell_at(move: almt.Move, tick: int) -> int | None:
    """BoundsIndex cell of an ALMT move at ``tick`` (step keys; loop flag wraps)."""
    track = next((t for na in move.nodes if na for t in na.tracks if t.field == 'BoundsIndex'), None)
    if track is None:
        return None
    if not track.keyed:
        return int(track.value)
    keys = track.keys
    if not keys:
        return None
    if move.flags & almt.MOVE_FLAG_LOOP and move.duration > 0:
        tick %= move.duration
    cell = keys[0].value
    for k in keys:
        if k.tick <= tick:
            cell = k.value
        else:
            break
    return int(cell)


class ObjectSheet:
    """One stage object archive (``_floor.aar`` / ``_gimmick.aar``): motions + cells."""

    def __init__(self, root: DataRoot, archive: str):
        arc = root.archive(archive)
        self.archive = archive
        self.moves: dict[int, almt.Move] = {}
        for e in arc.entries:
            if e.ext == '.amt':
                for m in almt.parse(e.payload()).moves:
                    self.moves[m.id] = m
        dtx = next((e for e in arc.entries if e.ext == '.dtx'), None)
        if dtx is None:
            raise ValueError(f'{archive}: no DSTX cell table')
        self.dtx = dstxmod.parse(dtx.payload())
        if self.dtx.embedded:
            g = dsigmod.parse(self.dtx.embedded)
        else:
            dig = next((e for e in arc.entries if e.ext == '.dig' and e.resource_id == dtx.resource_id),
                       next((e for e in arc.entries if e.ext == '.dig'), None))
            if dig is None:
                raise ValueError(f'{archive}: DSTX has no embedded or paired DSIG')
            g = dsigmod.parse(dig.payload())
        self.source = spritemod.SpriteSource(g)
        self._cache: dict[int, SpriteFrame | None] = {}

    def render_cell(self, cell: int, motion: int = 0) -> SpriteFrame | None:
        if cell in self._cache:
            f = self._cache[cell]
            return None if f is None else SpriteFrame(f.image, f.left, f.top, cell, motion)
        frame = None
        if 0 <= cell < len(self.dtx.frames):
            indexed = spritemod.compose(self.dtx.frames[cell], self.source)
            if indexed.width and indexed.height:
                frame = SpriteFrame(images.to_rgba(indexed, self.source.dsig.palettes),
                                    indexed.left, indexed.top, cell, motion)
        self._cache[cell] = frame
        return frame

    def frame(self, motion: int, tick: int = 0) -> SpriteFrame | None:
        move = self.moves.get(motion)
        if move is None:
            return None
        cell = cell_at(move, tick)
        return None if cell is None else self.render_cell(cell, motion)


class StageSprites:
    """Lazy sheets for one stage; missing archives simply yield no sprites."""

    def __init__(self, root: DataRoot, stage_archive_members: dict[str, str], stem: str):
        self.problems: list[str] = []
        self.floor = self._open(root, stage_archive_members, 'floor', stem)
        self.gimmick = self._open(root, stage_archive_members, 'gimmick', stem)

    def _open(self, root, members, role, stem):
        path = members.get(role)
        if path is None:
            return None
        try:
            return ObjectSheet(root, path)
        except (ValueError, KeyError, IndexError, OSError) as exc:
            self.problems.append(f'{stem}_{role}.aar: {exc}')
            return None

    def floor_frame(self, record, tick=0, state=0) -> SpriteFrame | None:
        """Floor sprite: motion 0x401100 + rec[+0x1F] (+ state for blink floors)."""
        if self.floor is None:
            return None
        return self.floor.frame(FLOOR_BASE + record.sprite + state, tick)

    def gimmick_frame(self, record, tick=0, state=0) -> SpriteFrame | None:
        """Gimmick sprite: motion 0x401200 + rec[+0x0D] (+ state, FUN_0216383C)."""
        if self.gimmick is None or record.type_id not in GIMMICK_OBJECT_TYPES:
            return None
        return self.gimmick.frame(GIMMICK_BASE + record.sprite + state, tick)
