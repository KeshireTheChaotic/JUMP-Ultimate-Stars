"""Code-backed shot/effect geometry and integer transforms.

No numeric trajectory is asserted when live actor/target/stage state is absent.
"""
from __future__ import annotations

import os
import struct
import unittest
from pathlib import Path

from jus_formats.chrbin import SHOT_HANDLERS, ShotRecord, parse as parse_bin
from jus_package import dynamicgeometry as dg
from jus_package.project import DataRoot, join

R = Path(r'D:\Library\Development\JUS')
DATA = Path(os.environ.get('JUS_DATA',str(R/'Data')))
ROM = R/'reverse_engineering/verified_binaries/52e262163e0d304c/arm9_overlay_0006.bin'
G = R/'reverse_engineering/functions_layout/arm9_ov06'
ROM_BASE = 0x0214CD20


class MotionRules(unittest.TestCase):
    def test_all_26_distinct_handler_ids_and_callbacks(self):
        paths=dg.all_dynamic_paths()
        self.assertEqual(len(paths),26)
        self.assertEqual([p.handler_id for p in paths],list(range(26)))
        self.assertEqual([p.constructor for p in paths],
                         [f'FUN_{addr:08X}' for addr in SHOT_HANDLERS])
        self.assertEqual(len({p.geometry_family for p in paths})>=10,True)
        for p in paths:
            self.assertTrue(p.runtime_dependencies)
            self.assertTrue(p.native_functions)
            self.assertTrue(p.position_model)
            self.assertTrue(p.visual_model)

    @unittest.skipUnless(ROM.is_file(),'Original verified ARM9 overlay unavailable')
    def test_original_callback_table_bytes_match_26_profiles(self):
        src=ROM.read_bytes()
        actual=struct.unpack_from('<26I',src,0x02172864-ROM_BASE)
        self.assertEqual(actual,SHOT_HANDLERS)

    @unittest.skipUnless(G.is_dir(),'Original Ghidra exports unavailable')
    def test_all_proven_code_sources_exist(self):
        for p in dg.all_dynamic_paths():
            self.assertTrue((G/f'arm9_ov06_{int(p.constructor[4:],16):08x}.c').is_file(),p)
            for addr in p.native_functions:
                self.assertTrue((G/f'arm9_ov06_{addr}.c').is_file(),(p.handler_id,addr))
        owner_delta=(G/'arm9_ov06_0216ce6c.c').read_text(encoding='utf8')
        self.assertIn('FUN_0216caf0',owner_delta)
        self.assertIn('0x20',owner_delta)
        self.assertIn('puVar6[5]',owner_delta)

    def test_exact_raw_parent_translation(self):
        before=(1_024,-5_000)
        after=(1_280,-4_488)
        self.assertEqual(dg.parent_translation_delta_raw(before,after),(256,512))
        self.assertEqual(dg.apply_parent_delta_to_active_children(
            ((200,300,0x01),(500,700,0x05),(0,0,0x00),(120,240,0x03)),
            (256,512)),
            ((456,812,0x01),(500,700,0x05),(0,0,0),(376,752,0x03)))

    def test_exact_128_entries_not_imaginary_mesh(self):
        pts=tuple((i*256,-i*256,700+i) for i in range(128))
        translated=dg.translate_128_geometry_points(pts,(512,-256))
        self.assertEqual(len(translated),128)
        self.assertEqual(translated[0],(512,-256,700))
        self.assertEqual(translated[-1],(127*256+512,-127*256-256,827))
        with self.assertRaises(ValueError):
            dg.translate_128_geometry_points(pts[:127],(512,256))

    def test_cardinal_direction_and_signed_quantization(self):
        self.assertEqual(dg.cardinal_direction_q8(0),(256,0))
        self.assertEqual(dg.cardinal_direction_q8(64),(0,256))
        self.assertEqual(dg.cardinal_direction_q8(128),(-256,0))
        self.assertEqual(dg.cardinal_direction_q8(192),(0,-256))
        self.assertEqual(dg.cardinal_direction_q8(64,mirrored=True),(0,256))
        self.assertEqual(dg.cardinal_direction_q8(0,mirrored=True),(-256,0))
        self.assertIsNone(dg.cardinal_direction_q8(31))
        self.assertEqual(dg.native_velocity_q8(1600,(256,0)),(1600,0))
        self.assertEqual(dg.native_velocity_q8(1600,(-256,0)),(-1600,0))
        self.assertEqual(dg.native_velocity_q8(1600,(0,-256)),(0,-1600))
        self.assertEqual(dg.native_velocity_q8(0xFFFF,(256,0)),(-1,0))

    def test_bobobo_known_exact_two_child_placement(self):
        record = ShotRecord(bytes.fromhex(
            '01 00 00 00 40 06 28 00 00 00 00 00 '
            '82 41 08 00 81 41 08 00 80 41 08 00 '
            '00 00 00 00 00 00 00 00'))
        self.assertEqual(dg.handler1_child_placement_q8(record,False),
                         ((0x84180,0,0),(0x84182,-6144,0)))
        self.assertEqual(dg.handler1_child_placement_q8(record,True),
                         ((0x84180,0,0),(0x84182,6144,0)))
        self.assertEqual(dg.shot_dynamic_path(record).handler_id,1)
        self.assertIn('0x01',dg.shot_dynamic_path(record).describe(record)[0])
        noncard=bytearray(record.raw)
        noncard[1]=30
        self.assertIsNone(dg.handler1_child_placement_q8(ShotRecord(bytes(noncard)),False))


@unittest.skipUnless((DATA/'chr/ChrBin.aar').is_file(),
                     'Original JUS BIN corpus unavailable')
class CorpusMotion(unittest.TestCase):
    def test_all_1258_original_shot_records_have_distinct_trace(self):
        r=DataRoot(DATA);from collections import Counter
        counts=Counter()
        for e in r.archive('chr/ChrBin.aar').entries:
            if not e.name.startswith('chr/shot/') or not e.name.endswith('.bin'):
                continue
            table=parse_bin(e.payload(),e.name)
            self.assertEqual(table.stride,32)
            counts['files']+=1
            for i in range(table.count):
                record=table.shot_record(i)
                p=dg.shot_dynamic_path(record)
                self.assertEqual(p.constructor,record.handler_address.replace('0x','FUN_'))
                self.assertTrue(any(line.startswith('position:') for line in p.describe(record)))
                counts['records']+=1
                counts[record.handler_id]+=1
        self.assertEqual(counts['files'],184)
        self.assertEqual(counts['records'],1258)
        self.assertEqual(counts[1],68)
        self.assertEqual(counts[0],768)


if __name__=='__main__':
    unittest.main()
