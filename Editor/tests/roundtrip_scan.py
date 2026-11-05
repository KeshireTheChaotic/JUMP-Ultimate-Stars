"""Corpus round-trip scan: parse every archive/format under a data root and
rebuild it, reporting byte-identical results per format.

    py -3 tests/roundtrip_scan.py [D:\\Library\\Development\\JUS\\data] [--formats alar,almt,...]
"""
from __future__ import annotations

import argparse
import collections
import sys
import traceback
from pathlib import Path

HERE = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(HERE))

from jus_formats import alar  # noqa: E402
from jus_formats.binary import is_dscp, dscp_unwrap, lz10_compress, lz10_decompress  # noqa: E402

FORMATS = {}
try:
    from jus_formats import almt, alod, dstx, dsig  # noqa: E402
    FORMATS = {'almt': (b'ALMT', almt), 'alod': (b'ALOD', alod),
               'dstx': (b'DSTX', dstx), 'dsig': (b'DSIG', dsig)}
except ImportError:
    pass


def walk(blob, src, stats, examples, wanted, depth=0):
    if is_dscp(blob):
        blob = dscp_unwrap(blob)
    magic = blob[:4]
    if magic == b'ALAR':
        try:
            arc = alar.Archive.parse(blob)
            ok = arc.build() == blob
            stats[('alar', f'v{arc.version}', ok)] += 1
            if not ok:
                examples['alar'].append(src)
            for e in arc.entries:
                hk = arc.expected_hash(e) == e.name_hash
                stats[('alar-hash', f'v{arc.version}/{arc.flags:#x}', hk)] += 1
                if not hk:
                    examples['alar-hash'].append(f'{src}:{e.name}')
            if arc.version == 2:
                ok = arc.computed_id_range() == (arc.id_low, arc.id_high)
                stats[('alar2-idrange', ok)] += 1
                if not ok:
                    examples['alar2-idrange'].append(f'{src} {arc.computed_id_range()} {(arc.id_low, arc.id_high)}')
            for e in arc.entries:
                walk(e.data, f'{src}:{e.name}', stats, examples, wanted, depth + 1)
        except Exception as exc:  # noqa: BLE001
            stats[('alar', 'error')] += 1
            examples['alar'].append(f'{src}: {exc}')
        return
    for key, (m, mod) in FORMATS.items():
        if magic == m and key in wanted:
            try:
                obj = mod.parse(blob)
                ok = obj.build() == blob
                stats[(key, ok)] += 1
                if not ok:
                    examples[key].append(src)
                if key == 'almt':
                    for m in obj.moves:
                        m.dirty = True
                    ok2 = obj.build() == blob
                    stats[('almt-reencode-moves', ok2)] += 1
                    if not ok2:
                        examples['almt-reencode-moves'].append(src)
                    opaque = sum(t.opaque for m in obj.moves for n in m.nodes if n for t in n.tracks)
                    stats[('almt-opaque-tracks', 'count')] += opaque
                    for m in obj.moves:
                        for n in m.nodes:
                            for t in (n.tracks if n else []):
                                if t.opaque:
                                    stats[('almt-opaque-field', t.field)] += 1
                    obj2 = almt.from_dict(almt.to_dict(obj))
                    obj2.strings_raw = obj.strings_raw
                    ok3 = obj2.build() == blob
                    stats[('almt-json-roundtrip', ok3)] += 1
                    if not ok3:
                        examples['almt-json-roundtrip'].append(src)
                    obj2.strings_raw = None
                    ok4 = obj2.build() == blob
                    stats[('almt-json-roundtrip-regen-strings', ok4)] += 1
                    if not ok4:
                        examples['almt-json-roundtrip-regen-strings'].append(src)
                if key == 'dstx' and obj.embedded is not None:
                    walk(obj.embedded, src + ':embedded', stats, examples, wanted, depth + 1)
                    stats[('dstx-tail-empty', True)] += 1
                elif key == 'dstx':
                    stats[('dstx-tail', obj.tail.hex() if len(obj.tail) <= 4 else len(obj.tail))] += 1
            except Exception as exc:  # noqa: BLE001
                stats[(key, 'error')] += 1
                examples[key].append(f'{src}: {exc!r}')
                if len(examples[key]) < 3:
                    traceback.print_exc()


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('root', nargs='?', default=r'D:\Library\Development\JUS\data')
    ap.add_argument('--formats', default='alar,almt,alod,dstx,dsig')
    ap.add_argument('--glob', default='**/*.aar')
    args = ap.parse_args()
    wanted = set(args.formats.split(','))
    stats = collections.Counter()
    examples = collections.defaultdict(list)
    root = Path(args.root)
    for f in sorted(root.glob(args.glob)):
        walk(f.read_bytes(), f.relative_to(root).as_posix(), stats, examples, wanted)
    for k, v in sorted(stats.items(), key=str):
        print(k, v)
    for k, lst in examples.items():
        print(f'--- {k}: {len(lst)} examples')
        for x in lst[:8]:
            print('   ', x)


if __name__ == '__main__':
    main()
