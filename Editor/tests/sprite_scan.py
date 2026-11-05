"""Sprite decode/encode scan over character and effect archives.

For every DSTX with a resolvable DSIG source: compose each frame, re-encode it
with the same layout, and compare with the original pixel data.
"""
from __future__ import annotations

import collections
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(HERE))

from jus_formats import alar, dsig, dstx, sprite  # noqa: E402

DATA = Path(sys.argv[1] if len(sys.argv) > 1 else r'D:\Library\Development\JUS\data')


def members(path):
    arc = alar.Archive.parse(path.read_bytes())
    for e in arc.entries:
        if e.ext == '.aar':
            sub = alar.open_nested(e.data)
            for s in sub.entries:
                yield s.name, s.payload()
        else:
            yield e.name, e.payload()


def main():
    files = {}
    for p in [DATA / 'chr' / 'ChrArc.aar', *sorted((DATA / 'chr').glob('*c.aar')), *sorted((DATA / 'efc').glob('*.aar'))]:
        for name, blob in members(p):
            files.setdefault(name, blob)
    stats = collections.Counter()
    for name, blob in sorted(files.items()):
        if not name.endswith('.dtx'):
            continue
        d = dstx.parse(blob)
        if d.embedded:
            g = dsig.parse(d.embedded)
        else:
            stem = name[:-4]
            g_blob = files.get(stem.rstrip('_') + '.dig') if stem.endswith('_') else files.get(stem + '.dig')
            if g_blob is None:
                stats['no-source'] += 1
                continue
            g = dsig.parse(g_blob)
        src = sprite.SpriteSource(g)
        for i, fr in enumerate(d.frames):
            if not fr.pieces:
                continue
            img = sprite.compose(fr, src)
            if src.mode == dsig.MODE_CHARSTREAM:
                if fr.pieces[0].index >= len(g.frames):
                    stats['charstream-index-out-of-range'] += 1
                    continue
                orig = src.frame_bytes(fr.pieces[0].index)
                warn = []
                nf, data = sprite.build_charstream_frame(img, fr, fr.pieces[0].index, g.palettes, warn)
                same_layout = [(p.x, p.y, p.attr) for p in nf.pieces] == [(p.x, p.y, p.attr) for p in fr.pieces]
                stats[('charstream', 'layout-kept', same_layout)] += 1
                stats[('charstream', 'pixels-exact', data == orig)] += 1
                if data != orig and same_layout:
                    # differences only in padding / hidden pixels?
                    img2 = sprite.compose(sprite.Frame(nf.pieces), _Fake(g, data, fr.pieces[0].index))
                    stats[('charstream', 'visually-identical', img2.pixels == img.pixels)] += 1
            else:
                stats[(f'mode-{src.mode:#x}', 'composed')] += 1
    for k, v in sorted(stats.items(), key=str):
        print(k, v)


class _Fake(sprite.SpriteSource):
    def __init__(self, g, data, index):
        super().__init__(g)
        self._frames[index] = data


if __name__ == '__main__':
    main()
