#!/usr/bin/env python3
"""Read-only inventory of verified J-Galaxy mission/reward records.

Usage:
    py -3 tools/trace_jgalaxy.py --data D:\\Library\\Development\\JUS\\data \\
        --out mission_rewards.json

No binary write, no unsupported mission-condition interpretation.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_package.project import DataRoot
from jus_package.progression import ProgressionCatalog, ARCHIVE, GRAPH, MISSIONS, BATTLES


def collect(root: DataRoot) -> dict:
    cat = ProgressionCatalog.load(root)
    graph = cat.graph
    counts = {'koma': 0, 'resources': 0}
    records = []
    for i in range(graph.node_count):
        node = graph.get(i)
        entry = cat.definition(node)
        rewards = []
        for reward in node.rewards:
            kind = 'koma' if reward.is_koma else 'resources'
            counts[kind] += 1
            rewards.append({'slot': reward.slot, 'goal_code_raw': f'0x{reward.goal_code:04X}',
                            'kind': kind, 'koma_id': reward.koma_id if reward.is_koma else None,
                            'resource_quantities': list(reward.resources) if not reward.is_koma else None,
                            'slot_raw_hex': reward.raw.hex()})
        records.append({'node_id': node.index, 'planet_id': node.planet_id,
                        'planet_name': graph.planet_name(node.planet_id),
                        'definition_type': 'mission' if node.mission else 'battle',
                        'definition_id': node.definition_id, 'definition_name': entry.name,
                        'node_flags_raw': f'0x{node.flags:02X}',
                        'active_goals': node.goal_count, 'rewards': rewards})
    return {'source': ARCHIVE,
            'evidence': {'main': ['FUN_02075298', 'FUN_0207538C', 'FUN_02075F98', 'FUN_02071360'],
                         'overlay1': ['FUN_0214CD20', 'FUN_0214E380']},
            'sha256': {key: hashlib.sha256(root.read(key)).hexdigest()
                       for key in (GRAPH, MISSIONS, BATTLES)},
            'counts': {'galaxies': graph.galaxy_count, 'locations': graph.location_count,
                       'planets': graph.planet_count, 'nodes': graph.node_count,
                       'missions': cat.missions.count, 'battles': cat.battles.count,
                       'koma_records': cat.card_count, 'active_rewards': sum(counts.values()),
                       'koma_grants': counts['koma'], 'resource_grants': counts['resources']},
            'notes': ['Goal codes and remaining node flags remain unclassified.',
                      'Fresh-save-only graph/definition authoring is experimental; map capacity remains unverified.',
                      'Node/mission/battle indices and slot counts are fixed.'],
            'nodes': records}


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--data', required=True, type=Path, help='Extracted JUS data root')
    parser.add_argument('--out', type=Path, default=Path('mission_rewards.json'))
    args = parser.parse_args(argv)
    result = collect(DataRoot(args.data))
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(result, indent=2, ensure_ascii=False) + '\n', encoding='utf-8')
    print(f'Wrote {args.out}: {result["counts"]}')


if __name__ == '__main__':
    main()
