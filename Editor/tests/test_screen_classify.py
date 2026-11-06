"""Screen workspace lists scene archives by content, not by folder name."""
import os
import unittest
from pathlib import Path

from jus_package import scenes
from jus_package.project import DataRoot


class ScreenClassifyTest(unittest.TestCase):
    def test_real_data_kinds(self):
        folder = os.environ.get('JUS_DATA') or os.environ.get('JUS_DATA_ROOT')
        if not folder or not Path(folder, 'title/title.aar').is_file():
            self.skipTest('extracted game assets not present')
        root = DataRoot(folder)
        self.assertEqual(scenes.classify_archive(root, 'title/title.aar'), 'screen')
        self.assertEqual(scenes.classify_archive(root, 'deck/Deck.aar'), 'data')
        self.assertEqual(scenes.classify_archive(root, 'bin/InfoDeck.aar'), 'data')
        self.assertEqual(scenes.classify_archive(root, 'Common/chr/chr.aar'), 'library')
        listed = scenes.screen_archives(root)
        self.assertIn('title/title.aar', listed)
        for p in ('deck/Deck.aar', 'bin/InfoDeck.aar'):
            self.assertNotIn(p, listed)
        self.assertFalse(any(p.startswith('battle/') for p in listed))


if __name__ == '__main__':
    unittest.main()
