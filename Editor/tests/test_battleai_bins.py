"""Battle AI (overlay 11) and small bin tables, checked against the shipped data."""
import os
import struct
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_formats import battleai, battleinput, bintables  # noqa: E402

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))
OV11 = Path(os.environ.get('JUS_BIN', r'D:\Library\Development\JUS\reverse_engineering\verified_binaries'
                                      r'\52e262163e0d304c')) / 'arm9_overlay_0011.bin'
HAVE = (DATA / 'chr/ChrBin.aar').is_file()


@unittest.skipUnless(OV11.is_file(), 'overlay 11 binary not available')
class Overlay11(unittest.TestCase):
    def test_selector_to_aipm_index_table(self):
        b = OV11.read_bytes()
        table = b[0x02181100 - 0x02172A60:0x02181100 - 0x02172A60 + 24]
        self.assertEqual(struct.unpack('<b', table[:1])[0], -1)        # selector 0 → none
        self.assertEqual(list(table[1:24]), list(range(23)))             # selector n → index n-1


@unittest.skipUnless(HAVE, 'requires extracted data')
class ShippedAI(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        from jus_package.project import DataRoot
        cls.root = DataRoot(str(DATA))
        cls.arc = cls.root.archive('chr/ChrBin.aar')

    def test_every_aipm_parses_and_presence_matches_roster(self):
        from jus_formats import roster
        present = [0] * 23
        files = 0
        for e in self.arc.entries:
            d = e.payload()
            if d[:4] != b'AIPM':
                continue
            files += 1
            for i in battleai.parse_aipm(d).blocks:
                present[i] += 1
        self.assertEqual(files, len(roster.BATTLE_IDS) + len(roster.SUPPORT_IDS))
        self.assertEqual(present[2:12], [74] * 10)                       # battle characters only
        self.assertEqual(present[12:22:2], [55, 51, 41, 16, 11])         # specials per koma size

    def test_profile_matches_move_collision(self):
        from jus_formats import almt
        prof = battleai.parse_aipm(self.arc.get('chr/ai/db_b_01.bin').payload())
        rec = prof.for_selector(battleinput.MOVE_CONTROLS[0x1E][1]).records[0]
        self.assertEqual((rec.box, rec.active, rec.power), ((31, -26, 21, 14), (9, 12), 8))
        moves = almt.parse(self.root.read('chr/ChrArc.aar|chr/db_b_01.aar|db_b_01.amt')).moves
        m = next(x for x in moves if x.id == 0x05C11E)
        rect = next(t.value for na in m.nodes if na for t in na.tracks if t.field == 'CollisionRect1')
        x0, y0, x1, y1 = rect
        self.assertEqual(((x0 + x1) // 2, (y0 + y1) // 2), rec.box[:2])
        col = self.arc.get('chr/col/db_b_01.bin').payload()
        self.assertEqual(struct.unpack_from('<i', col, 4)[0], rec.power)

    def test_nav_graph_nodes_are_stage_colliders(self):
        from jus_formats import roster, stagephysics
        from jus_package import scenes
        sets = {s.stem: s for s in scenes.stage_sets(self.root)}
        for stem, *_ in roster.STAGES:
            geo = stagephysics.parse_stage_bin(self.root.read(sets[stem].members['bin']))
            for prof in battleai.AIMV_PROFILES:
                g = battleai.parse_aimv(self.arc.get(f'chr/ai/move/{stem}/{prof}_m.bin').payload())
                self.assertEqual(len(g.nodes), len(geo.collision_boxes), (stem, prof))
                self.assertTrue(all(t < len(g.nodes) for row in range(7) for _, t in g.edges(row)))

    def test_ai_param(self):
        p = battleai.parse_ai_param(self.arc.get('chr/ai/ai_param.bin').payload())
        self.assertEqual(p.count, 89)


@unittest.skipUnless((DATA / 'deck/Deck.aar').is_file(), 'requires extracted data')
class Tables(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        from jus_package.project import DataRoot
        cls.root = DataRoot(str(DATA))

    def test_text_tables(self):
        self.assertEqual(len(bintables.koma_names(self.root)), 890)
        for path, (group, slots) in bintables.GROUPED.items():
            rows = bintables.grouped_text(self.root.read(path), group, slots)
            self.assertTrue(rows, path)
        self.assertEqual(len(bintables.text_table(self.root.read('bin/title.bin'))), 42)

    def test_decks_fit_the_board(self):
        from jus_formats import kshape
        shapes = kshape.ShapeTable.parse(self.root.read('bin/kshape.bin'))
        cards = kshape.CardTable.parse(self.root.read('bin/koma.bin'), shapes)
        arc = self.root.archive('deck/Deck.aar')
        decks = outside = 0
        for e in arc.entries:
            d = e.payload()
            if len(d) != 0x5C:
                continue
            decks += 1
            for s in bintables.parse_deck(d).cards:
                c = cards.cards[s.koma]
                for x, y, *_ in shapes.get(c.size, c.variant).coordinates():
                    outside += not (0 <= s.column + x < 5 and 0 <= s.row + y < 4)
        self.assertEqual((decks, outside), (295, 0))


if __name__ == '__main__':
    unittest.main()
