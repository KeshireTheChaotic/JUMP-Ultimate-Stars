"""Native ROM and original ChrBin contract for recovered reaction/shot semantics."""
import hashlib,struct,unittest
from collections import Counter
from pathlib import Path

from jus_formats import alar,chrbin
from jus_formats.chrbin_semantics import (
    REACTION_RESOURCE_PAIRS,REACTION_CALLBACKS,native_reaction_route,
    native_shot_flags,native_shot_trace_mask)
from jus_package import chrdiagnostics

ROOT=Path(r'D:\Library\Development\JUS')
OVERLAY=ROOT/'reverse_engineering/verified_binaries/52e262163e0d304c/arm9_overlay_0006.bin'
ARCHIVE=ROOT/'Data/chr/ChrBin.aar'
BASE=0x0214CD20


@unittest.skipUnless(OVERLAY.exists() and ARCHIVE.exists(),'Original verified ARM9 and ChrBin unavailable')
class NativeSourceSemantics(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.rom=OVERLAY.read_bytes()
        cls.arc=alar.open_nested(ARCHIVE.read_bytes())
        cls.col={}
        cls.shot={}
        for e in cls.arc.entries:
            kind=chrbin.kind_of(e.name)
            if kind not in ('col','shot'):continue
            form=e.name.rsplit('/',1)[-1].removesuffix('.bin')
            getattr(cls,kind)[form]=chrbin.parse(e.payload(),e.name)

    def test_rom_hash_and_sixteen_defender_reactions(self):
        self.assertEqual(hashlib.sha256(self.rom).hexdigest(),
                         '393be20642d854d3d98bea77a4d064aa3589f0a1b69a08943bdfcc9cfa076984')
        for i in range(16):
            with self.subTest(reaction=i):
                pair=struct.unpack_from('<II',self.rom,0x021713E8-BASE+8*i)
                cb=struct.unpack_from('<I',self.rom,0x021721A0-BASE+4*i)[0]
                self.assertEqual(pair,REACTION_RESOURCE_PAIRS[i])
                self.assertEqual(cb,REACTION_CALLBACKS[i])
                self.assertEqual(native_reaction_route(i).callback_address,cb)
        with self.assertRaises(ValueError):native_reaction_route(16)
        self.assertIn('overrides ROM pair',native_reaction_route(6).interpretation)
        self.assertIn('joint-attachment',native_reaction_route(8).interpretation)
        for i in range(9,13):
            self.assertIn('grabbed victim',native_reaction_route(i).interpretation)
            self.assertEqual(REACTION_RESOURCE_PAIRS[i],(0x33+i-9,)*2)

    def test_all_2837_original_col_class_and_reaction_routes(self):
        classes=Counter();reactions=Counter()
        for t in self.col.values():
            for i in range(t.count):
                r=t.col_record(i)
                classes[r.class_byte]+=1;reactions[r.selector_byte]+=1
                self.assertIn(r.class_byte,range(8))
                self.assertIn(r.selector_byte,range(16))
                info=chrdiagnostics.collision_source_extensions(r)
                self.assertIn(f'native reaction {r.selector_byte}',info)
                self.assertIn(f'0x{REACTION_CALLBACKS[r.selector_byte]:08X}',info)
        self.assertEqual(classes,{0:95,1:65,2:260,3:990,4:594,5:829,6:1,7:3})
        self.assertEqual(reactions,{0:226,1:694,2:892,3:25,4:32,5:376,
            6:236,7:243,8:64,9:7,10:5,11:4,12:2,13:24,14:3,15:4})

    def test_rom_constructor_update_table_all_26(self):
        from jus_package.dynamicgeometry import SHOT_UPDATE_HANDLERS
        ct=struct.unpack_from('<26I',self.rom,0x02172864-BASE)
        ut=struct.unpack_from('<26I',self.rom,0x0217278C-BASE)
        self.assertEqual(ct,chrbin.SHOT_HANDLERS)
        self.assertEqual(ut,SHOT_UPDATE_HANDLERS)

    def test_native_shot_flags_are_scoped_and_present(self):
        original=Counter();examples=set()
        for t in self.shot.values():
            for i in range(t.count):
                r=t.shot_record(i)
                original[r.handler_id]+=1
                x=native_shot_flags(r.handler_id,r.flags)
                self.assertEqual(native_shot_trace_mask(r.handler_id,r.flags),
                                 sum(flag.mask for flag in x))
                for flag in x:
                    self.assertTrue(r.flags & flag.mask)
                    self.assertTrue(flag.source.startswith('ov06 '))
                    examples.add((r.handler_id,flag.mask))
                self.assertIn('native per-update callback',chrdiagnostics.shot_source_extensions(r))
        self.assertEqual(sum(original.values()),1258)
        self.assertEqual(len(original),20)
        self.assertEqual(len(examples),26)
        self.assertIn((0,0x00002000),examples)
        self.assertIn((0,0x00000800),examples)
        self.assertIn((7,0x00000080),examples)
        self.assertIn((13,0x00200000),examples)
        self.assertIn((1,0x00001000),examples)

    def test_handler16_six_contact_nested_shots(self):
        nested=[]
        for form,t in self.shot.items():
            for i in range(t.count):
                rec=t.shot_record(i)
                if rec.handler_16_nested_shot_index is None:continue
                n=rec.handler_16_nested_shot_index
                self.assertTrue(0<=n<t.count,(form,i,n,t.count))
                next_record=t.shot_record(n)
                self.assertLess(next_record.handler_id,26)
                self.assertIn('contact-triggered nested shot',chrdiagnostics.shot_source_extensions(rec))
                nested.append((form,i,n))
        self.assertEqual(len(nested),6)
        self.assertIn(('hk_b_01',0,1),nested)
        self.assertIn(('hk_b_01',3,4),nested)
        self.assertIn(('hk_b_01',6,7),nested)
        self.assertIn(('yh_b_02',1,2),nested)

    def test_native_unproven_flags_remain_distinct(self):
        from jus_formats.chrbin_semantics import native_shot_trace_mask
        example=self.shot['bb_b_01'].shot_record(0)
        # This expands the *supplement*, not the older R08 formatter contract.
        self.assertEqual(example.unknown_flags,
                         example.flags & ~(chrbin.KNOWN_SHOT_FLAG_MASK |
                            sum(bit for bit,_ in chrbin.SHOT_HANDLER_SCOPED_FLAGS.get(example.handler_id,()))))
        self.assertEqual(native_shot_trace_mask(26,0xFFFFFFFF),0)
        self.assertEqual(native_shot_flags(26,0xFFFFFFFF),())


if __name__=='__main__':unittest.main()
