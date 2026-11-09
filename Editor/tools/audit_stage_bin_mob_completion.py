"""Original 36-stage .bin/.mob code-backed coverage and source-byte census.

Read original Data, ARM9, and Ghidra exports. Write only Research files.
"""
from pathlib import Path
from collections import Counter,defaultdict
import sys,struct,hashlib,csv,json
ED=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ED))
from jus_package.project import DataRoot
from jus_package import scenes
from jus_formats import stagephysics as sp
R=Path(r'D:\Library\Development\JUS')
OUT=R/'docs/Research'
root=DataRoot(str(R/'Data'))
stages=[s for s in scenes.stage_sets(root) if all(k in s.members for k in ('bin','mob','cam'))]
assert len(stages)==36,(len(stages),[s.stem for s in stages])
rows=[];tl=Counter();ly=Counter();lf=Counter();gm=Counter();fld=Counter();grid=Counter()
record_types=defaultdict(Counter);items=Counter();gimmick_header=Counter();tail_fields=Counter()
total={'floor':0,'item':0,'grip':0,'gimmick':0,'col':0,'wall':0,'conveyor':0,'bg_anim':0}
for st in stages:
    assert all(k in st.members for k in ('bin','mob','cam')),(st.stem,st.members.keys())
    bb=root.read(st.members['bin']);mm=root.read(st.members['mob'])
    b=sp.parse_stage_bin(bb);m=sp.parse_mob(mm)
    assert len(bb)-b.offsets[-1]==8,(st.stem,len(bb)-b.offsets[-1])
    tail=bb[-8:]
    tl[tail.hex()]+=1
    tp=struct.unpack('<II',tail)
    tail_fields[tp]+=1
    for layer in b.layers:
        ly[(layer.index,layer.f8)]+=1
        lf[(layer.index,layer.bg_priority,layer.draw_priority,layer.enabled)]+=1
    for g in m.gimmicks:
        gm[g.type_id]+=1;gimmick_header[(g.type_id,g.raw[0x0e:0x10].hex())]+=1
        record_types['gimmick_unknown_header'][g.raw[0x0e:0x10].hex()]+=1
    for c in b.collision_boxes:
        grid[c.type_id]+=1
    for f in m.floors:
        fld[(f.motion_kind,f.speed_index)]+=1
        record_types['floor_reserved'][f.raw[0x0b:0x1c].hex()]+=1
    items[m.items.item_set]+=1
    for k,v in [('floor',m.floors),('item',m.item_candidates),('grip',m.grips),('gimmick',m.gimmicks),
      ('col',b.collision_boxes),('wall',b.walls),('conveyor',b.conveyors)]:
        total[k]+=len(v)
    total['bg_anim']+=sum(len(l.anims) for l in b.layers)
    rows.append(dict(stage=st.stem,bin_bytes=len(bb),mob_bytes=len(mm),bin_sha256=hashlib.sha256(bb).hexdigest(),
       mob_sha256=hashlib.sha256(mm).hexdigest(),bin_tail8_hex=tail.hex(),bin_tail_u32_0=tp[0],
       bin_tail_u32_1=tp[1],bg_layer8_values=';'.join(f'{l.f8:02X}' for l in b.layers),
       bg_priority=';'.join(str(l.bg_priority) for l in b.layers),
       bg_enabled=';'.join(str(l.enabled) for l in b.layers),
       floor_count=len(m.floors),item_count=len(m.item_candidates),grip_count=len(m.grips),
       gimmick_count=len(m.gimmicks),collision_count=len(b.collision_boxes),wall_count=len(b.walls),
       conveyor_count=len(b.conveyors),item_set=m.items.item_set,
       mob_section_lengths=';'.join(str(x.size) for x in m.sections),
       mob_section_kinds=';'.join(str(x.kind) for x in m.sections),
       mob_last_section_declared=struct.unpack_from('<H',mm,m.sections[3].offset+2)[0]))
assert len(rows)==36
assert sum(tl.values())==36
with (OUT/'STAGE_BIN_MOB_36_EXACT_BYTE_CENSUS_20261108.csv').open('w',newline='',encoding='utf-8-sig') as fh:
  w=csv.DictWriter(fh,fieldnames=list(rows[0]));w.writeheader();w.writerows(rows)
report={'stages':36,'record_totals':total,
 'tail8_patterns':dict(tl),'tail8_pairs':{str(k):v for k,v in tail_fields.items()},
 'bg_layer_mode_by_slot':{str(k):v for k,v in ly.items()},
 'bg_mode_priority_enabled':{str(k):v for k,v in lf.items()},
 'gimmick_types':dict(gm),'gimmick_header_extra_bytes':{str(k):v for k,v in gimmick_header.items()},
 'moving_floor_kind_speed':{str(k):v for k,v in fld.items()},
 'stage_collider_types':dict(grid),'item_set_counts':dict(items),
 'unclassified_floor_bytes_distinct':len(record_types['floor_reserved']),
 'source_evidence':[
 'reverse_engineering/functions_layout/arm9_main/arm9_main_02083fcc.c:129-141 BG record +6..+9',
 'reverse_engineering/functions_layout/arm9_main/arm9_main_0203d478.c:5-20 BG +8 passed to graphics engine setter',
 'reverse_engineering/functions_layout/arm9_ov06/arm9_ov06_02161cb4.asm:02161E3C..02161F38 stage section readers',
 'reverse_engineering/functions_layout/arm9_ov06/arm9_ov06_02163188.c:67-83 gimmick descriptor length/type dispatch']}
with (OUT/'STAGE_BIN_MOB_SOURCE_COMPLETION_VALIDATION_20261108.json').open('w',encoding='utf8') as fh:
  json.dump(report,fh,ensure_ascii=False,indent=2);fh.write('\n')
print('STAGES',len(rows),'COUNTS',total)
print('TAIL8',dict(tl))
print('BG_F8',dict(ly))
print('GIMMICK_HEADER',dict(gimmick_header))
print('GIMMICK_TYPES',dict(gm))
print('MOB_LAST_DECLARED',Counter(x['mob_last_section_declared'] for x in rows))
print('WROTE stage byte census')
