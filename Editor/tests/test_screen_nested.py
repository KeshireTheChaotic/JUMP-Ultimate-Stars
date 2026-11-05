"""Regression tests: compressed nested AAR -> DSTX/DSIG screen previews.

No game data is necessary for the synthetic tests.  The optional shipped
archive test runs when JUS_DATA or JUS_DATA_ROOT names an extracted tree.
"""
from __future__ import annotations

import os
import tempfile
import unittest
from pathlib import Path

from jus_formats.alar import Archive, Entry
from jus_formats.binary import dscp_wrap, is_dscp, dscp_unwrap
from jus_formats.dsig import DsigFile, MODE_LINEAR4
from jus_formats.dstx import DstxFile, Frame, Piece
from jus_package.project import DataRoot, join
from jus_package import scenes


def fixture(root: Path):
    (root / 'deckmake').mkdir(exist_ok=True)
    dsig = DsigFile(version=1, mode=MODE_LINEAR4, w08=8, w0a=8,
                    palettes=[[0, 0x7FFF] + [0] * 14], payload=bytes([0x11] * 32))
    dtx = DstxFile(version=1, flags=3,
                   frames=[Frame([Piece(0, -4, -4, 0)]), Frame([Piece(0, 4, 4, 0)])],
                   embedded=dsig.build())
    nested = Archive(entries=[Entry('ui/part.dtx', dtx.build(), 0x40000003),
                              Entry('ui/part.amt', b'ALMT-test-preserved', 0x41000003)])
    top = Archive(entries=[Entry('ui/part.aar', dscp_wrap(nested.build()), 0x47000003),
                           Entry('ui/pad.bin', b'unchanged bytes', 0x10000001)])
    (root / 'deckmake/deckmake.aar').write_bytes(top.build())
    return 'deckmake/deckmake.aar|ui/part.aar'


class ScreenNestedTest(unittest.TestCase):
    def test_nested_dscp_sprite_and_search(self):
        with tempfile.TemporaryDirectory() as td:
            nested = fixture(Path(td))
            root = DataRoot(td)
            self.assertIn(nested, scenes.nested_screen_archives(root, scenes.screen_archives(root)))
            self.assertEqual(scenes.find_layers(root, nested), [])
            info, dtx, source = scenes.screen_sprite(root, nested, 'ui/part.dtx')
            self.assertEqual(info.frame_count, 2)
            self.assertTrue(info.embedded)
            im0, x0, y0 = scenes.render_screen_sprite(dtx, source, 0)
            im1, x1, y1 = scenes.render_screen_sprite(dtx, source, 1)
            self.assertEqual((x0, y0, im0.size), (-4, -4, (8, 8)))
            self.assertEqual((x1, y1, im1.size), (4, 4, (8, 8)))
            self.assertNotEqual(im0.getpixel((0, 0))[3], 0)
            self.assertRaises(IndexError, scenes.render_screen_sprite, dtx, source, 2)
            self.assertEqual(root.archive(nested).get('ui/part.amt').payload(), b'ALMT-test-preserved')

    def test_nested_save_preserves_other_members_and_compression(self):
        with tempfile.TemporaryDirectory() as td, tempfile.TemporaryDirectory() as out:
            nested = fixture(Path(td))
            root = DataRoot(td)
            outer_path = 'deckmake/deckmake.aar'
            before = Path(td, outer_path).read_bytes()
            root.write(join(nested, 'ui/part.amt'), b'ALMT-edited')
            self.assertEqual(Path(td, outer_path).read_bytes(), before)
            saved = root.save(out)
            self.assertEqual(saved, [Path(out, outer_path)])
            rebuilt = DataRoot(out)
            parent = rebuilt.archive(outer_path)
            self.assertEqual(parent.get('ui/pad.bin').data, b'unchanged bytes')
            self.assertTrue(parent.get('ui/part.aar').compressed)
            self.assertEqual(rebuilt.read(join(nested, 'ui/part.amt')), b'ALMT-edited')
            self.assertEqual(rebuilt.read(join(nested, 'ui/part.dtx')),
                             root.read(join(nested, 'ui/part.dtx')))
            self.assertIsNotNone(scenes.screen_sprite(rebuilt, nested, 'ui/part.dtx'))

    def test_top_level_dscp_wrapper_is_preserved(self):
        with tempfile.TemporaryDirectory() as td, tempfile.TemporaryDirectory() as out:
            root_path = Path(td)
            (root_path / 'Commu').mkdir()
            blob = Archive(entries=[Entry('scene.bin', b'old data', 0x10000001)]).build()
            (root_path / 'Commu/example.aar').write_bytes(dscp_wrap(blob))
            root = DataRoot(root_path)
            root.write('Commu/example.aar|scene.bin', b'new data')
            paths = root.save(out)
            self.assertEqual(paths, [Path(out, 'Commu/example.aar')])
            output = Path(out, 'Commu/example.aar').read_bytes()
            self.assertTrue(is_dscp(output), 'saving must not remove top-level DSCP wrapper')
            self.assertEqual(Archive.parse(dscp_unwrap(output)).get('scene.bin').payload(), b'new data')

    def test_real_nested_screen_corpus(self):
        folder = os.environ.get('JUS_DATA') or os.environ.get('JUS_DATA_ROOT')
        if not folder or not Path(folder, 'deckmake/deckmake.aar').is_file():
            self.skipTest('extracted game assets not present')
        root = DataRoot(folder)
        screens = scenes.screen_archives(root)
        nested = scenes.nested_screen_archives(root, screens)
        self.assertGreaterEqual(len(nested), 300)
        count = 0
        for path in nested:
            for member in root.archive(path).entries:
                if member.ext != '.dtx' or member.payload()[:4] != b'DSTX':
                    continue
                if member.payload()[5] & 0x7F != 3:
                    continue
                info, dstx, source = scenes.screen_sprite(root, path, member.name)
                if info.frame_count:
                    im, x, y = scenes.render_screen_sprite(dstx, source, 0)
                    self.assertGreater(im.width * im.height, 0)
                    count += 1
        self.assertGreaterEqual(count, 350)


if __name__ == '__main__':
    unittest.main()
