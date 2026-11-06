"""Collider types (overlay-6 grid sweep), grid sync on edit, 8bpp BG transparency."""
import os
import struct
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_formats import dsig as dsigmod, stagephysics as sp  # noqa: E402
from jus_formats.stageauthoring import GRID_OFF_TYPES, StageObjects  # noqa: E402
from jus_package import tilemap  # noqa: E402

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))
ARM9_OV6 = Path(os.environ.get('JUS_OV6', r'D:\Library\Development\JUS\reverse_engineering\verified_binaries'
                                          r'\52e262163e0d304c\arm9_overlay_0006.bin'))
HAVE = (DATA / 'stage/stage.aar').is_file()
OV6_BASE = 0x0214CD20


class Tables(unittest.TestCase):
    def test_enumeration_covers_0_to_12(self):
        self.assertEqual(sorted(sp.COLLIDER_TYPES), list(range(13)))
        self.assertEqual(sp.collider_type_name(2), 'Breakable wall')
        self.assertEqual(sp.collider_type_name(99), 'type 99')

    @unittest.skipUnless(ARM9_OV6.is_file(), 'overlay 6 binary not available')
    def test_flags_match_overlay6_tables(self):
        ov = ARM9_OV6.read_bytes()

        def table(addr):
            return {t for t in range(13) if ov[addr - OV6_BASE + t]}
        one_way = {t for t, v in sp.COLLIDER_TYPES.items() if v[4]}
        ceiling = {t for t, v in sp.COLLIDER_TYPES.items() if v[3]}
        self.assertEqual(table(0x02171558), one_way)                     # 4, 5, 6, 12
        self.assertEqual(table(0x02171528), ceiling)                     # 2, 3, 8, 9, 10
        self.assertEqual(table(0x02171548), {1, 2, 4, 5, 6, 10, 12})     # exposed on wall break


@unittest.skipUnless(HAVE, 'requires extracted data')
class ShippedGrid(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        from jus_formats import roster
        from jus_package import scenes
        from jus_package.project import DataRoot
        root = DataRoot(str(DATA))
        sets = {s.stem: s for s in scenes.stage_sets(root)}
        cls.bins = {st: root.read(sets[st].members['bin']) for st, *_ in roster.STAGES}

    def test_cells_mirror_collider_type_and_rect(self):
        for stem, blob in self.bins.items():
            g = sp.parse_stage_bin(blob)
            boxes = g.collision_boxes
            owned = {}
            for c in g.grid_cells:
                self.assertEqual(c.off, 1 if c.type_id in GRID_OFF_TYPES else 0, (stem, c))
                if c.collider != 0xFFFF:
                    self.assertEqual(boxes[c.collider].type_id, c.type_id)
                    owned.setdefault(c.collider, set()).add(c.index)
            self.assertFalse([b for b in boxes if b.type_id == 12 and b.index in owned], stem)

    def test_type_edit_rewrites_owned_cells_and_round_trips(self):
        blob = self.bins['bg_es']
        author = StageObjects(None, blob)
        box = next(b for b in author.g.collision_boxes if b.type_id == 4)
        cells = [c.index for c in author.g.grid_cells if c.collider == box.index]
        fields = author.fields('collider', box.index)
        author.edit('collider', box.index, {**fields, 'type_id': '3 Solid block'})
        after = author.g.grid_cells
        self.assertTrue(all(after[i].type_id == 3 and after[i].off == 0 for i in cells))
        author.edit('collider', box.index, {**fields, 'type_id': 4})
        self.assertEqual(author.geo, blob)                  # back to the shipped bytes

    def test_move_and_overlap_refusal(self):
        blob = self.bins['bg_es']
        author = StageObjects(None, blob)
        plat = next(b for b in author.g.collision_boxes if b.type_id == 4)
        f = author.fields('collider', plat.index)
        author.edit('collider', plat.index, {**f, 'y': f['y'] - 16})
        owned = {c.index for c in author.g.grid_cells if c.collider == plat.index}
        x0, y0, x1, y1 = author.g.collision_boxes[plat.index].bounds
        self.assertIn((int(y0) // 16) * 64 + int(x0) // 16, owned)
        wall = next(b for b in author.g.collision_boxes if b.type_id == 8)   # left boundary
        with self.assertRaises(ValueError):
            author.edit('collider', plat.index, {**f, 'x': wall.x, 'y': wall.y + 64})
        with self.assertRaises(ValueError):
            author.edit('collider', plat.index, {**f, 'type_id': 13})


class EightBppTransparency(unittest.TestCase):
    def test_only_index_zero_is_transparent(self):
        from jus_formats import altm
        g = dsigmod.DsigFile.__new__(dsigmod.DsigFile)
        pal = [[0x7FFF] * 16 for _ in range(16)]
        g.palettes = pal
        rgba = tilemap._palette_rgba(g)
        self.assertTrue(all(c[3] == 255 for c in rgba))      # colour 16, 32 … are opaque


if __name__ == '__main__':
    unittest.main()
