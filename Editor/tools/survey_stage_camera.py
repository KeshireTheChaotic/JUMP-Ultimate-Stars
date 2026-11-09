"""Read-only survey of all stage .cam members and neighbouring files."""
from pathlib import Path
import sys,struct,hashlib,collections
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from jus_formats import alar
ROOT=Path(r'D:\Library\Development\JUS\Data')
archive=alar.open_nested((ROOT/'stage/stage.aar').read_bytes())
print('STAGE_ARCHIVES',len(archive.entries))
cam=[]
for e in archive.entries:
    if e.name.lower().endswith('.cam'):
        blob=e.payload()
        cam.append(('stage/stage.aar',e.name,blob))
        print('CAM',e.name,'size',len(blob),'hex',blob.hex(' '),'u32',tuple(struct.unpack('<'+str(len(blob)//4)+'I',blob)) if len(blob)%4==0 else 'n/a')
print('CAM_COUNT',len(cam))
print('LENGTHS',dict(collections.Counter(len(x[2]) for x in cam)))
for j in range(max([len(x[2]) for x in cam],default=0)//4):
    vals=[struct.unpack_from('<I',v,j*4)[0] for _,_,v in cam if len(v)>=j*4+4]
    print('WORD',hex(j*4),'UNIQUE',len(set(vals)),'MIN',hex(min(vals)) if vals else '', 'MAX',hex(max(vals)) if vals else '',
          'TOP',collections.Counter(vals).most_common(5))
