"""Audit original J-Galaxy title bytes before enabling Unicode text saves.

Usage (after extracting JUS game data):
    python tools/verify_cp932_names.py --data D:\\Library\\Development\\JUS\\data \\
        --out cp932_original_names.json

The script is READ-ONLY. It compares exact original bytes under CP932 and
strict Shift_JIS and reports byte->Unicode->byte round-trip status.
"""
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from jus_formats.progression import (GALAXY_SIZE, LOCATION_SIZE, PLANET_SIZE,
                                     NAMES_SIZE)
from jus_package.progression import ProgressionCatalog
from jus_package.project import DataRoot


def codec_audit(raw: bytes, codec: str) -> dict:
    raw = bytes(raw).split(b'\x00', 1)[0]
    record = {'hex': raw.hex(' ').upper(), 'byte_length': len(raw)}
    try:
        name = raw.decode(codec, 'strict')
        recoded = name.encode(codec, 'strict')
        record.update(text=name, round_trip=(recoded == raw), reencoded_hex=recoded.hex(' ').upper())
    except UnicodeError as exc:
        record.update(text=None, round_trip=False, error=str(exc))
    return record


def audit(root: DataRoot) -> dict:
    catalog = ProgressionCatalog.load(root)
    g = catalog.graph
    records = []
    for section, count, start, stride in (
        ('space', g.galaxy_count, g.galaxy_off, GALAXY_SIZE),
        ('cluster', g.location_count, g.location_off, LOCATION_SIZE),
        ('world', g.planet_count, g.planet_off, PLANET_SIZE),
    ):
        for i in range(count):
            raw = g.build()[start+i*stride:start+i*stride+32]
            records.append({'section': section, 'id': i, 'cp932': codec_audit(raw,'cp932'),
                            'shift_jis': codec_audit(raw,'shift_jis')})
    for section, table in (('mission', catalog.missions), ('battle', catalog.battles)):
        for i in range(table.count):
            raw = table.get(i).data[:NAMES_SIZE]
            records.append({'section': section, 'id': i, 'cp932': codec_audit(raw,'cp932'),
                            'shift_jis': codec_audit(raw,'shift_jis')})
    counts = {'total': len(records), 'cp932_roundtrip': sum(r['cp932']['round_trip'] for r in records),
              'shift_jis_roundtrip': sum(r['shift_jis']['round_trip'] for r in records),
              'cp932_only': sum(r['cp932']['round_trip'] and not r['shift_jis']['round_trip'] for r in records),
              'not_cp932_roundtrip': sum(not r['cp932']['round_trip'] for r in records)}
    return {'counts': counts, 'records': records}


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--data', required=True, type=Path, help='Extracted game data directory')
    p.add_argument('--out', type=Path, help='Optional JSON report destination')
    args = p.parse_args()
    report = audit(DataRoot(args.data))
    if args.out:
        args.out.write_text(json.dumps(report, ensure_ascii=False, indent=2), encoding='utf8')
    print(json.dumps(report['counts'], indent=2))
    for r in report['records']:
        if not r['cp932']['round_trip']:
            print(f'CP932 round-trip FAILED: {r["section"]} #{r["id"]} '
                  f'{r["cp932"]["hex"]}')
    if report['counts']['not_cp932_roundtrip']:
        raise SystemExit('Some original names must stay byte-exact; edit only after investigating their encoding.')


if __name__ == '__main__':
    main()
