"""5×4 polyomino dictionary edits: only references that require migration change."""
from __future__ import annotations

import struct
import unittest

from jus_formats.kshape import CardTable, ShapeTable


def shapes():
    groups = []
    for size in range(1, 9):
        cells = list(range(1, size + 1)) + [0] * (20 - size)
        groups.append(bytes(cells) + struct.pack('<I', (1 << size) - 1))
    return ShapeTable.parse(struct.pack('<16I', *range(8), *([1] * 8)) + b''.join(groups))


def cards(table):
    records = []
    for i, (size, variant) in enumerate(((4, 0), (5, 0), (4, 0), (6, 0))):
        records.append(struct.pack('<H', i) + bytes([0xDE, 0xAD, 1, 2, 0, 0,
                                                      size - 1, variant, 0xB5, 0xFA]))
    return CardTable.parse(b''.join(records), table)


class VariantEdits(unittest.TestCase):
    def test_add_and_reassign_touches_only_variant_byte(self):
        table = shapes()
        ct = cards(table)
        original = ct.build()
        four = list(table.get(4, 0).cells)
        # four contiguous cells in an L shape
        four = [1, 2, 3, 0, 0, 4] + [0] * 14
        shape = table.append_variant(4, four)
        self.assertEqual((shape.size, shape.variant, shape.index), (4, 1, 4))
        self.assertEqual(len(table.shapes), 9)
        self.assertEqual(ShapeTable.parse(table.build()).build(), table.build())
        ct.set_shape(0, 4, 1, table)
        diff = [i for i, (a, b) in enumerate(zip(original, ct.build())) if a != b]
        self.assertEqual(diff, [9])
        self.assertEqual(CardTable.parse(ct.build(), table).build(), ct.build())

    def test_edit_recomputes_occupancy_mask(self):
        table = shapes()
        values = [1, 2, 3, 0, 0, 4] + [0] * 14
        new = table.replace_variant(4, 0, values)
        self.assertEqual(new.mask, (1 << 0) | (1 << 1) | (1 << 2) | (1 << 5))
        self.assertEqual(ShapeTable.parse(table.build()).get(4, 0).cells, tuple(values))

    def test_removal_refuses_orphans_and_renumbers_following_variants(self):
        table = shapes()
        ct = cards(table)
        base = ct.build()
        variant_1 = table.append_variant(4, [1, 2, 3, 0, 0, 4] + [0] * 14)
        variant_2 = table.append_variant(4, [1, 2, 0, 0, 0, 4, 3] + [0] * 13)
        ct.set_shape(0, 4, variant_2.variant, table)
        with self.assertRaisesRegex(ValueError, 'choose another'):
            table.delete_variant(4, 2, ct)
        # Delete variant 1, shifting former variant 2 to 1, not touching other bytes.
        self.assertEqual(table.delete_variant(4, 1, ct), 0)
        self.assertEqual((ct.cards[0].size, ct.cards[0].variant), (4, 1))
        self.assertEqual(len(table.shapes), 9)
        self.assertEqual(ShapeTable.parse(table.build()).build(), table.build())
        self.assertEqual(CardTable.parse(ct.build(), table).build(), ct.build())
        self.assertEqual(ct.build()[:8], base[:8])
        self.assertEqual(ct.build()[10:], base[10:])

    def test_remove_used_variant_requires_migration(self):
        table = shapes()
        ct = cards(table)
        table.append_variant(4, [1, 2, 3, 0, 0, 4] + [0] * 14)
        with self.assertRaises(ValueError):
            table.delete_variant(4, 0, ct)
        self.assertEqual(table.delete_variant(4, 0, ct, replacement=1), 2)
        self.assertEqual([c.variant for c in ct.cards], [0, 0, 0, 0])
        self.assertEqual(ShapeTable.parse(table.build()).build(), table.build())
        self.assertEqual(CardTable.parse(ct.build(), table).build(), ct.build())

    def test_reject_disconnected_duplicate_and_incomplete_shapes(self):
        table = shapes()
        for values in (
            [1, 2, 0, 0, 0, 0, 0, 0, 3, 4] + [0] * 10,
            [1, 1, 2, 3] + [0] * 16,
            [1, 2, 3] + [0] * 17,
        ):
            with self.assertRaises(ValueError):
                table.append_variant(4, values)
        self.assertEqual(len(table.shapes), 8)

    def test_original_dictionary_is_lossless(self):
        t = shapes()
        original = t.build()
        self.assertEqual(t.build(), original)
        self.assertEqual(ShapeTable.parse(original).build(), original)


if __name__ == '__main__':
    unittest.main()
