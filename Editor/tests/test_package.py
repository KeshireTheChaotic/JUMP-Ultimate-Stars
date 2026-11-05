"""End-to-end package tests against the real game data.

Skipped when the data root (JUS_DATA_ROOT or D:\\Library\\Development\\JUS\\data)
is not present.
"""
from __future__ import annotations

import json
import os
import shutil
import sys
import tempfile
import unittest
from pathlib import Path

HERE = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(HERE))

from PIL import Image  # noqa: E402

from jus_formats import alar, almt, dsig, dstx, sprite  # noqa: E402
from jus_package import package  # noqa: E402
from jus_package.project import DataRoot  # noqa: E402

DATA = Path(os.environ.get('JUS_DATA_ROOT', r'D:\Library\Development\JUS\data'))
HAVE_DATA = (DATA / 'chr' / 'ChrArc.aar').is_file()


@unittest.skipUnless(HAVE_DATA, 'game data not available')
class PackageRoundTrip(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.tmp = Path(tempfile.mkdtemp(prefix='jus_pkg_test_'))
        cls.pkg = cls.tmp / 'bb_b_01'
        package.export_character(DataRoot(DATA), 'bb_b_01', cls.pkg)

    @classmethod
    def tearDownClass(cls):
        shutil.rmtree(cls.tmp, ignore_errors=True)

    def test_unchanged_import_is_noop(self):
        root = DataRoot(DATA)
        rep = package.import_package(self.pkg, root, write=False)
        self.assertEqual(rep.changed_members, [], rep.changed_members)
        self.assertEqual(rep.added, [])
        self.assertEqual(root.dirty_files(), [])

    def test_edits_are_applied(self):
        work = self.tmp / 'edited'
        shutil.copytree(self.pkg, work)
        sdir = work / 'sprites' / 'chr~ChrArc.aar~chr~bb_b_01.aar~bb_b_01_.dtx'
        # 1) paint a block of frame 0 with colour 3 of its existing bank
        png = sdir / 'frames' / '000.png'
        im = Image.open(png)
        px = im.load()
        w, h = im.size
        painted = 0
        for y in range(h):
            for x in range(w):
                v = px[x, y]
                if v & 15 and y < h // 2:
                    px[x, y] = (v & 0xF0) | 3
                    painted += 1
        self.assertGreater(painted, 50)
        im.save(png, transparency=im.info.get('transparency'))
        # 2) change palette bank 0 colour 5 of the body image
        dig_json = work / 'units' / 'chr~bb_b_01c.aar' / 'bb_b_01.dig.json'
        dj = json.loads(dig_json.read_text())
        dj['palettes'][0][5] = '#FF0000'
        dig_json.write_text(json.dumps(dj))
        # 3) add a move (copy of the first) with a new id
        amt_json = work / 'units' / 'chr~ChrArc.aar~chr~bb_b_01.aar' / 'bb_b_01.amt.json'
        aj = json.loads(amt_json.read_text())
        first = json.loads(json.dumps(aj['moves'][0]))
        max_id = max(int(m['id'], 16) for m in aj['moves'])
        first['id'] = f'0x{max_id + 1:08X}'
        first['duration'] = 99
        aj['moves'].append(first)
        amt_json.write_text(json.dumps(aj))

        out = self.tmp / 'out'
        rep = package.import_package(work, DataRoot(DATA), out_root=out)
        self.assertTrue(rep.written)
        changed = set(rep.changed_members)
        self.assertIn('chr/ChrArc.aar|chr/bb_b_01.aar|bb_b_01.amt', changed)
        self.assertIn('chr/bb_b_01c.aar|bb_b_01.dig', changed)

        new_root = DataRoot(out)
        # move added + span updated
        arc = new_root.archive('chr/ChrArc.aar|chr/bb_b_01.aar')
        amt_e = arc.get('bb_b_01.amt')
        f = almt.parse(amt_e.payload())
        self.assertEqual(f.moves[-1].id, max_id + 1)
        self.assertEqual(f.moves[-1].duration, 99)
        self.assertEqual(amt_e.span, (max_id + 1) - amt_e.resource_id + 1)
        # bb_b_01.aod does not share the ALMT span in the original data; it must stay as it was
        orig_arc = DataRoot(DATA).archive('chr/ChrArc.aar|chr/bb_b_01.aar')
        self.assertEqual(arc.get('bb_b_01.aod').attributes, orig_arc.get('bb_b_01.aod').attributes)
        lo, hi = arc.computed_id_range()
        self.assertEqual(arc.build()[8:16], alar.p32(lo) + alar.p32(hi))
        # palette + pixels
        g = dsig.parse(new_root.read('chr/bb_b_01c.aar|bb_b_01.dig'))
        self.assertEqual(g.palettes[0][5], dsig.rgb_to_rgb555(255, 0, 0))
        d = dstx.parse(new_root.read('chr/ChrArc.aar|chr/bb_b_01.aar|bb_b_01_.dtx'))
        info = json.loads((sdir / 'sprite.json').read_text())
        canvas = tuple(info['canvas'])
        img = sprite.compose(d.frames[0], sprite.SpriteSource(g), canvas=canvas)
        edited = Image.open(png)
        self.assertEqual(bytes(img.pixels), edited.tobytes())
        # every other ChrArc member is untouched
        old = alar.Archive.parse((DATA / 'chr' / 'ChrArc.aar').read_bytes())
        new = alar.Archive.parse((out / 'chr' / 'ChrArc.aar').read_bytes())
        self.assertEqual(old.names(), new.names())
        diffs = [a.name for a, b in zip(old.entries, new.entries) if a.data != b.data]
        self.assertEqual(diffs, ['chr/bb_b_01.aar'])


    def test_append_frame_with_auto_layout(self):
        work = self.tmp / 'appended'
        shutil.copytree(self.pkg, work)
        sdir = work / 'sprites' / 'chr~ChrArc.aar~chr~bb_b_01_4.aar~bb_b_01_4_.dtx'
        info = json.loads((sdir / 'sprite.json').read_text())
        first = next(f for f in info['frames'] if f.get('png'))
        im = Image.open(sdir / first['png'])
        im = im.transpose(Image.FLIP_LEFT_RIGHT)           # new artwork, new layout
        im.save(sdir / 'frames' / 'new.png', transparency=Image.open(sdir / first['png']).info.get('transparency'))
        info['frames'].append({'png': 'frames/new.png', 'left': first['left'], 'top': first['top'], 'pieces': []})
        (sdir / 'sprite.json').write_text(json.dumps(info))
        out = self.tmp / 'out_append'
        rep = package.import_package(work, DataRoot(DATA), out_root=out)
        root = DataRoot(out)
        d = dstx.parse(root.read('chr/ChrArc.aar|chr/bb_b_01_4.aar|bb_b_01_4_.dtx'))
        g = dsig.parse(root.read('chr/bb_b_01_4c.aar|bb_b_01_4.dig'))
        orig_d = dstx.parse(DataRoot(DATA).read('chr/ChrArc.aar|chr/bb_b_01_4.aar|bb_b_01_4_.dtx'))
        self.assertEqual(len(d.frames), len(orig_d.frames) + 1)
        new = d.frames[-1]
        self.assertTrue(new.pieces)
        self.assertEqual({p.index for p in new.pieces}, {len(g.frames) - 1})
        canvas = (first['left'], first['top'], first['left'] + im.width, first['top'] + im.height)
        img = sprite.compose(new, sprite.SpriteSource(g), canvas=canvas)
        self.assertEqual(bytes(img.pixels), Image.open(sdir / 'frames' / 'new.png').tobytes())
        self.assertTrue(any('layout regenerated' in w for w in rep.warnings))


@unittest.skipUnless(HAVE_DATA, 'game data not available')
class EffectAtlasPackage(unittest.TestCase):
    def test_atlas_edit(self):
        tmp = Path(tempfile.mkdtemp(prefix='jus_efc_test_'))
        try:
            pkg = tmp / 'comm_a'
            package.export_effect(DataRoot(DATA), 'efc/comm_a.aar', pkg)
            rep = package.import_package(pkg, DataRoot(DATA), write=False)
            self.assertEqual(rep.changed_members, [])
            sdir = next((pkg / 'sprites').iterdir())
            atlas = sdir / 'atlas.png'
            im = Image.open(atlas)
            px = im.load()
            for x in range(16):
                px[x, 0] = 7
            im.save(atlas, transparency=im.info.get('transparency'))
            out = tmp / 'out'
            rep = package.import_package(pkg, DataRoot(DATA), out_root=out)
            self.assertIn('efc/comm_a.aar|jyocyu_efe_a.dig', rep.changed_members)
            g = dsig.parse(DataRoot(out).read('efc/comm_a.aar|jyocyu_efe_a.dig'))
            self.assertEqual(g.pixels()[:8], bytes([0x77] * 8))
        finally:
            shutil.rmtree(tmp, ignore_errors=True)


if __name__ == '__main__':
    unittest.main()
