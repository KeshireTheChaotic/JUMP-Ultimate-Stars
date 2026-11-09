"""Original ALFT font rasterization and CP932 lookup regression tests."""
from __future__ import annotations
import os
import pathlib
import unittest

from jus_formats import aft

class OriginalAftTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        p=os.environ.get('JUS_DATA_ROOT') or os.environ.get('JUS_DATA')
        cls.folder=pathlib.Path(p)/'font' if p else None

    def test_rejects_untrusted_or_broken_alfonts(self):
        with self.assertRaises(ValueError):
            aft.parse(b'')
        with self.assertRaises(ValueError):
            aft.parse(b'ALFT'+bytes(50))
        with self.assertRaises(UnicodeEncodeError):
            list(aft.AftFont.sjis_codes('\U0001f600'))

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT') or os.environ.get('JUS_DATA'),
                         'Requires original game-data font files')
    def test_all_four_original_alfonts(self):
        expected={
          'jskfont.aft':('DSIG 4bpp linear',6,14,85,900,2703,512,448),
          'js8font.aft':('DSIG 4bpp linear',5,8,102,114,573,512,48),
          'jskfont_q.aft':('DSIG 4bpp linear',12,14,42,897,2743,512,924),
          'DSFont.aft':('BMP 1bpp',11,14,16,54,413,256,512)}
        for name,info in expected.items():
            with self.subTest(font=name):
                data=(self.folder/name).read_bytes()
                font=aft.parse(data)
                mode,w,h,columns,records,glyphs,aw,ah=info
                self.assertEqual((font.bitmap_mode,font.width,font.height,font.columns,
                                  len(font.ranges),font.atlas_width,font.atlas_height),
                                 (mode,w,h,columns,records,aw,ah))
                self.assertEqual(sum(r.end-r.start+1 for r in font.ranges),glyphs)
                max_index=max(r.glyph_base+r.end-r.start for r in font.ranges)
                # DSFont has deliberately sparse glyph indices: 413 mapped
                # characters, but its highest bitmap-cell index is 538.
                self.assertEqual(max_index,538 if name=='DSFont.aft' else glyphs-1)
                self.assertEqual(font.atlas_position(max_index)[0]//w,
                                 max_index%columns)
                self.assertEqual(font.atlas_position(max_index)[1]//h,
                                 max_index//columns)
                self.assertEqual(font.glyph(max_index).size,(w,h))
                if font.dsig is not None:
                    self.assertEqual(font.dsig.build(),data[font.embedded_offset:])
                    self.assertEqual(font.dsig.banks,14)
                    self.assertEqual(len(font.dsig.pixels()),aw*ah//2)
                else:
                    self.assertEqual(data[font.embedded_offset:font.embedded_offset+2],b'BM')

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT') or os.environ.get('JUS_DATA'),
                         'Requires original game-data font files')
    def test_mapping_and_glyph_pixels(self):
        font=aft.parse((self.folder/'jskfont.aft').read_bytes())
        self.assertEqual(font.glyph_index(0x8140),0)
        self.assertEqual(font.glyph_index(0x8145),5)   # FIRST overlapping range
        self.assertEqual(font.glyph_index(0x82a0),288) # SJIS hiragana 'あ'
        self.assertEqual(font.glyph_index(ord('J')),2651)
        self.assertEqual(font.glyph_index(ord('|')),2701)
        self.assertIsNone(font.glyph_index(0x0001))
        j=font.code_glyph(ord('J'))
        self.assertEqual(j.size,(6,14))
        self.assertEqual(j.getpixel((0,0))[3],0)
        self.assertEqual(j.getpixel((3,2)),(255,255,255,255))
        self.assertEqual(j.getpixel((4,2)),(255,255,255,255))
        self.assertIsNone(font.glyph_index(0x1234))
        bar=font.code_glyph(ord('|'))
        self.assertEqual(bar.getbbox(),None)  # Authored 0x7c is blank, NOT a visible pipe
        self.assertEqual(font.code_glyph(0x8140).getbbox(),None)

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT') or os.environ.get('JUS_DATA'),
                         'Requires original game-data font files')
    def test_original_line_raster_and_spacing(self):
        font=aft.parse((self.folder/'jskfont.aft').read_bytes())
        self.assertEqual(list(font.sjis_codes('J|あ')),[0x4a,0x7c,0x82a0])
        text=font.line('J|A',clip_width=None)
        self.assertEqual(text.size,(18,16))
        self.assertIsNone(text.crop((6,0,12,16)).getbbox())
        self.assertIsNotNone(text.crop((0,0,6,16)).getbbox())
        self.assertIsNotNone(text.crop((12,0,18,16)).getbbox())
        self.assertEqual(font.line('J A',clip_width=None).width,15) # ASCII 0x20: 3px
        self.assertEqual(font.line('J　A',clip_width=None).width,18) # 0x8140: 6px
        line=font.line('J-Universe|Great|Adventure!',clip_width=224)
        self.assertEqual(line.size,(224,16))
        self.assertTrue(line.getbbox())
        self.assertGreater(line.getbbox()[2],120)
        self.assertLessEqual(line.getbbox()[2],224)
        clipped=font.line('A'*100,clip_width=224)
        self.assertEqual(clipped.size,(224,16))
        self.assertIsNone(font.line('',clip_width=224).getbbox())

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT') or os.environ.get('JUS_DATA'),
                         'Requires original game-data font files')
    def test_monochrome_bmp_and_non_ascii_q_font(self):
        bitmap=aft.parse((self.folder/'DSFont.aft').read_bytes())
        self.assertEqual(bitmap.glyph_index(ord('A')),97)
        pix=bitmap.code_glyph(ord('A'))
        self.assertEqual(pix.getpixel((0,0))[3],0)
        self.assertEqual(pix.getpixel((5,3))[3],255)
        self.assertIsNotNone(pix.getbbox())
        fontq=aft.parse((self.folder/'jskfont_q.aft').read_bytes())
        self.assertIsNone(fontq.glyph_index(ord('J')))
        self.assertEqual(fontq.glyph_index(0x82a0),288)
        self.assertIsNotNone(fontq.code_glyph(0x82a0).getbbox())
        self.assertIsNone(fontq.code_glyph(ord('J')))
        self.assertEqual(fontq.line('J',clip_width=None).getbbox(),None)


if __name__=='__main__':
    unittest.main()
