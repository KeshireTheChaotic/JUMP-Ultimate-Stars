"""Regression: real passive text/stat links, Koma-selected sound, Goku effect framing.

All original Data sources remain read-only. UI test only uses Tk widgets and
original source-derived sprites, never generated screenshots.
"""
import os
import sys
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT))
DATA=Path(r"D:\Library\Development\JUS\Data")
if not DATA.is_dir():
    DATA=(ROOT/".."/".."/".."/"Data").resolve()

from jus_formats import almt, kshape, notetrack, roster
from jus_package.project import DataRoot
from jus_package.passivekoma import PassiveCatalog
from jus_package.sounds import SoundResolver


@unittest.skipUnless(DATA.is_dir(), "Original JUS game Data missing")
class PassiveSourceLinkTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        root=DataRoot(DATA)
        cls.cat=PassiveCatalog(root)
        cls.cards=kshape.CardTable.parse(root.read("bin/koma.bin")).cards

    def test_every_passive_has_exact_record_and_original_text(self):
        passive=[c for c in self.cards if c.raw[6]==2]
        self.assertEqual(len(passive),312)
        self.assertEqual(len(self.cat.abilities),57)
        for card in passive:
            ab=self.cat.for_card(card)
            self.assertEqual(ab.id,card.raw[7])
            self.assertEqual(len(ab.raw),4)
            self.assertTrue(ab.name)
        self.assertEqual(len({c.raw[7] for c in passive}),47)

    def test_known_original_ability_fields_not_invented_values(self):
        by_id={c.index:c for c in self.cards}
        self.assertEqual(self.cat.for_card(by_id[0]).name,"Aerial|Dash")
        self.assertEqual(self.cat.for_card(by_id[0]).raw,b"\x00\x03\x00\x00")
        self.assertEqual(self.cat.for_card(by_id[33]).name,"J-Soul+")
        self.assertEqual(self.cat.for_card(by_id[33]).parameter_raw,8)
        self.assertEqual(self.cat.for_card(by_id[888]).id,37)
        # negative signed raw byte: exists even if no shipped passive card uses it
        self.assertEqual(self.cat.abilities[56].parameter_raw,253)
        self.assertEqual(self.cat.abilities[56].parameter_signed,-3)

    def test_non_passive_card_has_no_ability(self):
        self.assertIsNone(self.cat.for_card(next(c for c in self.cards if c.raw[6]==0)))

    def test_goku_sound_exact_koma_context(self):
        root=DataRoot(DATA)
        s=SoundResolver(DATA)
        s.set_characters(list(roster.BATTLE_IDS))
        src="chr/ChrArc.aar|chr/db_b_01.aar"
        selected=s.resolve(0x0402,1,src,form=5,card_index=455)
        self.assertEqual(selected.ssar,338)
        self.assertEqual(selected.ssar_name,"SEQ_DB_B_01_5")
        self.assertEqual(selected.evidence,"Cross-checked")
        self.assertIn("Koma #455",selected.note)
        wrong_card=s.resolve(0x0402,1,src,form=5,card_index=453)
        self.assertEqual(wrong_card.evidence,"Unknown")
        no_sound=s.resolve(0x0402,1,src,form=4,card_index=453)
        self.assertIsNone(no_sound.ssar)
        base=almt.parse(root.read(src+"|db_b_01.amt"))
        real=base.move_by_id(0x0005C12B)
        cues=s.cues(real,base.node_names,src,form=5,card_index=455)
        self.assertTrue(any(c.opcode==0x0402 and c.ssar==338 for c in cues))


@unittest.skipUnless(DATA.is_dir() and (sys.platform=="win32" or os.getenv("DISPLAY")),
                     "Tk display / game data unavailable")
class RosterGUIIntegration(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        from app.editor import EditorApp
        cls.app=EditorApp(str(DATA))
        cls.app.withdraw()
        cls.app.open_root(str(DATA))
        cls.app.update_idletasks()

    @classmethod
    def tearDownClass(cls):
        cls.app.destroy()

    def test_cheap_joke_spawn_and_viewport_includes_source_effect(self):
        a=self.app
        self.assertTrue(a.open_move_resource("db_b_01",0x0005C12A,"db_b_01.amt",
                                             card_index=453))
        self.assertEqual(a.sound_form.get(),"4-cell")
        self.assertEqual(a._sound_koma_card,453)
        self.assertEqual(a.move.duration,65)
        self.assertEqual([(x.spawn.effect_id,x.sub_tick) for x in a.spawn_projection(7).instances],
                         [(0x0005C169,0),(0x0005C16A,0)])
        child0=a._effect_moves[0x0005C169]
        child1=a._effect_moves[0x0005C16A]
        self.assertEqual(child0[2],
                         "chr/ChrArc.aar|chr/db_b_01_4.aar|db_b_01_e4.amt")
        self.assertEqual(child1[2],child0[2])
        self.assertTrue(a._frame_image(0x0005C140,46))
        self.assertTrue(a._frame_image(0x0005C140,47))
        a.tick=0
        opening=a._move_extent()
        whole=a._move_scope_extent()
        self.assertLess(whole[0],opening[0])
        self.assertLess(whole[1],opening[1])
        self.assertLessEqual(whole[0],-66)
        self.assertLessEqual(whole[1],-101)
        self.assertEqual(a.tick,0)
        # Cheap Joke has a SECOND original effect path: NoteTrack action2 at
        # tick33 launches handler00 shot record1, distinct from tick7 GN.
        # Native 0216EEF4/0216E3D0/0216F100 plays +0x0C 0x5C16C;
        # that ALMT's GN01 immediately generates child 0x5C16B.
        shot = next(ev for ev in a._shot_events_current()
                    if ev.tick==33 and ev.record_index==1)
        self.assertEqual(shot.handler,0)
        self.assertEqual(shot.record.reference0,0x0005C16C)
        self.assertEqual(shot.record.optional_reference,0x0005C16D)
        self.assertEqual(shot.directly_constructed_animations,(0x0005C16C,))
        direct=a._effect_moves[0x0005C16C]
        self.assertEqual(direct[0].duration,20)
        self.assertEqual(direct[0].nodes[0].track('TextureID').value,0x0005C160)
        self.assertTrue(a._frame_image(0x0005C160,0))
        nested=__import__('jus_package.spawns',fromlist=['keyed_spawns']).keyed_spawns(
            direct[0],direct[1])
        self.assertEqual([(ev.tick,ev.effect_id) for ev in nested],[(0,0x0005C16B)])
        self.assertTrue(a._frame_image(0x0005C141,0))
        self.assertTrue(a._handler00_launch_extents())
        from unittest.mock import patch
        drawn=[]
        original_draw=a._draw_node_sprites
        def collect(_vp,child,_tick,**kwargs):
            drawn.append(child.id)
        with patch.object(a,'_draw_node_sprites',side_effect=collect):
            a._draw_shot_source_sprites(a.view,33,[])
        self.assertIn(0x0005C16C,drawn)
        self.assertIn(0x0005C16B,drawn)
        self.assertNotIn(0x0005C16D,drawn)  # terminal effect is runtime conditional
        a.frame_view()  # framed original source sprites only, not fictitious travel

    def test_koma_ability_inspector_binds_original_source(self):
        a=self.app
        self.assertTrue(a.open_koma_card(0))
        ws=a.suite["koma"]
        self.assertEqual(ws.card.raw[6],2)
        self.assertIsNotNone(ws._passive_catalog)
        self.assertEqual(ws._passive_catalog.for_card(ws.card).display_name,"Aerial Dash")
        self.assertEqual(ws._passive_catalog.for_card(ws.card).subtype,3)
        ws.refresh_inspector()

    def test_selected_card_sound_reaches_timeline_and_event_text(self):
        a=self.app
        self.assertTrue(a.open_koma_card(455))
        self.assertTrue(a.open_move_resource("db_b_01",0x0005C12B,"db_b_01.amt",
                                             card_index=455))
        self.assertEqual(a.sound_form.get(),"5-cell")
        self.assertEqual(a._sound_koma_card,455)
        self.assertTrue(any(c.opcode==0x0402 and c.ssar==338 and
                            c.evidence=="Cross-checked" for c in a._cues))
        nt=next(notetrack.parse(node.track("NoteTrack").encoded())
                for node in a.move.nodes if node and node.track("NoteTrack"))
        command=next(c for key in nt.keys for c in key.commands if c.opcode==0x0402)
        self.assertIn("SE_SP5",a.command_text(command))
        # A 4-koma special cannot silently inherit the 5-koma sound form.
        self.assertTrue(a.open_move_resource("db_b_01",0x0005C12A,"db_b_01.amt"))
        self.assertEqual(a.sound_form.get(),"4-cell")


if __name__=="__main__":
    unittest.main()
