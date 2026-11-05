"""Non-destructive forensic collection for JUS stage and gameplay-save evidence.

This tool deliberately does not claim any unknown field is decoded.  It emits
bounded, reviewable summaries so actual extracted data / controlled save-state
pairs can be correlated with ARM9 traces and emulator captures.

Usage:
    py -3 tools/trace_unknowns.py stage --data D:\\...\\data --stage bg_bb --out stage.json
    py -3 tools/trace_unknowns.py save-diff before.sav after_reward.sav --out reward_diff.json
"""
from __future__ import annotations

import argparse
import hashlib
import json
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from jus_package.project import DataRoot
from jus_package.scenes import stage_sets


def sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def group_offsets(indices: list[int], *, max_gap: int = 0) -> list[tuple[int, int]]:
    if not indices:
        return []
    groups = []
    a = last = indices[0]
    for i in indices[1:]:
        if i - last > max_gap + 1:
            groups.append((a, last + 1))
            a = i
        last = i
    groups.append((a, last + 1))
    return groups


def bytes_summary(blob: bytes) -> dict:
    """Raw evidence only: headers, aligned integer candidates and offsets."""
    length = len(blob)
    pointers = []
    header32 = []
    for off in range(0, min(length - 3, 128), 4):
        val = struct.unpack_from('<I', blob, off)[0]
        header32.append({'at': off, 'value': f'0x{val:08X}'})
        if 0 < val < length and val % 4 == 0:
            pointers.append({'at': off, 'target': val})
    # Length divisibility is a hint, NOT evidence for a record stride.
    return {'length': length, 'sha256': sha(blob), 'header_hex': blob[:128].hex(' '),
            'header_aligned_u32': header32,
            'in_file_aligned_offset_candidates': pointers,
            'divisible_record_strides_unverified': [s for s in (8, 12, 16, 20, 24, 28, 32, 36, 40, 48, 64)
                                                     if length >= 2 * s and length % s == 0]}


def trace_stage(root_path: Path, stage: str | None) -> dict:
    root = DataRoot(root_path)
    result = {'status': 'STRUCTURES UNVERIFIED: raw evidence only', 'root': str(root_path), 'stages': {}}
    for s in stage_sets(root):
        if stage and s.stem.lower() != stage.lower():
            continue
        files = {}
        for role in ('mob', 'bin', 'cam', 'shared'):
            if role not in s.members:
                continue
            path = s.members[role]
            try:
                files[role] = {'source': path, **bytes_summary(root.read(path))}
            except (ValueError, KeyError, OSError) as exc:
                files[role] = {'source': path, 'error': str(exc)}
        if files:
            result['stages'][s.stem] = files
    if stage and stage not in result['stages']:
        result['warning'] = f'No .mob/.bin/.cam files found for {stage}'
    return result


def trace_diff(before: Path, after: Path, reverted: Path | None = None) -> dict:
    a, b = before.read_bytes(), after.read_bytes()
    if len(a) != len(b):
        raise ValueError('Captures have different lengths; compare like-for-like raw save files')
    c = reverted.read_bytes() if reverted is not None else None
    if c is not None and len(c) != len(a):
        raise ValueError('Reverted capture differs in length')
    changed = [i for i in range(len(a)) if a[i] != b[i]]
    returned = [i for i in changed if c is not None and a[i] == c[i]]
    stable = [i for i in changed if c is not None and a[i] != c[i]]
    spans = group_offsets(changed)
    def context(i, j):
        lo, hi = max(0, i - 8), min(len(a), j + 8)
        return {'start': i, 'end': j, 'before': a[lo:hi].hex(' '),
                'after': b[lo:hi].hex(' '), 'context_start': lo,
                **({'reverted': c[lo:hi].hex(' ')} if c is not None else {})}
    out = {'status': 'BYTE-LEVEL DIFFERENCE ONLY: format not decoded',
           'inputs': [{'name': str(p), 'sha256': sha(d)} for p, d in
                      [(before, a), (after, b)] + ([(reverted, c)] if reverted is not None else [])],
           'size': len(a), 'changed_bytes': len(changed),
           'changed_ratio': round(len(changed) / max(len(a), 1), 6),
           'changed_spans': len(spans), 'spans': [context(i, j) for i, j in spans[:200]],
           'spans_omitted': max(0, len(spans) - 200)}
    if c is not None:
        out['returned_to_baseline_bytes'] = len(returned)
        out['still_changed_after_revert_bytes'] = len(stable)
        out['returned_spans'] = [context(i, j) for i, j in group_offsets(returned)[:100]]
        out['returned_spans_omitted'] = max(0, len(group_offsets(returned)) - 100)
    return out


def main(argv=None):
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = p.add_subparsers(dest='command', required=True)
    st = sub.add_parser('stage', help='Report raw stage .mob/.bin/.cam file structure without guessing fields')
    st.add_argument('--data', required=True, type=Path)
    st.add_argument('--stage', help='One stage stem, e.g. bg_bb; default: all')
    st.add_argument('--out', type=Path)
    df = sub.add_parser('save-diff', help='Compare controlled mission/unlock raw SRAM captures')
    df.add_argument('before', type=Path)
    df.add_argument('after', type=Path)
    df.add_argument('reverted', nargs='?', type=Path)
    df.add_argument('--out', type=Path)
    args = p.parse_args(argv)
    if args.command == 'stage':
        result = trace_stage(args.data, args.stage)
    else:
        result = trace_diff(args.before, args.after, args.reverted)
    encoded = json.dumps(result, indent=2) + '\n'
    if args.out:
        args.out.parent.mkdir(parents=True, exist_ok=True)
        args.out.write_text(encoded, encoding='utf-8')
        print('Wrote', args.out)
    else:
        print(encoded)


if __name__ == '__main__':
    main()
