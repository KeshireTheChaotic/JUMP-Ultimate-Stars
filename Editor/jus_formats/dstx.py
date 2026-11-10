"""DSTX sprite frame tables (versions 1 and 2): parse, edit and rebuild.

Layout::

    +0x00 'DSTX' u8 version u8 flags u16 frame_count u16 data_end
    +0x0A u16 frame_offset[frame_count]      (relative to +0x0A)
    frame: u16 piece_count, piece[piece_count]
           v2 only: s16 left, top, right, bottom  (inclusive-exclusive bounds;
                    an empty frame stores 7FFF,7FFF,8001,8001)
    piece (6 bytes): u16 index, s8 x, s8 y, u16 attr
    +data_end: embedded DSIG (flags bit 0x80 clear) or a trailing word.

``attr`` bits: 0-3 OBJ shape/size code, 4 = H-flip, 5 = V-flip,
6 = 2bpp only on the 3D-textured draw path (OAM ignores it),
8-15 = full 8-bit palette bank number.

The meaning of ``index`` depends on the paired DSIG image mode (see
:mod:`jus_formats.sprite`): the frame number of a DSIG v2/0x40 character
stream, a 32-byte tile number for DSIG v1/0x10, or a GPU 8x8 cell for
DSIG v1/0x20|0x50.  Texture UV cells are arranged 32 per logical row;
bit 6 selects the 2bpp interpretation of unchanged 4bpp source bytes.

Flags 0x05/0x06 have a separate read-only decoder for indexed panel
tilemaps (u8/u16). The exact 50-file auxiliary map layout is validated
against original game data; scene placement/palette attributes are not.
"""
from __future__ import annotations

import struct
from dataclasses import dataclass, field

from .binary import p16, pad_to, u16, u32

MAGIC = b'DSTX'
EMPTY_BOUNDS = (0x7FFF, 0x7FFF, -0x7FFF, -0x7FFF)

# OBJ shape/size codes (DS OAM shape<<2 | size).  Code 0 is a single 8x8 tile;
# in DSIG v2/0x40 character streams its data slot is padded to 64 bytes.
SHAPES = {0: (8, 8), 1: (16, 16), 2: (32, 32), 3: (64, 64),
          4: (16, 8), 5: (32, 8), 6: (32, 16), 7: (64, 32),
          8: (8, 16), 9: (8, 32), 10: (16, 32), 11: (32, 64)}

ATTR_HFLIP = 0x10
ATTR_VFLIP = 0x20


@dataclass
class Piece:
    index: int
    x: int
    y: int
    attr: int

    @property
    def shape(self) -> int:
        return self.attr & 0xF

    @property
    def size(self) -> tuple[int, int]:
        if self.shape not in SHAPES:
            raise ValueError(f'Unknown OBJ shape code {self.shape}')
        return SHAPES[self.shape]

    @property
    def width(self) -> int:
        return self.size[0]

    @property
    def height(self) -> int:
        return self.size[1]

    @property
    def hflip(self) -> bool:
        return bool(self.attr & ATTR_HFLIP)

    @property
    def vflip(self) -> bool:
        return bool(self.attr & ATTR_VFLIP)

    @property
    def bank(self) -> int:
        # The renderer copies palette row (attr >> 8) * 32 bytes: the whole
        # high byte is the bank number (ARM9 0x0203FDF0, ITCM 0x01FF8488).
        return (self.attr >> 8) & 0xFF

    @property
    def two_bpp(self) -> bool:
        # bit 6: textured path uses a 4-colour (2bpp) texture instead of 16-colour
        return bool(self.attr & 0x40)

    def to_list(self) -> list:
        return [self.index, self.x, self.y, f'0x{self.attr:04X}']

    @classmethod
    def from_list(cls, v) -> 'Piece':
        return cls(int(v[0]), int(v[1]), int(v[2]), int(str(v[3]), 0))


@dataclass
class Frame:
    pieces: list[Piece] = field(default_factory=list)
    bounds: tuple[int, int, int, int] | None = None     # v2 only

    def computed_bounds(self) -> tuple[int, int, int, int]:
        if not self.pieces:
            return EMPTY_BOUNDS
        return (min(p.x for p in self.pieces), min(p.y for p in self.pieces),
                max(p.x + p.width for p in self.pieces), max(p.y + p.height for p in self.pieces))


@dataclass
class DstxFile:
    version: int = 1
    flags: int = 0x83
    frames: list[Frame] = field(default_factory=list)
    embedded: bytes | None = None      # embedded DSIG bytes
    tail: bytes = b''                  # bytes after data_end when nothing embedded
    frame_refs: list[int] | None = None  # original offset-table sharing (exactness)

    @property
    def external_texture_id(self) -> int | None:
        """Source resource ID for 0x83 banks, not an editable sprite-frame field.

        FUN_020433EC / FUN_020165DC resolve this little-endian word at the
        DSTX data-end pointer. All 456 original 0x83 banks have a 4-byte,
        nonzero 24-bit reference. Keep the original tail bytes intact.
        """
        return u32(self.tail, 0) if self.flags == 0x83 and len(self.tail) >= 4 else None

    @classmethod
    def parse(cls, blob: bytes) -> 'DstxFile':
        if blob[:4] != MAGIC or len(blob) < 10:
            raise ValueError('Not a DSTX file')
        version, flags, count, end = blob[4], blob[5], u16(blob, 6), u16(blob, 8)
        if version not in (1, 2):
            raise ValueError(f'Unsupported DSTX version {version}')
        if flags & 0x7F != 0x03:
            raise ValueError(f'DSTX layout variant flags=0x{flags:02X} (screen/menu layout) '
                             'is not a sprite frame table')
        offsets = [0x0A + u16(blob, 0x0A + 2 * i) for i in range(count)]
        obj = cls(version, flags)
        unique: dict[int, int] = {}
        refs = []
        for off in offsets:
            if off not in unique:
                unique[off] = len(obj.frames)
                obj.frames.append(cls._parse_frame(blob, off, version))
            refs.append(unique[off])
        if len(unique) != count or offsets != sorted(offsets):
            obj.frame_refs = refs
            # expand: one Frame object per slot, shared objects allowed
            obj.frames = [obj.frames[r] for r in refs]
        rest = bytes(blob[end:])
        if rest[:4] == b'DSIG':
            obj.embedded = rest
        else:
            obj.tail = rest
        return obj

    @staticmethod
    def _parse_frame(blob: bytes, off: int, version: int) -> Frame:
        n = u16(blob, off)
        if n > 1024 or off + 2 + 6 * n > len(blob):
            raise ValueError('Malformed DSTX piece table')
        pieces = []
        for j in range(n):
            idx, x, y, attr = struct.unpack_from('<HbbH', blob, off + 2 + 6 * j)
            pieces.append(Piece(idx, x, y, attr))
        bounds = None
        if version == 2:
            bounds = struct.unpack_from('<hhhh', blob, off + 2 + 6 * n)
        return Frame(pieces, bounds)

    def _frame_bytes(self, fr: Frame) -> bytes:
        out = bytearray(p16(len(fr.pieces)))
        for p in fr.pieces:
            if not -128 <= p.x <= 127 or not -128 <= p.y <= 127:
                raise ValueError(f'Piece offset ({p.x},{p.y}) outside s8 range')
            out += struct.pack('<HbbH', p.index & 0xFFFF, p.x, p.y, p.attr & 0xFFFF)
        if self.version == 2:
            b = fr.bounds if fr.bounds is not None else fr.computed_bounds()
            out += struct.pack('<hhhh', *b)
        return bytes(out)

    def build(self) -> bytes:
        count = len(self.frames)
        out = bytearray(MAGIC + bytes((self.version, self.flags & 0xFF)) + p16(count) + p16(0))
        out += bytes(2 * count)
        placed: dict[int, int] = {}
        for i, fr in enumerate(self.frames):
            key = id(fr)
            if key in placed:
                rel = placed[key]
            else:
                rel = len(out) - 0x0A
                placed[key] = rel
                out += self._frame_bytes(fr)
            out[0x0A + 2 * i:0x0C + 2 * i] = p16(rel)
        pad_to(out, 4)
        if len(out) > 0xFFFF:
            raise ValueError('DSTX frame data exceeds 64 KiB')
        out[8:10] = p16(len(out))
        if self.embedded is not None:
            out += self.embedded
        else:
            out += self.tail
        return bytes(out)

    def to_dict(self) -> dict:
        return {'format': 'DSTX', 'version': self.version, 'flags': f'0x{self.flags:02X}',
                'tail': self.tail.hex(),
                **({'external_texture_id': f'0x{self.external_texture_id:08X}'}
                   if self.external_texture_id is not None else {}),
                'frames': [{'pieces': [p.to_list() for p in fr.pieces],
                            **({'bounds': list(fr.bounds)} if fr.bounds is not None else {})}
                           for fr in self.frames]}


def parse(blob: bytes) -> DstxFile:
    return DstxFile.parse(blob)


@dataclass(frozen=True)
class LayoutPanel:
    """One untransformed 4-byte descriptor in a DSTX 0x05/0x06 resource.

    ``FUN_02044E78`` resolves the descriptor as ``blob+0x0A+4*index``.
    ``FUN_02043C7C`` consumes u16 base, u8 width, u8 height and expands a
    tile grid into 6-byte pieces.  No screen placement is implied here.
    """
    first_tile: int
    tiles_w: int
    tiles_h: int


@dataclass(frozen=True)
class LayoutPanelMap:
    """One row-major panel-local grid, NOT hardware screen XY or a sprite OAM table."""
    panel_index: int
    offset: int  # relative to the auxiliary region
    tiles_w: int
    tiles_h: int
    cell_bytes: int
    cells: tuple[int, ...]
    raw: bytes

    def row(self, y: int) -> tuple[int, ...]:
        if not 0 <= y < self.tiles_h:
            raise IndexError(y)
        i = y * self.tiles_w
        return self.cells[i:i + self.tiles_w]


@dataclass(frozen=True)
class LayoutTable:
    """Original 0x05/0x06 DSTX panel descriptors and verified local tilemaps.

    The raw source is untouched; neither DS palette-bank application nor
    top/bottom screen assignment or scene-space positioning is inferred.
    """
    version: int
    flags: int
    panels: tuple[LayoutPanel, ...]
    auxiliary: bytes
    embedded: bytes
    reserved: bytes
    raw: bytes
    panel_maps: tuple[LayoutPanelMap, ...]
    map_offsets: tuple[int, ...]
    padding: bytes

    @property
    def mode6(self) -> bool:
        return self.flags == 0x06

    @property
    def cell_bytes(self) -> int:
        return 2 if self.mode6 else 1

    def build(self) -> bytes:
        """Byte-identical read-only round trip; no unverified edits."""
        return self.raw


def parse_layout(blob: bytes) -> LayoutTable:
    """Decode original panel-local offset table and u8/u16 tilemap cells.

    After N 4-byte panel descriptors and 2 reserved bytes: N u16 offsets
    (relative to auxiliary start); then each panel's tiles_w*tiles_h cells.
    In mode 5 each cell is u8, in mode 6 each is u16 little-endian.
    All 50 originals have adjacent offsets and 0..3 bytes zero tail.
    """
    if len(blob) < 12 or blob[:4] != MAGIC:
        raise ValueError('Not a DSTX layout')
    version, flags, count, end = blob[4], blob[5], u16(blob, 6), u16(blob, 8)
    if version != 1 or flags not in (0x05, 0x06):
        raise ValueError(f'Unsupported DSTX layout version/flags {version}/{flags:#04x}')
    auxiliary_start = 8 + 4 * (count + 1)
    if count > 4096 or auxiliary_start > end or end > len(blob):
        raise ValueError('DSTX layout section boundaries invalid')
    panels = tuple(LayoutPanel(*struct.unpack_from('<HBB', blob, 10 + i * 4))
                   for i in range(count))
    auxiliary = bytes(blob[auxiliary_start:end])
    cell_bytes = 2 if flags == 0x06 else 1
    if len(auxiliary) < 2 * count:
        raise ValueError('DSTX layout auxiliary map offset table truncated')
    offsets = tuple(struct.unpack_from('<' + str(count) + 'H', auxiliary, 0)) if count else ()
    maps: list[LayoutPanelMap] = []
    expected = 2 * count
    for i, (panel, off) in enumerate(zip(panels, offsets)):
        if off != expected:
            raise ValueError(f'DSTX panel {i} map offset {off} != expected {expected}')
        size = panel.tiles_w * panel.tiles_h * cell_bytes
        expected = off + size
        if expected > len(auxiliary):
            raise ValueError(f'DSTX panel {i} map exceeds auxiliary section')
        data = auxiliary[off:expected]
        cells = (tuple(data) if cell_bytes == 1 else
                 struct.unpack('<' + str(len(data)//2) + 'H', data) if data else ())
        maps.append(LayoutPanelMap(i, off, panel.tiles_w, panel.tiles_h,
                                   cell_bytes, tuple(cells), data))
    padding = auxiliary[expected:]
    if len(padding) > 3 or any(padding):
        raise ValueError('DSTX panel map tail is not zero alignment (0..3 bytes)')
    return LayoutTable(
        version, flags, panels, auxiliary, bytes(blob[end:]),
        bytes(blob[10+4*count:auxiliary_start]), bytes(blob),
        tuple(maps), offsets, padding,
    )
