"""Koma (DSTX 0x04) and ALTM codecs, scene discovery and tile-map rendering."""
import os
import struct
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from jus_formats import altm, dsig, koma  # noqa: E402
from jus_formats.sprite import write_tiled4  # noqa: E402

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))
HAVE_DATA = (DATA / 'koma/koma.aar').is_file()


def make_koma(panels=2):
    tiles = 1 + 36 * panels
    pix = bytearray(32)                         # tile 0 unused
    for p in range(panels):
        cols = [(p * 5 + x + y) % 16 for y in range(48) for x in range(48)]
        pix += write_tiled4(cols, 48, 48)
    g = dsig.DsigFile(1, dsig.MODE_TILED4, 0, 8, 8 * tiles, [list(range(16))], bytes(pix))
    head = bytearray(b'DSTX' + bytes((1, 4)) + struct.pack('<HH', panels, 0))
    for p in range(panels):
        head += struct.pack('<HBB', 1 + 36 * p, 6, 6)
    while len(head) % 4:
        head += b'\0'
    head[8:10] = struct.pack('<H', len(head))
    return bytes(head) + g.build()


class KomaCodec(unittest.TestCase):
    def test_roundtrip_and_panel_isolation(self):
        blob = make_koma(3)
        k = koma.parse(blob)
        self.assertEqual(k.build(), blob)
        self.assertEqual([(p.first_tile, p.size) for p in k.panels], [(1, (48, 48)), (37, (48, 48)), (73, (48, 48))])
        self.assertEqual(k.panel_colours(1)[:3], [5, 6, 7])
        before = [k.panel_colours(i) for i in range(3)]
        k.set_panel_colours(1, [9] * (48 * 48))
        k2 = koma.parse(k.build())
        self.assertEqual(k2.panel_colours(1), [9] * (48 * 48))
        self.assertEqual(k2.panel_colours(0), before[0])
        self.assertEqual(k2.panel_colours(2), before[2])
        self.assertEqual(k2.problems(), [])

    def test_rejects_sprite_tables(self):
        with self.assertRaises(ValueError):
            koma.parse(b'DSTX\x01\x03\x00\x00\x0c\x00\x00\x00')


class AltmCodec(unittest.TestCase):
    def header(self, flags, w, h):
        return b'ALTM' + bytes((0, flags, 2, 0)) + bytes((0x0C, 0x0A, 0x0B, 0)) + struct.pack('<HHHHI', 8, 8, w, h, 0)

    def test_raw(self):
        entries = list(range(32 * 32))
        blob = self.header(3, 32, 32) + struct.pack('<1024H', *entries)
        m = altm.parse(blob)
        self.assertEqual(m.entries, entries)
        self.assertEqual(m.build(), blob)

    def test_packed_commands(self):
        # row 0: 6-entry pattern repeated over 10, then 2 literal; row 1: sequential up 4, down 4, fill 4
        row0 = struct.pack('<H6H', (10 << 8) | 5, *range(1, 7)) + struct.pack('<H2H', (2 << 8) | 1, 7, 8)
        row1 = struct.pack('<HH', (4 << 8) | 0x40, 0x1010) + struct.pack('<HH', (4 << 8) | 0xC0, 0x2020) + \
            struct.pack('<HH', (4 << 8), 0x0005)
        data = struct.pack('<H', 2) + struct.pack('<HH', 6, 6 + len(row0)) + row0 + row1
        m = altm.parse(self.header(7, 12, 2) + data)
        self.assertEqual(m.entries[:12], [1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 7, 8])
        self.assertEqual(m.entries[12:], [0x1010, 0x1011, 0x1012, 0x1013, 0x2020, 0x201F, 0x201E, 0x201D,
                                          5, 5, 5, 5])
        m.dirty = True
        self.assertEqual(altm.parse(m.build()).entries, m.entries)

    def test_bad_row_length_rejected(self):
        data = struct.pack('<HH', 2, 4) + struct.pack('<HH', (3 << 8), 1)
        with self.assertRaises(ValueError):
            altm.parse(self.header(7, 4, 1) + data)


@unittest.skipUnless(HAVE_DATA, 'JUS_DATA not available')
class RealData(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        from jus_package.project import DataRoot
        cls.root = DataRoot(DATA)

    def test_every_koma_rebuilds(self):
        arc = self.root.archive('koma/koma.aar')
        n = 0
        for e in arc.entries:
            b = e.payload()
            self.assertEqual(koma.parse(b).build(), b, e.name)
            n += 1
        self.assertEqual(n, 898)

    def test_stage_layers_render(self):
        from jus_package import scenes
        sets = {s.stem: s for s in scenes.stage_sets(self.root)}
        self.assertIn('bg_bb', sets)
        self.assertTrue({'layers', 'bin', 'cam', 'mob'} <= set(sets['bg_bb'].members))
        layers = {l.name: l for l in scenes.find_layers(self.root, sets['bg_bb'].members['layers'])}
        self.assertEqual(set(layers), {'bg_bb_00', 'bg_bb_01', 'bg_bb_02', 'bg_bb_sud'})
        self.assertEqual(layers['bg_bb_sud'].borrowed, 'bg_bb_02')
        img, probs = scenes.render_layer(self.root, layers['bg_bb_00'])
        self.assertEqual((img.size, probs), ((512, 512), []))
        # extended palette: an opaque pixel from palette slot 1 is not black
        self.assertGreater(sum(img.getpixel((256, 100))[:3]), 60)

    def test_title_screen_layers(self):
        from jus_package import scenes
        names = [l.name for l in scenes.find_layers(self.root, 'title/title.aar')]
        self.assertEqual(names, ['space_top00', 'space_top01', 'space_under00', 'space_under01'])
        self.assertEqual([scenes.default_screen(n) for n in names], ['Top', 'Top', 'Bottom', 'Bottom'])


if __name__ == '__main__':
    unittest.main()
