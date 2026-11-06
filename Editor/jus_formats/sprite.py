"""Sprite composition and decomposition for DSTX frames + DSIG images.

Pure Python (no imaging library).  Pixels are carried in :class:`IndexedImage`
as ``bank * 16 + colour`` indices.  The storage promotes from bytearray to
16-bit unsigned values for palette banks 16 and above; colour 0 is transparent.

How a piece's ``index`` addresses pixels depends on the DSIG mode:

* ``0x40`` character stream: ``index`` is the DSIG frame number.  The frame's
  pieces are stored back to back in OBJ 1D order, each starting on a 64-byte
  boundary (so an 8x8 piece owns a 64-byte slot).
* ``0x10`` tiles: ``index`` is a 32-byte tile number; a piece's tiles are
  contiguous (1D mapping, 32-byte boundary), 4bpp, row-major 8x8 tiles.
* ``0x20``/``0x50`` atlas: the DSIG payload is 4bpp linear, optionally
  LZ10-compressed, but its bytes are uploaded directly into DS texture memory.
  The GPU can view the same memory as 4bpp (normal: width ``w08``) or 2bpp
  (piece attribute bit 6: effective width ``2 * w08``), without repacking.
  Both formats use ``(index & 31) * 8, (index >> 5) * 8`` as their UV origin.
  See ARM9 ``0x02044774``, ``0x0203ef0c`` and ITCM ``0x01ff804c``.

Pieces are drawn so that the *first* piece in the list is on top for OBJ
sources (DS OAM priority) and the *last* piece is on top for atlas sources.
"""
from __future__ import annotations

from array import array
from collections import Counter
from dataclasses import dataclass, field

from .binary import align
from .dsig import (DsigFile, MODE_CHARSTREAM, MODE_LINEAR4, MODE_LINEAR4_LZ,
                   MODE_TILED4, MODE_TILED8, rgb555_to_rgb)
from .dstx import DstxFile, Frame, Piece, SHAPES

OBJ_MODES = (MODE_CHARSTREAM, MODE_TILED4, MODE_TILED8)
ATLAS_MODES = (MODE_LINEAR4, MODE_LINEAR4_LZ)
CHARSTREAM_SLOT = 64


@dataclass
class IndexedImage:
    width: int
    height: int
    left: int = 0          # sprite-space x of pixel column 0
    top: int = 0           # sprite-space y of pixel row 0
    pixels: bytearray | array = field(default_factory=bytearray)

    def __post_init__(self):
        if not self.pixels:
            self.pixels = bytearray(self.width * self.height)

    def get(self, x: int, y: int) -> int:
        """Pixel at sprite-space (x, y); 0 outside the image."""
        px, py = x - self.left, y - self.top
        if 0 <= px < self.width and 0 <= py < self.height:
            return self.pixels[py * self.width + px]
        return 0

    def put(self, x: int, y: int, v: int) -> None:
        px, py = x - self.left, y - self.top
        if 0 <= px < self.width and 0 <= py < self.height:
            if not 0 <= v <= 0xFFFF:
                raise ValueError(f'Indexed colour {v} is outside the 16-bit range')
            if v > 255 and isinstance(self.pixels, bytearray):
                self.pixels = array('H', list(self.pixels))
            self.pixels[py * self.width + px] = v

    def opaque_bounds(self) -> tuple[int, int, int, int] | None:
        xs, ys = [], []
        w = self.width
        for i, v in enumerate(self.pixels):
            if v & 15:
                xs.append(i % w)
                ys.append(i // w)
        if not xs:
            return None
        return (min(xs) + self.left, min(ys) + self.top, max(xs) + 1 + self.left, max(ys) + 1 + self.top)

    def to_rgba(self, palettes: list[list[int]]) -> bytes:
        """RGBA8888 bytes using RGB555 palette banks (for viewers)."""
        cache = {}
        out = bytearray()
        for v in self.pixels:
            if not v & 15:
                out += b'\0\0\0\0'
                continue
            if v not in cache:
                bank, idx = v >> 4, v & 15
                rgb = rgb555_to_rgb(palettes[bank][idx]) if bank < len(palettes) else (255, 0, 255)
                cache[v] = bytes(rgb) + b'\xff'
            out += cache[v]
        return bytes(out)


# ---------------------------------------------------------------- pixel codecs

def read_tiled4(data: bytes, offset: int, w: int, h: int) -> list[int]:
    """w x h colours from 4bpp 8x8 tiles stored row-major starting at offset."""
    out = [0] * (w * h)
    tw = w // 8
    for y in range(h):
        for x in range(w):
            o = offset + ((y >> 3) * tw + (x >> 3)) * 32 + (y & 7) * 4 + ((x & 7) >> 1)
            if o < len(data):
                out[y * w + x] = (data[o] >> ((x & 1) * 4)) & 15
    return out


def write_tiled4(colours: list[int], w: int, h: int) -> bytes:
    out = bytearray(w * h // 2)
    tw = w // 8
    for y in range(h):
        for x in range(w):
            o = ((y >> 3) * tw + (x >> 3)) * 32 + (y & 7) * 4 + ((x & 7) >> 1)
            out[o] |= (colours[y * w + x] & 15) << ((x & 1) * 4)
    return bytes(out)


def read_tiled8(data: bytes, offset: int, w: int, h: int) -> list[int]:
    out = [0] * (w * h)
    tw = w // 8
    for y in range(h):
        for x in range(w):
            o = offset + ((y >> 3) * tw + (x >> 3)) * 64 + (y & 7) * 8 + (x & 7)
            if o < len(data):
                out[y * w + x] = data[o]
    return out


def read_linear4(data: bytes, start_px: int, stride: int, w: int, h: int) -> list[int]:
    out = [0] * (w * h)
    limit = len(data) * 2
    for y in range(h):
        base = start_px + y * stride
        for x in range(w):
            k = base + x
            if k < limit:
                out[y * w + x] = (data[k >> 1] >> ((k & 1) * 4)) & 15
    return out


def read_linear2(data: bytes, start_px: int, stride: int, w: int, h: int) -> list[int]:
    """Read an NDS 4-colour texture directly from 2bpp-packed texture bytes.

    Four texels per byte, least-significant two bits at the left.  This is
    *not* a conversion of colour indices in the DSIG: the source 4bpp buffer
    is reinterpreted byte-for-byte, at twice its nominal pixel width.
    """
    out = [0] * (w * h)
    limit = len(data) * 4
    for y in range(h):
        base = start_px + y * stride
        for x in range(w):
            k = base + x
            if 0 <= k < limit:
                out[y * w + x] = (data[k >> 2] >> (2 * (k & 3))) & 3
    return out


def texture_dimensions(dsig: DsigFile, two_bpp: bool = False) -> tuple[int, int]:
    """Effective texture dimensions for linear DSIG modes 0x20 and 0x50."""
    if dsig.version != 1 or dsig.mode not in ATLAS_MODES:
        raise ValueError('Texture view requires a linear DSIG (0x20/0x50)')
    return dsig.width * (2 if two_bpp else 1), dsig.height


def texture_piece_origin(piece: Piece) -> tuple[int, int]:
    """The game's 8x8-cell UV indexing, with 32 slots per logical row."""
    return ((piece.index & 31) * 8, (piece.index >> 5) * 8)


def read_texture_piece(dsig: DsigFile, piece: Piece, *, strict: bool = False) -> list[int]:
    """Decode a DSTX piece as the actual GX texture format selected by bit 6.

    Attribute bit 6 selects a 2bpp GX view; clear selects 4bpp.  Neither
    PL4R nor LCP4 repacks pixels.  Out-of-bounds texels are transparent by
    default, so an unused off-atlas part does not crash a whole sprite sheet;
    use ``strict=True`` for forensic layout validation.
    """
    width, height = texture_dimensions(dsig, piece.two_bpp)
    x, y = texture_piece_origin(piece)
    w, h = piece.size
    overflow = x + w > width or y + h > height
    if overflow and strict:
        raise ValueError(f'Piece {piece.index} {w}x{h} at ({x},{y}) exceeds '
                         f'{width}x{height} texture (2bpp={piece.two_bpp})')
    data = dsig.pixels()
    reader = read_linear2 if piece.two_bpp else read_linear4
    if not overflow:
        return reader(data, y * width + x, width, w, h)
    # Defensive software fallback for off-texture data: no row-wrapping.
    # The GPU behavior of this rare case still needs a hardware capture.
    result = [0] * (w * h)
    clipped_width = max(0, min(w, width - x))
    for row in range(max(0, min(h, height - y))):
        pixels = reader(data, (y + row) * width + x, width, clipped_width, 1)
        result[row * w:row * w + clipped_width] = pixels
    return result


def write_linear4(buf: bytearray, start_px: int, stride: int, w: int, h: int, colours: list[int]) -> None:
    for y in range(h):
        base = start_px + y * stride
        for x in range(w):
            k = base + x
            sh = (k & 1) * 4
            buf[k >> 1] = (buf[k >> 1] & ~(15 << sh) & 0xFF) | ((colours[y * w + x] & 15) << sh)


def flip(colours: list[int], w: int, h: int, hflip: bool, vflip: bool) -> list[int]:
    if not hflip and not vflip:
        return colours
    out = [0] * (w * h)
    for y in range(h):
        sy = h - 1 - y if vflip else y
        for x in range(w):
            sx = w - 1 - x if hflip else x
            out[y * w + x] = colours[sy * w + sx]
    return out


# ---------------------------------------------------------------- sources

class SpriteSource:
    """A DSIG image bound to the addressing rules of its mode."""

    def __init__(self, dsig: DsigFile):
        self.dsig = dsig
        self.mode = dsig.mode if dsig.version == 1 else MODE_CHARSTREAM
        self._frames: dict[int, bytes] = {}

    @property
    def is_obj(self) -> bool:
        return self.mode in OBJ_MODES

    @property
    def is_atlas(self) -> bool:
        return self.mode in ATLAS_MODES

    def frame_bytes(self, index: int) -> bytes:
        if index not in self._frames:
            if len(self._frames) > 64:
                self._frames.clear()
            self._frames[index] = self.dsig.frame_data(index)
        return self._frames[index]

    def piece_colours(self, frame: Frame, k: int, slot_offsets: list[int] | None = None) -> list[int]:
        """Colours (0..15) of piece ``k`` in piece-local, *unflipped* order."""
        p = frame.pieces[k]
        w, h = p.size
        if self.mode == MODE_CHARSTREAM:
            data = self.frame_bytes(p.index)
            off = (slot_offsets or charstream_slots(frame))[k]
            return read_tiled4(data, off, w, h)
        if self.mode == MODE_TILED4:
            return read_tiled4(self.dsig.pixels(), p.index * 32, w, h)
        if self.mode == MODE_TILED8:
            return [c & 15 for c in read_tiled8(self.dsig.pixels(), p.index * 32, w, h)]
        if self.is_atlas:
            return read_texture_piece(self.dsig, p)
        raise ValueError(f'Unsupported DSIG mode {self.mode:#x}')


def charstream_slots(frame: Frame) -> list[int]:
    offs, cur = [], 0
    for p in frame.pieces:
        offs.append(cur)
        w, h = p.size
        cur += align(w * h // 2, CHARSTREAM_SLOT)
    return offs


# ---------------------------------------------------------------- compose

def frame_rect(frame: Frame) -> tuple[int, int, int, int] | None:
    if not frame.pieces:
        return None
    return frame.computed_bounds()


def compose(frame: Frame, source: SpriteSource, bank_override: int | None = None,
            canvas: tuple[int, int, int, int] | None = None) -> IndexedImage:
    """Render ``frame`` into an IndexedImage covering its pieces (or ``canvas``)."""
    rect = canvas or frame_rect(frame) or (0, 0, 1, 1)
    l, t, r, b = rect
    img = IndexedImage(max(r - l, 1), max(b - t, 1), l, t)
    order = list(range(len(frame.pieces)))
    if source.is_obj:
        order.reverse()                  # first piece ends on top
    slots = charstream_slots(frame) if source.mode == MODE_CHARSTREAM else None
    banks = source.dsig.banks
    for k in order:
        p = frame.pieces[k]
        w, h = p.size
        cols = flip(source.piece_colours(frame, k, slots), w, h, p.hflip, p.vflip)
        bank = bank_override if bank_override is not None else (p.bank if p.bank < banks else 0)
        for y in range(h):
            for x in range(w):
                c = cols[y * w + x]
                if c:
                    img.put(p.x + x, p.y + y, (bank << 4) | c)
    return img


def frame_extent(dst: DstxFile, frames=None) -> tuple[int, int, int, int]:
    """Union of piece rectangles over frames (a common canvas for a sheet)."""
    rects = [frame_rect(f) for i, f in enumerate(dst.frames) if frames is None or i in frames]
    rects = [r for r in rects if r]
    if not rects:
        return (0, 0, 1, 1)
    return (min(r[0] for r in rects), min(r[1] for r in rects),
            max(r[2] for r in rects), max(r[3] for r in rects))


# ---------------------------------------------------------------- decompose

class LayoutError(ValueError):
    pass


def nearest_in_bank(palettes, bank: int, src_value: int) -> int:
    sb, si = src_value >> 4, src_value & 15
    if sb >= len(palettes):
        return si
    r, g, b = rgb555_to_rgb(palettes[sb][si])
    best, bd = 1, None
    for i in range(1, 16):
        rr, gg, bb = rgb555_to_rgb(palettes[bank][i])
        d = (rr - r) ** 2 + (gg - g) ** 2 + (bb - b) ** 2
        if bd is None or d < bd:
            best, bd = i, d
    return best


def piece_from_image(img: IndexedImage, p: Piece, palettes, warnings: list[str] | None = None,
                     fix_bank: bool = True) -> tuple[Piece, list[int]]:
    """Cut a piece's pixels out of ``img``; returns (piece, unflipped colours).

    The piece's palette bank is taken from the pixels it covers; colours from
    another bank are mapped to the nearest colour of the chosen bank.
    """
    w, h = p.size
    vals = [img.get(p.x + x, p.y + y) for y in range(h) for x in range(w)]
    banks = Counter(v >> 4 for v in vals if v & 15)
    bank = p.bank
    if banks and fix_bank:
        bank = banks.most_common(1)[0][0]
    cols = []
    remapped = 0
    for v in vals:
        if not v & 15:
            cols.append(0)
        elif v >> 4 == bank:
            cols.append(v & 15)
        else:
            cols.append(nearest_in_bank(palettes, bank, v))
            remapped += 1
    if remapped and warnings is not None:
        warnings.append(f'piece at ({p.x},{p.y}) {w}x{h}: {remapped} pixels from other palette '
                        f'banks mapped to bank {bank}')
    newp = Piece(p.index, p.x, p.y, (p.attr & 0x00FF) | (bank << 8))
    cols = flip(cols, w, h, newp.hflip, newp.vflip)    # flip is its own inverse
    return newp, cols


def covered(img: IndexedImage, pieces: list[Piece]) -> bool:
    """True when every opaque pixel of ``img`` lies inside some piece."""
    rects = [(p.x, p.y, p.x + p.width, p.y + p.height) for p in pieces]
    w = img.width
    for i, v in enumerate(img.pixels):
        if v & 15:
            x, y = i % w + img.left, i // w + img.top
            if not any(a <= x < c and b <= y < d for a, b, c, d in rects):
                return False
    return True


# Preferred shapes for automatic layout, largest first.  Code 3 (64x64) and
# 11 (32x64) never occur in character data and are avoided.
AUTO_SHAPES = [2, 7, 6, 10, 1, 5, 9, 4, 8, 0]


def auto_layout(img: IndexedImage, attr_template: int = 0) -> list[Piece]:
    """Cover the opaque pixels of ``img`` with OBJ pieces on an 8-pixel grid
    anchored at the top-left of the opaque area."""
    bounds = img.opaque_bounds()
    if bounds is None:
        return []
    l, t = bounds[0], bounds[1]
    cols = (bounds[2] - l + 7) // 8
    rows = (bounds[3] - t + 7) // 8
    cell_bank: dict[tuple[int, int], int] = {}
    for cy in range(rows):
        for cx in range(cols):
            banks = Counter()
            for y in range(8):
                for x in range(8):
                    v = img.get(l + cx * 8 + x, t + cy * 8 + y)
                    if v & 15:
                        banks[v >> 4] += 1
            if banks:
                cell_bank[(cx, cy)] = banks.most_common(1)[0][0]
    uncovered = set(cell_bank)
    pieces = []
    for cy in range(rows):
        for cx in range(cols):
            if (cx, cy) not in uncovered:
                continue
            bank = cell_bank[(cx, cy)]
            best = None
            for code in AUTO_SHAPES:
                w, h = SHAPES[code]
                cw, ch = w // 8, h // 8
                cells = [(cx + i, cy + j) for j in range(ch) for i in range(cw)]
                if any((c in cell_bank and c not in uncovered) for c in cells):
                    continue        # avoid double-covering
                if any(c in uncovered and cell_bank[c] != bank for c in cells):
                    continue        # keep one palette bank per piece
                gain = sum(1 for c in cells if c in uncovered)
                waste = len(cells) - gain
                score = gain * 4 - waste * 3
                if best is None or score > best[0]:
                    best = (score, code, cells)
            _, code, cells = best
            uncovered.difference_update(cells)
            x, y = l + cx * 8, t + cy * 8
            if not (-128 <= x <= 127 and -128 <= y <= 127):
                raise LayoutError(f'piece at ({x},{y}) is outside the signed 8-bit offset range; '
                                  'move the sprite origin closer to the artwork')
            attr = (attr_template & ~0xFF3F) | (bank << 8) | code
            pieces.append(Piece(0, x, y, attr))
    return pieces


def build_charstream_frame(img: IndexedImage, frame: Frame, frame_number: int, palettes,
                           warnings: list[str] | None = None) -> tuple[Frame, bytes]:
    """Encode an image into a DSIG 0x40 frame using ``frame``'s piece layout.

    The layout is replaced by :func:`auto_layout` when the image has opaque
    pixels outside the existing pieces.
    """
    pieces = frame.pieces
    if not pieces or not covered(img, pieces):
        pieces = auto_layout(img)
        if warnings is not None:
            warnings.append(f'frame {frame_number}: piece layout regenerated ({len(pieces)} pieces)')
    data = bytearray()
    out_pieces = []
    for p in pieces:
        np_, cols = piece_from_image(img, p, palettes, warnings)
        np_.index = frame_number
        w, h = np_.size
        data += write_tiled4(cols, w, h)
        while len(data) % CHARSTREAM_SLOT:
            data.append(0)
        out_pieces.append(np_)
    return Frame(out_pieces, None if frame.bounds is None else _bounds(out_pieces)), bytes(data)


def _bounds(pieces):
    return Frame(pieces).computed_bounds()


def build_tile_frames(images: list[IndexedImage], frames: list[Frame], palettes,
                      warnings: list[str] | None = None) -> tuple[list[Frame], bytes]:
    """Encode images into a shared 32-byte tile pool (DSIG 0x10) with dedup."""
    pool = bytearray()
    seen: dict[bytes, int] = {}
    out_frames = []
    for n, (img, fr) in enumerate(zip(images, frames)):
        pieces = fr.pieces
        if pieces and not covered(img, pieces) or (not pieces and img.opaque_bounds()):
            pieces = auto_layout(img)
            if warnings is not None:
                warnings.append(f'frame {n}: piece layout regenerated ({len(pieces)} pieces)')
        new = []
        for p in pieces:
            np_, cols = piece_from_image(img, p, palettes, warnings)
            w, h = np_.size
            blob = write_tiled4(cols, w, h)
            if blob not in seen:
                seen[blob] = len(pool) // 32
                pool += blob
            np_.index = seen[blob]
            new.append(np_)
        out_frames.append(Frame(new, None if fr.bounds is None else _bounds(new)))
    return out_frames, bytes(pool)


def tiled_sheet_height(tile_count: int, width: int = 256) -> int:
    per_row = width // 8
    return (tile_count + per_row - 1) // per_row * 8


# ---------------------------------------------------------------- atlases

def atlas_image(dsig: DsigFile, bank: int | None = 0) -> IndexedImage:
    """The whole linear 4bpp atlas as an IndexedImage (one bank or bank 0)."""
    w, h = dsig.width, dsig.height
    data = dsig.pixels()
    img = IndexedImage(w, h)
    b = (bank or 0) << 4
    for k in range(min(w * h, len(data) * 2)):
        c = (data[k >> 1] >> ((k & 1) * 4)) & 15
        if c:
            img.put(k % w, k // w, b | c)
    return img


def atlas_from_colours(width: int, height: int, colours: list[int]) -> bytes:
    buf = bytearray(width * height // 2)
    write_linear4(buf, 0, width, width, height, colours)
    return bytes(buf)


def atlas_piece_origin(p: Piece, atlas_width: int) -> tuple[int, int]:
    """Effective GX texture coordinates; not coordinates in native atlas.png."""
    return texture_piece_origin(p)


def atlas_index_for(x: int, y: int, atlas_width: int, two_bpp: bool = False) -> int:
    """Inverse GPU UV mapping for a sprite piece, not an offset in the DSIG."""
    width = atlas_width * (2 if two_bpp else 1)
    if x < 0 or y < 0 or x % 8 or y % 8 or x >= width or x >= 256:
        raise LayoutError(f'GPU texture origin ({x},{y}) invalid for {width}-wide view')
    return (y // 8) * 32 + x // 8


def texture_image(dsig: DsigFile, two_bpp: bool = False, bank: int = 0) -> IndexedImage:
    """A pixel-accurate view of the GPU texture format, for diagnostics.

    ``two_bpp=True`` gives a *read-only preview*: modifying its pixels does
    not correspond to direct edits of the original linear 4bpp atlas.
    """
    w, h = texture_dimensions(dsig, two_bpp)
    img = IndexedImage(w, h)
    raw = dsig.pixels()
    colours = (read_linear2(raw, 0, w, w, h) if two_bpp
               else read_linear4(raw, 0, w, w, h))
    for i, colour in enumerate(colours):
        if colour:
            img.put(i % w, i // w, (bank << 4) | colour)
    return img
