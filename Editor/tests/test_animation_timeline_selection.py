import unittest
from types import SimpleNamespace
from unittest.mock import Mock

from PIL import Image
from app.renderers import node_drag
from app.timeline.interactions import _timeline_select
from app.widgets.dopesheet import DopeSheet
from jus_formats import almt
from tests import test_animation_collider_drag as collider_tests


class TimelineSelectionTests(unittest.TestCase):
    def editor(self):
        e = collider_tests.ColliderDragTests().editor(keyed=True)
        e.refresh_inspector = Mock()
        e.redraw_view = Mock()
        e.set_tick = lambda tick: setattr(e, 'tick', tick)
        return e

    def test_track_key_selects_collider_and_jumps_to_frame(self):
        e = self.editor()
        _timeline_select(e, {'kind': 'track', 'sel': (0, 0)}, 10, None)
        self.assertEqual((e.tick, e.sel_track, e.sel_key), (10, (0, 0), 10))
        e._stop_play.assert_called_once()
        self.assertIsNone(e._node_drag)

    def test_track_label_selects_without_scrubbing(self):
        e = self.editor()
        _timeline_select(e, {'kind': 'track', 'sel': (0, 0)}, None, None)
        self.assertEqual((e.tick, e.sel_track, e.sel_key), (5, (0, 0), None))

    def test_node_header_and_summary_key_select_node(self):
        e = self.editor()
        row = {'kind': 'group', 'id': ('node', 0)}
        _timeline_select(e, row, None, None)
        self.assertEqual(e.sel_track, (0, 1))
        self.assertEqual(e.tick, 5)
        _timeline_select(e, row, 10, None)
        self.assertEqual(e.tick, 10)
        self.assertEqual(e.sel_track, (0, 1))
        self.assertIsNone(e.sel_key)  # 2DPos is static, summary key belongs to collider.

    def test_selected_collider_body_wins_another_corner_and_node_origin(self):
        e = self.editor()
        e.move.nodes[0].tracks.append(almt.Track('CollisionRect1', False, value=[25, 40, 50, 70]))
        _timeline_select(e, {'kind': 'track', 'sel': (0, 0)}, None, None)
        node_drag.press(e, 130, -2, None)  # other collider's top-left
        self.assertEqual(e._node_drag['field'], 'CollisionRect2')
        self.assertIsNone(e._node_drag['corner'])
        # Put the selected collider over the node origin as well.
        e.move.nodes[0].tracks[0].keys[0].value = [-10, -10, 10, 10]
        node_drag.press(e, 105, -42, None)
        self.assertEqual(e._node_drag['field'], 'CollisionRect2')

    def test_selected_sprite_wins_over_other_node_and_collider_handles(self):
        e = self.editor()
        node = almt.NodeAnim([almt.Track('2DPos', False, value=[0, 0]),
                             almt.Track('TextureID', False, value=1),
                             almt.Track('BoundsIndex', False, value=0)])
        e.move.nodes.append(node)
        e.almt.node_names.append('GN1')
        e._frame_image = lambda tid, frame: (Image.new('RGBA', (100, 100), 'red'), 0, 0)
        _timeline_select(e, {'kind': 'track', 'sel': (1, 0)}, None, None)
        node_drag.press(e, 115, -22, None)  # collider corner inside selected sprite
        self.assertEqual((e._node_drag['ni'], e._node_drag['field']), (1, '2DPos'))

    def test_header_label_selects_and_disclosure_arrow_collapses(self):
        row = {'kind': 'group', 'id': ('node', 0)}
        sheet = SimpleNamespace(canvas=Mock(), RULER_H=20, HEADER_W=200,
                                _row_at=lambda y: 0, rows=[row], on_select=Mock(),
                                on_toggle_group=Mock(), redraw=Mock())
        DopeSheet._press(sheet, SimpleNamespace(x=50, y=30))
        sheet.on_select.assert_called_once_with(row, None, None)
        self.assertEqual(sheet.selected, (('node', 0), None))
        sheet.on_toggle_group.assert_not_called()
        DopeSheet._press(sheet, SimpleNamespace(x=8, y=30))
        sheet.on_toggle_group.assert_called_once_with(row)


if __name__ == '__main__':
    unittest.main()
