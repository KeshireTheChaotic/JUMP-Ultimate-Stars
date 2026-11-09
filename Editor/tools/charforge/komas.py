"""Character Forge Koma authoring, using the game's native DSTX 0x04 + DSIG 4bpp.

Target slot's original card selectors/shape records remain untouched.  Every
generated panel maps to an existing named member of koma/koma.aar; the package
edits only that member.  No new roster, card, or engine structures are implied.
"""
from __future__ import annotations

import re
from pathlib import Path

from PIL import Image

from jus_formats import koma as komafmt
from jus_formats.dsig import rgb555_to_rgb, rgb_to_rgb555
from jus_package import komacards
from jus_package.project import DataRoot
from . import slots


def _rgba_panel(kf: komafmt.KomaFile, index: int) -> Image.Image:
    p = kf.panels[index]
    pal = kf.image.palettes[0]
    pixels = kf.panel_colours(index)
    rgba = [(*rgb555_to_rgb(pal[i]), 255) if i else (0, 0, 0, 0)
            for i in pixels]
    im = Image.new('RGBA', p.size)
    im.putdata(rgba)
    return im


def scaffold(root: DataRoot, slot: str, work: Path) -> list[dict]:
    """Export exactly the Koma members reached by this battle roster record."""
    work = Path(work)
    cat = komacards.load(root)
    cards = [c for c in cat.cards.cards
             if c.raw[6] == 0 and c.raw[7] == slots.record(slot)]
    descriptors: dict[str, dict] = {}
    for card in cards:
        for path in cat.art_for_card(card):
            member = path.split('|')[-1]
            other_cards = [c.index for c, _ in cat.cards_for_art(member)
                           if c.index not in [x.index for x in cards]]
            if other_cards:
                raise ValueError(f'{path}: art also used by cards outside slot {slot}: {other_cards}')
            if path not in descriptors:
                kf = komafmt.parse(root.read(path))
                if kf.problems():
                    raise ValueError(f'{path}: {kf.problems()}')
                key = re.sub(r'[^A-Za-z0-9_]+', '_', member.rsplit('/', 1)[-1].rsplit('.', 1)[0])
                ref = work / 'reference' / 'koma' / key
                art = work / 'art' / 'koma' / key
                ref.mkdir(parents=True, exist_ok=True)
                art.mkdir(parents=True, exist_ok=True)
                for i in range(len(kf.panels)):
                    _rgba_panel(kf, i).save(ref / f'{i:03d}.png')
                descriptors[path] = {'key': key, 'path': path, 'member': member,
                                     'panels': len(kf.panels), 'panel_size': [48, 48],
                                     'card_ids': [], 'card_shapes': []}
            d = descriptors[path]
            if card.size != d['panels']:
                raise ValueError(f'card {card.index}: size {card.size} != {path} panels {d["panels"]}')
            d['card_ids'].append(card.index)
            shape = cat.shapes.get(card.size, card.variant)
            d['card_shapes'].append({'card': card.index, 'size': card.size,
                                     'variant': card.variant, 'cells': list(shape.cells)})
    return sorted(descriptors.values(), key=lambda d: d['path'])


def draft(work: Path, *, overwrite: bool = False) -> int:
    """Copy authentic reference panels for a complete editable 4bpp baseline."""
    from .forge import _rgba
    n = 0
    for d in _brief(work):
        for i in range(d['panels']):
            dst = work / 'art' / 'koma' / d['key'] / f'{i:03d}.png'
            if dst.exists() and not overwrite:
                continue
            im = _rgba(work / 'reference' / 'koma' / d['key'] / f'{i:03d}.png')
            im.save(dst)
            n += 1
    return n


def _brief(work: Path) -> list[dict]:
    from .forge import _rj
    return _rj(work / 'brief.json').get('komas', [])


def build(root: DataRoot, work: Path, pkg: Path, report: dict) -> None:
    """Append rebuilt native koma members as individually imported files."""
    from .forge import _index, _palette_from, _rgba, _wj, _rj
    manifest = _rj(pkg / 'package.json')
    pending = []
    for d in _brief(work):
        art = work / 'art' / 'koma' / d['key']
        sources = [art / f'{i:03d}.png' for i in range(d['panels'])]
        missing = [str(p.relative_to(work)) for p in sources if not p.is_file()]
        if missing:
            if _rj(work / 'concept.json').get('require_all_komas', True):
                report['errors'].append(f'{d["key"]}: missing Koma art: {missing}')
            else:
                report['warnings'].append(f'{d["key"]}: no complete Koma art, original preserved')
            continue
        imgs = [_rgba(p) for p in sources]
        if any(im.size != (48, 48) for im in imgs):
            report['errors'].append(f'{d["key"]}: every Koma panel must be exactly 48x48')
            continue
        src = root.read(d['path'])
        kf = komafmt.parse(src)
        if len(kf.panels) != d['panels']:
            report['errors'].append(f'{d["key"]}: Koma source panel count changed')
            continue
        pal = _palette_from(imgs)
        kf.image.palettes[0] = [kf.image.palettes[0][0]] + [rgb_to_rgb555(*rgb) for rgb in pal]
        kf.image_dirty = True
        for i, im in enumerate(imgs):
            indexes = list(_index(im, pal).tobytes())
            kf.set_panel_colours(i, indexes)
        blob = kf.build()
        reparsed = komafmt.parse(blob)
        if reparsed.problems() or reparsed.build() != blob:
            report['errors'].append(f'{d["key"]}: failed native DSTX/DSIG Koma roundtrip')
            continue
        pending.append((d, blob))
    if report['errors']:
        return
    for d, blob in pending:
        relative = f'files/charforge_koma/{d["key"]}.dtx'
        target = pkg / relative
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_bytes(blob)
        entry = root.entry(d['path'])
        manifest['files'].append({'path': d['path'], 'file': relative,
                                  'id': f'0x{entry.id:08X}',
                                  'compressed': entry.compressed})
        report.setdefault('komas', []).append({
            'member': d['path'], 'card_ids': d['card_ids'],
            'panels': d['panels'], 'bytes': len(blob)})
    _wj(pkg / 'package.json', manifest)


def validate(root: DataRoot, pkg: Path, manifest: dict) -> tuple[list[str], list[str]]:
    """Validate authored Komas after package dry-run import into DataRoot."""
    errors, ok = [], []
    cat = komacards.load(root)
    for f in manifest.get('files', []):
        if not f['path'].startswith('koma/koma.aar|'):
            continue
        path = f['path']
        parsed = komafmt.parse(root.read(path))
        if parsed.problems():
            errors.extend(f'{path}: {p}' for p in parsed.problems())
        for card, _ in cat.cards_for_art(path.split('|')[-1]):
            if card.size != len(parsed.panels):
                errors.append(f'{path}: card {card.index} size != {len(parsed.panels)} panels')
        ok.append(f'{path}: {len(parsed.panels)} original-sized 4bpp panels')
    return errors, ok
