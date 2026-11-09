"""Scan all physical and nested ALAR ALOD resources, read-only; no field-name guesses."""
from pathlib import Path
import collections,sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from jus_formats import alar,alod
ROOT=Path(r"D:\Library\Development\JUS\Data")
seen=0
desc=collections.Counter()
fields=collections.Counter()
classes=collections.Counter()
bad=[]
nodal=[]
examples={}
def visit(payload,path,depth=0):
    global seen
    if depth>3:raise ValueError("Unexpected recursive archive depth")
    arch=alar.open_nested(payload)
    for m in arch.entries:
        if m.name.lower().endswith(".aar"):
            visit(m.data,path+"|"+m.name,depth+1)
        elif m.name.lower().endswith(".aod"):
            seen+=1
            data=m.payload()
            a=alod.parse(data)
            nodal.append((len(data),len(a.nodes),len(a.field_names)))
            for field in a.field_names:fields[field]+=1
            for node in a.nodes:
                classes[node.kind]+=1
                for descriptor,val in node.properties:
                    desc[descriptor]+=1
                    examples.setdefault(descriptor,[]).append((path+"|"+m.name,node.name,node.kind,val.hex(),a.field_names[:]))
for file in ROOT.rglob("*.aar"):
    # all original disk files, no duplicate children
    try:visit(file.read_bytes(),str(file.relative_to(ROOT)).replace("\\","/"))
    except Exception as exc:bad.append((str(file),repr(exc)))
print("TOTAL_AOD",seen,"ERRORS",len(bad))
print("FIELDS",fields.most_common(30))
print("CLASSES",classes.most_common(30))
print("DESC",desc.most_common(100))
print("COUNTS",collections.Counter(nodal).most_common(20))
print("EXAMPLES_BY_DESCRIPTOR")
for k,v in examples.items():
    print(hex(k),"count",len(v),"examples",v[:5])
if bad:print("ERRORS",bad[:15])
