"""Koma card shapes (bin/kshape.bin + bin/koma.bin), card↔art links, loose-file saves."""
import os
import struct
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from jus_formats import kshape  # noqa: E402

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))


def synthetic_shapes():
    """One shape per size 1..8 laid out in reading order."""
    starts, counts, body = [], [], b''
    for n in range(1, 9):
        starts.append(n - 1)
        counts.append(1)
        cells = bytes(range(1, n + 1)) + bytes(20 - n)
        body += cells + struct.pack('<I', (1 << n) - 1)
    return struct.pack('<16I', *starts, *counts) + body


class Synthetic(unittest.TestCase):
    def test_shapes_roundtrip_and_coordinates(self):
        raw = synthetic_shapes()
        t = kshape.ShapeTable.parse(raw)
        self.assertEqual(t.build(), raw)
        s = t.get(5, 0)
        self.assertEqual(s.coordinates()[4], (4, 0, 5))       # 5 columns: 5th cell is still row 0
        self.assertEqual(t.get(6, 0).coordinates()[5], (0, 1, 6))   # 6th wraps to row 1
        self.assertEqual(s.problems(), [])

    def test_bad_mask_rejected(self):
        raw = bytearray(synthetic_shapes())
        raw[0x40 + 20] ^= 1
        with self.assertRaises(ValueError):
            kshape.ShapeTable.parse(bytes(raw))

    def test_card_edit_touches_two_bytes(self):
        shapes = kshape.ShapeTable.parse(synthetic_shapes())
        raw = b''.join(struct.pack('<H', i) + bytes([0xAA, 0xBB, 7, i, 0xCC, 0xDD, 0, 0, 0x11, 0x22]) for i in range(3))
        cards = kshape.CardTable.parse(raw, shapes)
        self.assertEqual(cards.build(), raw)
        cards.set_shape(1, 3, 0, shapes)
        out = cards.build()
        self.assertEqual(out[:12 + 8], raw[:12 + 8])
        self.assertEqual(out[12 + 8:12 + 10], bytes([2, 0]))
        self.assertEqual(out[12 + 10:], raw[12 + 10:])
        with self.assertRaises(ValueError):
            cards.set_shape(0, 4, 3, shapes)                   # no such variant

    def test_loose_file_staging(self):
        from jus_package.project import DataRoot
        with tempfile.TemporaryDirectory() as td:
            (Path(td) / 'bin').mkdir()
            (Path(td) / 'bin/koma.bin').write_bytes(b'old')
            r = DataRoot(td)
            r.write_file('bin/koma.bin', b'new')
            self.assertEqual((r.read('bin/koma.bin'), r.dirty_files()), (b'new', ['bin/koma.bin']))
            with tempfile.TemporaryDirectory() as out:
                r.save(out)
                self.assertEqual((Path(out) / 'bin/koma.bin').read_bytes(), b'new')
            self.assertEqual(r.dirty_files(), [])
            self.assertEqual(r.read('bin/koma.bin'), b'new')    # the session keeps its edit
            self.assertEqual((Path(td) / 'bin/koma.bin').read_bytes(), b'old')


@unittest.skipUnless((DATA / 'bin/kshape.bin').is_file(), 'JUS_DATA not available')
class RealCards(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        from jus_package.project import DataRoot
        from jus_package import komacards
        cls.root = DataRoot(DATA)
        cls.cat = komacards.load(cls.root)

    def test_tables(self):
        self.assertEqual([len(g) for g in self.cat.shapes.groups], [1, 2, 6, 12, 14, 14, 13, 4])
        self.assertEqual(self.cat.shapes.build(), (DATA / 'bin/kshape.bin').read_bytes())
        self.assertEqual(len(self.cat.cards.cards), 890)
        self.assertEqual(self.cat.cards.build(), (DATA / 'bin/koma.bin').read_bytes())

    def test_known_anomaly_is_reported_not_fixed(self):
        s = self.cat.shapes.get(7, 10)
        self.assertEqual(s.index, 59)
        self.assertEqual(sorted(n for n in s.cells if n), [1, 2, 3, 4, 4, 6, 7])
        self.assertTrue(s.problems())
        self.assertEqual((self.cat.cards.cards[678].size, self.cat.cards.cards[678].variant), (7, 10))

    def test_series_links(self):
        # ARM9 table 0x0209E840 settles the ids the panel counts could not tell apart
        self.assertTrue(all(len(v) == 1 for v in self.cat.series.values()))
        self.assertEqual({k: self.cat.series[k][0] for k in (2, 11, 17, 22, 35)},
                         {2: 'is', 11: 'nb', 17: 'tz', 22: 'tl', 35: 'mo'})
        self.assertEqual(self.cat.mismatches, [])              # every card's size = its art panels
        bb = self.cat.cards_for_art('koma/bb_02.dtx')
        self.assertEqual([(c.index, u) for c, u in bb], [(691, True)])
        self.assertEqual(self.cat.cards_for_art('koma/dt_20.dtx'), [])
        self.assertEqual([c.series_id for c, _ in self.cat.cards_for_art('koma/is_00.dtx')], [2])

    def test_panel_count_check_agrees_with_table(self):
        from jus_package import komacards
        from jus_formats.roster import KOMA_SERIES_PREFIXES
        inferred = komacards.match_series(self.cat.cards, self.cat.art)
        for sid, cands in inferred.items():
            self.assertIn(KOMA_SERIES_PREFIXES[sid], cands)


if __name__ == '__main__':
    unittest.main()
