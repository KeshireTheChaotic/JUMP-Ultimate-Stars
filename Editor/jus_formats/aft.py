"""Original JUS ALFT/AFT font atlas decoder and bitmap text renderer.

Evidence:
- ARM9 ov12 ALFont::Create 0x021CB140: ALFT range records and aligned bitmap.
- ARM9 ov12 ALFont_021d4ed0::vfunc_04 0x021CAD1C: first matching
  (start, end, glyph_base) record, glyph_base + (SJIS code - start).
- ARM9 ov12 ALFont::MakeFixBounds 0x021CB33C: uniform glyph rects,
  x=(index % columns)*cell_width, y=(index // columns)*cell_height.
- ARM9 ov12 ALTextDS_021d4a2c::vfunc_25 0x021C8B18: half-cell for
  ordinary 0x20 spaces, full-cell for 0x8140 and non-space glyphs.
- ARM9 ov12 ALTextDS::Create text widgets at 0x021BCF1C.

The four shipped AFTs are either 4bpp DSIG v1 mode0x20 or 1bpp BMP.
This code uses their original image pixels, bank palettes, and CP932
lookup. It does not invent or import substitute-font glyphs.
"""
from __future__ import annotations

import io
import struct
from dataclasses import dataclass
from functools import lru_cache
from typing import Iterator

from PIL import Image

from . import dsig

HEADER = b'ALFT'
MAX_RANGES = 8192


@dataclass(frozen=True)
class Range:
    start: int
    end: int
    glyph_base: int


class AftFont:
    """Validated in-memory ALFT font with original atlas pixels."""

    def __init__(self, data: bytes):
        if data[:4] != HEADER or len(data) < 16:
            raise ValueError('Not an ALFT/AFT font')
        self.flags = data[5]
        if self.flags not in (1, 2):
            raise ValueError(f'Unsupported AFT format flag {self.flags:#x}')
        if data[6:8] != b'TB':
            raise ValueError('Unsupported AFT header layout')
        self.width, self.height, self.columns = data[8:11]
        if not self.width or not self.height or not self.columns:
            raise ValueError('Invalid AFT cell geometry')
        count = struct.unpack_from('<H', data, 12)[0]
        if not 1 <= count <= MAX_RANGES or 14 + 6 * count > len(data):
            raise ValueError('Invalid AFT character-range table length')
        self.ranges = tuple(Range(*struct.unpack_from('<HHH', data, 14 + i * 6))
                            for i in range(count))
        if any(r.end < r.start for r in self.ranges):
            raise ValueError('AFT character range ends before it starts')
        start = 14 + 6 * count
        if start & 2:
            if data[start:start+2] != b'\0\0':
                raise ValueError('Unexpected AFT bitmap padding bytes')
            start += 2
        self.embedded_offset = start
        body = data[start:]
        self.bitmap_mode = ''
        self.dsig = None
        self.bmp = None
        if self.flags == 2:
            image = dsig.parse(body)
            if image.version != 1 or image.mode != dsig.MODE_LINEAR4:
                raise ValueError('AFT bitmap must be uncompressed DSIG v1 linear4')
            if len(image.pixels()) != (image.width * image.height + 1) // 2:
                raise ValueError('Truncated/extended AFT DSIG pixel plane')
            if image.width < self.columns * self.width:
                raise ValueError('AFT DSIG sheet is narrower than declared glyph columns')
            self.dsig = image
            self.bitmap_mode = 'DSIG 4bpp linear'
            self.atlas_width, self.atlas_height = image.width, image.height
        else:
            if body[:2] != b'BM':
                raise ValueError('AFT flag 1 requires embedded BMP')
            im = Image.open(io.BytesIO(body))
            im.load()
            if im.mode != '1':
                raise ValueError('Unsupported AFT BMP pixel depth')
            if im.width < self.columns * self.width:
                raise ValueError('AFT BMP sheet is narrower than declared glyph columns')
            self.bmp = im.copy()
            self.bitmap_mode = 'BMP 1bpp'
            self.atlas_width, self.atlas_height = im.size
        self.glyph_capacity = self.columns * (self.atlas_height // self.height)
        if max(r.glyph_base + r.end - r.start for r in self.ranges) >= self.glyph_capacity:
            raise ValueError('AFT mapping references a glyph outside the bitmap')
        self._pixels = self.dsig.pixels() if self.dsig else None

    @lru_cache(maxsize=8192)
    def glyph_index(self, sjis_code: int) -> int | None:
        """Match the *first* source range (ranges can overlap)."""
        if not 0 <= sjis_code <= 0xffff:
            raise ValueError('SJIS code outside 16 bits')
        for r in self.ranges:
            if r.start <= sjis_code <= r.end:
                return r.glyph_base + sjis_code - r.start
        return None

    def atlas_position(self, glyph_index: int) -> tuple[int,int]:
        if not 0 <= glyph_index < self.glyph_capacity:
            raise IndexError(glyph_index)
        return ((glyph_index % self.columns) * self.width,
                (glyph_index // self.columns) * self.height)

    def color_bank(self, bank: int = 0) -> tuple[tuple[int,int,int,int], ...]:
        if self.dsig is not None:
            if not 0 <= bank < self.dsig.banks:
                raise IndexError(bank)
            return tuple(dsig.rgb555_to_rgb(v) + ((0,) if i == 0 else (255,))
                         for i,v in enumerate(self.dsig.palettes[bank]))
        if bank != 0:
            raise IndexError('AFT BMP has no DSIG palette banks')
        # BMP pixel 0 black = background; pixel 1 white = glyph.
        return ((0,0,0,0),(255,255,255,255))

    @lru_cache(maxsize=8192)
    def glyph(self, glyph_index: int, bank: int = 0) -> Image.Image:
        """RGBA copy of a glyph cell from original image bytes."""
        x0,y0 = self.atlas_position(glyph_index)
        if self.bmp is not None:
            bitmap = self.bmp.crop((x0,y0,x0+self.width,y0+self.height))
            return Image.merge('RGBA',(
                Image.new('L',bitmap.size,255),Image.new('L',bitmap.size,255),
                Image.new('L',bitmap.size,255),bitmap.convert('L')))
        sheet_width = self.dsig.width
        palette = self.color_bank(bank)
        rgba = bytearray(self.width * self.height * 4)
        for py in range(self.height):
            ybase = (y0+py) * sheet_width
            for px in range(self.width):
                p = ybase + x0 + px
                index = (self._pixels[p//2] >> (4*(p & 1))) & 15
                rgba[(py*self.width+px)*4:(py*self.width+px+1)*4] = bytes(palette[index])
        return Image.frombytes('RGBA',(self.width,self.height),bytes(rgba))

    def code_glyph(self, sjis_code: int, bank: int = 0) -> Image.Image | None:
        index=self.glyph_index(sjis_code)
        return self.glyph(index,bank) if index is not None else None

    @staticmethod
    def sjis_codes(text: str) -> Iterator[int]:
        """Follow ALTextDS' two-byte lead rule on exact CP932 bytes."""
        raw=text.encode('cp932','strict')
        i=0
        while i < len(raw):
            b=raw[i]
            if b==0x0A:
                yield b;i+=1;continue
            lead = (0x80<=b<=0x9f) or (b>=0xe0)
            if lead:
                if i+1 >= len(raw):
                    raise ValueError('Truncated CP932 lead byte')
                yield (b<<8)|raw[i+1]
                i+=2
            else:
                yield b;i+=1

    @lru_cache(maxsize=512)
    def line(self, text: str, *, bank: int=0, clip_width: int | None = 224,
             line_height: int = 16) -> Image.Image:
        """Original-glyph single line, transparent outside authored glyph pixels.

        U+0020 is advanced by half the glyph-cell width (ALTextDS vfunc_25).
        U+007C is intentionally NOT changed to a space: this font's author
        encoded a 6px-wide blank cell for that code in the original game.
        """
        if line_height < self.height:
            raise ValueError('Line height shorter than AFT glyph cell')
        codes=list(self.sjis_codes(text))
        if 0x0A in codes:
            raise ValueError('Newlines are not part of a single CommonInfo text entry')
        def advance(code:int) -> int:
            return self.width // 2 if code==0x20 else self.width
        text_width=sum(advance(c) for c in codes)
        canvas = Image.new('RGBA',(clip_width if clip_width is not None else max(1,text_width),
                                   line_height),(0,0,0,0))
        cursor=0
        for code in codes:
            if code != 0x20:
                img=self.code_glyph(code,bank)
                if img is not None:
                    canvas.alpha_composite(img,(cursor,0))
            cursor+=advance(code)
        return canvas


def parse(data: bytes) -> AftFont:
    return AftFont(data)
