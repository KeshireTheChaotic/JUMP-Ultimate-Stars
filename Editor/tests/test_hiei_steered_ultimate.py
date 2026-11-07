"""Original ROM / binary-source validation of Hiei's D-pad steered ultimate.

No generated fake curved path or claim of emulator-exact steering pixels.
"""
from __future__ import annotations
import os
import unittest
from pathlib import Path
from jus_formats import roster,chrbin,almt,notetrack,battleai,battleinput
from jus_package.project import DataRoot,join
from jus_package.movelinks import MoveLinks
from jus_package.steeredtrail import (
    dpad_velocity_direction_delta_q8,apply_raw_steer,
    hiei_handler05_source_plan,HISTORY_ENTRY_COUNT,HISTORY_ENTRY_STRIDE,
    MAX_ALMT_CHILDREN,
)
from jus_package.shotvisuals import source_shots

DATA=Path(os.environ.get('JUS_DATA',r'D:\Library\Development\JUS\Data'))
G=Path(r'D:\Library\Development\JUS\reverse_engineering\functions_layout\arm9_ov06')


class InputAndRing(unittest.TestCase):
    def test_exact_original_raw_dpad_bit_assignments(self):
        self.assertEqual(dpad_velocity_direction_delta_q8(0),(0,0))
        self.assertEqual(dpad_velocity_direction_delta_q8(1),(0,-64))
        self.assertEqual(dpad_velocity_direction_delta_q8(2),(0,64))
        self.assertEqual(dpad_velocity_direction_delta_q8(4),(64,0))
        self.assertEqual(dpad_velocity_direction_delta_q8(8),(-64,0))
        self.assertEqual(dpad_velocity_direction_delta_q8(0x3),(0,0))
        self.assertEqual(dpad_velocity_direction_delta_q8(0xC),(0,0))
        self.assertEqual(dpad_velocity_direction_delta_q8(0x5),(64,-64))
        self.assertEqual(apply_raw_steer((256,0),8),(192,0))
        self.assertEqual(apply_raw_steer((256,0),1),(256,-64))
    def test_original_history_dimensions(self):
        self.assertEqual((HISTORY_ENTRY_COUNT,HISTORY_ENTRY_STRIDE,
                          MAX_ALMT_CHILDREN),(128,12,12))
    @unittest.skipUnless(G.is_dir(),'Original decompiled source not available')
    def test_exact_native_code_witnesses(self):
        B=(G/'arm9_ov06_0216be0c.c').read_text(encoding='utf8')
        for string in ('+ 0x4a) + -0x40','+ 0x4a) + 0x40',
                       '+ 0x48) + -0x40','+ 0x48) + 0x40',
                       'param_1 + 0x14','param_1 + 0x4e',
                       'param_1 + 8) + 0x18','param_1 + 8) + 0x10',
                       'FUN_0216c028','FUN_0216cd9c'):
            self.assertIn(string,B,string)
        C=(G/'arm9_ov06_0216c028.c').read_text(encoding='utf8')
        self.assertIn('0x7f',C)
        self.assertIn('0xc',C)
        self.assertIn('FUN_02023738',C)
        self.assertIn('param_2 + 0x3c',C)
        K=(G/'arm9_ov06_0216b910.c').read_text(encoding='utf8')
        self.assertIn('0x604',K)
        self.assertIn('0x1800',K)
        self.assertIn('FUN_0216cfa4',K)


@unittest.skipUnless((DATA/'chr/ChrBin.aar').is_file(),
                     'Original game files unavailable')
class OriginalHieiUltimate(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.root=DataRoot(DATA)
        cls.shot=chrbin.parse(cls.root.read('chr/ChrBin.aar|chr/shot/yh_b_03.bin'),
                              'chr/shot/yh_b_03.bin').shot_record(2)
    def test_native_character_identity_and_original_text(self):
        names=roster.record_names(self.root.read('bin/chr_b_t.bin'))
        self.assertEqual(names[roster.BATTLE_IDS.index('yh_b_03')],'Hiei')
        link=MoveLinks(self.root).text_for_move('yh_b_03',0x9832C,
                                               almt_member='yh_b_03.amt')
        self.assertIsNotNone(link)
        self.assertEqual(link.title.replace('|',' '),
                         'True Dragon of the Darkness Flame')
        self.assertIn('D-Pad',link.description1)
    def test_shot_identity_not_autohoming(self):
        r=self.shot
        self.assertEqual(r.handler_id,5)
        self.assertEqual((r.reference0,r.reference1,
                          r.optional_reference,r.handler05_terminal_animation),
                         (0x98357,0x98358,0,0x98359))
        self.assertEqual((r.byte1,r.work_param,r.lifetime),(0,1600,24))
        t=almt.parse(self.root.read('chr/ChrArc.aar|chr/yh_b_03.aar|yh_b_03.amt'))
        m=t.move_by_id(0x9832C)
        sp=source_shots(m,t.node_names,
                        chrbin.parse(self.root.read('chr/ChrBin.aar|chr/shot/yh_b_03.bin'),
                                     'chr/shot/yh_b_03.bin'))
        self.assertEqual(len([v for v in sp if v.handler==5]),1)
        ev=next(v for v in sp if v.handler==5)
        self.assertEqual((ev.tick,ev.record_index,ev.launch_x,ev.launch_y),
                         (34,2,32,-24))
        self.assertEqual(ev.directly_constructed_animations,(0x98357,))
        self.assertEqual([v[0] for v in ev.handler05_source_roles],
                         ['+0x0C','+0x10','+0x18'])
        self.assertTrue(ev.handler05_timer_exemption_is_code_proven)
    def test_source_sequence_no_hypothesized_trajectory(self):
        r=self.shot
        t0=hiei_handler05_source_plan(r,0)
        self.assertEqual((len(t0.sources),t0.next_spacing_q8,
                          t0.history_write_index),(1,6144,0))
        t3=hiei_handler05_source_plan(r,3)
        self.assertEqual((len(t3.sources),t3.sources[1].source_field,
                          t3.sources[1].animation_id,
                          t3.sources[1].birth_update),(2,'+0x10',0x98358,3))
        t38=hiei_handler05_source_plan(r,38)
        self.assertEqual((len(t38.sources),t38.terminal_bodies),(11,0))
        t42=hiei_handler05_source_plan(r,42)
        self.assertEqual((len(t42.sources),t42.ordinary_bodies,
                          t42.terminal_bodies),(12,10,1))
        self.assertEqual((t42.sources[-1].animation_id,
                          t42.sources[-1].birth_update),(0x98359,42))
        self.assertEqual(hiei_handler05_source_plan(r,129).history_write_index,1)
        self.assertEqual(hiei_handler05_source_plan(r,129).history_samples_written,128)
    def test_status_note_binary_map_and_aipm_agree(self):
        from struct import unpack_from
        rom=Path(r'D:\Library\Development\JUS\reverse_engineering\verified_binaries'
                 r'\52e262163e0d304c\arm9_overlay_0006.bin')
        self.assertTrue(rom.is_file())
        source=rom.read_bytes()
        base=0x0214CD20
        mapped=source[0x0217215C-base+18]
        self.assertEqual(mapped,0x24)
        callback=unpack_from('<I',source,0x02171168-base+8*mapped)[0]
        self.assertEqual(callback,0x021593E8)
        g=(G/'arm9_ov06_021593e8.c').read_text(encoding='utf8')
        self.assertIn('param_1 + 0xbc',g)
        self.assertIn('0x140',g)
        t=almt.parse(self.root.read('chr/ChrArc.aar|chr/yh_b_03.aar|yh_b_03.amt'))
        m=t.move_by_id(0x9832C)
        actions=[]
        for node in m.nodes:
            if node is None:continue
            track=node.track('NoteTrack')
            if track is None:continue
            for k in notetrack.parse(track.encoded()).keys:
                for cmd in k.commands:
                    if cmd.opcode==0x300:
                        v=cmd.values()
                        if v:actions.append((k.tick,v[0],v[1]))
        self.assertIn((82,3,0),actions)
        self.assertIn((112,3,0),actions)
        self.assertIn((112,10,18),actions)
        prof=battleai.parse_aipm(
            self.root.read(battleai.AIPM_PATH.format(cid='yh_b_03')))
        selector=battleinput.MOVE_CONTROLS[0x2c][1]
        hit=prof.for_selector(selector).records[0]
        self.assertEqual((selector,hit.status,hit.active),(16,36,(34,58)))

    def test_three_original_source_animated_sprite_resolutions(self):
        table=almt.parse(self.root.read(
            'chr/ChrArc.aar|chr/yh_b_03.aar|yh_b_03_e0.amt'))
        for rid,index in ((0x98357,1),(0x98358,3),(0x98359,5)):
            m=table.move_by_id(rid)
            self.assertIsNotNone(m)
            self.assertEqual(m.duration,8)
            track=next(n.track('BoundsIndex') for n in m.nodes
                       if n and n.track('BoundsIndex'))
            self.assertEqual(track.keys[0].value,index)
    def test_only_one_handler05_record_in_original_source(self):
        ids=[]
        for entry in self.root.archive('chr/ChrBin.aar').entries:
            if not (entry.name.startswith('chr/shot/') and entry.name.endswith('.bin')):
                continue
            table=chrbin.parse(entry.payload(),entry.name)
            ids.extend((entry.name,i) for i in range(table.count)
                       if table.shot_record(i).handler_id==5)
        self.assertEqual(ids,[('chr/shot/yh_b_03.bin',2)])


if __name__=='__main__':
    unittest.main()
