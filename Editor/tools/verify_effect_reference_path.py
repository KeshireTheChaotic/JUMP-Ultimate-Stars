"""Byte-check the object reference/LifeType virtual-table evidence in original ARM9.

Usage: py -3 tools/verify_effect_reference_path.py path/to/arm9.bin
This verifies indirect dispatch only; it cannot count live game objects.
"""
from __future__ import annotations
import argparse
import json
import struct
from pathlib import Path

BASE = 0x02000000
SLOTS = {
    'EffectWidget +0x08 retain (Thumb)': (0x0209C0B4 + 0x08, 0x020102D1),
    'EffectWidget +0x0C release': (0x0209C0B4 + 0x0C, 0x0202771C),
    'EffectWidget +0xDC lifetime setter': (0x0209C0B4 + 0xDC, 0x02025278),
    'CommonEffect +0x08 retain (Thumb)': (0x0209E114 + 0x08, 0x020102D1),
    'CommonEffect +0x0C release': (0x0209E114 + 0x0C, 0x0202771C),
    'CommonEffect +0xDC lifetime setter': (0x0209E114 + 0xDC, 0x02025278),
    'LifeType property read wrapper': (0x0209A3B0 + 0x20, 0x02025244),
    'LifeType property write wrapper': (0x0209A3B0 + 0x24, 0x0202525C),
}

def verify(blob: bytes) -> dict[str, str]:
    out = {}
    for label, (addr, wanted) in SLOTS.items():
        off = addr - BASE
        if off < 0 or off + 4 > len(blob):
            raise ValueError(f'{label}: address {addr:08X} outside ARM9')
        found = struct.unpack_from('<I', blob, off)[0]
        if found != wanted:
            raise ValueError(f'{label}: expected 0x{wanted:08X}, got 0x{found:08X}')
        out[label] = f'0x{found:08X}'
    return out

if __name__ == '__main__':
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('arm9',type=Path)
    a=ap.parse_args()
    print(json.dumps(verify(a.arm9.read_bytes()),indent=2))
