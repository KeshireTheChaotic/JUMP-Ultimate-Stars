#!/usr/bin/env python3
"""Verify JUS effect spawning / callback lifecycle using only the ARM9 binary.

Works directly with reverse_engineering.zip (no emulator/Ghidra runtime required).
The checker verifies vtable identities; the data-specific spawn audit is in
``tools/audit_spawn_lifecycle.py``.

Not a proof of a particular gameplay branch or the final NDS pixel compositor.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import struct
import zipfile
from pathlib import Path

ARM9_BASE = 0x02000000

# Original ARM9 executable addresses (not overlay-relative addresses).
# Verified by the Ghidra function corpus and underlying vtable bytes.
SLOTS = [
    ('battle_common_effect', 0x0209E114, 0x124, 0x0206CA8C,
     'GenerateID dispatch -> battle effect creator'),
    ('battle_common_effect', 0x0209E114, 0x0B4, 0x020161D8,
     'spawned child registration and event-1 removal callback installation'),
    ('battle_common_effect', 0x0209E114, 0x078, 0x02027B14,
     'animation-loop notification -> event 6'),
    ('battle_common_effect', 0x0209E114, 0x064, 0x02015F0C,
     'parent lifecycle handler'),
    ('battle_common_effect', 0x0209E114, 0x0DC, 0x02025278,
     'effect lifetime-control setter at object +0x58'),
    ('lifecycle_callbacks', 0x0209674C, 0x020, 0x020269C4,
     'event 1 dispatcher used by deactivation'),
    ('lifecycle_callbacks', 0x0209674C, 0x034, 0x02026BB8,
     'event 6 dispatcher used by loop-wrap'),
    ('lifecycle_callbacks', 0x0209674C, 0x05C, 0x02026468,
     'callback-registration method'),
]

# Direct-call edges proven from the disassembled ARM9 function bodies.
# The verifier checks branch targets against ROM opcodes, rather than textual
# names from a decompiler output.
CALL_EDGES = [
    (0x02022380, 0x020279D0, 'deactivation invokes event-1 path'),
    (0x020160F0, 0x02038010, 'child callback removes its registration from GN container'),
]


def binary_from_source(source: Path) -> bytes:
    if source.suffix.lower() == '.zip':
        with zipfile.ZipFile(source) as z:
            paths = [s for s in z.namelist() if s.endswith('/arm9.bin')]
            if not paths:
                raise ValueError('No arm9.bin inside supplied ZIP')
            # Prefer the independently verified executable from this corpus.
            paths.sort(key=lambda s: ('/verified_binaries/' not in s, len(s)))
            return z.read(paths[0])
    return source.read_bytes()


def check_slots(arm9: bytes) -> list[dict]:
    rows = []
    for owner, vt, offset, target, meaning in SLOTS:
        p = vt - ARM9_BASE + offset
        if p < 0 or p + 4 > len(arm9):
            raise ValueError(f'vtable {vt:#x} outside ARM9 binary')
        found = struct.unpack_from('<I', arm9, p)[0]
        rows.append(dict(owner=owner, vtable=f'0x{vt:08X}', slot=f'0x{offset:03X}',
                         expected=f'0x{target:08X}', observed=f'0x{found:08X}',
                         description=meaning, passed=found == target))
    return rows


def find_arm_bl(arm9: bytes, start: int, target: int, byte_window: int = 0x100) -> list[str]:
    """Find ARM-mode B/BL immediate inside function window, with sign extension."""
    base = start - ARM9_BASE
    found = []
    for i in range(base, min(len(arm9)-3, base + byte_window), 4):
        op, = struct.unpack_from('<I', arm9, i)
        # ARM branch class cond XXXX 101L imm24; allow BL and B.
        if (op & 0x0E000000) != 0x0A000000:
            continue
        delta = (op & 0xFFFFFF) << 2
        if delta & 0x02000000:
            delta -= 0x04000000
        dest = ARM9_BASE + i + 8 + delta
        if dest == target:
            found.append(f'0x{ARM9_BASE+i:08X}')
    return found


def verify(source: Path) -> dict:
    arm9 = binary_from_source(source)
    slots = check_slots(arm9)
    # These edges are simply supplementary; a compiler may tail-call through
    # a wrapper or move part of a function outside the nominal scan window.
    edges = [dict(source=f'0x{start:08X}', destination=f'0x{end:08X}',
                  description=desc, sites=find_arm_bl(arm9,start,end),
                  passed=bool(find_arm_bl(arm9,start,end)))
             for start,end,desc in CALL_EDGES]
    return dict(source=str(source), sha256=hashlib.sha256(arm9).hexdigest(),
                size=len(arm9), slot_checks=slots, branch_checks=edges,
                all_slots_pass=all(s['passed'] for s in slots),
                all_branch_checks_pass=all(s['passed'] for s in edges),
                event_semantics={
                    'spawn':'GenerateID event invokes +0x124; repeat keys create separate children',
                    'loop':'FUN_0201BDEC wraps and invokes +0x78 -> FUN_02027B14 -> event 6',
                    'remove':'FUN_02022380 deactivates object -> FUN_020279D0 -> event 1; registered FUN_020160F0 unlinks child',
                    'chara_action_4_5':'FUN_0206C650/0206C760 invoke child virtual +0x08 (reference increment), not release',
                    'interpretation':'loop flag is real; loop completion does not by itself unregister spawned child',
                })


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('source', type=Path, help='arm9.bin or reverse_engineering.zip')
    ap.add_argument('--output', type=Path)
    args = ap.parse_args()
    result = verify(args.source)
    data = json.dumps(result, indent=2) + '\n'
    if args.output:
        args.output.write_text(data)
    else:
        print(data, end='')
    if not result['all_slots_pass'] or not result['all_branch_checks_pass']:
        raise SystemExit(1)

if __name__ == '__main__': main()
