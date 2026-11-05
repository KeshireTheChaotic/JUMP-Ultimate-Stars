#!/usr/bin/env python3
"""Read-only ALMT effect-lifecycle audit for side-by-side emulator comparisons.

No inference about hit-confirmed effects, scene callbacks, occlusion, or actual
runtime deletion is made. See docs/SPAWN_LIFECYCLE_RETRACE_20261105.md.
"""
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from jus_formats import almt, notetrack
from jus_package import spawns
from jus_package.project import DataRoot, join


def collect(root: DataRoot, character: str, move_index: int, tick: int) -> dict:
    paths = [row['path'] for row in root.character_sources(character)
             if row['role'] == 'animation-archive']
    tables = []
    for path in paths + root.effect_archives():
        for ent in root.archive(path).entries:
            if ent.ext == '.amt':
                tables.append((join(path, ent.name), almt.parse(ent.payload())))
    base = next((t for p,t in tables if p.endswith('|'+character+'.amt')), None)
    if base is None:
        raise ValueError(f'No base {character}.amt in character scope')
    if not 0 <= move_index < len(base.moves):
        raise IndexError('Move index outside base table')
    move = base.moves[move_index]
    catalog = spawns.build_catalog(tables)
    refs = spawns.reference_events(move, base.node_names)
    rows = []
    for sp in spawns.keyed_spawns(move, base.node_names):
        entry = catalog.get(sp.effect_id)
        if entry is None:
            rows.append({'spawn_tick':sp.tick,'node':sp.node,'id':f'0x{sp.effect_id:06X}',
                         'resolved':False})
            continue
        child,names,path = entry
        lf = spawns.nominal_lifetime(sp,child,tick)
        node_frames = []
        if lf.frame_tick is not None:
            for ni,st in spawns.state_at(child,lf.frame_tick).items():
                if 'TextureID' in st and 'BoundsIndex' in st:
                    node_frames.append({'node': names[ni], 'texture_id':f"0x{st['TextureID']:06X}",
                                        'frame':st['BoundsIndex']})
        rows.append({'spawn_tick':sp.tick,'node':sp.node,'id':f'0x{sp.effect_id:06X}',
                     'resolved':True,'effect_move':path,'duration':child.duration,
                     'loops':bool(child.flags & almt.MOVE_FLAG_LOOP),
                     'nominal_phase':lf.phase,'age':lf.age,'frame_tick':lf.frame_tick,
                     'scheduled_end_inclusive':lf.scheduled_end,'frames':node_frames})
    commands=[]
    for i,node in enumerate(move.nodes):
        if node is None: continue
        tr=node.track('NoteTrack')
        if tr is None:continue
        for key in notetrack.parse(tr.encoded()).keys:
            if key.tick <= tick:
                for cmd in key.commands:
                    commands.append({'tick':key.tick,'node':base.node_names[i],
                                     'opcode':f'0x{cmd.opcode:04X}',
                                     'name':cmd.name,'args':cmd.values()})
    return {'character':character,'move_index':move_index,'move_id':f'0x{move.id:06X}',
            'move_duration':move.duration,'tick':tick,
            'nominal_live_count':sum(x.get('nominal_phase') in ('within-authored-span','looping-until-runtime-removal') for x in rows),
            'reference_actions':[{'tick':e.tick,'node':e.node,'action':e.action,'scope':e.kind}
                                 for e in refs],
            'nominal_loop_overlap':{eid:sum(x.get('id') == eid and x.get('loops')
                        and x.get('nominal_phase') == 'looping-until-runtime-removal' for x in rows)
                        for eid in sorted({x['id'] for x in rows if x.get('loops')})},
            'warning':'No emulator battle state: hit effects, owner cleanup, visibility and actual deletion not reconstructed',
            'spawned_effects':rows,'notetrack_commands_up_to_tick':commands}


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('data_root',type=Path)
    p.add_argument('--character',default='db_b_01')
    p.add_argument('--move-index',type=int,default=40)
    p.add_argument('--tick',type=int,default=30)
    p.add_argument('--output',type=Path)
    a=p.parse_args()
    report=collect(DataRoot(a.data_root),a.character,a.move_index,a.tick)
    data=json.dumps(report,indent=2)+'\n'
    if a.output:
        a.output.write_text(data,encoding='utf-8')
    else:
        print(data,end='')


if __name__=='__main__':
    main()
