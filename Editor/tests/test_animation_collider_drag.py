import unittest
from unittest.mock import Mock

from app.renderers import collider_drag, node_drag
from jus_formats import almt
from jus_package.spawns import state_at
from tests import test_animation_node_drag as node_tests


class ColliderDragTests(unittest.TestCase):
    def editor(self, keyed=False):
        rect = [10, 20, 40, 60]
        tr = almt.Track('CollisionRect2', keyed, value=None if keyed else rect,
                        keys=[almt.Key(0, rect), almt.Key(10, [1, 2, 3, 4])] if keyed else [])
        e = node_tests.NodeDragTests().editor(tr)
        e.show_collision = Mock()
        e.show_collision.get.return_value = True
        e.move.nodes[0].tracks.append(almt.Track('2DPos', False, value=[5, 8]))
        e.almt.field_index('2DPos')
        return e

    def test_all_corners_resize_in_node_local_coordinates(self):
        for corner in collider_drag.CORNERS:
            with self.subTest(corner=corner):
                e = self.editor()
                rect = [10, 20, 40, 60]
                x, y = 105 + rect[corner[0]], -42 + rect[corner[1]]
                node_drag.press(e, x, y, None)
                node_drag.drag(e, x + 2, y + 3, None)
                node_drag.release(e, x + 4, y + 6, None)
                expected = list(rect)
                expected[corner[0]] += 4
                expected[corner[1]] += 6
                move = almt.parse(e.almt.build()).moves[0]
                self.assertEqual(state_at(move, 5)[0]['CollisionRect2'], expected)
                self.assertEqual(state_at(move, 4)[0]['CollisionRect2'], rect)
                self.assertEqual(state_at(move, 5)[0]['2DPos'], [5, 8])
                self.assertEqual(len(e.snapshots), 1)
                self.assertEqual(e.sel_track, (0, 0))
                self.assertEqual(e.sel_key, 5)

    def test_body_translation_creates_key_and_preserves_neighbors(self):
        e = self.editor(keyed=True)
        node_drag.press(e, 130, -2, None)
        node_drag.release(e, 138, -7, None)
        tr = e.move.nodes[0].track('CollisionRect2')
        self.assertEqual([(k.tick, k.value) for k in tr.keys],
                         [(0, [10, 20, 40, 60]), (5, [18, 15, 48, 55]), (10, [1, 2, 3, 4])])
        node_drag.press(e, 138, -7, None)
        node_drag.release(e, 139, -7, None)
        self.assertEqual(len(tr.keys), 3)
        self.assertEqual(tr.keys[1].value, [19, 15, 49, 55])

    def test_hidden_colliders_are_not_pickable(self):
        e = self.editor()
        e.show_collision.get.return_value = False
        self.assertIsNone(collider_drag.hit_collider(e, 115, -22))

    def test_selected_collider_wins_overlap(self):
        e = self.editor()
        e.move.nodes[0].tracks.append(almt.Track('CollisionRect1', False, value=[10, 20, 40, 60]))
        e.sel_track = (0, 0)
        self.assertEqual(collider_drag.hit_collider(e, 115, -22)[1], 'CollisionRect2')

    def test_click_does_not_convert_static_or_create_undo(self):
        e = self.editor()
        node_drag.press(e, 115, -22, None)
        node_drag.release(e, 115, -22, None)
        self.assertFalse(e.move.nodes[0].tracks[0].keyed)
        self.assertEqual(e.snapshots, [])

    def test_resize_cannot_invert_and_translation_preserves_size_at_limits(self):
        self.assertEqual(collider_drag.moved_rect([10, 20, 40, 60], (0, 1), 100, 100),
                         [40, 60, 40, 60])
        self.assertEqual(collider_drag.moved_rect([10, 20, 40, 60], None, 100000, -100000),
                         [32737, -32768, 32767, -32728])


if __name__ == '__main__':
    unittest.main()
