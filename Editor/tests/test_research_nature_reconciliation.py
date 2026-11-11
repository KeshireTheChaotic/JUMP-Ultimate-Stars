"""Regression checks for native Koma nature lookup (ov05 0214E480).

External research: docs/confirmed-facts/koma.md §2.
Primary authority: reverse_engineering/functions_layout/arm9_ov05/arm9_ov05_0214e480.c
"""
import unittest
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from jus_formats.kshape import Card, native_card_nature


def card(kind, index, size, flags=0):
    b = bytearray(12)
    b[6] = kind
    b[7] = index
    b[8] = size - 1
    b[0x0B] = flags
    return Card(0, b)


class NativeKomaNatureTests(unittest.TestCase):
    def setUp(self):
        self.battle = bytearray(74 * 0x3C)
        self.support = bytearray(193 * 0x14)
        self.battle[24 * 0x3C] = 2
        self.support[12 * 0x14] = 1
        self.support[12 * 0x14 + 8] = 0

    def test_battle_fallback_ignores_low_nibble(self):
        original = card(0, 24, 7, 0x37)
        self.assertIsNone(original.nature_override)
        self.assertEqual(native_card_nature(original, self.battle, self.support), 2)

    def test_battle_explicit_override(self):
        original = card(0, 24, 7, 0x11)
        self.assertEqual(original.nature_override, 1)
        self.assertEqual(native_card_nature(original, self.battle, self.support), 1)

    def test_support_variant_uses_size(self):
        self.assertEqual(native_card_nature(card(1, 12, 2), self.battle, self.support), 1)
        self.assertEqual(native_card_nature(card(1, 12, 3), self.battle, self.support), 0)

    def test_helper_always_neutral(self):
        self.assertEqual(native_card_nature(card(2, 255, 1), b'', b''), 3)

    def test_invalid_references_do_not_read_wrong_record(self):
        with self.assertRaises(ValueError):
            native_card_nature(card(0, 24, 4, 0x30), b'', self.support)
        with self.assertRaises(ValueError):
            native_card_nature(card(1, 12, 4), self.battle, self.support)
        with self.assertRaises(ValueError):
            native_card_nature(card(9, 0, 1), self.battle, self.support)

    def test_shipped_corpus_all_890_panels(self):
        import os
        from pathlib import Path

        data = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))
        paths = [data / 'bin' / name for name in ('koma.bin', 'chr_b.bin', 'chr_s.bin')]
        if not all(path.is_file() for path in paths):
            self.skipTest('Original JUS_DATA corpus not available')
        cards_raw, battle_raw, support_raw = (path.read_bytes() for path in paths)
        self.assertEqual(len(cards_raw), 890 * 12)
        self.assertEqual(len(battle_raw), 74 * 0x3C)
        self.assertEqual(len(support_raw), 193 * 0x14)
        kinds = [0, 0, 0]
        explicit_battle = 0
        for i in range(890):
            panel = Card(i, bytearray(cards_raw[i * 12:(i + 1) * 12]))
            kinds[panel.panel_type] += 1
            value = native_card_nature(panel, battle_raw, support_raw)
            self.assertIn(value, (0, 1, 2, 3), f'Koma {i} nature {value}')
            if panel.panel_type == 0 and panel.nature_override is not None:
                explicit_battle += 1
        self.assertEqual(kinds, [206, 372, 312])
        self.assertEqual(explicit_battle, 32)


if __name__ == '__main__':
    unittest.main()
