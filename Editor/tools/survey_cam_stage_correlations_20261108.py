"""Evidence-only camera-to-stage geometry comparison. No runtime semantic claims."""
import sys,collections
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from jus_formats import alar,stagecamera,stagephysics
ROOT=Path(r"D:\Library\Development\JUS\Data")
archive=alar.open_nested((ROOT/"stage/stage.aar").read_bytes())
cameras={e.name.split("/")[-1][:-4]:stagecamera.parse(e.payload()) for e in archive.entries if e.name.endswith(".cam")}
forms=collections.Counter()
matches=collections.Counter()
print("CAMERA_COUNT",len(cameras))
for stem,c in sorted(cameras.items()):
    p0,p1,p2=c.header_pairs
    xs=[xy[0] for xy in c.vertices]
    ys=[xy[1] for xy in c.vertices]
    span=(max(xs)-min(xs), max(ys)-min(ys))
    dims=(p2[0]-p1[0],p2[1]-p1[1])
    forms[(len(c.vertices),span)]+=1
    layergeo=stagephysics.parse_stage_bin(archive.get(f"stage/{stem}.bin").payload())
    bgs=tuple((b.x,b.y) for b in layergeo.layers)
    starts=layergeo.start_points
    if p0 in bgs:matches["p0_bg_position"]+=1
    if p0 in starts:matches["p0_start_position"]+=1
    if len(c.vertices)==5:matches["5_closed"]+=int(c.vertices[0]==c.vertices[-1])
    if stem in ("bg_bb","bg_old_yo","bg_cm","bg_old_yh","bg_bl","bg_ss"):
        print("STAGE",stem,"header",c.header_pairs,"span",span,
              "range12difference",dims,"bg_positions",bgs,"starts",starts,"vertices",c.vertices)
print("SHAPE_COUNTS",forms.most_common(70))
print("CORRELATIONS",dict(matches))
print("HEADER_P1_TO_P2_DIMENSIONS",collections.Counter((c.header_pairs[2][0]-c.header_pairs[1][0],
   c.header_pairs[2][1]-c.header_pairs[1][1]) for c in cameras.values()).most_common(30))
