"""Regression: original JUS Dr. Mashirito #889 has an unillustrated dt asset.

These tests do not modify original game data or fabricate a replacement card.
"""
from __future__ import annotations
import hashlib
import os
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT))
DATA = Path(r"D:\Library\Development\JUS\Data")
if not DATA.is_dir():
    DATA = (ROOT/".."/".."/".."/"Data").resolve()

from jus_formats import koma, kshape
from jus_package import komacards, movelinks
from jus_package.project import DataRoot

ROM_BLANK_SHA = "91e9d3470d8cd487087a0cf4c4082dfc6e7af2f8c17ac1fe0b16bb7d69660a01"
BLANK_PATH = "koma/koma.aar|koma/dt_19.dtx"
ALTERNATE_PATH = "koma/koma.aar|koma/ds_09.dtx"


@unittest.skipUnless(DATA.is_dir(), "Original JUS Data not available")
class OriginalMashiritoSourceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.root = DataRoot(DATA)
        cls.cat = komacards.load(cls.root)
        cls.source = cls.root.read(BLANK_PATH)

    def test_card_889_is_support_form_ds_s_03_art_is_dt19(self):
        card = self.cat.cards.cards[889]
        self.assertEqual(card.index,889)
        self.assertEqual(card.raw[6],1)
        self.assertEqual(card.size,2)
        self.assertEqual(movelinks.MoveLinks.card_form(card),"ds_s_03")
        self.assertEqual(self.cat.art_for_card(card),[BLANK_PATH])
        self.assertEqual(self.cat.art_for_card(self.cat.cards.cards[428]),[ALTERNATE_PATH])
        self.assertNotEqual(self.cat.cards.cards[889].raw[4:6],
                            self.cat.cards.cards[428].raw[4:6])

    def test_original_has_two_flat_nontransparent_panels(self):
        obj = koma.parse(self.source)
        self.assertEqual(len(obj.panels),2)
        self.assertEqual([p.first_tile for p in obj.panels],[1,37])
        self.assertEqual([p.size for p in obj.panels],[(48,48),(48,48)])
        self.assertEqual(len(set(obj.image.palettes[0])),2)
        self.assertEqual(obj.image.palettes[0][0],0x83e0)
        self.assertEqual(obj.image.palettes[0][1:], [0x8000]*15)
        for i in range(2):
            pixels=obj.panel_colours(i)
            self.assertEqual(set(pixels),{0,15})
            self.assertEqual(pixels.count(0),236)
            self.assertEqual(pixels.count(15),2068)
        self.assertEqual(obj.build(),self.source)
        self.assertFalse(obj.problems())

    def test_original_source_template_identical_list_is_exact(self):
        self.assertEqual(hashlib.sha256(self.source).hexdigest(),ROM_BLANK_SHA)
        same=[i for i in range(20)
              if self.root.read(f'koma/koma.aar|koma/dt_{i:02d}.dtx')==self.source]
        self.assertEqual(same,list(range(9,17))+[19])
        self.assertTrue(komacards.is_unillustrated_original_dt_art(BLANK_PATH,self.source))
        self.assertFalse(komacards.is_unillustrated_original_dt_art(
            ALTERNATE_PATH,self.root.read(ALTERNATE_PATH)))
        self.assertFalse(komacards.is_unillustrated_original_dt_art(
            'koma/dt_18.dtx',self.root.read('koma/koma.aar|koma/dt_18.dtx')))

    def test_modded_source_is_not_misclassified(self):
        changed=bytearray(self.source)
        # DSTX header+panel table ends at 0x14; palette starts after data_end.
        # Changing one source byte invalidates exact-ROM placeholder identity,
        # so real user-provided art is never covered by a hardcoded display mask.
        changed[-1]^=1
        self.assertFalse(komacards.is_unillustrated_original_dt_art(BLANK_PATH,changed))
        self.assertFalse(komacards.is_unillustrated_original_dt_art('koma/ds_09.dtx',self.source))


@unittest.skipUnless(DATA.is_dir() and (sys.platform=="win32" or os.getenv("DISPLAY")),
                     "Tk display / original Data not available")
class MashiritoEditorRendersOnlyRealSource(unittest.TestCase):
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

    def test_roster_labels_blank_source_without_fake_thumbnail(self):
        index=self.app.roster_browser.index
        card=index.cards.cards[889]
        self.assertTrue(index.is_unillustrated_card_art(card))
        self.assertIn('ROM placeholder art',index.card_label(card))
        self.assertIsNone(index.source_icon(card))
        # Separate #428 contains actual pixels and keeps its legitimate icon.
        other=index.cards.cards[428]
        self.assertFalse(index.is_unillustrated_card_art(other))
        self.assertNotIn('ROM placeholder art',index.card_label(other))
        self.assertIsNotNone(index.source_icon(other))

    def test_koma_inspector_explains_unillustrated_original_and_reference(self):
        a=self.app
        self.assertTrue(a.open_koma_card(889))
        ws=a.suite["koma"]
        self.assertEqual(ws.card.index,889)
        self.assertTrue(ws._source_art_unillustrated)
        self.assertEqual(len(ws.kf.panels),2)
        self.assertTrue(any('ROM artwork placeholder' in msg for msg,_ in ws._problems))
        labels=[w.cget('text') for w in ws.inspector.inner.winfo_children()
                if 'text' in w.keys()]
        # Some labels are nested under section grid; search descendant labels.
        def all_texts(widget):
            result=[]
            for child in widget.winfo_children():
                if 'text' in child.keys():
                    result.append(child.cget('text'))
                result.extend(all_texts(child))
            return result
        texts='\n'.join(all_texts(ws.inspector.inner))
        self.assertIn('Unillustrated original ROM asset'.upper(),texts)
        self.assertIn('View different Mashirito 2-Koma (#428)',texts)
        # Existing different source remains separately available, not swapped.
        self.assertTrue(a.open_koma_card(428))
        self.assertFalse(ws._source_art_unillustrated)
        self.assertEqual(ws.path,ALTERNATE_PATH)
        self.assertEqual(len(ws.kf.panels),2)
        self.assertFalse(any('ROM artwork placeholder' in msg for msg,_ in ws._problems))
        self.assertFalse(a.root_data.dirty_files())


if __name__=="__main__":
    unittest.main()
