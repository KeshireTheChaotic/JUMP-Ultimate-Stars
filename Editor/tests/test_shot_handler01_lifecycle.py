"""Regression proof: actual native handler01 visual roles and cross-form consistency.

Uses preserved source ChrBin/ChrArc and verified original ARM9 overlay6.
It must fail if the plus10 body is mistaken for a birth child or
the plus0c source is incorrectly described as hit-only.
"""
from __future__ import annotations
import os,struct,unittest
from pathlib import Path
from collections import Counter
from jus_formats import almt,chrbin,roster
from jus_package.project import DataRoot,join
from jus_package.shotvisuals import source_shots
from jus_package.dynamicgeometry import SHOT_UPDATE_HANDLERS, shot_dynamic_path

R=Path(r'D:\Library\Development\JUS')
DATA=Path(os.environ.get('JUS_DATA',str(R/'Data')))
ROM=R/'reverse_engineering/verified_binaries/52e262163e0d304c/arm9_overlay_0006.bin'
G=R/'reverse_engineering/functions_layout/arm9_ov06'

@unittest.skipUnless(ROM.is_file(),'Original JUS ROM overlay absent')
class NativeDispatchProof(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        b=ROM.read_bytes();base=0x0214CD20
        cls.constructors=struct.unpack_from('<26I',b,0x02172864-base)
        cls.updaters=struct.unpack_from('<26I',b,0x0217278C-base)
    def test_original_pairing_handler01_and_related_variants(self):
        self.assertEqual(self.constructors[1],0x0216B4F4)
        self.assertEqual(self.updaters[1],0x0216BA2C)
        self.assertEqual(self.updaters[3],0x0216BA2C)
        self.assertEqual(self.updaters[4],0x0216BA2C)
        self.assertEqual(self.updaters[2],0x0216BB08)
        self.assertEqual(self.constructors,chrbin.SHOT_HANDLERS)
        self.assertEqual(self.updaters,SHOT_UPDATE_HANDLERS)
        self.assertEqual(shot_dynamic_path(1).per_frame_update,'FUN_0216BA2C')
    def test_construction_is_independent_of_hit(self):
        source=(G/'arm9_ov06_0216b514.c').read_text(encoding='utf8')
        self.assertIn('param_1 + 8) + 0x14',source)
        self.assertIn('param_1 + 8) + 0xc',source)
        self.assertIn('FUN_0216c5f0(iVar6 + 8',source)
        self.assertIn('FUN_0216c5f0(iVar6,param_1',source)
        self.assertNotIn('param_1 + 8) + 0x10',source)
    def test_body_spawns_during_updates_only_until_hit_state(self):
        source=(G/'arm9_ov06_0216ba2c.c').read_text(encoding='utf8')
        self.assertIn('param_1 + 8) + 0x10',source)
        self.assertIn('param_1 + 0x58',source)
        self.assertIn('iVar3 >> 0x10',source)
        self.assertIn('FUN_0216cd10',source)
        self.assertIn('FUN_0216cd9c',source)
        self.assertIn('param_1 + 0x26) & 1',source)
    def test_native_scheduler_skips_handler01_raw_timer(self):
        constructor=(G/'arm9_ov06_0216b4f4.c').read_text(encoding='utf8')
        scheduler=(G/'arm9_ov06_0216af04.c').read_text(encoding='utf8')
        self.assertIn('param_1 + 0x26) | 2',constructor)
        self.assertIn('puVar7 + 0x26) & 2',scheduler)
        self.assertIn('PTR_FUN_0217278c',scheduler)

@unittest.skipUnless((DATA/'chr/ChrBin.aar').is_file() and
                     (DATA/'chr/ChrArc.aar').is_file(),'Original JUS corpus missing')
class OriginalHandler01Census(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.root=DataRoot(DATA)
    def test_every_original_handler01_record_has_the_same_source_roles(self):
        counts=Counter()
        for e in self.root.archive('chr/ChrBin.aar').entries:
            if not (e.name.startswith('chr/shot/') and e.name.endswith('.bin')):continue
            t=chrbin.parse(e.payload(),e.name)
            for i in range(t.count):
                r=t.shot_record(i)
                if r.handler_id != 1: continue
                counts['total']+=1
                counts['plus14']+=bool(r.optional_reference)
                counts['plus10']+=bool(r.reference1)
                counts['plus0c']+=bool(r.reference0)
                counts['all_three']+=all((r.optional_reference,r.reference1,r.reference0))
                counts['all_zero']+=not any((r.optional_reference,r.reference1,r.reference0))
        self.assertEqual((counts['total'],counts['plus14'],counts['plus10'],
                          counts['plus0c'],counts['all_three'],counts['all_zero']),
                          (68,57,67,67,57,1))
    def test_all_46_primary_launches_retain_same_field_roles(self):
        total=0;with_origin=0
        for form in roster.BATTLE_IDS:
            shot=join('chr/ChrBin.aar',f'chr/shot/{form}.bin')
            if not self.root.exists(shot):continue
            st=chrbin.parse(self.root.read(shot),f'chr/shot/{form}.bin')
            a=almt.parse(self.root.read(
                join('chr/ChrArc.aar',f'chr/{form}.aar',f'{form}.amt')))
            for m in a.moves:
                for ev in source_shots(m,a.node_names,st):
                    if ev.handler!=1:continue
                    total+=1
                    roles=ev.handler1_source_roles
                    self.assertIn('+0x0C',[r[0] for r in roles])
                    self.assertIn('+0x10',[r[0] for r in roles])
                    self.assertTrue(any('NOT contact-gated' in r[2] for r in roles))
                    self.assertTrue(ev.handler01_timer_exemption_is_code_proven)
                    with_origin+=bool(ev.record.optional_reference)
        self.assertEqual((total,with_origin),(46,39))
    def test_exact_bobobo_goku_and_other_beams(self):
        for form,idx,refs in [
            ('bb_b_01',5,(0x84180,0x84181,0x84182)),
            ('db_b_01',3,(0x5c166,0x5c167,0x5c168)),
            ('ds_b_01',7,(0x54181,0x54182,0x54183)),
            ('dg_b_01',14,(0x4c1a7,0x4c1a8,0x4c1a9)),
            ('bl_b_04',6,(0,0x784a4,0x784a5)),
        ]:
            p=join('chr/ChrBin.aar',f'chr/shot/{form}.bin')
            record=chrbin.parse(self.root.read(p),f'chr/shot/{form}.bin').shot_record(idx)
            self.assertEqual(record.handler_id,1)
            self.assertEqual((record.optional_reference,record.reference1,record.reference0),refs)
        # User's 'hit only' claim cannot be treated as the native constructor rule.
        b=self.root.read('chr/ChrBin.aar|chr/shot/bb_b_01.bin')
        record=chrbin.parse(b,'chr/shot/bb_b_01.bin').shot_record(5)
        self.assertEqual(record.lifetime,40)
        self.assertEqual(record.work_param,1600)

if __name__=='__main__':
    unittest.main()
