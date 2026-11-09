"""Original JUS asset data stays editable; ARM9 layout metadata never mutates."""
import os
import pathlib
import unittest

from jus_package.project import DataRoot
from jus_package import sourceassets, sourceauthority, screencomposition,screenvariants


class SourceAssetTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        p=os.environ.get('JUS_DATA_ROOT')
        cls.root=DataRoot(p) if p and pathlib.Path(p).is_dir() else None

    def test_hex_and_plain_text(self):
        data=b'\0\x81\xfeJUS\x7f'
        self.assertEqual(sourceassets.decode_hex(sourceassets.format_hex(data)),data)
        with self.assertRaises(ValueError):
            sourceassets.decode_hex('AAZ')
        with self.assertRaises(ValueError):
            sourceassets.decode_hex('0')
        self.assertEqual(sourceassets.cp932_roundtrip('スターターデッキ'.encode('cp932')),
                         'スターターデッキ')
        self.assertIsNone(sourceassets.cp932_roundtrip(b'\0abc'))
        for p in ('../outside.dig','/tmp/secret','a.aar|../bad','C:\\\\absolute'):
            with self.subTest(p=p):
                with self.assertRaises(ValueError):
                    sourceassets.validate_asset_path(p)

    def test_original_scene_evidence_index(self):
        x=sourceauthority.catalog()
        self.assertEqual(len(x['scenes']),46)
        self.assertEqual([s['id'] for s in x['scenes']],list(range(46)))
        self.assertIn('original',x['authority'].lower().replace('Original','original'))
        self.assertGreaterEqual(len([s for s in x['scenes']
                                     if s['constructor_files']]),20)
        for sid in range(46):
            evidence=sourceauthority.scene_sources(sid)
            for ref in evidence['asset_references']:
                self.assertIn('unproven',ref['binding'])
                self.assertTrue(ref['source'].startswith('functions_layout/arm9_'))
                self.assertGreater(ref['line'],0)
        self.assertTrue(any('input/input.aar' in p
                            for p in sourceauthority.scene_sources(8)['confirmed_resource_paths']))
        self.assertTrue(any('vscall/vscall.aar' in p
                            for p in sourceauthority.scene_sources(15)['confirmed_resource_paths']))

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'),'Needs original game data')
    def test_usable_original_source_resources(self):
        root=self.root
        s=screencomposition.load_manifest()['scenes'][8]
        self.assertEqual(len(screenvariants.variants_for_scene(8)),4)
        layers=screenvariants.scene_layers(root,s,'mode-2')
        self.assertEqual(len(layers),5)
        self.assertEqual(len([c for l,c in layers if c['screen']=='Top']),2)
        self.assertEqual(len([c for l,c in layers if c['screen']=='Bottom']),3)
        self.assertFalse([c for l,c in layers if c['bg_slot']==3 and c['engine']=='sub'][0]['visible'])
        a=sourceassets.scene_asset_paths(root,s,
             [l for l,c in layers],{l.name:c for l,c in layers})
        self.assertGreaterEqual(len(a),10)
        self.assertTrue(any(p.endswith('input/mode_bg2.atm') for p in a))
        self.assertTrue(any(p.endswith('input/input_font.dig') for p in a))
        for sid in (5,8,15,30):
            for choice in screenvariants.variants_for_scene(sid):
                for lay,cfg in screenvariants.scene_layers(
                        root,screencomposition.load_manifest()['scenes'][sid],choice['id']):
                    self.assertTrue(root.exists(lay.atm_path))
                    self.assertTrue(root.exists(lay.image_path))
                    self.assertTrue(cfg['native_bg'])

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'),'Needs original game data')
    def test_staged_loose_and_nested_source_edits_only(self):
        root=DataRoot(self.root.root)
        loose='JArena/arena_bg.ncl'
        raw=root.read(loose)
        self.assertIn('NCCL',sourceassets.inspect_asset(loose,raw))
        self.assertEqual(sourceassets.stage_asset(root,loose,raw)[:4],'NCCL')
        self.assertEqual(root.dirty_files(),[])
        new=bytearray(raw)
        new[0x20+13*32+2]^=1
        self.assertIn('NCCL',sourceassets.stage_asset(root,loose,bytes(new)))
        self.assertEqual(root.read(loose),bytes(new))
        self.assertIn(loose,root.dirty_files())
        self.assertEqual(self.root.read(loose),raw)
        with self.assertRaises(ValueError):
            sourceassets.stage_asset(root,loose,b'\0BROKEN')
        nested='deckselect/deckselect.aar|deckselect/deck_t_sel00.ncl'
        base=root.read(nested)
        changed=bytearray(base)
        changed[0x20+13*32+2]^=1
        sourceassets.stage_asset(root,nested,bytes(changed))
        self.assertEqual(root.read(nested),bytes(changed))
        self.assertIn('deckselect/deckselect.aar',root.dirty_files())
        self.assertEqual(self.root.read(nested),base)
        self.assertNotEqual(sourceassets.format_hex(base),sourceassets.format_hex(changed))

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'),'Needs original game data')
    def test_all_supported_game_asset_decoders(self):
        cases={
          'font/jskfont.aft':'ALFT',
          'info/bg.atm':'ALTM',
          'info/bg.dig':'DSIG',
          'JArena/arena_bg.ncl':'NCCL',
          'topmenu/topmenu.aar|topmenu/top_button00.aar|top_button00.dtx':'DSTX',
          'topmenu/topmenu.aar|topmenu/top_button00.aar|top_button00.amt':'ALMT',
          'info/info.aar':'ALAR',
          'bin/InfoDeck.aar|bin/info/jump.bin':'Unrecognized',
        }
        for path,expected in cases.items():
            with self.subTest(path=path):
                blob=self.root.read(path)
                status=sourceassets.inspect_asset(path,blob)
                self.assertTrue(status.startswith(expected),(path,status))
        scene=screencomposition.load_manifest()['scenes'][3]
        from jus_package import screenextras
        widgets,errs=screenextras.visible_extras(self.root,scene,'menu')
        self.assertFalse(errs,errs)
        icon=next(w for w in widgets if w.spec['id']=='info-icon')
        paths=sourceassets.edit_paths_for_widget(icon,self.root)
        self.assertTrue(any(p.endswith('icon.dtx') for p in paths))
        self.assertTrue(any(p.endswith('icon.amt') for p in paths))
        self.assertTrue(all(self.root.exists(p) for p in paths))

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'),'Needs original game data')
    def test_archive_browse_and_source_links(self):
        m=sourceauthority.scene_sources(8)
        for p in sourceauthority.code_asset_paths(self.root,8):
            self.assertTrue(self.root.exists(p))
            self.assertTrue(any(p in e['asset_paths'] for e in m['asset_references']))
        members=sourceassets.archive_member_paths(self.root,'input/input.aar',limit=50)
        self.assertTrue(members)
        self.assertLessEqual(len(members),50)
        self.assertTrue(any(p.endswith('.atm') for p in members))
        self.assertTrue(all(self.root.exists(p) for p in members))

if __name__=='__main__':
    unittest.main()
