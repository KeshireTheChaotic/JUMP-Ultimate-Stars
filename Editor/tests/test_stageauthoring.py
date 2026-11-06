"""Byte-lossless stage marker authoring tests; synthetic .mob, no ROM data."""
import struct
import unittest

from jus_formats.stagephysics import parse_mob
from jus_formats.stageauthoring import point_rows, patch_point, format_coordinate


def fixture():
    floors = bytearray(4 + 0x24)
    struct.pack_into('<BBH', floors, 0, 0, 1, len(floors))
    struct.pack_into('<Hhh', floors, 4, 0x24, -120, 60)
    items = bytearray(0x24 + 12 + 8)
    struct.pack_into('<BBH', items, 0, 1, 1, len(items))
    items[0x14] = 1
    struct.pack_into('<ii', items, 0x24, 1024, -512)
    struct.pack_into('<ii', items, 0x30, 256, 512)
    grips = bytearray(4 + 12)
    struct.pack_into('<BBH', grips, 0, 2, 1, len(grips))
    struct.pack_into('<ii', grips, 4, 4096, -8192)
    gimmicks = bytearray(4 + 0x10)
    struct.pack_into('<BBH', gimmicks, 0, 2, 1, len(gimmicks))
    struct.pack_into('<IiiB', gimmicks, 4, 0x10, 256, 768, 3)
    # Gimmick +0x0c is relative to record start, not the coordinates.
    gimmicks[4 + 0x0c] = 3
    blocks = [floors, items, grips, gimmicks]
    offsets = [16]
    for block in blocks[:-1]:
        offsets.append(offsets[-1] + len(block))
    return struct.pack('<4I', *offsets) + b''.join(blocks)


class StageAuthoringTests(unittest.TestCase):
    def test_each_point_kind_preserves_unrelated_bytes(self):
        base = fixture()
        targets = [('floor', 0, '-119', '61'),
                   ('item', 0, '4.00390625', '-2.00390625'),
                   ('symbol', 0, '2', '-3'),
                   ('grip', 0, '16.5', '-32.5'),
                   ('gimmick', 0, '1.5', '3.5')]
        for kind, index, x, y in targets:
            with self.subTest(kind=kind):
                edited = patch_point(base, kind, index, x, y)
                self.assertEqual(len(edited), len(base))
                original = parse_mob(base)
                parsed = parse_mob(edited)
                self.assertEqual(parsed.sections, original.sections)
                self.assertEqual(point_rows(parsed, kind)[index][2:], (x, y))
                self.assertNotEqual(edited, base)
                self.assertEqual(patch_point(edited, kind, index, x, y), edited)

    def test_reject_out_of_range_and_non_lossless_coordinates(self):
        raw = fixture()
        for kind, x, y in [('floor', '1.25', '0'), ('item', '0.1', '0'),
                           ('grip', 'NaN', '0'), ('gimmick', '8388608', '0')]:
            with self.subTest(kind=kind), self.assertRaises(ValueError):
                patch_point(raw, kind, 0, x, y)
        with self.assertRaises(IndexError):
            patch_point(raw, 'symbol', 1, '0', '0')
        with self.assertRaises(ValueError):
            patch_point(raw, 'unsupported', 0, '0', '0')
        self.assertEqual(format_coordinate(-1, fixed=True), '-0.00390625')


if __name__ == '__main__':
    unittest.main()
