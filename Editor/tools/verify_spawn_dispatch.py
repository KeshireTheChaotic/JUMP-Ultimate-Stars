#!/usr/bin/env python3
"""Verify CommonEffect dispatch slots directly against the shipped ARM9 image."""
from __future__ import annotations
import argparse
import struct

BASE = 0x02000000
COMMON_EFFECT_VTABLE = 0x0209E114
SLOTS = {
    0xB4: 0x020161D8,  # add child; calls 020246C8
    0x124: 0x0206CA8C,  # keyed GenerateID spawn
}


def verify(image: bytes) -> dict[int,int]:
    result={}
    for offset,expected in SLOTS.items():
        address=COMMON_EFFECT_VTABLE + offset
        pos=address-BASE
        if pos < 0 or pos+4 > len(image):
            raise ValueError(f'ARM9 too short at vtable +0x{offset:X}')
        actual=struct.unpack_from('<I',image,pos)[0]
        if actual!=expected:
            raise ValueError(f'vtable +0x{offset:X}: expected 0x{expected:08X}, got 0x{actual:08X}')
        result[offset]=actual
    return result


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('arm9',help='Raw ARM9 segment, loaded at 0x02000000')
    args=p.parse_args()
    for off,addr in verify(open(args.arm9,'rb').read()).items():
        print(f'CommonEffect +0x{off:X} -> 0x{addr:08X} [OK]')


if __name__=='__main__':
    main()
