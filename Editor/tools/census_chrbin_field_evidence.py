"""Read-only corpus census for chr/col, chr/shot, chr/effect field distributions."""
from pathlib import Path
from collections import Counter,defaultdict
import struct,sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from jus_formats.alar import open_nested
from jus_formats import chrbin
root=Path(r'D:\Library\Development\JUS\Data')
arc=open_nested((root/'chr/ChrBin.aar').read_bytes())
groups=defaultdict(list)
for e in arc.entries:
    name=e.name.replace('\\','/')
    kind=chrbin.kind_of(name)
    if kind not in ('col','shot','effect'):continue
    table=chrbin.parse(e.payload(),name)
    assert table.stride>0
    for i in range(table.count):
        groups[kind].append((name,i,table.record(i)))
for kind, records in groups.items():
    print('\nFAMILY',kind,'records',len(records),'members',len({n for n,i,r in records}))
    stride=len(records[0][2])
    for offset in range(stride):
        vals=[r[offset] for n,i,r in records]
        c=Counter(vals)
        if len(c)<=20 or offset in range(8):
            print(f"BYTE +0x{offset:02X} distinct={len(c)}",c.most_common(22))
        else:
            print(f"BYTE +0x{offset:02X} distinct={len(c)} nonzero={len(vals)-c.get(0,0)} ranges=({min(vals)},{max(vals)})")
    for offset in range(0,stride,4):
        c=Counter(struct.unpack_from('<I',r,offset)[0] for n,i,r in records)
        print(f"WORD +0x{offset:02X} distinct={len(c)} zero={c.get(0,0)} top",[(f'{k:08X}',v) for k,v in c.most_common(18)])
    if kind=='effect':
        for n,i,r in records[:25]:
            print('EFFECT_EXAMPLE',n,i,r.hex(' '),[f"{x:08X}" for x in struct.unpack('<II',r)])
        for n,i,r in records:
            a,b=struct.unpack('<II',r)
            if b!=0:print('EFFECT_NONZERO_WORD4',n,i,f'{a:08X}',f'{b:08X}')
