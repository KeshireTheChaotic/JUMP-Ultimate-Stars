import unittest
from types import SimpleNamespace
from unittest.mock import Mock

from PIL import Image
from app.renderers import node_drag
from jus_formats import almt
from jus_package.spawns import state_at


class NodeDragTests(unittest.TestCase):
    def editor(self, track=None, tick=5):
        move = almt.Move(1, 20, nodes=[almt.NodeAnim([track] if track else [])])
        doc = almt.AlmtFile(node_names=['GN0'], moves=[move])
        if track:
            doc.field_index(track.field)
        e = SimpleNamespace(move=move, almt=doc, tick=tick, sel_track=None,
                            sel_key=None, sel_virtual=None, view=SimpleNamespace(zoom=3),
                            _animation_origin=lambda t: (100, -50), _state=state_at,
                            _stop_play=Mock(), refresh_animation=Mock(), status=Mock())
        e.snapshots = []
        e.checkpoint = lambda label: e.snapshots.append(doc.build())
        e._track_done = lambda: move.touch()
        return e

    def test_missing_track_creates_playhead_key_and_roundtrips(self):
        e = self.editor()
        before = e.almt.build()
        node_drag.press(e, 100, -50, None)
        node_drag.drag(e, 110, -53, None)
        node_drag.release(e, 112, -54, None)
        self.assertEqual(e.snapshots, [before])
        parsed = almt.parse(e.almt.build()).moves[0]
        self.assertEqual(state_at(parsed, 5)[0]['2DPos'], [12, -4])
        self.assertNotIn('2DPos', state_at(parsed, 4)[0])
        self.assertEqual(e.sel_track, (0, 0))
        self.assertEqual(e.sel_key, 5)

    def test_existing_key_updates_without_duplicates_or_neighbor_changes(self):
        tr = almt.Track('2DPos', True, keys=[almt.Key(0, [1, 2]),
                         almt.Key(5, [3, 4]), almt.Key(10, [9, 8])])
        e = self.editor(tr)
        node_drag.press(e, 103, -46, None)
        node_drag.release(e, 108, -40, None)
        self.assertEqual([(k.tick, k.value) for k in tr.keys],
                         [(0, [1, 2]), (5, [8, 10]), (10, [9, 8])])

    def test_static_conversion_preserves_earlier_position(self):
        tr = almt.Track('2DPos', False, value=[20, 30])
        e = self.editor(tr)
        node_drag.press(e, 120, -20, None)
        node_drag.release(e, 125, -10, None)
        parsed = almt.parse(e.almt.build()).moves[0]
        self.assertEqual(state_at(parsed, 4)[0]['2DPos'], [20, 30])
        self.assertEqual(state_at(parsed, 5)[0]['2DPos'], [25, 40])

    def test_click_without_movement_does_not_edit(self):
        e = self.editor()
        node_drag.press(e, 100, -50, None)
        node_drag.release(e, 100, -50, None)
        self.assertEqual(e.snapshots, [])
        self.assertEqual(e.move.nodes[0].tracks, [])

    def test_scrubbing_cancels_drag(self):
        e = self.editor()
        node_drag.press(e, 100, -50, None)
        e.tick = 6
        node_drag.release(e, 110, -50, None)
        self.assertEqual(e.snapshots, [])

    def test_sprite_picking_accounts_for_root_motion_and_alpha(self):
        e = self.editor(almt.Track('TextureID', False, value=1))
        e.move.nodes[0].tracks.append(almt.Track('BoundsIndex', False, value=0))
        pil = Image.new('RGBA', (20, 20), (255, 0, 0, 255))
        pil.putpixel((5, 5), (0, 0, 0, 0))
        e._frame_image = lambda tid, frame: (pil, 10, 10)
        self.assertEqual(node_drag.hit_node(e, 116, -34), 0)
        self.assertIsNone(node_drag.hit_node(e, 115, -35))

    def test_position_clamps_to_serializable_range(self):
        e = self.editor()
        node_drag.press(e, 100, -50, None)
        node_drag.release(e, 100000, -100000, None)
        parsed = almt.parse(e.almt.build()).moves[0]
        self.assertEqual(state_at(parsed, 5)[0]['2DPos'], [32767, -32768])


if __name__ == '__main__':
    unittest.main()
