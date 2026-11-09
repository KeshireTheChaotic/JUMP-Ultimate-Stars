"""Deterministic, source-guided DS pixel-art generator for Character Forge.

This is not text-to-image AI: the original game's raster silhouettes and
frame anchors are used as a pose scaffold.  The style design is editable in
concept.json; hand-authored PNGs can replace generated ones at any time.
Native format conversion is handled by forge.build, not this generator.
"""
from __future__ import annotations

import math
from pathlib import Path

from PIL import Image, ImageDraw, ImageFilter

from .forge import _rj, _rgba, _wj, _pixels

DEFAULT = {
    'ink': '#18151f', 'hair': '#393750', 'skin': '#e5ac82',
    'clothing': '#bb3e44', 'pants': '#343f67', 'accent': '#f5dd68',
    'highlight': '#f2eee1', 'effect': '#ef7e3c',
    'effect_highlight': '#fff1aa', 'paper': '#f2dc9b',
    'screen_tone': '#a98a72',
}


def _rgb(text: str) -> tuple[int, int, int]:
    v = text.lstrip('#')
    if len(v) != 6:
        raise ValueError(f'expected #RRGGBB: {text!r}')
    return tuple(int(v[x:x + 2], 16) for x in (0, 2, 4))


def design(work: Path) -> dict[str, tuple[int, int, int]]:
    concept = _rj(work / 'concept.json')
    spec = {**DEFAULT, **concept.get('generator', {})}
    return {name: _rgb(v) for name, v in spec.items()}


def _shade(rgb: tuple[int, int, int], value: float) -> tuple[int, int, int]:
    return tuple(max(0, min(255, int(x * value))) for x in rgb)


def stylize(src: Image.Image, scheme: dict, *, effect: bool = False) -> Image.Image:
    """Hard-edged pose-guided artwork; preserves frame dimensions and origin."""
    src = src.convert('RGBA')
    alpha = src.getchannel('A')
    bounds = alpha.point(lambda p: 255 if p >= 128 else 0).getbbox()
    if bounds is None:
        return Image.new('RGBA', src.size)
    x0, y0, x1, y1 = bounds
    sw, sh = max(1, x1 - x0), max(1, y1 - y0)
    original = src.load()
    opaque = alpha.load()
    out = Image.new('RGBA', src.size)
    pix = out.load()
    for y in range(y0, y1):
        ry = (y - y0) / sh
        for x in range(x0, x1):
            if opaque[x, y] < 128:
                continue
            lum = (0.299 * original[x, y][0] + 0.587 * original[x, y][1]
                   + 0.114 * original[x, y][2]) / 255
            border = any(nx < 0 or ny < 0 or nx >= src.width or ny >= src.height
                         or opaque[nx, ny] < 128
                         for nx, ny in ((x - 1, y), (x + 1, y), (x, y - 1), (x, y + 1)))
            if effect:
                base = scheme['effect_highlight'] if lum > .70 else (
                    scheme['effect'] if lum > .28 else scheme['ink'])
                colour = _shade(base, 1.0 if (x + y) % 7 else .86)
            else:
                if ry < .24:
                    base = scheme['hair'] if lum < .55 else scheme['skin']
                elif ry < .69:
                    base = scheme['accent'] if ((x - x0) + 2 * (y - y0)) % 17 < 3 else scheme['clothing']
                else:
                    base = scheme['pants']
                colour = scheme['ink'] if border else (
                    scheme['highlight'] if lum > .82 else
                    _shade(base, .68 if lum < .34 else 1.0 if lum < .71 else 1.16))
            pix[x, y] = (*colour, 255)
    return out


def _generate_koma(work: Path, brief: dict, scheme: dict, overwrite: bool) -> int:
    """Make a manga-style card illustration and split by the native shape's labels."""
    from .forge import _rgba
    all_bodies = []
    for s in brief['sprites']:
        if s['shared'] or s['role'] != 'character body' or s['atlas']:
            continue
        for frame in s['frames']:
            if not frame.get('empty'):
                p = work / 'art' / s['key'] / f'{frame["index"]:03d}.png'
                if p.is_file():
                    all_bodies.append(p)
        if all_bodies:
            break
    generated = 0
    komas = brief.get('komas', [])
    for cnum, d in enumerate(komas):
        shape = d['card_shapes'][0]['cells']
        coords = [(i % 5, i // 5, n) for i, n in enumerate(shape) if n]
        if len(coords) != d['panels']:
            raise ValueError(f'{d["key"]}: Koma shape occupancy != panel count')
        minx = min(x for x, _, _ in coords)
        miny = min(y for _, y, _ in coords)
        w = (max(x for x, _, _ in coords) - minx + 1) * 48
        h = (max(y for _, y, _ in coords) - miny + 1) * 48
        img = Image.new('RGBA', (w, h), (*scheme['paper'], 255))
        dr = ImageDraw.Draw(img)
        center = (int(w * .55), int(h * .45))
        for angle in range(0, 360, 19):
            a = math.radians(angle)
            bx = int(center[0] + math.cos(a) * max(w, h) * 1.8)
            by = int(center[1] + math.sin(a) * max(w, h) * 1.8)
            dr.line((center[0], center[1], bx, by),
                    fill=(*scheme['screen_tone'], 255), width=2 if angle % 3 else 3)
        # Sparse halftone dots are drawn at native pixel resolution (no antialias).
        for y in range(2, h, 7):
            for x in range((y // 7) % 2 * 3 + 2, w, 7):
                dr.rectangle((x, y, x + 1, y + 1), fill=(*scheme['screen_tone'], 255))
        if all_bodies:
            sample = all_bodies[min(len(all_bodies) - 1,
                                    (cnum + 1) * len(all_bodies) // (len(komas) + 1))]
            figure = _rgba(sample)
            crop = figure.getchannel('A').getbbox()
            if crop:
                figure = figure.crop(crop)
                scale = min((w * .86) / max(1, figure.width),
                            (h * .88) / max(1, figure.height))
                nw, nh = max(1, round(figure.width * scale)), max(1, round(figure.height * scale))
                figure = figure.resize((nw, nh), Image.Resampling.NEAREST)
                fx, fy = (w - nw) // 2, h - nh
                shadow = Image.new('RGBA', figure.size, (*scheme['ink'], 0))
                shadow.putalpha(figure.getchannel('A').filter(ImageFilter.MaxFilter(3)))
                img.alpha_composite(shadow, (max(0, fx + 2), max(0, fy + 2)))
                img.alpha_composite(figure, (fx, fy))
        for cx, cy, n in coords:
            dest = work / 'art' / 'koma' / d['key'] / f'{n - 1:03d}.png'
            if dest.exists() and not overwrite:
                continue
            tile = img.crop(((cx - minx) * 48, (cy - miny) * 48,
                             (cx - minx + 1) * 48, (cy - miny + 1) * 48))
            dest.parent.mkdir(parents=True, exist_ok=True)
            tile.save(dest)
            generated += 1
    return generated


def generate(work: Path, *, overwrite: bool = False) -> dict:
    """Create pose-complete body/effect rasters and native-shaped Koma panel PNGs."""
    work = Path(work)
    b = _rj(work / 'brief.json')
    scheme = design(work)
    changed = 0
    effects = 0
    skipped = 0
    for s in b['sprites']:
        if s['shared'] or (s['atlas'] or {}).get('mixed'):
            continue
        effect = s['role'] == 'effect texture'
        names = ['atlas.png'] if s['atlas'] else [
            f'{f["index"]:03d}.png' for f in s['frames'] if not f.get('empty')]
        for name in names:
            dst = work / 'art' / s['key'] / name
            if dst.exists() and not overwrite:
                skipped += 1
                continue
            src = work / 'reference' / s['key'] / name
            image = stylize(_rgba(src), scheme, effect=effect)
            dst.parent.mkdir(parents=True, exist_ok=True)
            image.save(dst)
            changed += 1
            effects += int(effect)
    cards = _generate_koma(work, b, scheme, overwrite)
    report = {
        'generator': 'deterministic source-guided manga pixel stylization',
        'not_ai_art': True, 'silhouettes_and_frame_anchors': 'from_original_JUS_assets',
        'original_data_modified': False, 'sprite_files': changed, 'effect_files': effects,
        'koma_panels': cards, 'skipped_existing': skipped,
        'note': 'A procedural art baseline, not a new character identity or finished illustration. Replace PNGs with hand-painted art as needed.',
    }
    from . import review
    report['review'] = review.write(work)
    _wj(work / 'GENERATION_REPORT.json', report)
    return report
