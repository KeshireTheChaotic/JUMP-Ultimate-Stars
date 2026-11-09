"""Original 36-stage .bin/.mob structural and reversible authoring contracts.

All field positions are from original sources. Unclassified source words stay raw.
"""
import struct,unittest,hashlib
from collections import Counter
from pathlib import Path

from jus_formats import stagephysics as sp
from jus_formats.stageauthoring import StageObjects
from jus_package.project import DataRoot
from jus_package import scenes
from test_level_workspace_authoring import bin_fixture,mob_fixture

ROOT=Path(r'D:\Library\Development\JUS\Data')


class StageAdditionalFieldFixture(unittest.TestCase):
    def setUp(self):
        self.o=StageObjects(mob_fixture(),bin_fixture())

    def test_staged_item_weight_jpower_category(self):
        for kind,key in (('itemweights','weight_0'),('itemjpower','jpower_0'),
                         ('itemcategory','category_0_weight')):
            trial=StageObjects(*self.o.snapshot())
            info=trial.fields(kind,0)
            new=dict(info);new[key]=1 if info[key]!=1 else 2
            old=trial.mob
            trial.edit(kind,0,new)
            self.assertNotEqual(old,trial.mob,kind)
            changes={i for i,(a,b) in enumerate(zip(old,trial.mob)) if a!=b}
            offset=trial.m.sections[1].offset
            expected={'itemweights':offset+8,'itemjpower':offset+0x0E,'itemcategory':offset+0x18}[kind]
            self.assertEqual(changes,{expected})
            self.assertEqual(trial.fields(kind,0)[key],new[key])
            self.assertEqual(trial.mob[:offset+4],old[:offset+4])
            self.assertEqual(trial.m.sections[3].offset,self.o.m.sections[3].offset)

    def test_stage_tail_exact_eight_and_fixture_byte_patch(self):
        self.assertEqual(self.o.g.trailing_source_words,(0,0,0))
        data=self.o.fields('stage-tail',0)
        self.assertEqual(set(data),{'raw_u16_0','raw_u16_2','raw_u32_4'})
        data.update(raw_u16_0=512,raw_u16_2=0x250,raw_u32_4=0)
        old=self.o.geo
        self.o.edit('stage-tail',0,data)
        self.assertEqual(self.o.g.trailing_source_words,(512,0x250,0))
        self.assertEqual(self.o.geo[:-8],old[:-8])
        self.assertEqual(self.o.geo[-8:],struct.pack('<HHI',512,0x250,0))
        with self.assertRaises(ValueError):sp.parse_stage_bin(old[:-1])
        before=self.o.snapshot()
        data['raw_u16_2']=-1
        with self.assertRaises(ValueError):self.o.edit('stage-tail',0,data)
        self.assertEqual(self.o.snapshot(),before)

    def test_floor_shape_s8_and_sprite_slot(self):
        orig=self.o.mob
        floor=self.o.m.floors[0]
        fields=self.o.fields('floor-shape',0)
        self.assertEqual(floor.sprite_source_almt,0x401100+floor.sprite)
        fields.update(source_offset_x_s8=-9,source_offset_y_s8=23,
            source_u16_08=0x310,source_u16_0A=0x120,sprite_variant=3)
        self.o.edit('floor-shape',0,fields)
        self.assertEqual(self.o.m.floors[0].source_signed_offsets,(-9,23))
        self.assertEqual(self.o.m.floors[0].sprite_source_almt,0x401103)
        changed={j for j,(a,b) in enumerate(zip(orig,self.o.mob)) if a!=b}
        self.assertLessEqual(changed,{floor.offset+2,floor.offset+3,floor.offset+8,
            floor.offset+9,floor.offset+10,floor.offset+11,floor.offset+0x1F})
        self.assertEqual(self.o.fields('floor-shape',0),fields)

    def test_gimmick_variant_raw_reservation_and_timer_preservation(self):
        original=self.o.mob
        rec=self.o.m.gimmicks[0]
        original_timers=rec.timers
        f=self.o.fields('gimmick-visual',0)
        f.update(variant=7,reserved_u16_0E=0x1234)
        self.o.edit('gimmick-visual',0,f)
        self.assertEqual(self.o.m.gimmicks[0].source_almt_id,0x401207)
        self.assertEqual(self.o.m.gimmicks[0].reserved_header,0x1234)
        self.assertEqual(self.o.m.gimmicks[0].timers,original_timers)
        self.assertEqual({j for j,(a,b) in enumerate(zip(original,self.o.mob)) if a!=b},
                         {rec.offset+0x0D,rec.offset+0x0E,rec.offset+0x0F})

    def test_fallback_fixture_wall_none(self):
        self.assertEqual(len(self.o.g.walls),0)
        self.assertIn('stage-tail',[rec.kind for rec in self.o.records()])
        self.assertNotIn('wallhp',[rec.kind for rec in self.o.records()])


@unittest.skipUnless((ROOT/'stage/stage.aar').is_file(),'Original JUS stage data absent')
class StageOriginalSourceCorpus(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.root=DataRoot(str(ROOT))
        cls.stages=[x for x in scenes.stage_sets(cls.root)
                    if all(k in x.members for k in ('bin','mob','cam'))]

    def test_original_all_36_layouts_and_record_counts(self):
        self.assertEqual(len(self.stages),36)
        counts=Counter()
        tails=Counter()
        for s in self.stages:
            source_bin=self.root.read(s.members['bin'])
            source_mob=self.root.read(s.members['mob'])
            g=sp.parse_stage_bin(source_bin)
            m=sp.parse_mob(source_mob)
            self.assertEqual((g.raw,m.raw),(source_bin,source_mob))
            self.assertEqual(len(g.grid_cells),4096)
            self.assertEqual(g.trailing_source_words[0],0x200)
            self.assertEqual(g.trailing_source_words[2],0)
            self.assertEqual(m.gimmick_section_reserved,0)
            self.assertEqual(len(g.layers),3)
            self.assertEqual(set(g.bg_renderer_mode)<=set((4,8)),True)
            for gimmick in m.gimmicks:
                self.assertEqual(gimmick.reserved_header,0)
                self.assertEqual(gimmick.source_almt_id,0x401200+gimmick.sprite)
                self.assertIn(gimmick.type_id,range(12))
            for floor in m.floors:
                self.assertEqual(floor.sprite_source_almt,0x401100+floor.sprite)
            for name, collection in [('floor',m.floors),('item',m.item_candidates),
                ('grip',m.grips),('gimmick',m.gimmicks),('col',g.collision_boxes),
                ('wall',g.walls),('conveyor',g.conveyors)]:
                counts[name]+=len(collection)
            counts['bg_anim']+=sum(len(l.anims) for l in g.layers)
            tails[g.trailing_source_words[1]]+=1
        self.assertEqual(counts,{'floor':47,'item':240,'grip':486,'gimmick':29,'col':1093,
                                 'wall':444,'conveyor':4,'bg_anim':152})
        self.assertEqual(len(tails),13)

    def test_original_wall_hp_reversible_one_record(self):
        witness=None
        for s in self.stages:
            g=sp.parse_stage_bin(self.root.read(s.members['bin']))
            if g.walls:
                witness=s;break
        self.assertIsNotNone(witness)
        original_m=self.root.read(witness.members['mob'])
        original_g=self.root.read(witness.members['bin'])
        author=StageObjects(original_m,original_g)
        old=author.fields('wallhp',0)['health']
        new=old+1 if old<32767 else old-1
        author.edit('wallhp',0,{'health':new})
        self.assertEqual(author.g.walls[0].health,new)
        pos=author.g.offsets[3]+2
        changed={j for j,(a,b) in enumerate(zip(original_g,author.geo)) if a!=b}
        self.assertTrue(changed and changed<={pos,pos+1})
        self.assertEqual(author.mob,original_m)
        author.restore((original_m,original_g))
        self.assertEqual(author.snapshot(),(original_m,original_g))

    def test_all_stage_source_update_contracts_read_only(self):
        repo=ROOT.parent/'reverse_engineering/functions_layout'
        for folder,name,anchor in (
            ('arm9_main','arm9_main_02083fcc.c','FUN_0203d478'),
            ('arm9_main','arm9_main_02085d74.c','FUN_02085aac'),
            ('arm9_main','arm9_main_02085704.c','0x401100'),
            ('arm9_ov06','arm9_ov06_02163188.c','&PTR_FUN_021715c0')):
            text=(repo/folder/name).read_text(encoding='utf-8')
            self.assertIn(anchor,text,(name,anchor))


if __name__=='__main__':unittest.main()
