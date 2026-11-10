"""Corpus-derived structural proof for original stage camera .cam records."""
import unittest
from pathlib import Path
from jus_formats.alar import open_nested
from jus_formats.stagecamera import StageCamera

DATA=Path(r"D:\Library\Development\JUS\Data")


class StageCameraTests(unittest.TestCase):
    def test_minimum_header_and_count_validation(self):
        with self.assertRaises(ValueError):StageCamera.parse(b"\x00"*15)
        with self.assertRaises(ValueError):StageCamera.parse(b"\x00"*16+b"\x00"*2)
        with self.assertRaises(ValueError):StageCamera.parse(b"\x00"*12+b"\x00\x41\x00\x00"+b"\x00"*260)

    def test_roundtrip_edited_point_changes_only_4_bytes(self):
        from struct import pack
        sample=pack("<6hBBH8h",-432,-400,255,288,768,799,1,4,0,
                    -432,-400,-432,-656,-592,-656,-592,-400)
        cam=StageCamera.parse(sample)
        self.assertEqual(cam.build(),sample)
        altered=cam.replace_vertex(2,-580,-620).build()
        self.assertEqual(altered[:24],sample[:24])
        self.assertEqual(altered[28:],sample[28:])
        self.assertEqual(StageCamera.parse(altered).vertices[2],(-580,-620))
        with self.assertRaises(IndexError):cam.replace_vertex(4,0,0)
        with self.assertRaises(ValueError):cam.replace_vertex(0,40000,0).build()

    def test_edit_header_pair_preserves_every_other_byte(self):
        from struct import pack
        sample = pack('<6hBBH8h', -432, -400, 255, 288, 768, 799, 1, 4, 0,
                      -432,-400,-432,-656,-592,-656,-592,-400)
        cam = StageCamera.parse(sample)
        changed = cam.replace_header_pair(1, -300, 350).build()
        self.assertEqual(changed[:4], sample[:4])
        self.assertEqual(changed[8:], sample[8:])
        self.assertEqual(StageCamera.parse(changed).header_pairs[1],(-300,350))
        with self.assertRaises(IndexError):cam.replace_header_pair(3,0,0)
        with self.assertRaises(ValueError):cam.replace_header_pair(0,99999,0)

    @unittest.skipUnless((DATA/"stage/stage.aar").is_file(),"original stage data absent")
    def test_every_original_camera_rebuilds_identically(self):
        arc=open_nested((DATA/"stage/stage.aar").read_bytes())
        entries=[e for e in arc.entries if e.name.lower().endswith(".cam")]
        self.assertEqual(len(entries),36)
        counts={}
        for entry in entries:
            with self.subTest(name=entry.name):
                raw=entry.payload()
                camera=StageCamera.parse(raw)
                self.assertEqual(camera.build(),raw)
                self.assertEqual(camera.mode,1)
                self.assertEqual(camera.reserved,0)
                self.assertEqual(camera.vertices[0],camera.header_pairs[0])
                self.assertTrue(camera.has_rectangular_outline)
                self.assertLess(camera.raw_point_bounds[0],camera.raw_point_bounds[2])
                self.assertLess(camera.raw_point_bounds[1],camera.raw_point_bounds[3])
                self.assertEqual(len(raw),16+4*len(camera.vertices))
                counts[len(camera.vertices)]=counts.get(len(camera.vertices),0)+1
        self.assertEqual(counts,{4:35,5:1})

    @unittest.skipUnless((DATA/"stage/stage.aar").is_file(),"original stage data absent")
    def test_five_point_original_is_closed_and_preserved(self):
        arc=open_nested((DATA/"stage/stage.aar").read_bytes())
        cameras={e.name:StageCamera.parse(e.payload()) for e in arc.entries if e.name.lower().endswith(".cam")}
        five=[(name,c) for name,c in cameras.items() if len(c.vertices)==5]
        self.assertEqual(len(five),1)
        self.assertEqual(five[0][0],"stage/bg_old_yo.cam")
        self.assertEqual(five[0][1].vertices[0],five[0][1].vertices[-1])


if __name__=="__main__":unittest.main()
