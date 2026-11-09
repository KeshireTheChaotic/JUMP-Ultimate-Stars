"""Verified TopMenu missing image layers, original ROM coords and captured state."""
import os
import pathlib
import unittest
from jus_package import screencomposition,screenextras,screenvariants
from jus_package.project import DataRoot
from jus_formats import aft

class TopMenuExtrasTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.metadata=screenextras.load_metadata()
        cls.scene=screencomposition.load_manifest()['scenes'][3]
        path=os.environ.get('JUS_DATA_ROOT')
        cls.root=DataRoot(path) if path and pathlib.Path(path).is_dir() else None

    def test_source_table_and_placement(self):
        m=self.metadata
        self.assertEqual(m['scene'],3)
        self.assertEqual(len(m['elements']),12)
        labels={e['id']:e for e in m['elements'] if e['kind']=='sprite-label'}
        self.assertEqual(len(labels),8)
        for i in range(8):
            q=labels[f'label:{i}']
            x,y=36+56*(i%4),50+52*(i//4)
            self.assertEqual(q['origin'],[x,y+20])
            self.assertEqual(int(q['move_id'],0),0x500018+i)
            self.assertFalse(q['allow_layout_edit'])
            self.assertTrue(q['record_address'].startswith('0x021600'))
        button={e['id']:e for e in m['elements']}
        self.assertEqual(button['right-jp']['origin'],[240,160])
        self.assertEqual(button['right-back']['origin'],[255,191])
        self.assertEqual(button['info-icon']['origin'],[10,24])
        self.assertEqual(button['speech-box']['origin'],[128,96])
        self.assertEqual(button['speech-box']['engine'],'sub')
        self.assertEqual(m['snapshot']['chara_count'],2)
        self.assertEqual(m['snapshot']['character_x_pixels'],[16,88])
        self.assertEqual(m['snapshot']['deck_caption'],'スターターデッキ')
        self.assertEqual(m['snapshot']['series_bg_code'],'jp')
        self.assertEqual(m['snapshot']['series_text_code'],'jump')
        self.assertEqual([(c['character_index'],c['koma_size'],c['roster_name'])
                          for c in m['snapshot']['characters']],
                         [(12,3,'op_b_01'),(20,3,'na_b_01')])

    def test_two_variants_and_literal_disabled_state(self):
        self.assertEqual([v['id'] for v in screenvariants.variants_for_scene(3)],
                         ['menu','captured'])
        self.assertEqual([w['origin'] for w in self.scene['widgets']],
                         [[x,y] for y in (50,102) for x in (36,92,148,204)])
        captured=screenextras.scene_widgets_override(self.scene,'captured')
        self.assertEqual(int(captured['widgets'][3]['move_id'],0),0x500014)
        self.assertEqual(int(self.scene['widgets'][3]['move_id'],0),0x50000f)
        self.assertEqual(screenextras.captured_deck_caption('captured'),'スターターデッキ')
        self.assertIsNone(screenextras.captured_deck_caption('menu'))

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'), 'Original extracted game data required')
    def test_original_sprites_render_on_correct_lcd(self):
        m=self.metadata
        for variant,expected in [('captured',12),('menu',12)]:
            with self.subTest(variant=variant):
                widgets,errors=screenextras.visible_extras(self.root,self.scene,variant)
                self.assertFalse(errors,errors)
                self.assertEqual(len(widgets),expected)
                ids={w.spec['id']:w for w in widgets}
                for w in widgets:
                    self.assertEqual(w.screen,'Top' if w.spec['engine']=='sub' else 'Bottom')
                    self.assertIsNotNone(w.image.getbbox(),w.spec['id'])
                    self.assertTrue(self.root.exists(w.dtx_path))
                    self.assertEqual(w.origin_x,w.spec['origin'][0])
                    self.assertEqual(w.origin_y,w.spec['origin'][1])
                self.assertEqual(ids['speech-box'].frame,0)
                self.assertEqual(ids['speech-box'].image_x,0)
                self.assertEqual(ids['speech-box'].image_y,96)
                self.assertEqual(ids['right-back'].frame,0)
                self.assertEqual(ids['right-back'].image_x,206)
                self.assertEqual(ids['right-back'].image_y,175)
                self.assertEqual(ids['right-jp'].image_x,224)
                self.assertEqual(ids['right-jp'].image_y,144)
                self.assertEqual(ids['label:0'].frame,53)
                self.assertEqual(ids['label:3'].frame,61 if variant=='captured' else 56)
                if variant=='captured':
                    self.assertEqual(ids['info-icon'].frame,0)
                    self.assertEqual((ids['info-icon'].image_x,ids['info-icon'].image_y),(10,24))
                    captured_scene=screenextras.scene_widgets_override(self.scene,'captured')
                    buttons,errors=screencomposition.visible_widgets(self.root,captured_scene)
                    self.assertFalse(errors,errors)
                    self.assertEqual(buttons[3].frame,37)
                    self.assertEqual(buttons[0].frame,3)
                    self.assertEqual(buttons[0].origin_y,50)
                else:
                    self.assertIn('info-icon',ids)
                    self.assertIn('Constructor-initial',ids['info-icon'].spec['state_condition'])
                top=screencomposition.sprite_layer(widgets,'Top')
                bottom=screencomposition.sprite_layer(widgets,'Bottom')
                self.assertEqual(top.size,(256,192))
                self.assertIsNotNone(top.getbbox())
                self.assertIsNotNone(bottom.getbbox())

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'), 'Original extracted game data required')
    def test_capture_series_jp_and_original_caption_font(self):
        layers=screenvariants.scene_layers(self.root,self.scene,'captured',None)
        self.assertEqual(len(layers),5)
        self.assertIn('info/chr/jp.atm',[l.atm_path.split('|')[-1] for l,c in layers])
        self.assertEqual(len([c for l,c in layers if c['screen']=='Top']),3)
        self.assertEqual(len([c for l,c in layers if c['screen']=='Bottom']),2)
        foreground = [c for l,c in layers if l.atm_path.endswith('info/chr/jp.atm')][0]
        info_back = [c for l,c in layers if l.atm_path=='info/bg.atm'][0]
        self.assertGreater(foreground['preview_order'],info_back['preview_order'])
        self.assertIn('functions_layout/arm9_main/arm9_main_02042d14.c#L49-L57',
                      foreground['order_evidence'])
        self.assertEqual(foreground['baseline_bg_priority'],0)
        self.assertEqual(info_back['baseline_bg_priority'],1)
        for char in self.metadata['snapshot']['characters']:
            self.assertTrue(self.root.exists(char['resource_archive']))
            self.assertTrue(self.root.exists(char['source_texture_archive']))
            self.assertTrue(self.root.archive(char['resource_archive']).get(char['sprite_member']))
            self.assertTrue(self.root.archive(char['source_texture_archive']).get(char['source_texture_member']))
        small=aft.parse(self.root.read('font/js8font.aft'))
        cap=small.line(self.metadata['snapshot']['deck_caption'],
                       bank=0,clip_width=256,line_height=8)
        self.assertEqual(cap.size,(256,8))
        self.assertIsNotNone(cap.getbbox())

if __name__=='__main__':
    unittest.main()
