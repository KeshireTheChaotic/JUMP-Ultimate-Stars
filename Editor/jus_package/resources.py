"""Resource-id index over a set of archives (no GUI dependencies).

ALMT ``TextureID`` values name a 24-bit resource id.  Within a character or
effect archive set, the DSTX member has type byte 0x40 and its image is the
DSIG member with type 0x42 and the same id, or the DSIG embedded in the DSTX.
"""
from __future__ import annotations

from dataclasses import dataclass

from jus_formats import dsig as dsigmod, dstx as dstxmod, sprite

from .project import DataRoot, join


@dataclass
class SpriteRef:
    rid: int
    dstx_path: str
    dsig_path: str | None      # None -> embedded


class ResourceIndex:
    def __init__(self, root: DataRoot, containers: list[str]):
        self.root = root
        self.containers = containers
        self.by_rid: dict[int, dict[int, str]] = {}
        self._sprites: dict[int, tuple] = {}
        self.rebuild()

    def rebuild(self) -> None:
        self.by_rid.clear()
        self._sprites.clear()
        for c in self.containers:
            try:
                arc = self.root.archive(c)
            except (KeyError, ValueError, OSError):
                continue
            for e in arc.entries:
                self.by_rid.setdefault(e.resource_id, {}).setdefault(e.type_byte, join(c, e.name))

    def sprite_ref(self, rid: int) -> SpriteRef | None:
        rid &= 0xFFFFFF
        types = self.by_rid.get(rid, {})
        if 0x40 not in types:
            return None
        return SpriteRef(rid, types[0x40], types.get(0x42))

    def sprite(self, rid: int) -> tuple[dstxmod.DstxFile, sprite.SpriteSource] | None:
        rid &= 0xFFFFFF
        if rid in self._sprites:
            return self._sprites[rid]
        ref = self.sprite_ref(rid)
        result = None
        if ref is not None:
            try:
                d = dstxmod.parse(self.root.read(ref.dstx_path))
                if d.embedded:
                    g = dsigmod.parse(d.embedded)
                elif ref.dsig_path:
                    g = dsigmod.parse(self.root.read(ref.dsig_path))
                else:
                    g = None
                result = (d, sprite.SpriteSource(g)) if g is not None else None
            except (ValueError, KeyError):
                result = None
        self._sprites[rid] = result
        return result

    def invalidate(self, rid: int | None = None) -> None:
        if rid is None:
            self._sprites.clear()
        else:
            self._sprites.pop(rid & 0xFFFFFF, None)
