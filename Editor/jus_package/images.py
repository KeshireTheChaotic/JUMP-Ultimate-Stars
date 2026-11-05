"""PNG <-> IndexedImage conversion (Pillow).

Frames using palette banks 0..15 are exported as indexed PNGs (8-bit
palette indices).  Frames with banks >=16 use RGBA PNGs with a private
index-preservation chunk so unchanged export/import remains lossless.  An
image editor that discards PNG metadata can still load the RGBA colours,
but duplicate RGB555 colours across banks may make bank assignment ambiguous.
"""
from __future__ import annotations

from pathlib import Path
from array import array
import base64
import binascii
import hashlib
import struct
import zlib

from PIL.PngImagePlugin import PngInfo

from PIL import Image

from jus_formats.dsig import rgb555_to_rgb
from jus_formats.sprite import IndexedImage


def png_palette(palettes: list[list[int]]) -> tuple[list[int], bytes]:
    flat = []
    alpha = bytearray()
    for b in range(16):
        for i in range(16):
            if b < len(palettes):
                flat += list(rgb555_to_rgb(palettes[b][i]))
                alpha.append(0 if i == 0 else 255)
            else:
                flat += [255, 0, 255]
                alpha.append(0 if i == 0 else 255)
    return flat, bytes(alpha)


def to_pil(img: IndexedImage, palettes: list[list[int]]) -> Image.Image:
    # PNG colour palettes have at most 256 entries; high banks need RGBA.
    if any(v > 255 for v in img.pixels):
        return to_rgba(img, palettes)
    im = Image.frombytes('P', (img.width, img.height), bytes(img.pixels))
    flat, alpha = png_palette(palettes)
    im.putpalette(flat)
    im.info['transparency'] = alpha
    return im


def to_rgba(img: IndexedImage, palettes: list[list[int]]) -> Image.Image:
    return Image.frombytes('RGBA', (img.width, img.height), img.to_rgba(palettes))


def save_png(img: IndexedImage, palettes: list[list[int]], path: Path) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    if any(v > 255 for v in img.pixels):
        # Keep the original bank numbers when an RGBA frame is unmodified.
        # A modified / metadata-stripped PNG is instead quantised normally.
        rgba = img.to_rgba(palettes)
        indices = struct.pack('<' + 'H' * len(img.pixels), *img.pixels)
        meta = PngInfo()
        meta.add_text('JUS_Index16', base64.b64encode(zlib.compress(indices)).decode('ascii'))
        meta.add_text('JUS_RGBA_SHA256', hashlib.sha256(rgba).hexdigest())
        Image.frombytes('RGBA', (img.width, img.height), rgba).save(
            path, pnginfo=meta, optimize=False)
        return
    to_pil(img, palettes).save(path, transparency=png_palette(palettes)[1], optimize=False)


def load_png(path: Path, palettes: list[list[int]], left: int, top: int,
             warnings: list[str] | None = None) -> IndexedImage:
    with Image.open(path) as src:
        src.load()
        im = src.copy()
        meta = dict(src.info)
        if 'transparency' in src.info:
            im.info['transparency'] = src.info['transparency']
    w, h = im.size
    if im.mode == 'P':
        values = bytearray(im.tobytes())
        banks = len(palettes)
        bad = sum(1 for v in values if v & 15 and v >> 4 >= banks)
        if bad and warnings is not None:
            warnings.append(f'{path.name}: {bad} pixels use palette entries beyond bank {banks - 1}; '
                            'they were mapped to the nearest colour')
        if bad:
            rgba = im.convert('RGBA')
            values = _quantise(rgba, palettes, values)
        else:
            for i, v in enumerate(values):
                if not v & 15:
                    values[i] = 0
        return IndexedImage(w, h, left, top, values)
    rgba = im.convert('RGBA')
    raw = rgba.tobytes()
    if 'JUS_Index16' in meta and 'JUS_RGBA_SHA256' in meta:
        if hashlib.sha256(raw).hexdigest() == meta['JUS_RGBA_SHA256']:
            try:
                compressed = base64.b64decode(meta['JUS_Index16'], validate=True)
                inflater = zlib.decompressobj()
                indices = inflater.decompress(compressed, 2 * w * h + 1)
                if not inflater.eof or inflater.unconsumed_tail:
                    indices = b''
            except (ValueError, zlib.error, TypeError, binascii.Error):
                indices = b''
            if len(indices) == 2 * w * h:
                values = struct.unpack('<' + 'H' * (w * h), indices)
                if all((v & 15) == 0 or v >> 4 < len(palettes) for v in values):
                    return IndexedImage(w, h, left, top, array('H', values))
        elif warnings is not None:
            warnings.append(f'{path.name}: high-bank PNG was edited; colours will be matched to the nearest palette entry')
    return IndexedImage(w, h, left, top, _quantise(rgba, palettes))


def _quantise(rgba: Image.Image, palettes, keep: bytearray | None = None) -> bytearray:
    table = []
    for b, bank in enumerate(palettes):
        for i in range(1, 16):
            table.append(((b << 4) | i, rgb555_to_rgb(bank[i])))
    exact = {}
    for v, rgb in table:
        exact.setdefault(rgb, v)
    out = bytearray(rgba.width * rgba.height)
    cache = {}
    data = rgba.tobytes()
    banks = len(palettes)
    for k in range(rgba.width * rgba.height):
        if keep is not None and keep[k] & 15 and keep[k] >> 4 < banks:
            out[k] = keep[k]
            continue
        r, g, b, a = data[4 * k:4 * k + 4]
        if a < 128:
            continue
        key = (r, g, b)
        if key not in cache:
            # snap to 5-bit precision first, then nearest
            snapped = tuple(((c * 31 + 127) // 255) * 255 // 31 for c in key)
            if snapped in exact:
                cache[key] = exact[snapped]
            else:
                cache[key] = min(table, key=lambda t: sum((x - y) ** 2 for x, y in zip(t[1], key)))[0]
        v = cache[key]
        if v > 255 and isinstance(out, bytearray):
            out = array('H', list(out))
        out[k] = v
    return out


def palette_swatch(palettes: list[list[int]], cell: int = 12) -> Image.Image:
    im = Image.new('RGBA', (16 * cell, max(len(palettes), 1) * cell), (0, 0, 0, 0))
    for b, bank in enumerate(palettes):
        for i, v in enumerate(bank):
            colour = rgb555_to_rgb(v) + ((64,) if i == 0 else (255,))
            im.paste(colour, (i * cell, b * cell, (i + 1) * cell, (b + 1) * cell))
    return im
