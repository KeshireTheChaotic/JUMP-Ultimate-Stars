"""Compare all original .aar.orig backups with their matching active ALAR archives.

Read only original Data; export provenance to docs/Research.
Backup-only members are NOT active game members and never added to 1477 BIN count.
"""
from pathlib import Path
from collections import Counter
import csv,hashlib,json,sys
ED=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ED))
from jus_formats import alar
R=Path(r'D:\Library\Development\JUS')
data=R/'Data'
out=R/'docs/Research'
backup_files=sorted(data.rglob('*.aar.orig'))
assert len(backup_files)==12,len(backup_files)
def crawl(raw,prefix):
    root=alar.open_nested(raw)
    work=[(root,prefix)]
    found={}
    narch=0
    while work:
        arc,base=work.pop()
        narch+=1
        for e in arc.entries:
            v=base+'::'+e.name
            blob=e.payload()
            if e.ext=='.aar':
                work.append((alar.open_nested(blob),v))
            else:
                found[v]=(e.ext,len(blob),hashlib.sha256(blob).hexdigest(),e.id)
    return found,narch
rows=[];stats=[];exclusive=[];active_missing=[]
for b in backup_files:
    rel=b.relative_to(data).as_posix()
    active_rel=rel.removesuffix('.orig')
    a=data/active_rel
    backing,nb=crawl(b.read_bytes(),active_rel)
    if a.exists():
        live,na=crawl(a.read_bytes(),active_rel)
    else:
        live,na={},0
        active_missing.append(active_rel)
    before=Counter()
    for v,(ext,size,h,rid) in sorted(backing.items()):
        presence='backup_only' if v not in live else ('same_bytes' if h==live[v][2] else 'changed_bytes')
        before[presence]+=1
        row=dict(backup_file=rel,active_file=active_rel,virtual_path=v,
                 extension=ext,bytes=size,sha256=h,resource_id=f'0x{rid:08X}',
                 compared_to_active=presence,
                 active_sha256=live.get(v,('',0,''))[2])
        rows.append(row)
        if presence=='backup_only':exclusive.append(row)
    active_only=len(set(live)-set(backing))
    stats.append(dict(backup_file=rel,active_file=active_rel,active_exists=a.exists(),
        backup_archives=nb,active_archives=na,backup_members=len(backing),
        active_members=len(live),backup_only=before['backup_only'],
        active_only=active_only,unchanged=before['same_bytes'],
        changed_content=before['changed_bytes'],
        backup_only_bins=sum(r['extension']=='.bin' and r['backup_file']==rel for r in exclusive)))
def export_csv(name,records,columns=None):
    with (out/name).open('w',encoding='utf-8',newline='') as fh:
        w=csv.DictWriter(fh,fieldnames=columns or list(records[0]))
        w.writeheader();w.writerows(records)
export_csv('GAME_DATA_BACKUP_ARCHIVE_MEMBERS_20261108.csv',rows)
export_csv('GAME_DATA_BACKUP_EXCLUSIVE_MEMBERS_20261108.csv',exclusive,
           columns=list(rows[0]))
export_csv('GAME_DATA_BACKUP_VS_ACTIVE_SUMMARY_20261108.csv',stats)
result=dict(backup_archive_files=len(backup_files),backup_member_rows=len(rows),
    backup_exclusive=len(exclusive),backup_exclusive_bins=sum(r['extension']=='.bin' for r in exclusive),
    active_missing=active_missing,by_backup=stats,
    note='Only .aar.orig backups compared; exclusive entries are not currently active and do not alter the active 1477 BIN census.')
with (out/'GAME_DATA_BACKUP_ARCHIVE_VALIDATION_20261108.json').open('w',encoding='utf8') as fh:
    json.dump(result,fh,indent=2);fh.write('\n')
print('BACKUPS',len(backup_files),'BACKUP_MEMBERS',len(rows),
      'BACKUP_ONLY',len(exclusive),'BACKUP_ONLY_BIN',result['backup_exclusive_bins'])
print('TOP_BACKUP_DIFFS',[(p['backup_file'],p['backup_only'],p['changed_content'],p['active_only']) for p in stats])
