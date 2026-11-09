"""Original 75 pNNN.bin and exact deck companion field edit safeguards."""
import unittest
from pathlib import Path
from jus_formats import alar,deckcompanion
DATA=Path(r"D:\Library\Development\JUS\Data")
class DeckCompanionTests(unittest.TestCase):
    @unittest.skipUnless((DATA/"deck/Deck.aar").is_file(),"original Deck.aar absent")
    def test_75_original_file_text_and_tail_is_preserved(self):
        archive=alar.open_nested((DATA/"deck/Deck.aar").read_bytes())
        files=[e for e in archive.entries if e.name.endswith(".bin") and
               e.name.split("/")[-1].startswith("p")]
        self.assertEqual(len(files),75)
        for e in files:
            with self.subTest(path=e.name):
                original=e.payload()
                self.assertEqual(len(original),64)
                rec=deckcompanion.parse(original)
                self.assertEqual(rec.build(),original)
                self.assertEqual(rec.metadata_words[1:],(0,0))
                self.assertEqual(rec.metadata_words[0]>>16,1)
                self.assertLess(rec.profile_name_index,89)
                self.assertLess(rec.location_index,91)
                self.assertEqual(rec.runtime_status_byte,1)
                self.assertEqual(len(rec.name.encode("utf-16-le"))<=20,True)
                self.assertEqual(len(rec.comment.encode("cp932"))<=32,True)
                base=e.name.replace("/p","/")
                self.assertIsNotNone(archive.find(base))

    @unittest.skipUnless((DATA/"deck/Deck.aar").is_file(),"original Deck.aar absent")
    def test_edits_touch_only_proven_slices_and_leave_original_unchanged(self):
        archive=alar.open_nested((DATA/"deck/Deck.aar").read_bytes())
        orig=archive.get("deck/jard/p000.bin").payload()
        rec=deckcompanion.parse(orig)
        newer=rec.replace_name("TEST").replace_comment("Engineer").replace_metadata_byte(0x34,0x42)
        self.assertEqual(len(newer.build()),64)
        self.assertEqual(newer.name,"TEST")
        self.assertEqual(newer.comment,"Engineer")
        self.assertEqual(newer.metadata_bytes[0],0x42)
        self.assertEqual(newer.build()[0x35:],orig[0x35:])
        self.assertEqual(archive.get("deck/jard/p000.bin").payload(),orig)
        with self.assertRaises(ValueError):rec.replace_name("X"*20)
        with self.assertRaises(ValueError):rec.replace_comment("X"*32)
        with self.assertRaises(ValueError):rec.replace_metadata_byte(51,23)
        with self.assertRaises(ValueError):deckcompanion.parse(b"\0"*63)

    def test_codec_encodings_preserve_unedited_data(self):
        rec=deckcompanion.parse(b"\0"*64)
        jp=rec.replace_name("山田").replace_comment("テスト")
        self.assertEqual(jp.name,"山田")
        self.assertEqual(jp.comment,"テスト")
        self.assertEqual(jp.replace_name("山田").build(),jp.build())
        self.assertEqual(jp.replace_comment("テスト").build(),jp.build())
        self.assertEqual(jp.replace_metadata_byte(0x3F,255).metadata_bytes[-1],255)

if __name__=="__main__":unittest.main()
