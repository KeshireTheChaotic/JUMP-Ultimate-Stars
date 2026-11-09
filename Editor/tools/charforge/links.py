"""Provenance index of the *actual ALMT JSON in a built character package*.

No guessed move names: IDs, source paths, durations, node/track values and
Koma card selectors come directly from the bundled native-resource codecs.
"""
from __future__ import annotations

from pathlib import Path

from jus_formats import almt

from .forge import _rj, _wj

TRACKS = ('TextureID', 'BoundsIndex', 'GenerateID', 'CollisionType', 'SoundID')


def _value(v):
    if isinstance(v, (str, int, float, bool)) or v is None:
        return v
    if isinstance(v, (bytes, bytearray)):
        return v.hex()
    return repr(v)


def package_index(pkg: Path, brief: dict) -> dict:
    pkg = Path(pkg)
    man = _rj(pkg / 'package.json')
    moves = []
    for u in man['units']:
        spec = _rj(pkg / u['dir'] / 'archive.json')
        for m in spec['members']:
            if m.get('kind') != 'almt' or not m.get('json'):
                continue
            table = almt.from_dict(_rj(pkg / u['dir'] / m['json']))
            for move in table.moves:
                nodes = []
                for ni, node in enumerate(move.nodes):
                    if node is None:
                        continue
                    selections = []
                    for t in node.tracks:
                        if t.field not in TRACKS or t.opaque:
                            continue
                        keys = [{'tick': k.tick, 'value': _value(k.value)}
                                for k in t.keys] if t.keyed else [
                                    {'tick': 0, 'value': _value(t.value)}]
                        selections.append({'field': t.field, 'keys': keys})
                    if selections:
                        nodes.append({'node': ni, 'tracks': selections})
                moves.append({'id': f'0x{move.id:08X}', 'duration': move.duration,
                              'loop': bool(move.flags & almt.MOVE_FLAG_LOOP),
                              'source_archive': u['path'], 'almt_member': m['name'],
                              'almt_json': f'{u["dir"]}/{m["json"]}',
                              'nodes': nodes})
    cards = [
        {'card_ids': k['card_ids'], 'member': k['path'],
         'panel_count': k['panels'], 'native_shapes': k['card_shapes']}
        for k in brief.get('komas', [])
    ]
    result = {'version': 1, 'slot': brief['slot'], 'template': brief['template'],
              'authority': 'Actual ALMT members in package; actual koma.bin/kshape.bin card selections',
              'moves': moves, 'koma': cards, 'effect_spawns': brief.get('spawns', []),
              'limits': [
                  'Native move timing, input/branch controls, collision, and shot behavior are inherited from the ALMT template.',
                  'Only ALMT JSON in the package is authoritative for move track authoring; this index is read-only.',
                  'Native move ids do not imply canonical player-facing names.',
                  'New hard-coded roster slots or engine handlers require separate ROM/port code changes.',
              ]}
    _wj(pkg / 'ALMT_LINKS.json', result)
    return result
