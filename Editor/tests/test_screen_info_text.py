"""Regression for source-backed UI explanation text editing."""
from __future__ import annotations
import os
import pathlib
import struct
import unittest
from jus_package.project import DataRoot
from jus_formats import infotext

class InfoTextTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        p=os.environ.get('JUS_DATA_ROOT')
        cls.root=DataRoot(p) if p and pathlib.Path(p).is_dir() else None

    def test_replace_only_one_self_relative_pointer(self):
        original=struct.pack('<II',8,8)+b'one\x00two\x00'
        self.assertEqual(infotext.read_group(original,0,2),('one','two'))
        changed=infotext.patch_text_words(original,{0:'three|words'})
        self.assertEqual(infotext.read_group(changed,0,2),('three|words','two'))
        # Word 0 doubles as the implicit table size, requiring a safe pool
        # relocation instead of a simple append.
        self.assertEqual(struct.unpack_from('<I', changed)[0], 8)
        nonfirst=infotext.patch_text_words(original,{1:'changed'})
        self.assertEqual(nonfirst[:4],original[:4])
        self.assertEqual(nonfirst[8:len(original)],original[8:])
        self.assertEqual(infotext.read_group(nonfirst,0,2),('one','changed'))
        self.assertEqual(infotext.patch_text_words(original,{0:'one'}),original)
        with self.assertRaises(UnicodeEncodeError):
            infotext.patch_text_words(original,{0:'\U0001f600'})
        with self.assertRaises(ValueError):
            infotext.patch_text_words(original,{0:'NUL\x00invalid'})

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'), 'Requires original game data')
    def test_verified_topmenu_text_ids_and_runtime_copy_integrity(self):
        expected={
          0:'J-Universe|Great|Adventure!',
          1:'J-Arena|mode!',
          2:'Wireless|multiplayer|mode!',
          3:'Jump|Quiz!|(Untranslated)',
          6:'Create|the|most|powerful|manga',
          5:'J-Power|mode!',
          7:'Check|the|database|to|see|your',
          8:'Tune|up|your|game|in|Options|menu!',
        }
        self.assertEqual(list(infotext.TOPMENU_TEXT_BY_WIDGET),list(expected))
        src=self.root.read(infotext.INFO_CANONICAL)
        self.assertEqual(infotext._table_count(src),438)
        for index,caption in expected.items():
            self.assertEqual(infotext.read_group(src,index)[0],caption)
        members=infotext._members(self.root)
        self.assertEqual(len(members),42)
        self.assertTrue(all(self.root.read(infotext.INFO_ARCHIVE+'|'+n)==src for n in members))

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'), 'Requires original game data')
    def test_stage_across_all_42_and_undo_via_reload(self):
        root=DataRoot(self.root.root)
        before=infotext.read_shared_explanation(root,0)
        self.assertEqual(infotext.stage_shared_explanation(root,0,before),0)
        revised=('Editor|test|only!','Not|saved|to|disk','')
        self.assertEqual(infotext.stage_shared_explanation(root,0,revised),42)
        self.assertEqual(infotext.read_shared_explanation(root,0),revised)
        self.assertEqual(root.dirty_files(),[infotext.INFO_ARCHIVE])
        self.assertTrue(all(infotext.read_group(root.read(infotext.INFO_ARCHIVE+'|'+n),0)==revised
                         for n in infotext._members(root)))
        self.assertEqual(infotext.read_shared_explanation(DataRoot(self.root.root),0),before)
        # Sequential edits on different records must retain editable record 0.
        followup=infotext.read_shared_explanation(root,1)
        altered=('New|J-Arena|line',)+followup[1:]
        self.assertEqual(infotext.stage_shared_explanation(root,1,altered),42)
        final=('Another|menu|line',)+revised[1:]
        self.assertEqual(infotext.stage_shared_explanation(root,0,final),42)
        self.assertEqual(infotext.read_shared_explanation(root,1),altered)
        self.assertEqual(infotext.read_shared_explanation(root,0),final)

if __name__=='__main__':
    unittest.main()
