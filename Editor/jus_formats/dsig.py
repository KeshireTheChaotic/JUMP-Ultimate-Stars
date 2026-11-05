"""DSIG indexed images: palettes plus pixel payload.  Parse, edit, rebuild.

Common header::

    +0x00 'DSIG' u8 version u8 mode u8 bank_count u8 b7
    +0x08 u16 w08  +0x0A u16 w0A
    +0x0C RGB555 palette banks, 16 colours (32 bytes) each

Version 1 (single image)::

    mode 0x10  4bpp, 8x8 tiles (OBJ character data).  w08 = width,
               w0A = rows of the declared sheet; files may hold fewer tiles.
    mode 0x11  8bpp, 8x8 tiles.
    mode 0x20  4bpp linear, w08 x w0A pixels, low nibble = left pixel.
    mode 0x50  as 0x20 but the payload is an LZ10 stream.

Version 2, mode 0x40 (character frame stream)::

    +0x0C+32*banks  u32 max_frame_bytes   (largest decompressed frame)
    table           u32 frame_count, {u16 offset_words, u16 packed_size}[frame_count]
                    offset_words is relative to the table start
    frames          LZ10 streams, 4-byte aligned
    w08 = frame_count + 1 (table words), w0A = words after the palettes,
    b7 = 4 (bits per pixel)

Decompressed frames hold 4bpp tiles in DS 1D OBJ order with every piece
starting on a 64-byte boundary (an 8x8 piece occupies a 64-byte slot).

Colour 0 of every bank is transparent.
"""
from __future__ import annotations

from dataclasses import dataclass, field

from .binary import lz10_compress, lz10_decompress, p16, p32, pad_to, u16, u32

MAGIC = b'DSIG'
MODE_TILED4 = 0x10
MODE_TILED8 = 0x11
MODE_LINEAR4 = 0x20
MODE_CHARSTREAM = 0x40
MODE_LINEAR4_LZ = 0x50
MODE_NAMES = {0x10: '4bpp tiled', 0x11: '8bpp tiled', 0x20: '4bpp linear',
              0x40: 'character frame stream', 0x50: '4bpp linear (LZ10)'}


def rgb555_to_rgb(v: int) -> tuple[int, int, int]:
    return tuple(((v >> s) & 31) * 255 // 31 for s in (0, 5, 10))


def rgb_to_rgb555(r: int, g: int, b: int) -> int:
    return ((r * 31 + 127) // 255) | (((g * 31 + 127) // 255) << 5) | (((b * 31 + 127) // 255) << 10)


@dataclass
class DsigFile:
    version: int = 1
    mode: int = MODE_LINEAR4
    b7: int = 0
    w08: int = 0
    w0a: int = 0
    palettes: list[list[int]] = field(default_factory=list)   # banks x 16 RGB555 words
    # version 1
    payload: bytes = b''              # stored payload (LZ10 stream for mode 0x50)
    # version 2 / 0x40
    max_frame_bytes: int = 0
    frames: list[bytes] = field(default_factory=list)          # compressed LZ10 streams
    frame_tail: bytes = b''            # bytes after the last frame (exactness)
    _cache: dict = field(default_factory=dict, repr=False, compare=False)

    # ------------------------------------------------------------- palettes
    @property
    def banks(self) -> int:
        return len(self.palettes)

    def palette_rgba(self, bank: int) -> list[tuple[int, int, int, int]]:
        return [rgb555_to_rgb(v) + ((0,) if i == 0 else (255,))
                for i, v in enumerate(self.palettes[bank])]

    # ------------------------------------------------------------- v1 pixels
    @property
    def width(self) -> int:
        return self.w08 if self.version == 1 else 0

    @property
    def height(self) -> int:
        return self.w0a if self.version == 1 else 0

    def pixels(self) -> bytes:
        """Decompressed v1 pixel payload."""
        if self.version != 1:
            raise ValueError('pixels() is for DSIG v1 images')
        if self.mode == MODE_LINEAR4_LZ:
            key = ('pix', len(self.payload), hash(self.payload))
            if key not in self._cache:
                self._cache.clear()
                self._cache[key] = lz10_decompress(self.payload)
            return self._cache[key]
        return self.payload

    def set_pixels(self, data: bytes) -> None:
        self._cache.clear()
        self.payload = lz10_compress(data) if self.mode == MODE_LINEAR4_LZ else bytes(data)

    # ------------------------------------------------------------- v2 frames
    def frame_data(self, index: int) -> bytes:
        if self.version != 2:
            raise ValueError('frame_data() is for DSIG v2 character streams')
        return lz10_decompress(self.frames[index])

    def set_frame_data(self, index: int, data: bytes) -> None:
        self.frames[index] = lz10_compress(data)
        self.max_frame_bytes = max(self.max_frame_bytes, len(data))

    def recompute_max_frame_bytes(self) -> int:
        self.max_frame_bytes = max((len(lz10_decompress(f)) for f in self.frames), default=0)
        return self.max_frame_bytes

    # ------------------------------------------------------------- io
    @classmethod
    def parse(cls, blob: bytes) -> 'DsigFile':
        if blob[:4] != MAGIC or len(blob) < 12:
            raise ValueError('Not a DSIG image')
        version, mode, banks, b7 = blob[4], blob[5], blob[6], blob[7]
        if version not in (1, 2):
            raise ValueError(f'Unsupported DSIG version {version}')
        if not 1 <= banks <= 64:
            raise ValueError('Invalid DSIG palette bank count')
        pal_end = 12 + 32 * banks
        if pal_end > len(blob):
            raise ValueError('Truncated DSIG palettes')
        palettes = [[u16(blob, 12 + 32 * b + 2 * i) for i in range(16)] for b in range(banks)]
        obj = cls(version, mode, b7, u16(blob, 8), u16(blob, 10), palettes)
        if version == 1:
            obj.payload = bytes(blob[pal_end:])
            return obj
        if mode != MODE_CHARSTREAM:
            raise ValueError(f'Unsupported DSIG v2 mode {mode:#x}')
        obj.max_frame_bytes = u32(blob, pal_end)
        table = pal_end + 4
        count = u32(blob, table)
        if table + 4 + 4 * count > len(blob):
            raise ValueError('Truncated DSIG frame table')
        end = table + 4 + 4 * count
        for i in range(count):
            off = table + 4 * u16(blob, table + 4 + 4 * i)
            size = u16(blob, table + 6 + 4 * i)
            if off + size > len(blob):
                raise ValueError('DSIG frame outside file')
            obj.frames.append(bytes(blob[off:off + size]))
            end = max(end, off + size)
        tail = bytes(blob[end:])
        obj.frame_tail = tail
        return obj

    def build(self) -> bytes:
        if not 1 <= self.banks <= 64:
            raise ValueError('DSIG needs 1..64 palette banks')
        out = bytearray(MAGIC + bytes((self.version, self.mode, self.banks, self.b7)))
        out += p16(self.w08) + p16(self.w0a)
        for bank in self.palettes:
            if len(bank) != 16:
                raise ValueError('Each palette bank needs 16 colours')
            for v in bank:
                out += p16(v)
        if self.version == 1:
            out += self.payload
            return bytes(out)
        pal_end = len(out)
        out += p32(self.max_frame_bytes)
        table = len(out)
        count = len(self.frames)
        out += p32(count) + bytes(4 * count)
        for i, data in enumerate(self.frames):
            pad_to(out, 4)
            rel = (len(out) - table) // 4
            if rel > 0xFFFF or len(data) > 0xFFFF:
                raise ValueError('DSIG character stream exceeds 16-bit table limits')
            out[table + 4 + 4 * i:table + 8 + 4 * i] = p16(rel) + p16(len(data))
            out += data
        out += self.frame_tail
        pad_to(out, 4)
        # derived header words
        out[8:10] = p16(count + 1)
        out[10:12] = p16(((len(out) - pal_end) // 4) & 0xFFFF)
        return bytes(out)

    def to_dict(self) -> dict:
        d = {'format': 'DSIG', 'version': self.version, 'mode': f'0x{self.mode:02X}',
             'mode_name': MODE_NAMES.get(self.mode, 'unknown'), 'b7': self.b7,
             'w08': self.w08, 'w0a': self.w0a,
             'palettes': [[f'{v:04X}' for v in bank] for bank in self.palettes]}
        if self.version == 2:
            d['frame_count'] = len(self.frames)
            d['max_frame_bytes'] = self.max_frame_bytes
        return d


def parse(blob: bytes) -> DsigFile:
    return DsigFile.parse(blob)
