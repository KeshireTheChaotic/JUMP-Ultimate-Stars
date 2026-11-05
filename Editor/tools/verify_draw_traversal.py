"""Check JUS ARM9 vtable targets used in ParentLink and DrawPrio traces.

Usage: python tools/verify_draw_traversal.py <path-to-extracted-arm9.bin>
Works with the 0x02000000-loaded 692568-byte ARM9 image. Does not modify it.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import struct

ARM9_BASE = 0x02000000
# (class vtable, virtual slot, expected concrete method). Exact pointers
# checked against the user's ARM9 corpus, not Ghidra's tentative class names.
TARGETS = (
    (0x0209C0B4, 0xB0, 0x02024558), # effect SP01 descendant lookup
    (0x0209C0B4, 0xB4, 0x020246C8), # effect widget child registration
    (0x0209C0B4, 0xD4, 0x02022060), # effect transform parent
    (0x0209C1E0, 0xD4, 0x02022060), # base transform parent
    (0x0209C30C, 0xD4, 0x02022060), # CommonEffect transform parent
    (0x020958DC, 0x10, 0x02014DC4), # priority setter
    (0x020958DC, 0x1C, 0x0201593C), # child render traversal
    (0x02096658, 0x18, 0x02031EAC), # renderer priority walk
    (0x02095F80, 0x1C, 0x0203ABF4), # GX geometry leaf callback
    (0x02095FF4, 0x1C, 0x02040250), # tilemap/BG leaf callback
    (0x02096320, 0x1C, 0x0202C0C8), # sprite-subdraw callback
)


def verify(data: bytes) -> list[dict]:
    out = []
    for vtable, offset, expected in TARGETS:
        file_offset = vtable + offset - ARM9_BASE
        if file_offset < 0 or file_offset + 4 > len(data):
            observed = None
        else:
            observed = struct.unpack_from('<I', data, file_offset)[0]
        out.append({'vtable': f'0x{vtable:08X}', 'slot': f'0x{offset:02X}',
                    'expected': f'0x{expected:08X}',
                    'observed': None if observed is None else f'0x{observed:08X}',
                    'pass': observed == expected})
    return out


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('arm9', type=Path)
    p.add_argument('--json', action='store_true', help='machine-readable findings')
    args = p.parse_args()
    data = args.arm9.read_bytes()
    results = verify(data)
    ok = all(x['pass'] for x in results)
    if args.json:
        print(json.dumps({'file': str(args.arm9), 'size': len(data),
                          'sha256': hashlib.sha256(data).hexdigest(),
                          'all_passed': ok, 'slots': results}, indent=2))
    else:
        for item in results:
            print(f"{'PASS' if item['pass'] else 'FAIL'} {item['vtable']}+{item['slot']}: "
                  f"{item['observed']} (expected {item['expected']})")
        print(f'{sum(x["pass"] for x in results)}/{len(results)} vtable slots verified')
    return 0 if ok else 1


if __name__ == '__main__':
    raise SystemExit(main())
