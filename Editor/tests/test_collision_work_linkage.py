"""Original ARM9 collision-work addressing and flag LUT regression tests."""
from __future__ import annotations
import hashlib
import os
from pathlib import Path
import struct
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_formats import alar, chrbin
from jus_formats.collisionwork import (
    COL_FLAG_WORK_MASKS, MASK_LUT_ADDRESSES, resolve_collision_work,
    col_flag_work_contributions, collision_rect_runtime)

ROOT = Path(os.environ.get('JUS_PROJECT', r'D:\Library\Development\JUS'))
GAME = ROOT / 'Data/chr/ChrBin.aar'
ROM = (ROOT / 'reverse_engineering/verified_binaries/'
       '52e262163e0d304c/arm9.bin')


class OriginalAddressing(unittest.TestCase):
    def test_builtin_and_authored_ids(self):
        builtin = resolve_collision_work(0x0C, 0)
        self.assertEqual(builtin.source, 'builtin')
        self.assertEqual(builtin.address_or_offset, 0x0209FC2C + 0x0C * 20)
        self.assertIsNone(builtin.record_index)
        hit = resolve_collision_work(0x0100, 60)
        self.assertEqual((hit.source, hit.record_index, hit.address_or_offset),
                         ('chr/col', 0, 0))
        last = resolve_collision_work(0x013B, 60)
        self.assertEqual((last.record_index, last.address_or_offset), (59, 59 * 20))
        for value in [-1, 0x10000]:
            with self.assertRaises(ValueError):
                resolve_collision_work(value, 60)
        with self.assertRaises(IndexError):
            resolve_collision_work(0x0115, 21)

    def test_original_local_hit_rectangle_projection(self):
        r=collision_rect_runtime((-5, -7, 14, 8))
        self.assertEqual((r.center_x, r.center_y, r.half_width, r.half_height),
                         (4, 0, 9, 7))
        rr=collision_rect_runtime((-5,-7,14,8),hflip=True,vflip=True)
        self.assertEqual((rr.center_x, rr.center_y, rr.half_width, rr.half_height),
                         (-4,0,9,7))
        negative=collision_rect_runtime((-8, -8, -1, -1))
        self.assertEqual((negative.center_x,negative.center_y,
                          negative.half_width,negative.half_height),(-4,-4,3,3))
        with self.assertRaises(ValueError):
            collision_rect_runtime((-40000,0,0,0))

    def test_class_branch_and_mask_contribution(self):
        record = chrbin.ColRecord(bytes((0, 2)) + bytes(6) +
                                 struct.pack('<I', (1 << 0) | (1 << 5) |
                                             (1 << 23)) + bytes(8))
        self.assertEqual(record.class_byte, 0)
        self.assertIn('zero-class branch', record.runtime_class_branch)
        self.assertEqual(record.work_mask_contributions,
                         (0x04000000, 0x00000001, 0))
        self.assertTrue(record.special_work_flag_100)
        record2 = chrbin.ColRecord(bytes((3, 4)) + bytes(18))
        self.assertIn('nonzero-class branch', record2.runtime_class_branch)
        self.assertEqual(record2.work_mask_contributions, (0, 0, 0))
        self.assertFalse(record2.special_work_flag_100)

    @unittest.skipUnless(ROM.is_file(), 'original ARM9 image unavailable')
    def test_rom_mask_luts_byte_exact(self):
        data = ROM.read_bytes()
        self.assertEqual(hashlib.sha256(data).hexdigest(),
                         '6464c6e726cd536756476392bf21996ae7289d16e269863cd0b88c1703d09287')
        for addr, table in zip(MASK_LUT_ADDRESSES, COL_FLAG_WORK_MASKS):
            self.assertEqual(table, struct.unpack_from('<32I', data, addr - 0x02000000))
        for bit in range(32):
            expected = tuple(table[bit] for table in COL_FLAG_WORK_MASKS)
            self.assertEqual(col_flag_work_contributions(1 << bit), expected)

    @unittest.skipUnless(GAME.is_file(), 'original ChrBin archive unavailable')
    def test_every_original_col_record_matches_resolved_row(self):
        archive = alar.open_nested(GAME.read_bytes())
        file_count = record_count = 0
        for e in archive.entries:
            if not e.name.startswith('chr/col/') or e.ext != '.bin':
                continue
            table = chrbin.parse(e.payload(), e.name)
            self.assertEqual(table.stride, 20)
            self.assertEqual(table.build(), e.payload())
            file_count += 1
            for i in range(table.count):
                record = table.col_work_record(0x100 + i)
                self.assertEqual(record.raw, table.record(i))
                self.assertIsNone(table.col_work_record(0x0C))
                self.assertEqual(record.work_mask_contributions,
                                 col_flag_work_contributions(record.raw_word08))
                record_count += 1
            with self.assertRaises(IndexError):
                table.col_work_record(0x100 + table.count)
        self.assertEqual((file_count, record_count), (281, 2837))


if __name__ == '__main__':
    unittest.main()
