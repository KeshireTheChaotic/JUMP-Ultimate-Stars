"""Read-only ARM9/overlay6 string scan for stage camera resource lookup."""
from pathlib import Path
R=Path(r"D:\Library\Development\JUS\reverse_engineering\verified_binaries")
paths=[p for p in R.rglob("*.bin") if p.name.lower() in (
    "arm9.bin","arm9_overlay_0006.bin","overlay_0006.bin")]
needles=(b".cam",b".mob",b"stage/",b"BattleCamera",b"bg_bb",b".bin",b"Camera")
for path in paths:
    data=path.read_bytes()
    print("FILE",path.name,"bytes",len(data))
    for key in needles:
        hits=[];start=0
        while True:
            i=data.find(key,start)
            if i<0:break
            hits.append(i)
            start=i+1
        print("PATTERN",key.decode("ascii","replace"),"count",len(hits),
              "offsets",[(hex(i),data[max(0,i-30):i+55].replace(b"\x00",b"|")[:90].decode("ascii","replace")) for i in hits[:15]])
