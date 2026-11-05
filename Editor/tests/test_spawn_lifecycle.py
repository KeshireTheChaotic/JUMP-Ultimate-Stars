"""Nominal authored FX lifetimes and binary dispatch checks."""
import os
import sys
import unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))

from jus_formats import almt
from jus_package import spawns
from tools.verify_spawn_dispatch import BASE,COMMON_EFFECT_VTABLE,SLOTS,verify

DATA=Path(os.environ.get('JUS_DATA',r'D:\Library\Development\JUS\data'))

class TestNominalLifecycle(unittest.TestCase):
    def setUp(self):
        self.sp=spawns.Spawn(0,'GN01',0,29,0x5C185,0)
        self.one=almt.Move(0x5C185,4)
        self.loop=almt.Move(0x5C189,16,flags=almt.MOVE_FLAG_LOOP)

    def test_one_shot_terminal_frame_and_after(self):
        self.assertEqual(spawns.nominal_lifetime(self.sp,self.one,28).phase,'not-spawned')
        self.assertEqual(spawns.nominal_lifetime(self.sp,self.one,29).frame_tick,0)
        self.assertEqual(spawns.nominal_lifetime(self.sp,self.one,33).frame_tick,4)
        self.assertEqual(spawns.nominal_lifetime(self.sp,self.one,34).phase,'past-authored-end')

    def test_loop_no_assumed_end(self):
        a=spawns.nominal_lifetime(self.sp,self.loop,45)
        self.assertEqual(a.frame_tick,0)
        self.assertIsNone(a.scheduled_end)
        self.assertTrue(a.runtime_dependent)

    def test_dispatch_vtable_layout(self):
        end=COMMON_EFFECT_VTABLE-BASE+max(SLOTS)+4
        b=bytearray(end)
        import struct
        for off,addr in SLOTS.items():
            struct.pack_into('<I',b,COMMON_EFFECT_VTABLE+off-BASE,addr)
        self.assertEqual(verify(b),SLOTS)
        b[COMMON_EFFECT_VTABLE-BASE+0x124]=0
        with self.assertRaises(ValueError):verify(b)

@unittest.skipUnless((DATA/'chr/ChrArc.aar').is_file(),'requires extracted ROM data')
class TestRealDbMove(unittest.TestCase):
    def test_reference_span(self):
        from jus_package.project import DataRoot
        from tools.audit_spawn_lifecycle import collect
        root=DataRoot(DATA)
        a=collect(root,'db_b_01',40,30)
        self.assertEqual(a['move_id'],'0x05C12B')
        self.assertEqual(a['nominal_live_count'],7)
        by={x['id']:x for x in a['spawned_effects']}
        self.assertEqual(by['0x05C185']['frames'][0]['frame'],5)
        self.assertEqual(by['0x05C185']['scheduled_end_inclusive'],33)
        self.assertEqual(by['0x05C183']['frames'][0]['frame'],11)
        self.assertTrue(by['0x05C189']['loops'])
        b=collect(root,'db_b_01',40,34)
        self.assertEqual(next(x for x in b['spawned_effects'] if x['id']=='0x05C185')['nominal_phase'],'past-authored-end')

if __name__=='__main__':unittest.main()
