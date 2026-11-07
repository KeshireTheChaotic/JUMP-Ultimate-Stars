"""Overlay6 shot and collision typed views: read-only, byte preserving."""
from __future__ import annotations

import os
from pathlib import Path
import struct
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_formats import chrbin
from jus_formats.alar import open_nested

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))


class ShotRecordView(unittest.TestCase):
    def make(self, flags=0):
        b = bytearray(32)
        b[0] = 0x0B
        b[1] = 0xC0
        struct.pack_into('<H', b, 4, 0x2345)
        struct.pack_into('<h', b, 6, 0)
        struct.pack_into('<I', b, 8, flags)
        struct.pack_into('<III', b, 12, 0x12345678, 0x90ABCDEF, 0x0F010203)
        b[0x1D] = 0xFA
        struct.pack_into('<H', b, 0x1E, 9)
        return bytes(b)

    def test_handler_fields_unknown_bits_and_byte_preservation(self):
        blob = self.make(0x00094005)
        table = chrbin.parse(blob, 'chr/shot/test.bin')
        s = table.shot_record(0)
        self.assertEqual(table.build(), blob)
        self.assertEqual(table.record(0), blob)
        self.assertEqual((s.handler_id, s.handler_address), (0x0B, '0x0216EF7C'))
        self.assertEqual(s.byte1, 0xC0)
        self.assertEqual(s.work_param, 0x2345)
        self.assertEqual((s.lifetime, s.effective_lifetime), (0, 30))
        self.assertEqual((s.reference0, s.reference1, s.optional_reference),
                         (0x12345678, 0x90ABCDEF, 0x0F010203))
        self.assertTrue(s.optional_reference_active)
        self.assertEqual((s.selector_byte, s.selector_signed), (250, -6))
        self.assertEqual(s.handler_parameter_1e, 9)
        self.assertEqual(s.handler_0b_update, '0x0216F9D0')
        self.assertEqual(s.unknown_flags, s.flags & ~chrbin.KNOWN_SHOT_FLAG_MASK)
        self.assertEqual(len(s.known_flags), 4)  # optional ref, X, sound, Y

    def test_spawn_cap_sound_route_and_handler_specific_flags(self):
        b = bytearray(self.make(0x00010600))
        struct.pack_into('<H', b, 2, 7)
        b[0] = 0x0D
        b[0x1D] = 201
        r = chrbin.ShotRecord(bytes(b))
        self.assertEqual(r.spawn_limit, 7)
        self.assertIn('independent BattleNoteTrack', r.handler_behavior)
        self.assertEqual(r.sound_route, 'character sound group +0x24, entry 1')
        self.assertEqual(len(r.handler_scoped_flags), 2)
        self.assertEqual(r.unknown_flags, 0)
        b[0x1D] = 220
        self.assertEqual(chrbin.ShotRecord(bytes(b)).sound_route,
                         'character sound group +0x22, entry 0')
        b[0x1D] = 190
        self.assertEqual(chrbin.ShotRecord(bytes(b)).sound_route,
                         'global sound constant 0x7A (selector below 200)')
        b[0] = 0x00
        self.assertEqual(chrbin.ShotRecord(bytes(b)).unknown_flags, 0x600)
        b[0] = 0x07
        struct.pack_into('<I', b, 8, 0x8400)
        self.assertEqual(len(chrbin.ShotRecord(bytes(b)).handler_scoped_flags), 2)
        self.assertEqual(chrbin.ShotRecord(bytes(b)).unknown_flags, 0)

    def test_lifetime_and_alternative_callback(self):
        b = bytearray(self.make())
        struct.pack_into('<h', b, 6, 18)
        struct.pack_into('<H', b, 30, 0)
        s = chrbin.ShotRecord(bytes(b))
        self.assertEqual((s.lifetime, s.effective_lifetime), (18, 18))
        self.assertEqual(s.handler_0b_update, '0x0216F398')
        b[0] = 7
        self.assertIsNone(chrbin.ShotRecord(bytes(b)).handler_0b_update)
        with self.assertRaises(ValueError):
            chrbin.ShotRecord(b'abnormal')
        with self.assertRaises(ValueError):
            chrbin.parse(b'bad', 'chr/shot/test.bin').shot_record(0)

    def test_collision_view_separate_namespace(self):
        b = bytearray(20)
        b[0:2] = b'\x05\x02'
        struct.pack_into('<i', b, 4, -33)
        t = chrbin.parse(bytes(b), 'chr/col/test.bin')
        c = t.col_record(0)
        self.assertEqual((c.class_byte, c.selector_byte, c.power), (5, 2, -33))
        self.assertEqual((c.word02, c.raw_word08, c.raw_word0c, c.raw_word10),
                         (0, 0, 0, 0))
        self.assertEqual(t.build(), bytes(b))
        with self.assertRaises(ValueError):
            t.shot_record(0)


@unittest.skipUnless((DATA / 'chr/ChrBin.aar').is_file(), 'original ChrBin.aar unavailable')
class ShippedShotCorpus(unittest.TestCase):
    def test_all_original_records_roundtrip(self):
        arc = open_nested((DATA / 'chr/ChrBin.aar').read_bytes())
        shot_files = shot_count = col_files = col_count = 0
        kinds = set()
        for e in arc.entries:
            kind = chrbin.kind_of(e.name)
            if kind not in ('shot', 'col'):
                continue
            payload = e.payload()
            table = chrbin.parse(payload, e.name)
            self.assertEqual(table.build(), payload)
            if kind == 'shot':
                self.assertEqual(table.stride, 32)
                shot_files += 1
                shot_count += table.count
                for i in range(table.count):
                    r = table.shot_record(i)
                    kinds.add(r.handler_id)
                    self.assertEqual(r.raw, table.record(i))
            else:
                self.assertEqual(table.stride, 20)
                col_files += 1
                col_count += table.count
                for i in range(table.count):
                    self.assertEqual(table.col_record(i).raw, table.record(i))
        self.assertEqual((shot_files, shot_count), (184, 1258))
        self.assertEqual((col_files, col_count), (281, 2837))
        self.assertEqual(len(kinds), 20)


if __name__ == '__main__':
    unittest.main()
