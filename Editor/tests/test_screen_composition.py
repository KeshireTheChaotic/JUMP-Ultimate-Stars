"""Read-only reconstructed JUS scene and pixel-source regression tests."""
from __future__ import annotations
import os
import pathlib
import unittest

from jus_package import screencomposition
from jus_package.project import DataRoot


class TestScreenComposition(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.meta = screencomposition.load_manifest()
        folder = os.environ.get('JUS_DATA_ROOT') or os.environ.get('JUS_DATA')
        cls.root = DataRoot(folder) if folder and pathlib.Path(folder).exists() else None

    def test_scene_graph_is_complete_and_portable(self):
        scenes = self.meta['scenes']
        self.assertEqual([s['id'] for s in scenes], list(range(46)))
        self.assertEqual(len(self.meta['edges']), 94)
        self.assertEqual(sum(len(s['widgets']) for s in scenes), 12)
        self.assertTrue(all(w['allow_layout_edit'] is False
                            for s in scenes for w in s['widgets']))
        for edge in self.meta['edges']:
            self.assertIn(edge['from'], range(46))
            if edge['to'] is not None:
                self.assertIn(edge['to'], range(46))

    def test_hardware_engine_lcd_mapping(self):
        f = screencomposition.screen_for_engine
        self.assertEqual((f('main', 0), f('sub', 0)), ('Bottom', 'Top'))
        self.assertEqual((f('main', 1), f('sub', 1)), ('Top', 'Bottom'))
        with self.assertRaises(ValueError):
            f('unknown', 1)
        with self.assertRaises(ValueError):
            f('main', 2)
        expected = {3: 0, 5: 0, 7: 0, 8: 1, 17: 1, 21: 0,
                    30: 0, 32: 0, 34: 0, 36: 0}
        for scene_id, bit in expected.items():
            route = self.meta['scenes'][scene_id]['display_routing']
            self.assertEqual(route['swap_bit15_at_entry'], bit)
            self.assertEqual(route['main_lcd'], f('main', bit))
            self.assertEqual(route['sub_lcd'], f('sub', bit))
        self.assertEqual(self.meta['scenes'][7]['display_routing']['dynamic_swap'], 'callback')
        for scene_id in (3, 21):
            for widget in self.meta['scenes'][scene_id]['widgets']:
                self.assertEqual(widget['engine'], 'main')
                self.assertEqual(f(widget['engine'], self.meta['scenes'][scene_id]['display_routing']['swap_bit15_at_entry']),
                                 widget['screen'])

    def test_topmenu_original_widget_records(self):
        s = self.meta['scenes'][3]
        self.assertEqual(s['archive'], 'topmenu/topmenu.aar')
        self.assertEqual([v['origin'] for v in s['widgets']],
                         [[x, y] for y in (50, 102) for x in (36, 92, 148, 204)])
        self.assertEqual([v['destination'] for v in s['widgets']],
                         [16, 21, 35, 31, 4, 29, 32, 34])
        self.assertEqual([int(v['move_id'], 0) for v in s['widgets']],
                         [0x50000c + i for i in range(8)])

    def test_jarena_original_widget_records(self):
        s = self.meta['scenes'][21]
        self.assertEqual([v['origin'] for v in s['widgets']],
                         [[48 + 32 * i, 184] for i in range(4)])
        self.assertEqual([v['destination'] for v in s['widgets']],
                         [None, 22, 4, 4])

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT') or os.environ.get('JUS_DATA'),
                         'Requires original unpacked game data')
    def test_true_source_pixels_and_initial_almt_cells(self):
        self.assertIsNotNone(self.root)
        expected = {3: [3, 51, 11, 15, 52, 23, 27, 31],
                    21: [12, 13, 14, 15]}
        for scene_id, frames in expected.items():
            with self.subTest(scene=scene_id):
                widgets, problems = screencomposition.visible_widgets(self.root, self.meta['scenes'][scene_id])
                self.assertEqual(problems, [])
                self.assertEqual([w.frame for w in widgets], frames)
                self.assertEqual(len(widgets), len(frames))
                for w in widgets:
                    self.assertIsNotNone(w.image)
                    self.assertGreater(w.image.getbbox()[2], 0)
                    self.assertTrue(self.root.exists(w.dtx_path))
                canvas = screencomposition.sprite_layer(widgets, 'Bottom')
                self.assertEqual(canvas.size, (256, 192))
                self.assertIsNotNone(canvas.getbbox())
                self.assertTrue(all(w.spec['screen'] == 'Bottom' for w in widgets))
                self.assertFalse(any(w.spec.get('allow_layout_edit', True) for w in widgets))


if __name__ == '__main__':
    unittest.main()
