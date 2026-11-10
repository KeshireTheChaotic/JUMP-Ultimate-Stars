"""Research-backed labels (2026-11-06) checked against binaries and data."""
import os
import struct
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_formats import battleinput, chrbin, clearlist, eventops  # noqa: E402

B = Path(os.environ.get('JUS_BIN', r'D:\Library\Development\JUS\reverse_engineering\verified_binaries'
                                   r'\52e262163e0d304c'))
OV6 = B / 'arm9_overlay_0006.bin'
DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))
OV6_BASE = 0x0214CD20


def ov6(addr, n):
    return OV6.read_bytes()[addr - OV6_BASE:addr - OV6_BASE + n]


@unittest.skipUnless(OV6.is_file(), 'overlay 6 binary not available')
class Overlay6Tables(unittest.TestCase):
    def test_selector_offsets(self):
        offs = [struct.unpack_from('<I', ov6(0x021712B8, 23 * 12), 12 * i)[0] for i in range(23)]
        for off in offs[1:]:
            self.assertIn(off, battleinput.MOVE_CONTROLS)
        self.assertEqual(battleinput.MOVE_CONTROLS[offs[5]][0], 'Up + B')     # selector 5 = 0x22
        self.assertEqual(battleinput.control_for(0x05C11E), 'B (neutral)')
        self.assertEqual(battleinput.MOVE_CONTROLS[0x31][0], 'X — special A (8 koma)')

    def test_item_status_shot_and_clear_tables(self):
        self.assertEqual(tuple(ov6(0x0217214C, 13)), eventops.ITEM_SELECTOR)
        self.assertEqual(tuple(ov6(0x0217215C, 26)), eventops.STATUS_SELECTOR)
        self.assertEqual(struct.unpack('<26I', ov6(0x02172864, 26 * 4)), chrbin.SHOT_HANDLERS)
        cbs = struct.unpack('<31I', ov6(0x02172290, 31 * 4))
        self.assertEqual(cbs, tuple(clearlist.PREDICATES[i][0] for i in range(31)))

    def test_chara_action_labels(self):
        self.assertEqual(sorted(eventops.CHARA_ACTION_NAMES), list(range(0x22)))
        self.assertIn('item 0x18', eventops.chara_action_text([0x0B, 9, 0, 0, 0, 0, 0]))
        self.assertIn('status 0x25', eventops.chara_action_text([0x0A, 19, 0, 0, 0, 0, 0]))
        self.assertIn('outside', eventops.chara_action_text([0x0B, 40, 0, 0, 0, 0, 0]))


@unittest.skipUnless((DATA / 'bin/clearlst.bin').is_file(), 'requires extracted data')
class ClearList(unittest.TestCase):
    def test_every_node_slot_has_text_and_rule(self):
        from jus_package.project import DataRoot
        from jus_package import progression as prog
        root = DataRoot(str(DATA))
        cat = prog.ProgressionCatalog.load(root)
        goals = cat.goals
        self.assertEqual(len(goals), 143)
        used = set()
        for i in range(cat.graph.node_count):
            for r in cat.graph.get(i).rewards:
                g = goals.get(r.goal_code)
                self.assertIsNotNone(g)
                self.assertIsNotNone(g.predicate)
                self.assertIsNone(goals.validate(r.goal_code))
                used.add(g.id)
        self.assertEqual(len(used), 94)
        self.assertEqual(goals.get(0).display, 'Clear The Stage!')
        self.assertEqual(goals.get(7).text, 'Make|1|ring-out|KO!')
        self.assertIn('best enemy score < 1', goals.get(1).rule)
        self.assertIsNotNone(goals.validate(500))
        self.assertIn('fallback', goals.describe(-1))


if __name__ == '__main__':
    unittest.main()
