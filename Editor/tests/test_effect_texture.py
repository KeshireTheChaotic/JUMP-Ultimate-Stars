"""Fast synthetic regression tests for GX atlas reinterpretation of PL4R/LCP4."""
from __future__ import annotations
import json
import sys
import tempfile
import unittest
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent.parent))
from jus_formats.binary import lz10_compress
from jus_formats.dsig import DsigFile
from jus_formats.dstx import DstxFile, Frame, Piece
from jus_formats import sprite
from jus_package import package


class GxTextureReinterpretation(unittest.TestCase):
    def image(self, mode=0x20):
        # 64x32 4bpp. Every row contains 32 bytes. Bit6 chooses a 128x32
        # 2bpp interpretation of the very same bytes (still 32 bytes/row).
        raw = bytearray(64*32//2)
        for y in range(32):
            for x in range(32):
                raw[y*32+x] = (x + y*3) & 0xff
        payload = lz10_compress(raw) if mode==0x50 else bytes(raw)
        return DsigFile(1,mode,0,64,32,[[0]*16 for _ in range(4)],payload)

    def test_bit6_changes_texture_read_not_upload(self):
        g = self.image()
        p4 = Piece(2, 0, 0, 0x0100)  # x=16, y=0; 4bpp
        p2 = Piece(2, 0, 0, 0x0140)  # x=16, y=0; 2bpp
        a = sprite.read_texture_piece(g,p4)
        b = sprite.read_texture_piece(g,p2)
        self.assertEqual(len(a),64)
        self.assertEqual(len(b),64)
        self.assertEqual(a[0], (g.pixels()[8] & 15))
        self.assertEqual(b[0], (g.pixels()[4] & 3))
        self.assertTrue(all(i < 4 for i in b))
        self.assertNotEqual(a,b)
        self.assertEqual(g.pixels()[0:3], bytes([0,1,2]))

    def test_coordinates_not_index_times_sixteen(self):
        g = self.image()
        p4 = Piece(34, 0, 0, 0x0000)  # x16 y8 in the GPU grid
        self.assertEqual(sprite.texture_piece_origin(p4), (16,8))
        expected = (g.pixels()[8*32+8] & 15)
        self.assertEqual(sprite.read_texture_piece(g,p4)[0],expected)
        # Old rule would have read at (34*16)%64=32, y=8.
        self.assertNotEqual((34*16)%64,16)
        p2 = Piece(42, 0, 0, 0x0040) # x80 y8 in 128-wide 2bpp view
        self.assertEqual(sprite.texture_piece_origin(p2),(80,8))
        self.assertEqual(sprite.read_texture_piece(g,p2)[0], g.pixels()[8*32+20]&3)
        with self.assertRaises(ValueError):
            sprite.read_texture_piece(g, Piece(58, 0, 0, 0x0002), strict=True) # 32x32 at y8 > image

    def test_lcp4_same_pixels_as_pl4r(self):
        normal,packed=self.image(0x20),self.image(0x50)
        for attr in (0x0000,0x0040):
            piece = Piece(34,0,0,attr)
            self.assertEqual(sprite.read_texture_piece(normal,piece),
                             sprite.read_texture_piece(packed,piece))

    def test_width_change_and_inverse_uv(self):
        g = self.image()
        self.assertEqual(sprite.texture_dimensions(g,False), (64,32))
        self.assertEqual(sprite.texture_dimensions(g,True), (128,32))
        for idx,flag in ((33,False),(42,True),(65,True)):
            p=Piece(idx,0,0,0x40 if flag else 0)
            x,y=sprite.atlas_piece_origin(p,g.width)
            self.assertEqual(sprite.atlas_index_for(x,y,g.width,flag),idx)
        with self.assertRaises(sprite.LayoutError):
            sprite.atlas_index_for(128,0,64,True)

    def test_read_only_two_bpp_preview(self):
        g = self.image()
        v = sprite.texture_image(g,True)
        self.assertEqual((v.width,v.height),(128,32))
        self.assertEqual(v.get(20,0),g.pixels()[5]&3)
        self.assertEqual(sprite.atlas_image(g).width,64)

    def test_outside_texture_piece_is_clipped_not_wrapped(self):
        g = self.image()
        # One anomalous character-window sprite points exactly past h32.
        p = Piece(128, 0, 0, 0x0048)
        self.assertEqual(sprite.read_texture_piece(g,p), [0] * (8*16))
        with self.assertRaises(ValueError):
            sprite.read_texture_piece(g,p,strict=True)

    def test_package_texture_coordinates_roundtrip(self):
        """Atlas metadata is actual GPU UV data, not the old index*16 mapping."""
        g = self.image(0x50)
        d = DstxFile(version=1, flags=0x03,
                     frames=[Frame([Piece(2,0,0,0x0040)])], embedded=g.build())
        with tempfile.TemporaryDirectory() as td:
            from pathlib import Path
            base = Path(td)
            out = base/'sprites'/'effect'
            package._export_sprite(d,g,out,{'embedded':True},None,'effect.dtx')
            info = json.loads((out/'sprite.json').read_text())
            self.assertEqual(info['frames'][0]['texture_xy'],[[16,0]])
            self.assertNotIn('atlas_xy',info['frames'][0])
            self.assertEqual(info['atlas']['two_bpp_width'],128)
            self.assertTrue((out/'texture_2bpp.png').is_file())
            # Update the GPU UV cell, then import into the original embedded
            # DSTX. These are (x,y) in *texture space*, not source 4bpp pixels.
            info['frames'][0]['texture_xy']=[[24,8]]
            (out/'sprite.json').write_text(json.dumps(info))
            spec={'dir':'sprites/effect', 'dstx':{'unit':'units/effect','member':'effect.dtx'},
                  'dsig':{'embedded':True}}
            members={('units/effect','effect.dtx'):d.build()}
            report=package.ImportReport()
            package._import_sprite(base,spec,{},members,report)
            reimported=DstxFile.parse(members[('units/effect','effect.dtx')])
            self.assertEqual(reimported.frames[0].pieces[0].index,35)
            self.assertEqual(reimported.frames[0].pieces[0].attr,0x0040)
            self.assertEqual(reimported.embedded,g.build())
            # A future import of the unchanged metadata must be a no-op.
            members={('units/effect','effect.dtx'):d.build()}
            info['frames'][0]['texture_xy']=[[16,0]]
            (out/'sprite.json').write_text(json.dumps(info))
            package._import_sprite(base,spec,{},members,package.ImportReport())
            self.assertEqual(members[('units/effect','effect.dtx')],d.build())

    def test_two_bpp_palette_uses_selected_bank(self):
        g = self.image()
        # Source byte at x=4 (2bpp: 0, y=0) is 1. Force a nonzero 2bpp texel.
        g.payload = bytes([1] * (64*32//2))
        piece = Piece(0,0,0,0x0240)
        output = sprite.compose(Frame([piece]),sprite.SpriteSource(g))
        self.assertEqual(output.get(0,0),2*16+1)
        self.assertEqual(output.get(1,0),0)

if __name__=='__main__':unittest.main()
