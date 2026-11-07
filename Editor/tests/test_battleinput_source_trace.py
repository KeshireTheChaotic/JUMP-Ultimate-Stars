"""Original ROM selector row and battle input predicate cross-check.

These tests assert exact resource offsets and native code predicates, not
unverified human-facing move names or gameplay success.
"""
from __future__ import annotations
import os
import struct
import unittest
from pathlib import Path

from jus_formats import almt, battleinput, roster
from jus_package.project import DataRoot, join

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\Data'))
ROM = Path(r'D:\Library\Development\JUS\reverse_engineering\verified_binaries'
           r'\52e262163e0d304c\arm9_overlay_0006.bin')
ROM_BASE = 0x0214CD20
ROM_TABLE = 0x021712B8


class InputPredicates(unittest.TestCase):
    def test_exact_normal_2button_combo_predicates(self):
        self.assertEqual(battleinput.source_trace(0x22)[1], '(input & 0x81) == 0x81')
        self.assertEqual(battleinput.source_trace(0x23)[1], '(input & 0x101) == 0x101')
        self.assertEqual(battleinput.source_trace(0x24)[1], '(input & 0x82) == 0x82')
        self.assertEqual(battleinput.source_trace(0x25)[1], '(input & 0x102) == 0x102')
        self.assertEqual(battleinput.source_trace(0x2A)[1], '(input & 0x41) == 0x41')
        self.assertEqual(battleinput.source_trace(0x28)[1], 'actor+0xD1 != 0')
        self.assertIn('physical button not independently identified',
                      battleinput.source_trace(0x18)[2])

    def test_ground_air_crouch_code_names_distinct(self):
        self.assertEqual(battleinput.source_trace(0x1E)[3], '0215A720')
        self.assertEqual(battleinput.source_trace(0x20)[3], '0215A720')
        self.assertEqual(battleinput.source_trace(0x26)[3], '0215A8C0')
        self.assertEqual(battleinput.source_trace(0x24)[3], '0215A8F8')
        self.assertNotEqual(battleinput.source_trace(0x1E)[2],
                            battleinput.source_trace(0x20)[2])

    def test_special_offset_and_selector_pair_by_koma_size(self):
        for size in range(4, 9):
            base = 0x29 + 2 * (size - 4)
            for variant in (0, 1):
                index = 13 + 2 * (size - 4) + variant
                entry = battleinput.MOVE_CONTROLS[base + variant]
                self.assertEqual(entry[1], index)
                trace = battleinput.source_trace(base + variant)
                self.assertIn(f'size {size}', trace[0])
                self.assertEqual(trace[3], '0215A720')
                self.assertEqual(trace[1],
                                 'input & 0x40' if variant == 0 else
                                 '(input & 0x41) == 0x41')


@unittest.skipUnless(ROM.is_file() and (DATA/'chr/ChrArc.aar').is_file(),
                     'Original source ROM / game data unavailable')
class ROMAndCorpus(unittest.TestCase):
    def test_original_selector_table_all_23_entries(self):
        rom = ROM.read_bytes()
        offsets=[struct.unpack_from('<I',rom,ROM_TABLE-ROM_BASE+12*selector)[0]
                 for selector in range(23)]
        self.assertEqual(offsets,[0x1E]+list(range(0x1E,0x28))+
                         [0x18,0x28]+list(range(0x29,0x33)))
        self.assertEqual(len(offsets), 23)
        self.assertEqual(len(battleinput.SOURCE_INPUT_CONDITIONS), 22)
        for off in offsets[1:]:
            trace = battleinput.source_trace(off)
            self.assertIsNotNone(trace)
            self.assertIn(trace[3],('0215A720','0215A8C0','0215A8F8',
                                    '0215A720/0215A8F8'))

    def test_all_74_battle_form_normal_resources_exist(self):
        root=DataRoot(DATA)
        seen=0
        for form in roster.BATTLE_IDS:
            path=join('chr/ChrArc.aar',f'chr/{form}.aar',f'{form}.amt')
            table=almt.parse(root.read(path))
            ids={x.id&255 for x in table.moves}
            required={0x18,*range(0x1E,0x29)}
            self.assertTrue(required.issubset(ids),form)
            self.assertTrue({0x33,0x34,0x35,0x36}.issubset(ids),form)
            seen+=len(required)
        self.assertEqual(seen,888)


if __name__ == '__main__':
    unittest.main()
