"""Translation-only ParentLink scenarios from the 0206CA8C branch split.

These test the deterministic preview's world-to-view conversion, not DS GPU
compositing, authored Marker loops, or full owner transforms.
"""
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_formats import almt
from jus_package import spawns


def static(field, value):
    return almt.Track(field, False, value=value)


def keyed(field, *values):
    return almt.Track(field, True, keys=[almt.Key(t, v) for t, v in values])


class ParentLinkTranslation(unittest.TestCase):
    @staticmethod
    def origin(tick):
        return (3 * tick, -2 * tick)

    def build(self, link):
        parent = almt.Move(0x100, 30, nodes=[almt.NodeAnim([
            keyed('2DPos', (0, [10, 5]), (9, [99, 99])),
            static('ParentLink', link), keyed('GenerateID', (2, 0x200))])])
        child = almt.Move(0x200, 16, nodes=[almt.NodeAnim([])])
        catalog = {0x200: (child, ['root'], 'child.amt')}
        return parent, catalog

    def test_linked_follows_owner_without_resampling_spawn_offset(self):
        parent, catalog = self.build(1)
        at_4 = spawns.project(parent, ['GN00'], 4, catalog,
                              origin_at=self.origin, follow_parent=True).instances[0]
        at_10 = spawns.project(parent, ['GN00'], 10, catalog,
                               origin_at=self.origin, follow_parent=True).instances[0]
        self.assertEqual(at_4.anchor, (10, 5))
        self.assertEqual(at_10.anchor, (10, 5))
        self.assertIn('follows each tick', at_10.notes[0])

    def test_unlinked_freezes_owner_world_origin_at_birth(self):
        parent, catalog = self.build(0)
        at_4 = spawns.project(parent, ['GN00'], 4, catalog,
                              origin_at=self.origin, follow_parent=True).instances[0]
        at_10 = spawns.project(parent, ['GN00'], 10, catalog,
                               origin_at=self.origin, follow_parent=True).instances[0]
        self.assertEqual(at_4.anchor, (4, 9))    # (10+6,5-4) - (12,-8)
        self.assertEqual(at_10.anchor, (-14, 21))  # same world position, different root

    def test_legacy_keeps_old_anchor(self):
        parent, catalog = self.build(0)
        instance = spawns.project(parent, ['GN00'], 10, catalog).instances[0]
        self.assertEqual(instance.anchor, (10, 5))

    def test_nested_link_tracks_ancestor_but_nested_snapshot_does_not(self):
        parent = almt.Move(0x100, 30, nodes=[almt.NodeAnim([
            static('2DPos', [10, 0]), static('ParentLink', 1),
            keyed('GenerateID', (2, 0x200))])])
        child_follow = almt.Move(0x200, 30, nodes=[almt.NodeAnim([
            static('2DPos', [3, 0]), static('ParentLink', 1),
            keyed('GenerateID', (2, 0x300))])])
        child_snapshot = almt.Move(0x201, 30, nodes=[almt.NodeAnim([
            static('2DPos', [3, 0]), static('ParentLink', 0),
            keyed('GenerateID', (2, 0x300))])])
        grandchild = almt.Move(0x300, 30, nodes=[almt.NodeAnim([])])
        origin = lambda t: (t * 3, 0)
        for child, expected in ((child_follow, 13), (child_snapshot, 1)):
            catalog = {0x200: (child, ['child'], 'child.amt'),
                       0x300: (grandchild, ['grandchild'], 'grandchild.amt')}
            out = spawns.project(parent, ['root'], 8, catalog,
                                 follow_parent=True, origin_at=origin).instances
            self.assertEqual(out[0].anchor, (10, 0))
            self.assertEqual(out[1].anchor, (expected, 0))
            self.assertIs(out[1].parent, out[0])

    def test_without_root_motion_does_not_invent_parent_motion(self):
        parent, catalog = self.build(1)
        instance = spawns.project(parent, ['root'], 7, catalog,
                                  follow_parent=True).instances[0]
        self.assertEqual(instance.anchor, (10, 5))


if __name__ == '__main__':
    unittest.main()
