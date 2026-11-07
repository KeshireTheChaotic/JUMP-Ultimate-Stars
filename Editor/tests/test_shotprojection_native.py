"""Original-code constrained beam repeat projection.

Asserts source counter/emission timing and original ALMT IDs. Native
per-frame actor positions are not asserted as emulator-observed pixels.
"""
from __future__ import annotations
import os
import unittest
from pathlib import Path
from jus_package.project import DataRoot
from jus_formats import chrbin
from jus_package.shotprojection import (
    project_handler01_unobstructed, signed16, signed32,
)

DATA=Path(os.environ.get('JUS_DATA',r'D:\Library\Development\JUS\Data'))


class ModelArithmetic(unittest.TestCase):
    def test_c_style_wrap(self):
        self.assertEqual(signed16(0xFFFF),-1)
        self.assertEqual(signed16(0x1800),6144)
        self.assertEqual(signed32(0xFFFFFFFF),-1)
        self.assertEqual(signed16(70000),4464)
    def test_does_not_guess_noncardinal_trajectory(self):
        raw=bytearray(32)
        raw[0]=1;raw[1]=32
        raw[0x0c:0x10]=(0x123456).to_bytes(4,'little')
        record=chrbin.ShotRecord(bytes(raw))
        self.assertIsNone(project_handler01_unobstructed(record,10))
        with self.assertRaises(ValueError):
            project_handler01_unobstructed(record,-1)
    def test_requires_valid_slot_budget(self):
        raw=bytearray(32);raw[0]=1
        with self.assertRaises(ValueError):
            project_handler01_unobstructed(chrbin.ShotRecord(bytes(raw)),5,maximum_slots=33)


@unittest.skipUnless((DATA/'chr/ChrBin.aar').is_file(),'Original source not available')
class OriginalBoBobo(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        r=DataRoot(DATA)
        t=chrbin.parse(r.read('chr/ChrBin.aar|chr/shot/bb_b_01.bin'),
                       'chr/shot/bb_b_01.bin')
        cls.record=t.shot_record(5)
    def test_source_animation_repeats_are_true_asset_ids(self):
        r=self.record
        self.assertEqual((r.optional_reference,r.reference1,r.reference0),
                         (0x84180,0x84181,0x84182))
        at0=project_handler01_unobstructed(r,0)
        self.assertEqual([x.animation_id for x in at0.sprites],
                         [0x84180,0x84182])
        self.assertEqual([x.current_dx_q8 for x in at0.sprites],
                         [0,-6144])
        self.assertEqual(at0.next_spacing_q8,(6144,0))
        t1=project_handler01_unobstructed(r,1)
        self.assertEqual(t1.body_emissions,0)
        self.assertEqual(t1.next_spacing_q8,(4544,0))
        t3=project_handler01_unobstructed(r,3)
        self.assertEqual(t3.body_emissions,1)
        self.assertEqual(t3.next_spacing_q8,(7488,0))
        self.assertEqual([x.source_field for x in t3.sprites],
                         ['+0x14','+0x0C','+0x10'])
        self.assertEqual(t3.instances_for('+0x10')[0].born_update,3)
        self.assertEqual(t3.instances_for('+0x10')[0].initial_dx_q8,-1344)
        t7=project_handler01_unobstructed(r,7)
        self.assertEqual(t7.body_emissions,2)
        self.assertEqual(t7.next_spacing_q8,(7232,0))
        self.assertEqual([x.born_update for x in t7.instances_for('+0x10')],
                         [3,7])
        self.assertEqual([x.current_dx_q8 for x in t7.instances_for('+0x10')],
                         [5056,-1088])
        self.assertEqual(t7.instances_for('+0x0C')[0].current_dx_q8,5056)
        self.assertEqual(t7.geometry_certainty,
                         'source counter/ID exact for cardinal direction; XY estimated')
    def test_mirrored_direction_not_counter_negation(self):
        r=self.record
        t7=project_handler01_unobstructed(r,7,mirrored=True)
        self.assertEqual(t7.body_emissions,2)
        self.assertEqual(t7.next_spacing_q8,(7232,0))
        self.assertEqual(t7.instances_for('+0x0C')[0].current_dx_q8,-5056)
        self.assertEqual([x.current_dx_q8 for x in t7.instances_for('+0x10')],
                         [-5056,1088])
    def test_source_lifetime_not_native_timer(self):
        t40=project_handler01_unobstructed(self.record,40)
        self.assertEqual(t40.body_emissions,10)
        self.assertEqual(t40.maximum_slots,32)
        self.assertTrue(t40.instances_for('+0x14'))
        self.assertTrue(len(t40.instances_for('+0x10'))>0)
        self.assertNotIn('native expiry',t40.geometry_certainty)
    def test_all_original_handler01_records_only_known_cardinal_cases(self):
        root=DataRoot(DATA);from collections import Counter
        cnt=Counter()
        for e in root.archive('chr/ChrBin.aar').entries:
            if not (e.name.startswith('chr/shot/') and e.name.endswith('.bin')):
                continue
            tab=chrbin.parse(e.payload(),e.name)
            for i in range(tab.count):
                r=tab.shot_record(i)
                if r.handler_id!=1:continue
                cnt['all']+=1
                v=project_handler01_unobstructed(r,2)
                if v is None:cnt['noncardinal']+=1
                else:cnt['cardinal']+=1
        self.assertEqual(cnt['all'],68)
        self.assertEqual(cnt['cardinal'],60)
        self.assertEqual(cnt['noncardinal'],8)


if __name__=='__main__':
    unittest.main()
