"""Original-pixel DSTX 0x05/0x06 tile-panel renderer tests (never screenshot mocks)."""
from __future__ import annotations
import os
from pathlib import Path
import struct
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_formats import alar
from jus_formats.dsig import DsigFile, MODE_TILED4, MODE_TILED8
from jus_formats.dstx import parse_layout
from jus_formats.sprite import write_tiled4
from jus_formats.tilepanel import render_layout_panel
from jus_package.scenes import render_screen_tile_panel


def make_layout(mode, cell, dsig):
    count = 1
    aux = struct.pack('<H', 2) + (bytes((cell,)) if mode == 5
                                   else struct.pack('<H', cell))
    while len(aux) % 4:
        aux += b'\0'
    return (b'DSTX' + bytes((1, mode)) +
            struct.pack('<HH', count, 16 + len(aux)) +
            struct.pack('<HBB', 0, 1, 1) + b'\0\0' + aux + dsig)


class Rendering(unittest.TestCase):
    def test_4bpp_flips_and_palette_bank(self):
        pixels = [0] * 64
        pixels[0] = 1
        pixels[7] = 2
        tile = write_tiled4(pixels, 8, 8)
        # A completely transparent first tile, and one source-painted tile.
        palettes = [[0] * 16 for _ in range(2)]
        palettes[1][1] = 0x7C00  # blue
        palettes[1][2] = 0x001F  # red
        g = DsigFile(version=1, mode=MODE_TILED4, w08=16, w0a=8,
                     palettes=palettes, payload=bytes(32) + tile)
        # DS BG entry: 4bpp bank 1, both flips and original tile 1
        data = make_layout(6, 0x1C01, g.build())
        layout = parse_layout(data)
        panel = render_layout_panel(layout, 0)
        self.assertEqual((panel.width, panel.height), (8, 8))
        self.assertEqual(panel.dsig_mode, MODE_TILED4)
        self.assertEqual(panel.palette_banks, (1,))
        self.assertEqual((panel.hflip_cells, panel.vflip_cells), (1, 1))
        self.assertEqual((panel.referenced_tiles), (1,))
        def pixel(x,y):
            i=(y*8+x)*4
            return tuple(panel.rgba[i:i+4])
        self.assertEqual(pixel(7, 7), (0,0,255,255))
        self.assertEqual(pixel(0, 7), (255,0,0,255))
        self.assertEqual(pixel(1, 1), (0,0,0,0))
        image, meta = render_screen_tile_panel(layout, 0)
        self.assertEqual(image.size, (8, 8))
        self.assertEqual(image.tobytes(), panel.rgba)
        self.assertEqual(layout.build(), data)

    def test_8bpp_flattened_palette_and_colour16_not_transparent(self):
        palette = [[0] * 16 for _ in range(3)]
        palette[1][0] = 0x03E0  # index 16 is a real opaque green colour
        palette[1][1] = 0x001F  # index 17 is red
        tile = bytearray(64)
        tile[0] = 16
        tile[7] = 17
        g = DsigFile(version=1, mode=MODE_TILED8, w08=8, w0a=8,
                     palettes=palette, payload=bytes(tile))
        panel = render_layout_panel(parse_layout(make_layout(5, 0, g.build())), 0)
        self.assertEqual(panel.dsig_mode, MODE_TILED8)
        self.assertEqual(tuple(panel.rgba[:4]), (0,255,0,255))
        self.assertEqual(tuple(panel.rgba[28:32]), (255,0,0,255))
        self.assertEqual(tuple(panel.rgba[4:8]), (0,0,0,0))
        self.assertEqual(panel.hflip_cells, 0)
        self.assertEqual(panel.vflip_cells, 0)

    def test_out_of_range_source_rejected_without_fake_pixels(self):
        g = DsigFile(version=1, mode=MODE_TILED4, w08=8, w0a=8,
                     palettes=[[0]*16], payload=bytes(32))
        with self.assertRaisesRegex(ValueError, 'outside DSIG'):
            render_layout_panel(parse_layout(make_layout(6, 0x0001, g.build())), 0)
        with self.assertRaisesRegex(ValueError, 'palette bank'):
            render_layout_panel(parse_layout(make_layout(6, 0x1000, g.build())), 0)
        with self.assertRaises(IndexError):
            render_layout_panel(parse_layout(make_layout(5, 0, g.build())), 1)


@unittest.skipUnless((Path(os.environ.get('JUS_DATA',r'D:\Library\Development\JUS\Data'))
                      / 'stage/stage.aar').is_file(), 'original JUS source data unavailable')
class OriginalCorpus(unittest.TestCase):
    def test_all_50_sources_and_1094_panels(self):
        root=Path(os.environ.get('JUS_DATA',r'D:\Library\Development\JUS\Data'))
        files=panels=hflips=vflips=0
        def walk(arc, depth):
            nonlocal files,panels,hflips,vflips
            for e in arc.entries:
                b=e.payload()
                if b[:4]==b'DSTX' and b[5] in (5,6):
                    layout=parse_layout(b)
                    self.assertEqual(layout.build(), b)
                    files+=1
                    for i,grid in enumerate(layout.panel_maps):
                        frame=render_layout_panel(layout,i)
                        self.assertEqual((frame.width,frame.height),
                                         (grid.tiles_w*8,grid.tiles_h*8))
                        self.assertEqual(len(frame.rgba),frame.width*frame.height*4)
                        panels+=1
                        hflips+=frame.hflip_cells;vflips+=frame.vflip_cells
                elif b[:4]==b'ALAR' and depth<3:
                    walk(alar.open_nested(b),depth+1)
        for p in root.rglob('*.aar'):
            walk(alar.open_nested(p.read_bytes()),0)
        self.assertEqual((files,panels), (50,1094))
        self.assertEqual((hflips,vflips), (5063,825))


if __name__=='__main__':
    unittest.main()
