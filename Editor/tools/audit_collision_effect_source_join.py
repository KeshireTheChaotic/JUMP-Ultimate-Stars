"""Validate the ORIGINAL col -> effect-table joins with original ChrBin only."""
from pathlib import Path
from collections import Counter, defaultdict
import sys, struct, csv, json, hashlib
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from jus_formats import alar,chrbin
root=Path(r'D:\Library\Development\JUS')
archive=(root/'Data/chr/ChrBin.aar')
a=alar.open_nested(archive.read_bytes())
family=defaultdict(dict)
for entry in a.entries:
    p=entry.name.replace('\\','/')
    k=chrbin.kind_of(p)
    if k not in ('col','shot','effect'):continue
    family[k][p.rsplit('/',1)[-1][:-4]]=chrbin.parse(entry.payload(),entry.name)
print('MEMBERS',{k:len(m) for k,m in family.items()})
stats=Counter()
bad=[]
rows=[]
for form,table in sorted(family['col'].items()):
    eff=family['effect'].get(form)
    for i in range(table.count):
        r=table.col_record(i)
        for slot,sel in [('primary',struct.unpack_from('<b',r.raw,14)[0]),
                          ('secondary',struct.unpack_from('<b',r.raw,15)[0])]:
            if sel==-1:stats[f'{slot}_disabled']+=1
            elif sel<64:stats[f'{slot}_builtin']+=1
            elif sel>=64:
                stats[f'{slot}_character']+=1
                ix=sel-64
                if eff is None or ix >= eff.count:
                    bad.append((form,i,slot,sel,ix,eff.count if eff else 'missing'))
                else:
                    er=eff.record(ix)
                    anim,sound_ix,sound_no=struct.unpack('<IHH',er)
                    rows.append(dict(form=form,col_record=i,slot=slot,raw_selector=sel,
                                     character_effect_row=ix,anim_id=f'0x{anim:08X}',
                                     sound_slot_index=sound_ix,sound_argument=sound_no,
                                     effect_record=er.hex(),source_hash=hashlib.sha256(r.raw).hexdigest()))
            else:stats[f'{slot}_negative_other']+=1
print('COL_JOIN_STATS',dict(stats),'CHARACTER_VALID',len(rows),'BAD',len(bad))
print('BAD_EXAMPLES',bad[:40])
print('CHARACTER_EXAMPLES',rows[:15])
print('EFFECT_MEMBER_ROWS',[(form,t.count) for form,t in list(family['effect'].items())[:12]])
print('SECOND_HALFWORD_DISTRIBUTION',dict(Counter((struct.unpack_from('<H',r,4)[0],struct.unpack_from('<H',r,6)[0]) for t in family['effect'].values() for r in [t.record(i) for i in range(t.count)])))
assert not bad
assert len(rows)==101
assert stats == Counter({
    'primary_builtin':2381,'secondary_builtin':2355,
    'primary_character':39,'secondary_character':62,
    'primary_disabled':417,'secondary_disabled':420})
assert {k:len(v) for k,v in family.items()}=={'col':281,'effect':66,'shot':184}
assert {k:sum(t.count for t in v.values()) for k,v in family.items()}=={
    'col':2837,'effect':113,'shot':1258}
assert Counter(struct.unpack_from('<H',t.record(i),4)[0] for t in family['effect'].values()
               for i in range(t.count))=={0:76,1:30,3:7}

out=root/'docs/Research'
import csv,json
names=['CHR_COL_TO_EFFECT_101_NATIVE_SOURCE_JOINS_20261108.csv',
       'CHR_COL_SHOT_EFFECT_SOURCE_VALIDATION_20261108.json']
if any((out/name).exists() for name in names):
    raise FileExistsError('Refusing to overwrite existing source catalogs')
with (out/names[0]).open('x',encoding='utf-8-sig',newline='') as f:
    w=csv.DictWriter(f,fieldnames=list(rows[0]))
    w.writeheader()
    w.writerows(rows)
validation=dict(
    date='2026-11-08',
    source_archive='Data/chr/ChrBin.aar',
    source_archive_sha256=hashlib.sha256(archive.read_bytes()).hexdigest(),
    member_counts={k:len(v) for k,v in family.items()},
    row_counts={k:sum(t.count for t in v.values()) for k,v in family.items()},
    linked_character_effect_references=len(rows),
    linked_character_effect_out_of_bounds=len(bad),
    selector_counts=dict(stats),
    effect_sound_slot_counts=dict(Counter(struct.unpack_from('<H',t.record(i),4)[0]
        for t in family['effect'].values() for i in range(t.count))),
    sources={
        'collider_resolution':'arm9_main_02080f14.c',
        'effect_dispatch':'arm9_ov06_02153ce8.c',
        'parameter_loader':'arm9_ov06_021702bc.c',
        'work_mask_constructor':'arm9_main_0207d440.c',
        'shot_dispatch':'arm9_ov06_0216acc8.c'},
    caveats=[
        'Source authoring references, not actual in-game impact/spawn counts.',
        'Byte0 collision class and byte1 secondary selector remain code-mechanical/raw.',
        '26 shot handlers exist, but many flags and runtime geometry depend on live state.',
        'Original ROM, Ghidra source and extracted data not modified.'])
with (out/names[1]).open('x',encoding='utf8') as f:
    json.dump(validation,f,indent=2)
    f.write('\n')
print('WROTE',out/names[0],out/names[1],sep='\n')

