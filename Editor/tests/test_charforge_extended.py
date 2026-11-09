"""Character Forge v2: native Koma art + all-moves ALMT index + image generator."""
from __future__ import annotations

import hashlib
import json
import os
import sys
import tempfile
import unittest
from pathlib import Path

from PIL import Image

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_formats import dsig, dstx, koma, sprite
from jus_package.project import DataRoot
from jus_package import package
from tools.charforge import forge, generator, slots

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))
HAVE = (DATA / 'chr/ChrArc.aar').is_file()


class PaletteEncoding(unittest.TestCase):
    def test_all_rgb555_levels_survive_charforge_quantization(self):
        for level in range(32):
            rgb = dsig.rgb555_to_rgb(level * 0x421)
            im = Image.new('RGBA', (1, 1), (*rgb, 255))
            pal = forge._palette_from([im], 1)
            self.assertEqual(dsig.rgb_to_rgb555(*pal[0]), level * 0x421)


@unittest.skipUnless(HAVE, 'requires original extracted JUS data')
class CharacterForgeV2(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.tmp = tempfile.TemporaryDirectory(prefix='charforge_v2_')
        cls.work = Path(cls.tmp.name) / 'work'
        cls.pkg = Path(cls.tmp.name) / 'pkg'
        cls.root = DataRoot(str(DATA))
        cls.original_koma = {
            p: hashlib.sha256((DATA / p).read_bytes()).hexdigest()
            for p in ('koma/koma.aar', 'bin/koma.bin', 'bin/kshape.bin')
        }
        cls.brief = forge.scaffold(cls.root, 'db_b_01', 'db_b_01', cls.work)
        cls.gen_report = generator.generate(cls.work)
        cls.build_report = forge.build(cls.root, cls.work, cls.pkg)
        cls.dryrun = DataRoot(str(DATA))
        cls.validate_report = forge.validate(cls.dryrun, cls.pkg, 'db_b_01')

    @classmethod
    def tearDownClass(cls):
        cls.tmp.cleanup()

    def test_generated_move_and_sprite_corpus(self):
        self.assertFalse(self.build_report['errors'])
        self.assertFalse(self.validate_report['errors'])
        moves = json.loads((self.pkg / 'ALMT_LINKS.json').read_text(encoding='utf-8'))
        self.assertEqual(moves['slot'], 'db_b_01')
        self.assertEqual(self.build_report['almt_moves_indexed'], len(moves['moves']))
        self.assertTrue(moves['moves'])
        self.assertTrue(any(m['nodes'] for m in moves['moves']))
        self.assertTrue(any('GenerateID' in [t['field'] for n in m['nodes']
                           for t in n['tracks']] for m in moves['moves']))

    def test_generated_sprite_frames_use_original_dimensions_anchors(self):
        sp = next(s for s in self.brief['sprites']
                  if not s['shared'] and s['role'] == 'character body' and not s['atlas'])
        fr = next(f for f in sp['frames'] if not f.get('empty'))
        name = f'{fr["index"]:03d}.png'
        with (Image.open(self.work / 'reference' / sp['key'] / name) as ref,
              Image.open(self.work / 'art' / sp['key'] / name) as art):
            self.assertEqual(ref.size, art.size)
            self.assertEqual(ref.getchannel('A').point(lambda a: 255 if a >= 128 else 0).tobytes(),
                             art.getchannel('A').point(lambda a: 255 if a >= 128 else 0).tobytes())

    def test_native_koma_panels_and_card_links(self):
        self.assertEqual(len(self.build_report['komas']), len(self.brief['komas']))
        manifest = json.loads((self.pkg / 'package.json').read_text(encoding='utf-8'))
        for d in self.brief['komas']:
            path = d['path']
            file = next(f for f in manifest['files'] if f['path'] == path)
            new = koma.parse((self.pkg / file['file']).read_bytes())
            self.assertFalse(new.problems())
            self.assertEqual(len(new.panels), d['panels'])
            self.assertTrue(all(p.size == (48, 48) for p in new.panels))
            self.assertEqual(new.build(), (self.pkg / file['file']).read_bytes())
            self.assertEqual(self.dryrun.read(path), (self.pkg / file['file']).read_bytes())
        self.assertEqual((DATA / 'bin/koma.bin').read_bytes(), self.dryrun.read('bin/koma.bin'))
        self.assertEqual((DATA / 'bin/kshape.bin').read_bytes(), self.dryrun.read('bin/kshape.bin'))

    def test_2bpp_atlas_preserves_authored_transparency_after_import(self):
        s = next(s for s in self.brief['sprites']
                 if not s['shared'] and (s['atlas'] or {}).get('bpp') == 2)
        manifest = forge._rj(self.pkg / 'package.json')
        dig = s['dsig']
        if dig.get('embedded'):
            payload = dstx.parse(self.dryrun.read(s['archive'] + '|' + s['dstx'])).embedded
        else:
            unit = next(u for u in manifest['units'] if u['dir'] == dig['unit'])
            payload = self.dryrun.read(unit['path'] + '|' + dig['member'])
        g = dsig.parse(payload)
        decoded = sprite.texture_image(g, two_bpp=True)
        with Image.open(self.work / 'art' / s['key'] / 'atlas.png') as art:
            self.assertEqual(art.size, (decoded.width, decoded.height))
            self.assertEqual(bytes(a >= 128 for a in art.getchannel('A').tobytes()),
                             bytes(bool(v) for v in decoded.pixels))

    def test_mixed_atlas_keeps_original_texture(self):
        s = next(s for s in self.brief['sprites'] if s['dstx'] == 'db_b_01_e00.dtx')
        self.assertTrue(s['atlas']['mixed'])
        dig = s['dsig']
        manifest = forge._rj(self.pkg / 'package.json')
        unit = next(u for u in manifest['units'] if u['dir'] == dig['unit'])
        path = unit['path'] + '|' + dig['member']
        self.assertEqual(self.dryrun.read(path), self.root.read(path))

    def test_shared_effects_and_original_data_untouched(self):
        for s in self.brief['sprites']:
            if s['shared']:
                self.assertFalse((self.work / 'art' / s['key']).exists())
        for rel, digest in self.original_koma.items():
            self.assertEqual(hashlib.sha256((DATA / rel).read_bytes()).hexdigest(), digest)

    def test_generator_does_not_overwrite_hand_art(self):
        s = next(s for s in self.brief['sprites'] if not s['shared'] and not s['atlas']
                 and any(not f.get('empty') for f in s['frames']))
        f = next(f for f in s['frames'] if not f.get('empty'))
        p = self.work / 'art' / s['key'] / f'{f["index"]:03d}.png'
        before = p.read_bytes()
        again = generator.generate(self.work)
        self.assertTrue(again['skipped_existing'])
        self.assertEqual(p.read_bytes(), before)


if __name__ == '__main__':
    unittest.main()
