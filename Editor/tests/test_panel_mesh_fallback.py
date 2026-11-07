"""Conditional ARM9 CLDS mesh branch: never a fabricated gameplay image."""
from __future__ import annotations
from dataclasses import replace
import os
from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_formats import alar
from jus_formats.dstx import parse_layout
from jus_formats.panelmesh import (
    ROM_WIDTH_PIECES, expand_conditional_fallback)
from tests.test_dstx_layout_0506 import LayoutTables

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\Data'))


class MeshBranch(unittest.TestCase):
    def setUp(self):
        self.layout = parse_layout(LayoutTables().make(6))

    def test_4_2_1_spans_and_contiguous_ids(self):
        first = expand_conditional_fallback(self.layout, 0)
        self.assertEqual(len(first.pieces), 8)  # width8 => two 4-tile pieces per row
        self.assertEqual(first.next_tile, 7 + 8 * 4)
        self.assertEqual([(p.index, p.x, p.y, p.attr, p.size)
                          for p in first.pieces[:3]],
                         [(7, 0, 0, 5, (32,8)),
                          (11,32,0,5,(32,8)),
                          (15,0,8,5,(32,8))])
        second = expand_conditional_fallback(self.layout, 1)
        self.assertEqual(len(second.pieces), 12)
        self.assertEqual([(p.index,p.x,p.y,p.attr,p.size)
                          for p in second.pieces[:3]],
                         [(40,0,0,4,(16,8)),
                          (42,16,0,0,(8,8)),
                          (43,0,8,4,(16,8))])

    def test_attribute_bits_and_s8_local_offsets(self):
        panel = replace(self.layout.panels[0], first_tile=0x1401,
                        tiles_w=16, tiles_h=20)
        layout = replace(self.layout, panels=(panel,) + self.layout.panels[1:])
        mesh = expand_conditional_fallback(layout, 0)
        self.assertEqual(mesh.pieces[0].attr, 0x115)
        self.assertEqual((mesh.pieces[64].x,mesh.pieces[64].y), (0,-128))
        self.assertEqual(len(mesh.pieces), 80)

    def test_original_lookup_is_only_17_entries(self):
        self.assertEqual(ROM_WIDTH_PIECES,
                         (0,1,1,2,1,2,2,3,2,3,3,4,3,4,4,5,4))
        bad = replace(self.layout.panels[0], tiles_w=17)
        layout = replace(self.layout, panels=(bad,) + self.layout.panels[1:])
        with self.assertRaisesRegex(ValueError, 'width 17 exceeds'):
            expand_conditional_fallback(layout, 0)

    @unittest.skipUnless((DATA/'stage/stage.aar').is_file(),
                         'original game data unavailable')
    def test_all_original_panel_widths_with_explicit_exceptions(self):
        safe = wide = count = 0
        def walk(archive, depth=0):
            nonlocal safe, wide, count
            for e in archive.entries:
                b=e.payload()
                if b[:4]==b'DSTX' and b[5] in (5,6):
                    l=parse_layout(b)
                    for i,p in enumerate(l.panels):
                        count+=1
                        if p.tiles_w<=16:
                            mesh=expand_conditional_fallback(l,i)
                            self.assertEqual(len(mesh.pieces),
                                             ROM_WIDTH_PIECES[p.tiles_w]*p.tiles_h)
                            safe+=1
                        else:
                            with self.assertRaises(ValueError):
                                expand_conditional_fallback(l,i)
                            wide+=1
                elif b[:4]==b'ALAR' and depth<3:
                    walk(alar.open_nested(b),depth+1)
        for path in DATA.rglob('*.aar'):
            walk(alar.open_nested(path.read_bytes()))
        self.assertEqual((safe,wide,count),(1035,59,1094))


if __name__ == '__main__':
    unittest.main()
