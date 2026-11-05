"""Progression collector must report evidence without assigning semantics."""
from __future__ import annotations

import struct
import tempfile
import unittest
from pathlib import Path

from tools.trace_progression import arm9_strings, collect, executable


class ProgressionCollector(unittest.TestCase):
    def test_rom_arm9_extraction_and_pointer_probe(self):
        code = bytearray(128)
        code[32:46] = b'bin/koma.bin\x00\x00'
        struct.pack_into('<I', code, 80, 0x02000020)
        with tempfile.TemporaryDirectory() as d:
            p = Path(d) / 'JUS.nds'
            blob = bytearray(512)
            struct.pack_into('<III', blob, 0x20, 128, 0x02000000, len(code))
            blob[128:128 + len(code)] = code
            p.write_bytes(blob)
            read, info = executable(None, p)
            self.assertEqual(read, code)
            self.assertEqual(info['load_address'], '0x02000000')
            hits = arm9_strings(read)
            self.assertTrue(any(x['text'].startswith('bin/koma.bin') and
                                '0x02000050' in x['pointer_word_sites'] for x in hits))

    def test_inventory_does_not_infer_rewards(self):
        with tempfile.TemporaryDirectory() as d:
            root = Path(d)
            (root / 'bin').mkdir()
            (root / 'bin/stage.bin').write_bytes(bytes(range(32)))
            (root / 'bin/mystery.bin').write_bytes(bytes(12))
            result = collect(root, None, None)
            self.assertEqual(result['status'][:10], 'UNVERIFIED')
            self.assertTrue(result['data']['bin_files']['bin/stage.bin']['candidate_for_followup'])
            self.assertNotIn('reward', result['data']['bin_files']['bin/stage.bin'])


if __name__ == '__main__':
    unittest.main()
