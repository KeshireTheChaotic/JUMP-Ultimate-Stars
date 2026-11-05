"""Evidence-only ALMT / DSTX / ALAR corpus audit for unresolved JUS effects.

Use: python tools/audit_open_effects.py PATH_TO_EXTRACTED_DATA --out effect_audit.json

This tool does not assign runtime semantics to unknown bits or change any file.
It follows one nested ALAR level (e.g. chr/ChrArc.aar -> chr/foo.aar).
"""
from __future__ import annotations

import argparse
from collections import Counter
import json
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_formats.alar import Archive
from jus_formats.almt import AlmtFile

FIELDS = ('BoundsIndex', 'PatternNo', 'DrawPrio', 'EffectFlags',
          'ParentLink', 'ParentCalcType', 'LifeType', 'BlendMode')


def _child_archives(root: Path):
    for file in sorted(root.rglob('*.aar')):
        try:
            archive = Archive.parse(file.read_bytes())
        except (ValueError, OSError):
            continue
        name = str(file.relative_to(root)).replace('\\', '/')
        yield name, archive
        for entry in archive.entries:
            if entry.ext != '.aar':
                continue
            try:
                yield f'{name}|{entry.name}', Archive.parse(entry.payload())
            except (ValueError, IndexError):
                pass


def audit(root: Path) -> dict:
    counters = Counter()
    field_declarations = Counter()
    authored_tracks = Counter()
    values = {field: Counter() for field in FIELDS}
    effect_flag_bit4 = []
    dual_field_nodes = []
    screen_layouts = []
    attr_bits = Counter()
    alar2_flags = Counter()
    problems = []
    for source, archive in _child_archives(root):
        counters['archives_scanned'] += 1
        if archive.version == 2:
            alar2_flags[f'0x{archive.flags:02X}'] += 1
        for e in archive.entries:
            if archive.version == 2:
                for bit in (24, 25, 30, 31):
                    if e.attributes & (1 << bit):
                        attr_bits[str(bit)] += 1
                counters['alar2_entries'] += 1
            if e.ext == '.dtx':
                blob = e.payload()
                if blob[:4] == b'DSTX' and len(blob) >= 6:
                    counters['dstx_files'] += 1
                    flag = blob[5] & 0x7F
                    if flag in (5, 6):
                        screen_layouts.append({'archive': source, 'member': e.name,
                                               'version': blob[4], 'flags': blob[5],
                                               'length': len(blob),
                                               'header32': blob[:32].hex(' ')})
            if e.ext != '.amt':
                continue
            try:
                obj = AlmtFile.parse(e.payload())
            except (ValueError, IndexError, UnicodeDecodeError) as exc:
                problems.append(f'{source}|{e.name}: {exc}')
                continue
            counters['almt_files'] += 1
            counters['almt_moves'] += len(obj.moves)
            field_declarations.update(obj.field_names)
            for mi, move in enumerate(obj.moves):
                for ni, node in enumerate(move.nodes):
                    if node is None:
                        continue
                    selected = {t.field: t for t in node.tracks if t.field in FIELDS}
                    authored_tracks.update(selected.keys())
                    if 'BoundsIndex' in selected and 'PatternNo' in selected:
                        dual_field_nodes.append({'archive': source, 'member': e.name,
                                                 'move_index': mi, 'node': obj.node_names[ni]})
                    for field, track in selected.items():
                        if track.opaque:
                            continue
                        observations = [(k.tick, k.value) for k in track.keys] if track.keyed else [(None, track.value)]
                        for tick, value in observations:
                            if isinstance(value, int):
                                values[field][value] += 1
                                if field == 'EffectFlags' and value & 4:
                                    spawns = node.track('GenerateID')
                                    effect_flag_bit4.append({
                                        'archive': source, 'member': e.name,
                                        'move_index': mi, 'move_id': f'0x{move.id:08X}',
                                        'node': obj.node_names[ni], 'tick': tick,
                                        'value': value, 'parent_link': _track_preview(node.track('ParentLink')),
                                        'generate_id': _track_preview(spawns),
                                    })
    return {
        'scope': 'Extracted AAR archives (and one nested AAR level); no emulator validation',
        'counts': dict(counters),
        'field_declarations': dict(sorted(field_declarations.items())),
        'authored_tracks': {f: authored_tracks[f] for f in FIELDS},
        'value_distributions': {f: [[n, k] for n, k in sorted(values[f].items(), key=lambda item: (-item[1], item[0]))]
                                for f in FIELDS},
        'bounds_and_pattern_same_node': dual_field_nodes,
        'effect_flag_bit4_occurrences': effect_flag_bit4,
        'dstx_05_06': screen_layouts,
        'alar2_header_flags': dict(sorted(alar2_flags.items())),
        'alar2_attribute_bit_counts': dict(sorted(attr_bits.items())),
        'parse_problems': problems,
    }


def _track_preview(t):
    if t is None:
        return None
    if t.opaque:
        return '<opaque>'
    if t.keyed:
        return [[k.tick, k.value] for k in t.keys]
    return t.value


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('data_root', type=Path)
    ap.add_argument('--out', type=Path)
    args = ap.parse_args(argv)
    if not args.data_root.is_dir():
        ap.error(f'missing data directory: {args.data_root}')
    report = audit(args.data_root)
    encoded = json.dumps(report, indent=2, ensure_ascii=False)
    if args.out:
        args.out.write_text(encoded + '\n', encoding='utf-8')
    else:
        print(encoded)
    print('ALMT files: {almt_files}; moves: {almt_moves}; DSTX: {dstx_files}; '
          'bit-4 observations: {f}; DSTX 05/06: {d}'.format(
              **report['counts'], f=len(report['effect_flag_bit4_occurrences']),
              d=len(report['dstx_05_06'])), file=sys.stderr)


if __name__ == '__main__':
    main()
