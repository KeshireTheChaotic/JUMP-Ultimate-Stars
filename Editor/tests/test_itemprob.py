"""Overlay-6 item probability weight reconstruction (synthetic IPF)."""
import struct
import unittest
from types import SimpleNamespace as N

from jus_formats.itemprob import ItemProb


class ItemProbTests(unittest.TestCase):
    def setUp(self):
        rows = ([10] * 6, [15] * 6, [20] * 6, [25] * 6)
        self.raw = struct.pack('<24h', *(x for row in rows for x in row)) + b'TAIL'
        self.prob = ItemProb.parse(self.raw)
        self.cfg = N(stage_weight=30, weights=(10,)*6,
                     jpower_factor=20, jpower_weights=(10,)*6)

    def test_roundtrip_and_weights(self):
        self.assertEqual(self.prob.build(), self.raw)
        self.assertEqual(self.prob.global_weights[2], (20,)*6)
        normal = self.prob.combined(self.cfg, jpower_enabled=False)
        self.assertEqual(normal[0], (100000,)*6 + (0,)*6)
        self.assertEqual(normal[1], (135000,)*6 + (0,)*6)
        with_power = self.prob.combined(self.cfg, jpower_enabled=True)
        self.assertEqual(with_power[0], (80000,)*6 + (20000,)*6)
        forced_off = self.prob.combined(self.cfg, jpower_enabled=True, battle_rule=3)
        self.assertEqual(forced_off, normal)

    def test_roll_subtraction_and_fallback(self):
        weights = (100000,)*6 + (0,)*6
        self.assertEqual(ItemProb.select_bucket(weights, 0), 0)
        self.assertEqual(ItemProb.select_bucket(weights, 100000), 1)
        self.assertEqual(ItemProb.select_bucket(weights, 700000), 11)
        with self.assertRaises(ValueError):
            ItemProb.select_bucket(weights, 1000000)

    def test_truncated_table_rejected(self):
        with self.assertRaises(ValueError):
            ItemProb.parse(self.raw[:47])


if __name__ == '__main__':
    unittest.main()
