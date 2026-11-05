"""Verify documented virtual-table edges with synthetic and optionally real ARM9."""
import os
import sys
import struct
import unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from tools.verify_effect_reference_path import BASE,SLOTS,verify

BIN = Path(os.environ.get('JUS_ARM9','/mnt/data/jus_progression_work/bins/arm9.bin'))

class VtableSynthetic(unittest.TestCase):
    def test_expected_slots(self):
        buf=bytearray(max(addr-BASE+4 for addr,_ in SLOTS.values()))
        for addr, pointer in SLOTS.values():
            struct.pack_into('<I',buf,addr-BASE,pointer)
        self.assertEqual(len(verify(buf)),len(SLOTS))
        addr=next(iter(SLOTS.values()))[0]
        buf[addr-BASE]=0
        with self.assertRaises(ValueError):verify(buf)

@unittest.skipUnless(BIN.is_file(),'unpacked ARM9 not provided via JUS_ARM9')
class VtableReal(unittest.TestCase):
    def test_shipped_arm9(self):
        self.assertEqual(len(verify(BIN.read_bytes())),8)

if __name__=='__main__':unittest.main()
