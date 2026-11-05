"""Koma panel images: ``DSTX`` version 1, flags ``0x04`` (``koma/koma.aar``).

This is a different layout from the 0x03/0x83 sprite-piece tables in
:mod:`jus_formats.dstx`, and must never be parsed by that module.

Layout (all 898 files in ``koma/koma.aar``)::

    +0x00 'DSTX' u8 version=1 u8 flags=0x04 u16 panel_count u16 data_end
    +0x0A panel[panel_count]: u16 first_tile, u8 width_tiles, u8 height_tiles
          zero padding up to data_end (4-byte aligned)
    +data_end embedded DSIG v1 mode 0x10 (4bpp 8x8 tiles, one palette bank);
          w08 = 8, w0A = 8 * tile_count (an 8-pixel-wide tile column)

Every observed panel is 6x6 tiles (48x48 pixels) with ``first_tile`` 1, 37,
73, …: tile 0 is unused and each panel's 36 tiles follow in row-major order.
This is the panel *art* only; how panels are placed on a deck/comic page is
not decoded.  Unedited files rebuild byte-identically (unknown padding and
the DSIG bytes are kept verbatim).
"""
from __future__ import annotations

import struct
from dataclasses import dataclass, field

from . import dsig as dsigmod
from .binary import p16, u16
from .sprite import IndexedImage, read_tiled4, write_tiled4

MAGIC = b'DSTX'
FLAGS_KOMA = 0x04
TILE_BYTES = 32


def is_koma(blob: bytes) -> bool:
    return blob[:4] == MAGIC and len(blob) >= 10 and blob[4] == 1 and blob[5] == FLAGS_KOMA


@dataclass
class KomaPanel:
    first_tile: int
    width_tiles: int
    height_tiles: int

    @property
    def size(self) -> tuple[int, int]:
        return self.width_tiles * 8, self.height_tiles * 8

    @property
    def tile_count(self) -> int:
        return self.width_tiles * self.height_tiles


@dataclass
class KomaFile:
    panels: list[KomaPanel] = field(default_factory=list)
    image: dsigmod.DsigFile | None = None
    header_pad: bytes = b''           # bytes between the panel table and data_end
    image_raw: bytes = b''            # original DSIG bytes (exact rebuild when unedited)
    image_dirty: bool = False
    version: int = 1
    flags: int = FLAGS_KOMA

    # ------------------------------------------------------------- io
    @classmethod
    def parse(cls, blob: bytes) -> 'KomaFile':
        if not is_koma(blob):
            raise ValueError('Not a koma DSTX (version 1, flags 0x04)')
        count, end = u16(blob, 6), u16(blob, 8)
        table_end = 0x0A + 4 * count
        if table_end > end or end > len(blob):
            raise ValueError('Malformed koma panel table')
        panels = [KomaPanel(*struct.unpack_from('<HBB', blob, 0x0A + 4 * i)) for i in range(count)]
        raw = bytes(blob[end:])
        obj = cls(panels, dsigmod.parse(raw), bytes(blob[table_end:end]), raw, False, blob[4], blob[5])
        if obj.image.version != 1 or obj.image.mode != dsigmod.MODE_TILED4:
            raise ValueError(f'Koma image is DSIG v{obj.image.version} mode {obj.image.mode:#x}, expected v1 0x10')
        return obj

    def build(self) -> bytes:
        out = bytearray(MAGIC + bytes((self.version, self.flags)) + p16(len(self.panels)) + p16(0))
        for p in self.panels:
            out += struct.pack('<HBB', p.first_tile, p.width_tiles, p.height_tiles)
        pad = self.header_pad
        if (len(out) + len(pad)) % 4:
            pad = bytes((-len(out)) % 4)
        out += pad
        out[8:10] = p16(len(out))
        out += self.image.build() if self.image_dirty else self.image_raw
        return bytes(out)

    # ------------------------------------------------------------- pixels
    @property
    def tile_count(self) -> int:
        return len(self.image.pixels()) // TILE_BYTES

    def panel_colours(self, index: int) -> list[int]:
        p = self.panels[index]
        w, h = p.size
        data = self.image.pixels()
        # tiles of one panel are consecutive -> a row-major tiled block of width w
        return read_tiled4(data, p.first_tile * TILE_BYTES, w, h)

    def panel_image(self, index: int) -> IndexedImage:
        w, h = self.panels[index].size
        return IndexedImage(w, h, pixels=bytearray(self.panel_colours(index)))

    def set_panel_colours(self, index: int, colours: list[int]) -> None:
        """Replace one panel's pixels (palette indices 0-15); neighbours stay untouched."""
        p = self.panels[index]
        w, h = p.size
        if len(colours) != w * h:
            raise ValueError(f'Panel {index} needs {w}x{h} colours')
        if any(not 0 <= c <= 15 for c in colours):
            raise ValueError('Koma panels are 4bpp: colours must be 0-15')
        data = bytearray(self.image.pixels())
        start = p.first_tile * TILE_BYTES
        block = write_tiled4(colours, w, h)
        if start + len(block) > len(data):
            raise ValueError(f'Panel {index} tiles run past the image data')
        data[start:start + len(block)] = block
        self.image.set_pixels(bytes(data))
        self.image_dirty = True

    def problems(self) -> list[str]:
        out = []
        n = self.tile_count
        for i, p in enumerate(self.panels):
            if p.first_tile + p.tile_count > n:
                out.append(f'panel {i}: tiles {p.first_tile}..{p.first_tile + p.tile_count - 1} exceed {n} tiles')
        if self.image.banks != 1:
            out.append(f'{self.image.banks} palette banks (all observed koma files have 1)')
        return out


def parse(blob: bytes) -> KomaFile:
    return KomaFile.parse(blob)
