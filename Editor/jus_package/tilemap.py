"""Render ALTM background layers with their DSIG tiles (no GUI dependencies).

Pairing rule (observed, not traced): an ALTM ``<stem>.atm`` uses the DSIG
``<stem>.dig`` in the same archive, or the DSIG embedded after a DSTX
``<stem>.dtx`` of flags 0x05/0x06.  ``*_sud.atm`` style maps without a
same-stem image have no known pair; callers may let the user choose one.
"""
from __future__ import annotations

from PIL import Image

from jus_formats import altm as altmmod, dsig as dsigmod
from jus_formats.binary import u16


def embedded_dsig(blob: bytes) -> dsigmod.DsigFile | None:
    """DSIG after a DSTX header (any flags) or the DSIG itself."""
    if blob[:4] == b'DSIG':
        return dsigmod.parse(blob)
    if blob[:4] == b'DSTX' and len(blob) >= 10:
        end = u16(blob, 8)
        if blob[end:end + 4] == b'DSIG':
            return dsigmod.parse(blob[end:])
        i = blob.find(b'DSIG', 10)
        if i >= 0:
            return dsigmod.parse(blob[i:])
    return None


def _palette_rgba(dsig: dsigmod.DsigFile) -> list[tuple[int, int, int, int]]:
    out = []
    for bank in dsig.palettes:
        for i, v in enumerate(bank):
            out.append(dsigmod.rgb555_to_rgb(v) + ((0,) if i == 0 else (255,)))
    return out


def tile_count(dsig: dsigmod.DsigFile) -> int:
    per = 64 if dsig.mode == dsigmod.MODE_TILED8 else 32
    return len(dsig.pixels()) // per


def render(m: altmmod.AltmFile, dsig: dsigmod.DsigFile, *, opaque_zero: bool = False,
           bank_override: int | None = None) -> tuple[Image.Image, list[str]]:
    """RGBA image of the whole map plus a list of problems (missing tiles/banks)."""
    if dsig.version != 1 or dsig.mode not in (dsigmod.MODE_TILED4, dsigmod.MODE_TILED8):
        raise ValueError(f'ALTM tiles must be DSIG v1 mode 0x10/0x11, got v{dsig.version} {dsig.mode:#x}')
    eight = dsig.mode == dsigmod.MODE_TILED8
    data = dsig.pixels()
    pal = _palette_rgba(dsig)
    if opaque_zero:
        pal = [c[:3] + (255,) for c in pal]
    per = 64 if eight else 32
    ntiles = len(data) // per
    W, H = m.pixel_size
    out = Image.new('RGBA', (W, H), (0, 0, 0, 0))
    cache: dict[int, Image.Image | None] = {}
    problems: set[str] = set()

    def tile(v: int) -> Image.Image | None:
        t = altmmod.entry_tile(v)
        if t >= ntiles:
            problems.add(f'tile {t} beyond {ntiles} tiles')
            return None
        bank = bank_override if bank_override is not None else altmmod.entry_bank(v)
        # 8bpp: with more than 16 banks (>256 colours) the entry's bank bits pick a
        # 256-colour extended palette slot (DS BG extended palettes); otherwise slot 0.
        ext = (bank * 256) if (eight and dsig.banks > 16) else 0
        if eight and ext + 256 > len(pal) and dsig.banks > 16:
            problems.add(f'extended palette {bank} beyond {dsig.banks} banks')
        if not eight and bank >= dsig.banks:
            problems.add(f'palette bank {bank} beyond {dsig.banks} banks')
        px = bytearray(64 * 4)
        base = t * per
        for y in range(8):
            for x in range(8):
                if eight:
                    ci = data[base + y * 8 + x]
                    c = pal[ext + ci] if ext + ci < len(pal) else (255, 0, 255, 255)
                    if ci == 0 and not opaque_zero:
                        c = (0, 0, 0, 0)
                else:
                    b = data[base + y * 4 + (x >> 1)]
                    ci = (b >> ((x & 1) * 4)) & 15
                    idx = bank * 16 + ci
                    c = pal[idx] if idx < len(pal) else (255, 0, 255, 255)
                    if ci == 0 and not opaque_zero:
                        c = (0, 0, 0, 0)
                o = (y * 8 + x) * 4
                px[o:o + 4] = bytes(c)
        im = Image.frombytes('RGBA', (8, 8), bytes(px))
        if altmmod.entry_hflip(v):
            im = im.transpose(Image.Transpose.FLIP_LEFT_RIGHT)
        if altmmod.entry_vflip(v):
            im = im.transpose(Image.Transpose.FLIP_TOP_BOTTOM)
        return im

    for y in range(m.height):
        for x in range(m.width):
            v = m.entries[y * m.width + x]
            key = v if bank_override is None else (v & 0xFFF) | (bank_override << 12)
            if key not in cache:
                cache[key] = tile(v)
            im = cache[key]
            if im is not None:
                out.paste(im, (x * 8, y * 8), im)
    return out, sorted(problems)
