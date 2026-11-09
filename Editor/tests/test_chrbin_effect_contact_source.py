"""Native JUS collision->effect join and 3 BIN families, original source evidence."""
from collections import Counter
from pathlib import Path
from struct import unpack_from, pack
import unittest

from jus_formats import alar, chrbin
from jus_package import chrdiagnostics
from jus_package.project import DataRoot
from app.inspectors.archive_member import render_archive_member_details

DATA=Path(r"D:\Library\Development\JUS\Data")


class Sensor:
    def __init__(self): self.rows=[]
    def clear(self): self.rows.clear()
    def section(self,*args,**kwargs): self.rows.append(("section",args,kwargs))
    def value(self,*args,**kwargs): self.rows.append(("value",args,kwargs))
    def evidence(self,*args,**kwargs): self.rows.append(("evidence",args,kwargs))
    def text(self,*args,**kwargs): self.rows.append(("text",args,kwargs))
    def buttons(self,*args,**kwargs): pass


@unittest.skipUnless((DATA/"chr/ChrBin.aar").is_file(),"original ChrBin.aar missing")
class OriginalCharacterBinaryEvidence(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.arc=alar.open_nested((DATA/"chr/ChrBin.aar").read_bytes())
        cls.groups={k:{} for k in ("col","shot","effect")}
        for e in cls.arc.entries:
            kind=chrbin.kind_of(e.name)
            if kind not in cls.groups:
                continue
            assert e.name.endswith(".bin"),e.name
            cls.groups[kind][e.name.rsplit("/",1)[-1][:-4]]=chrbin.parse(e.payload(),e.name)

    def test_all_three_original_formats_byte_exact(self):
        totals={"col":(281,2837,20),"shot":(184,1258,32),"effect":(66,113,8)}
        for kind,(files,rows,stride) in totals.items():
            with self.subTest(kind=kind):
                self.assertEqual(len(self.groups[kind]),files)
                self.assertEqual(sum(t.count for t in self.groups[kind].values()),rows)
                for t in self.groups[kind].values():
                    self.assertEqual(t.stride,stride)
                    self.assertEqual(t.build(),t.raw)
                    if kind=="effect":
                        for i in range(t.count):
                            x=t.effect_record(i)
                            self.assertEqual(x.raw,t.record(i))
                            self.assertIn(x.sound_slot,(0,1,3))

    def test_every_original_col_effect_reference_valid_and_counted(self):
        counts=Counter()
        for stem,table in self.groups["col"].items():
            fx=self.groups["effect"].get(stem)
            for i in range(table.count):
                rec=table.col_record(i)
                for channel,resolution in enumerate(rec.impact_effect_resolution):
                    self.assertEqual(resolution.selector,rec.impact_effect_selectors[channel])
                    counts[(channel,resolution.category)]+=1
                    if resolution.character_record is not None:
                        self.assertIsNotNone(fx,stem)
                        self.assertLess(resolution.character_record,fx.count)
                        effect=fx.effect_record(resolution.character_record)
                        self.assertEqual(len(effect.raw),8)
                        self.assertEqual(chrbin.resolve_effect_selector(resolution.selector,fx.count),
                                         resolution)
                # Signed status +0x03, impact priority +0x02 and s8 velocity.
                self.assertEqual(rec.signed_status_selector,unpack_from("<b",rec.raw,3)[0])
                self.assertEqual(rec.impact_flash_priority,rec.raw[2])
                self.assertEqual(rec.direct_contact_magnitude,unpack_from("<b",rec.raw,5)[0])
                self.assertEqual(rec.contact_accumulator_delta,unpack_from("<b",rec.raw,7)[0])
                self.assertEqual(rec.uses_selector6_special_scale,rec.selector_byte==6)
                self.assertEqual(rec.signed_knockback,unpack_from("<bb",rec.raw,12))
        self.assertEqual(counts[(0,"character effect")],39)
        self.assertEqual(counts[(1,"character effect")],62)
        self.assertEqual(counts[(0,"built-in effect")],2381)
        self.assertEqual(counts[(1,"built-in effect")],2355)
        self.assertEqual(counts[(0,"disabled")],417)
        self.assertEqual(counts[(1,"disabled")],420)
        self.assertEqual(sum(v for (channel,name),v in counts.items() if "unclassified" in name),0)

    def test_bobobo_original_collider_to_effect_audio(self):
        col=self.groups["col"]["bb_b_01"].col_record(21)
        self.assertEqual(col.impact_effect_selectors[0],64)
        self.assertEqual(col.impact_effect_resolution[0].character_record,0)
        fx=self.groups["effect"]["bb_b_01"].effect_record(0)
        self.assertEqual(fx.animation_id,0x000841B2)
        self.assertEqual((fx.sound_slot,fx.sound_argument),(1,15))
        self.assertEqual(fx.original_default_sound_value,0x7A)
        self.assertIn('contact magnitude',chrdiagnostics.collision_source_extensions(col))
        self.assertIn('character effect',chrdiagnostics.collision_source_extensions(col))

    def test_status_signed_lanes_all_2837(self):
        ids=Counter()
        for table in self.groups["col"].values():
            for i in range(table.count):
                rec=table.col_record(i)
                ids[rec.signed_status_selector]+=1
                if rec.status_id is not None:
                    self.assertIn(rec.status_id,range(1,42))
        self.assertEqual(ids[0],2602)
        self.assertEqual(sum(v for k,v in ids.items() if k>0),24)
        self.assertEqual(sum(v for k,v in ids.items() if k<0),211)
        self.assertEqual(len({abs(k) for k in ids if k}),28)

    def test_original_shot_records_and_special_id_semantics(self):
        codes=Counter()
        for table in self.groups["shot"].values():
            for i in range(table.count):
                rec=table.shot_record(i)
                codes[rec.handler_id]+=1
                self.assertEqual(rec.primary_animation_id,rec.reference0)
                self.assertEqual(rec.raw_byte1c,rec.raw[0x1C])
                self.assertLess(rec.handler_id,26)
                if rec.handler_id==1:
                    self.assertIn('handler01 repeat ALMT',chrdiagnostics.shot_source_extensions(rec))
                    self.assertEqual(rec.beam01_repeat_segment,rec.reference1)
                    self.assertEqual(rec.beam01_spawn_child,
                                     rec.optional_reference if rec.optional_reference_active
                                     and rec.optional_reference else None)
                elif rec.handler_id==5:
                    self.assertIn('handler05 terminal ALMT',chrdiagnostics.shot_source_extensions(rec))
                    self.assertEqual(rec.handler05_terminal_animation,rec.raw_reference_word18)
        self.assertEqual(sum(codes.values()),1258)
        self.assertEqual(len(codes),20)
        self.assertEqual(codes[1],68)
        self.assertEqual(codes[5],1)

    def test_staged_record_edits_only_touch_expected_byte_spans(self):
        original=self.groups["effect"]["bb_b_01"]
        rec=original.effect_record(0)
        modified=rec.replace_animation_id(0x12345678).replace_sound(3,0x4321)
        changed=original.replace_record(0,modified.raw)
        self.assertEqual(changed.count,original.count)
        self.assertEqual(changed.effect_record(0).animation_id,0x12345678)
        self.assertEqual(changed.effect_record(0).sound_argument,0x4321)
        self.assertEqual(changed.build(),pack("<IHH",0x12345678,3,0x4321))
        self.assertEqual(original.build(),rec.raw)
        with self.assertRaises(ValueError):rec.replace_sound(4,1)
        with self.assertRaises(ValueError):rec.replace_sound(1,65536)
        with self.assertRaises(ValueError):rec.replace_animation_id(-1)
        with self.assertRaises(ValueError):original.replace_record(0,b"\x00"*7)
        with self.assertRaises(IndexError):original.replace_record(1,b"\x00"*8)
        with self.assertRaises(IndexError):chrbin.resolve_effect_selector(64,0)

    def test_effect_and_collider_archive_inspector(self):
        root=DataRoot(DATA)
        def details(member):
            import types
            pane=Sensor()
            editor=types.SimpleNamespace(
                root_data=root,container="chr/ChrBin.aar",member_details=pane,_table=None,
                _selected_member=lambda:root.archive("chr/ChrBin.aar").get(member),
                add_member=lambda:None,rebuild_check=lambda:None,
                extract_member=lambda:None,replace_member=lambda:None,remove_member=lambda:None)
            render_archive_member_details(editor,lambda v,w=8:f"0x{v:0{w}X}")
            return pane.rows
        effect_rows=details("chr/effect/bb_b_01.bin")
        self.assertTrue(any(typ=="section" and "impact effects" in args[0] for typ,args,kw in effect_rows))
        self.assertTrue(any(typ=="value" and "0x000841B2" in str(args) for typ,args,kw in effect_rows))
        col_rows=details("chr/col/bb_b_01.bin")
        self.assertTrue(any(typ=="evidence" and "02080F14" in str(args) for typ,args,kw in col_rows))
        self.assertTrue(any(typ=="value" and "0x000841B2" in str(args) for typ,args,kw in col_rows))
        self.assertFalse(any(typ=="value" and "UNRESOLVED effect row" in str(args) for typ,args,kw in col_rows))
        self.assertIn("sound slot",chrdiagnostics.effect_record_detail(
                      self.groups["effect"]["bb_b_01"].effect_record(0)).lower())


if __name__=="__main__":unittest.main()
