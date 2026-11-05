"""In-place sprite edits used by the editor UI (no GUI dependencies)."""
from __future__ import annotations

from jus_formats import dsig as dsigmod, sprite
from jus_formats.dsig import DsigFile, MODE_CHARSTREAM, MODE_TILED4
from jus_formats.dstx import DstxFile, Frame


def set_frame_image(d: DstxFile, g: DsigFile, i: int, img: sprite.IndexedImage,
                    warnings: list[str] | None = None, relayout: bool = False) -> None:
    """Replace (or append when ``i == len(d.frames)``) frame ``i`` with ``img``."""
    src = sprite.SpriteSource(g)
    if i > len(d.frames):
        raise IndexError('frame index beyond end')
    old = d.frames[i] if i < len(d.frames) else Frame([], None)
    template = Frame([] if relayout else list(old.pieces), old.bounds)
    if src.mode == MODE_CHARSTREAM:
        number = old.pieces[0].index if old.pieces and old.pieces[0].index < len(g.frames) else len(g.frames)
        if number == len(g.frames):
            g.frames.append(b'')
        built, data = sprite.build_charstream_frame(img, template, number, g.palettes, warnings)
        g.set_frame_data(number, data)
        g.recompute_max_frame_bytes()
        new = Frame(built.pieces, built.computed_bounds() if d.version == 2 else None)
    elif src.mode == MODE_TILED4:
        imgs, frames = [], []
        for k in range(max(len(d.frames), i + 1)):
            if k == i:
                imgs.append(img)
                frames.append(template)
            else:
                fr = d.frames[k]
                imgs.append(sprite.compose(fr, src) if fr.pieces else sprite.IndexedImage(1, 1))
                frames.append(fr)
        out, pool = sprite.build_tile_frames(imgs, frames, g.palettes, warnings)
        g.set_pixels(pool)
        g.w0a = sprite.tiled_sheet_height(len(pool) // 32, g.w08 or 256)
        if d.version == 2:
            for fr, orig in zip(out, frames):
                fr.bounds = fr.computed_bounds() if fr.pieces else (orig.bounds or fr.computed_bounds())
        d.frames = out
        d.frame_refs = None
        return
    else:
        raise ValueError(f'Frame images of DSIG mode {src.mode:#x} are edited through the atlas')
    if i == len(d.frames):
        d.frames.append(new)
    else:
        d.frames[i] = new
    d.frame_refs = None


def set_atlas_image(g: DsigFile, img: sprite.IndexedImage) -> None:
    if g.version != 1 or g.mode not in sprite.ATLAS_MODES:
        raise ValueError('Not an atlas image')
    if img.width % 16:
        raise ValueError('Atlas width must be a multiple of 16 pixels')
    data = sprite.atlas_from_colours(img.width, img.height, [v & 15 for v in img.pixels])
    g.w08, g.w0a = img.width, img.height
    g.set_pixels(data)


def delete_frame(d: DstxFile, i: int) -> None:
    del d.frames[i]
    d.frame_refs = None


def describe(d: DstxFile, g: DsigFile | None) -> str:
    if g is None:
        return f'DSTX v{d.version}, {len(d.frames)} frames, no image'
    mode = g.mode if g.version == 1 else MODE_CHARSTREAM
    size = f', atlas {g.width}x{g.height}' if mode in sprite.ATLAS_MODES else ''
    return (f'DSTX v{d.version} flags {d.flags:#04x}, {len(d.frames)} frames; DSIG v{g.version} '
            f'{dsigmod.MODE_NAMES.get(mode, hex(mode))}, {g.banks} palette banks{size}'
            f'{" (embedded)" if d.embedded else ""}')
