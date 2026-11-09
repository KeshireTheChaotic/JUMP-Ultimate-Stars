"""Read-only native ARM9 semantics validation for col class, reactions, shot flags.

Output files under docs/Research; no writes to Data or reverse_engineering.
"""
from pathlib import Path
from collections import Counter
import csv,hashlib,json,struct,sys
ED=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ED))
from jus_formats import alar,chrbin
from jus_formats.chrbin_semantics import (
    REACTION_RESOURCE_PAIRS,REACTION_CALLBACKS,native_reaction_route,
    native_shot_flags,native_shot_trace_mask)
from jus_package.dynamicgeometry import SHOT_UPDATE_HANDLERS
root=Path(r'D:\Library\Development\JUS')
research=root/'docs/Research'
bins=root/'reverse_engineering/verified_binaries/52e262163e0d304c'
source=root/'reverse_engineering/functions_layout'
original=(root/'Data/chr/ChrBin.aar').read_bytes()
overlay=(bins/'arm9_overlay_0006.bin').read_bytes()
main=(bins/'arm9.bin').read_bytes()
assert hashlib.sha256(original).hexdigest()=='a069d87017c8e2f649e3087c1e591355e2779bb506d79285e310adb342449598'
assert hashlib.sha256(overlay).hexdigest()=='393be20642d854d3d98bea77a4d064aa3589f0a1b69a08943bdfcc9cfa076984'
assert hashlib.sha256(main).hexdigest()=='6464c6e726cd536756476392bf21996ae7289d16e269863cd0b88c1703d09287'
base=0x0214CD20
for idx in range(16):
    assert struct.unpack_from('<II',overlay,0x021713E8-base+idx*8)==REACTION_RESOURCE_PAIRS[idx]
    assert struct.unpack_from('<I',overlay,0x021721A0-base+idx*4)[0]==REACTION_CALLBACKS[idx]
assert all(native_reaction_route(i).primary_resource==0x33+i-9 for i in range(9,13))
arc=alar.open_nested(original)
groups={k:{} for k in ('col','shot','effect')}
for e in arc.entries:
    kind=chrbin.kind_of(e.name)
    if kind in groups:
        form=e.name.rsplit('/',1)[-1].removesuffix('.bin')
        groups[kind][form]=chrbin.parse(e.payload(),e.name)
assert {k:len(v) for k,v in groups.items()}=={'col':281,'shot':184,'effect':66}
assert {k:sum(x.count for x in v.values()) for k,v in groups.items()}=={'col':2837,'shot':1258,'effect':113}
cols=Counter()
selectors=Counter()
cross=Counter()
row_class=[]
for form,t in sorted(groups['col'].items()):
    for i in range(t.count):
        r=t.col_record(i)
        cls,react=r.class_byte,r.selector_byte
        assert cls<=7 and react<=15
        cols[cls]+=1; selectors[react]+=1;cross[(cls,react)]+=1
        row_class.append(dict(form=form,row=i,class_code=cls,defender_reaction=react,
            primary_almt_resource=f'0x{REACTION_RESOURCE_PAIRS[react][0]:02X}',
            alt_almt_resource=f'0x{REACTION_RESOURCE_PAIRS[react][1]:02X}',
            native_reaction_callback=f'0x{REACTION_CALLBACKS[react]:08X}',
            grabbed_resource=int(9<=react<=12),flags=f'0x{r.raw_word08:08X}'))
assert cols=={3:990,5:829,4:594,2:260,0:95,1:65,7:3,6:1}
assert selectors=={2:892,1:694,5:376,7:243,6:236,0:226,8:64,4:32,3:25,13:24,9:7,10:5,11:4,15:4,14:3,12:2}
shot_bits=Counter()
native_bits=Counter()
unproved_bits=Counter()
handler_count=Counter()
handler16_links=[]
source_witness=[]
for form,t in sorted(groups['shot'].items()):
    for i in range(t.count):
        r=t.shot_record(i)
        h=r.handler_id
        assert 0<=h<26
        handler_count[h]+=1
        for bit in range(32):
            b=1<<bit
            if r.flags&b:shot_bits[(h,b)]+=1
        for e in native_shot_flags(h,r.flags):
            native_bits[(h,e.mask)]+=1
            if not any(x['handler_id']==h and x['mask']==f'0x{e.mask:08X}' for x in source_witness):
                source_witness.append(dict(handler_id=h,handler=f'0x{h:02X}',mask=f'0x{e.mask:08X}',
                    source_member=f'chr/shot/{form}.bin',record_index=i,occurrences=0,
                    original_constructor=f'0x{chrbin.SHOT_HANDLERS[h]:08X}',
                    original_updater=f'0x{SHOT_UPDATE_HANDLERS[h]:08X}',
                    native_side_effect=e.explanation,source_functions=e.source))
        for bit in range(32):
            b=1<<bit
            if r.flags&b and not(native_shot_trace_mask(h,r.flags)&b) and not(chrbin.KNOWN_SHOT_FLAG_MASK&b):
                unproved_bits[(h,b)]+=1
        if h==0x16:
            nested=struct.unpack_from('<h',r.raw,0x1e)[0]
            handler16_links.append(dict(form=form,row=i,nested_shot_index=nested,
                shot_table_count=t.count,nested_within_same_table=int(0<=nested<t.count),
                source_almt=f'0x{r.reference0:08X}'))
assert len(handler16_links)==6
for r in source_witness:r['occurrences']=native_bits[(r['handler_id'],int(r['mask'],16))]
# Check each source file and exact named source expression. No inference from labels.
native_sources=[
    ('main','0207d440','*pcVar3'),('main','0207fbd0','**(byte **)(iVar7 + 0x10)'),
    ('main','02080f14','FUN_020823e4'),('main','020823e4','param_2 + 0x10'),
    ('main','02081ddc','func_0x02153ce8'),('ov06','0215af34','&PTR_FUN_021721a0'),
    ('ov06','0215b568','&DAT_021713e8'),('ov06','0216af04','&PTR_FUN_0217278c'),
    ('ov06','0216acc8','&PTR_FUN_02172864'),('ov06','0216f100','FUN_0216ec88'),
    ('ov06','0216f398','FUN_0216ea84'),('ov06','0216ea84','param_2 + 8'),
    ('ov06','0216e1c0','FUN_0216ed30'),('ov06','0216b3e8','FUN_0216ed30'),
    ('ov06','0216fdcc','0x200000'),('ov06','0216f8d8','FUN_0216ab58'),
    ('ov06','0216ab58','FUN_0216acc8'),
]
refs=[]
for kind,addr,needle in native_sources:
    # Build path carefully to avoid pathlib operator precedence.
    f=source/('arm9_main' if kind=='main' else 'arm9_ov06')/(('arm9_main_' if kind=='main' else 'arm9_ov06_')+addr+'.c')
    lines=f.read_text(encoding='utf8').splitlines()
    positions=[i+1 for i,line in enumerate(lines) if needle in line]
    if not positions:raise AssertionError((f,needle))
    refs.append(dict(path=str(f.relative_to(root)),function=addr,line=positions[0],anchor=needle))
# Confirm original handler IDs; present 20/26.
assert len(handler_count)==20 and sum(handler_count.values())==1258
# Also report class/selector cross-tab, per-type flag witnesses and unproven bits.
report=dict(source_hashes=dict(chrbin=hashlib.sha256(original).hexdigest(),
    overlay6=hashlib.sha256(overlay).hexdigest(),arm9=hashlib.sha256(main).hexdigest()),
    original_records={'col':2837,'shot':1258,'effect':113},original_files={'col':281,'shot':184,'effect':66},
    reaction_count=16,grabbed_indices=[9,10,11,12],class_counts=dict(sorted(cols.items())),
    reaction_counts=dict(sorted(selectors.items())),
    handler_counts={f'0x{k:02X}':v for k,v in sorted(handler_count.items())},
    native_flag_source_witnesses=len(source_witness),
    additional_handler_mask_combinations=len(native_bits),
    authored_handler16_nested_links=handler16_links,
    unclassified_handler_flag_pairs=[dict(handler=f'0x{h:02X}',bit=f'0x{bit:08X}',rows=v)
        for (h,bit),v in sorted(unproved_bits.items())],
    original_code_anchors=refs,
    caution='Source callbacks and code paths are not canonical move names; without actual input, stage, target and PRNG state no single outcome is determinable.')
def write_csv(name,rows):
    with (research/name).open('x',encoding='utf-8-sig',newline='') as fh:
        w=csv.DictWriter(fh,fieldnames=list(rows[0]))
        w.writeheader();w.writerows(rows)
write_csv('CHR_COL_NATIVE_16_REACTION_ROUTES_20261108.csv',row_class)
write_csv('CHR_SHOT_NATIVE_FLAG_WITNESSES_20261108.csv',source_witness)
with (research/'CHR_COL_SHOT_NATIVE_SEMANTICS_VALIDATION_20261108.json').open('x',encoding='utf8') as fh:
    json.dump(report,fh,indent=2);fh.write('\n')
print('PASS reaction ROM, classes, selectors, 26 handlers, native flag witnesses, paths')
print('COL',dict(cols),'REACT',dict(selectors))
print('HANDLER16',handler16_links)
print('FLAG_SOURCE_WITNESSES',len(source_witness),'UNPROVEN_MASK_PAIRS',len(unproved_bits))
print('WROTE 3 source-evidence files')
