"""Exhaustive read-only Data tree + recursive ALAR member inventory and decode gap mapping.

Every physical file, nested AAR member, and .bin is individually cataloged.
Statuses are conservative: structural parser != native semantic completion.
No original files altered; reports written exclusively to docs/Research.
"""
from pathlib import Path
from collections import Counter,defaultdict
import csv,hashlib,json,sys
ED=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ED))
from jus_formats import alar
R=Path(r'D:\Library\Development\JUS')
DATA=R/'Data'
DEST=R/'docs/Research'
DEST.mkdir(parents=True,exist_ok=True)
# Optional earlier research (removed 2026-11-10). Without it, .bin files get no
# family label and the catalog cross-check is skipped.
HIST=DEST/'ALL_BIN_ASSET_INVENTORY_20261106.csv'
old={}
if HIST.is_file():
    old={r['virtual_path']:r for r in csv.DictReader(HIST.open(encoding='utf-8-sig',newline=''))}
    assert len(old)==1477,(len(old),'historical bin catalog is unexpectedly different')
partial_bin={
 'chr/ai','chr/ai_param','chr/col','chr/shot',
 'bin/ability','bin/bgm','bin/chr_b','bin/chr_s','bin/chr_b_t',
 'bin/chr_s_t','bin/commwin','bin/demo','bin/exadd','bin/jpower',
 'bin/koma','bin/komatxt','bin/kshape','bin/location','bin/piece',
 'bin/secret','bin/stage','bin/state','jgalaxy/definition','jgalaxy/graph',
 'jgalaxy/artrefs','opening/artrefs','title/artrefs','topmenu/artrefs',
 'result/results','opening/passmark','bin/InfoDeck','deck/preset','stage/level'
}
researched_bin={
 'bin/ability_t','bin/clearlst','bin/infoname','bin/pname','bin/rulemess',
 'bin/title','bin/clear','jquiz/questions','ending/text',
 'battle/tutorial','deckmake/tutorial','bin/chr_b_t','bin/chr_s_t'
}
opaque_bin={'opening/pattern','stage/sudden'}
def classify(ext,virt,blob):
    """Status/remaining gap by original format evidence, never guessed by filename alone."""
    if not blob:
        return ('empty source member', 'empty member: no record bytes', 'none')
    if ext=='.bin':
        rec=old.get(virt)
        if not rec:
            if not old:
                return ('binary (no family catalog)','Family catalog not present; see jus_formats for typed readers','bin')
            return ('uncataloged binary','No source-backed .bin family mapping', 'unknown')
        fam=rec['family']
        if fam in opaque_bin:
            return ('format unresolved','No authoritative native record schema documented for this asset',fam)
        if fam=='dwc/utility':
            return ('container decoded; inner runtime unknown',
              'Embedded NitroFS 342 entries validated; Wi-Fi logic and inner .nsc/.ncg/.nce semantics unverified',fam)
        if fam=='chr/effect':
            return ('typed fields; runtime context conditional',
              '8-byte ALMT ID + u16 sound slot + u16 argument; competing effects and runtime display conditional',fam)
        if fam=='chr/col':
            return ('typed fields; semantics partial',
              '20-byte records with 16 reaction states; official class names and live hit outcomes unproven',fam)
        if fam=='chr/shot':
            return ('typed fields; semantics partial',
              '32-byte handler records; 26 constructor/update callbacks, 41 handler/bit combinations still unclassified',fam)
        if fam=='stage/level':
            return ('typed sections; runtime semantics partial',
              '6 sections and structured 8-byte tail; tail field consumers and exact stage collision runtime missing',fam)
        if fam=='deck/preset':
            return ('typed layout; metadata partial',
              '92-byte full decks and 64-byte companion names/comments; companion +52 field and deck placement high flags unresolved',fam)
        if fam in ('battle/tutorial','deckmake/tutorial'):
            return ('typed opcodes; runtime semantics partial',
              '14 opcode script layouts, 1369 battle/deck tutorial commands decoded; some callback effects not named',fam)
        if fam in ('chr/ai','chr/ai_param'):
            return ('typed layout; runtime semantics partial',
              'AIPM/AIMV attack/movement table fields partly understood; candidate ranking, variant selection incomplete',fam)
        if fam in researched_bin:
            return ('typed/research-decoded; some semantic fields open',
              'See jus_formats/gametables.py; local numeric fields or UI integration may be incomplete',fam)
        if fam in partial_bin:
            return ('typed/research-decoded; semantic fields open',
              'Runtime record meanings, numeric flag bits and/or authoring route not exhaustively established',fam)
        return ('unclassified binary family','Family cataloged but currently no full semantic proof',fam)
    elif ext=='.mob':
        return ('typed sections; runtime semantics partial',
                '4 sections: floor/path/items/grips/gimmicks; live collision, PRNG, animations and some reserved fields open','stage/mob')
    elif ext=='.cam':
        return ('structurally decoded; runtime semantics unknown',
                'Three signed header point pairs, mode, 4/5 point pairs; camera projection/loader not traced','stage/camera')
    elif ext=='.aod':
        return ('partial format',
                'ALOD hierarchy/node classes roundtrip; opaque property descriptor schema/engine behavior not known','ALOD')
    elif ext=='.dtx':
        return ('decoded image/layout; runtime semantics partial',
                'DSTX piece/panel/layout decoded; 0x05/0x06 placement/display routing and rare UV unresolved','DSTX')
    elif ext=='.atm':
        return ('decoded tilemap; runtime semantics partial',
                'ALTM raw/packed decoded; header flags and some scene loader/layer/scroll semantics unresolved','ALTM')
    elif ext=='.dig':
        return ('decoded graphics; runtime semantics partial',
                'DSIG palettes/tiles decoded; rare UV/hardware presentation flags remain','DSIG')
    elif ext=='.amt':
        return ('decoded binary; gameplay semantics partial',
                'ALMT 46 NoteTrack opcodes and source animations parsed; some branches/effects behavior unverified','ALMT')
    elif ext=='.ncl':
        return ('decoded palette','NCCL RGB555 palette entries and banks decoded','NCCL')
    elif ext=='.ipf':
        return ('decoded probability table; runtime context partial',
                'Item-probability entries decoded; conditional table choice/RNG require live actor state','ItemProb')
    elif ext=='.sdat':
        return ('decoded audio container; playback fidelity partial',
                'SDAT bank/sequence/wave parsed; ADSR/pitch/unsupported opcodes not complete','SDAT')
    elif ext=='.aft':
        return ('typed font atlas; supported in Editor',
                'ALFT glyph ranges and embedded DSIG/BMP decoded by jus_formats/aft.py; runtime glyph display conditional','ALFT')
    elif ext=='.orig':
        return ('inactive ALAR backup',
                'Original backup snapshot with ALAR bytes; separately compare members against active .aar, not an undecoded new format','ALAR backup')
    elif ext=='.char':
        return ('raw icon bitmap; pixel semantics partial',
                'ChildRom/icon.char is exactly 512 source bytes (compatible with DS 32x32 4bpp icon tiles); exact display context unverified','ChildRom/icon')
    elif ext=='.plt':
        return ('typed raw palette',
                'ChildRom/icon.plt contains 16 original little-endian RGB555 palette entries (32 bytes)','ChildRom/icon palette')
    elif ext=='.srl':
        return ('Nintendo DS child ROM; execution untraced',
                '2,141,384-byte Nintendo DS child executable/container; not an ALAR table or an unidentified BIN','ChildRom/SRL')
    elif ext=='.mdf':
        return ('format unresolved',
                '50 demo sequence/data .mdf members; binary record layout and original native consumer not yet traced','demo/MDF')
    elif ext=='.vx':
        return ('format unresolved',
                'opening/opening.vx has VXDS magic; original video/animation stream schema and native consumer not traced','opening/VXDS')
    elif ext in ('.txt','.csv','.json','.xml'):
        return ('text/nonbinary','No binary format decoding required','text')
    return ('unclassified file type',
            'No verified typed decoder located for this extension or original runtime format','unclassified')

rows=[];archives=[];errors=[]
physical_counter=Counter();leaf_counter=Counter();bin_seen=set();ext_family=Counter()
def sha(data):return hashlib.sha256(data).hexdigest()
def meta(virt,physical,name,ext,depth,blob,stored,compressed,archive_version,resource_id):
    status,gap,fam=classify(ext,virt,blob)
    if ext=='.bin':bin_seen.add(virt)
    leaf_counter[ext]+=1;ext_family[(ext,fam,status)]+=1
    rows.append(dict(virtual_path=virt,physical_file=physical,member_name=name,
       extension=ext,depth_in_aar=depth,bytes=len(blob),stored_bytes=stored,
       compressed_in_aar=compressed,archive_version=archive_version,resource_id=resource_id,
       magic_first8=blob[:8].hex(),sha256=sha(blob),family=fam,
       decode_status=status,remaining_gap=gap))
def visit_arc(blob,physical,virtual,depth):
    assert depth<=20,('unexpected archive depth',virtual)
    try: arc=alar.open_nested(blob)
    except Exception as e:
        errors.append({'archive':virtual,'error':repr(e)});return
    archives.append(dict(virtual_path=virtual,physical_file=physical,depth=depth,version=arc.version,
       flags=arc.flags,entries=len(arc.entries),payload_bytes=len(blob)))
    for e in arc.entries:
        path=virtual+'::'+e.name
        try:payload=e.payload()
        except Exception as ex:
            errors.append({'archive':path,'error':'payload:'+repr(ex)});continue
        if e.ext=='.aar':
            visit_arc(payload,physical,path,depth+1)
        else:
            meta(path,physical,e.name,e.ext,depth,len(payload) and payload or b'',len(e.data),
                 e.compressed,arc.version,f'0x{e.id:08X}')
for f in sorted(DATA.rglob('*'),key=lambda x:x.as_posix().lower()):
    if not f.is_file():continue
    physical=f.relative_to(DATA).as_posix()
    ext=f.suffix.lower();physical_counter[ext]+=1
    if ext=='.aar':visit_arc(f.read_bytes(),physical,physical,1)
    else:
        blob=f.read_bytes()
        meta(physical,physical,f.name,ext,0,blob,len(blob),False,'','')
assert not errors,('Errors parsing original corpus',errors[:10])
assert len(archives)>=1500,('Expected nested archives missing',len(archives))
if old:
    assert bin_seen==set(old),(len(bin_seen),len(old),list(sorted(bin_seen-set(old)))[:10],list(sorted(set(old)-bin_seen))[:10])
assert sum(1 for x in rows if x['extension']=='.bin')==1477
def write_csv(name,data):
    with (DEST/name).open('w',encoding='utf8',newline='') as fh:
        w=csv.DictWriter(fh,fieldnames=list(data[0]));w.writeheader();w.writerows(data)
write_csv('ALL_GAME_DATA_RECURSIVE_MEMBERS_20261108.csv',rows)
write_csv('ALL_GAME_DATA_RECURSIVE_ARCHIVES_20261108.csv',archives)
g=defaultdict(lambda:{'count':0,'bytes':0,'examples':[]})
for r in rows:
    if r['decode_status'] in ('decoded palette','text/nonbinary','empty source member'):continue
    key=(r['extension'],r['family'],r['decode_status'],r['remaining_gap'])
    o=g[key];o['count']+=1;o['bytes']+=r['bytes']
    if len(o['examples'])<5:o['examples'].append(r['virtual_path'])
groups=[]
for (ext,fam,status,gap),v in g.items():
    groups.append(dict(extension=ext,family=fam,decode_status=status,
         files=v['count'],bytes=v['bytes'],remaining_gap=gap,
         examples=' | '.join(v['examples'])))
groups.sort(key=lambda r:(r['decode_status']!='format unresolved' and r['decode_status']!='unclassified file type',-r['files'],r['family']))
write_csv('GAME_DATA_UNFINISHED_DECODE_GROUPS_20261108.csv',groups)
unknown=[r for r in rows if r['decode_status'] in ('format unresolved','unclassified file type','uncataloged binary','unclassified binary family')]
write_csv('GAME_DATA_UNKNOWN_FILENAME_CANDIDATES_20261108.csv',unknown if unknown else [dict(virtual_path='',physical_file='',member_name='',extension='',depth_in_aar='',bytes='',stored_bytes='',compressed_in_aar='',archive_version='',resource_id='',magic_first8='',sha256='',family='',decode_status='',remaining_gap='')])
NITRO=DEST/'DWC_UTILITY_NITROFS_342_MEMBERS_20261106.csv'
nitro=list(csv.DictReader(NITRO.open(encoding='utf-8-sig'))) if NITRO.is_file() else []
assert not nitro or len(nitro)==342
all_ext=Counter(x['extension'] for x in rows)
result=dict(total_physical_files=sum(physical_counter.values()),
 physical_extensions=dict(physical_counter),total_nested_alar_archives=len(archives),
 nested_alar_members=sum(x['entries'] for x in archives),all_leaf_files=len(rows),
 leaves_by_extension=dict(all_ext),bins=len(bin_seen),original_bin_catalog_match=bool(old) or None,
 unknown_format_file_instances=len(unknown),open_issue_groups=len(groups),
 wifi_nitrofs_embedded_files=len(nitro),
 wifi_nested_file_types=dict(Counter(x['extension'] for x in nitro)),
 notes=['Recursive ALAR v2/v3 traversal; DSCP payloads unwrapped',
        'Statuses distinguish layout-decoded, runtime-partial, unknown format and editor integration.',
        'DWC embedded NitroFS is a separate 342-member resource layer, not ALAR.',
        ('Cross-check original ALL_BIN_ASSET_INVENTORY_20261106.csv: every one of 1477 BINs accounted for.'
         if old else 'No earlier BIN catalog present: .bin families not labelled, cross-check skipped.')],
 errors=errors)
with (DEST/'GAME_DATA_RECURSIVE_DECODE_AUDIT_20261108.json').open('w',encoding='utf8') as fh:
    json.dump(result,fh,indent=2,ensure_ascii=False);fh.write('\n')
print('PASS physical',sum(physical_counter.values()),'archives',len(archives),
      'leaf members',len(rows),'bin',len(bin_seen),'unclassified files',len(unknown))
print('EXTENSIONS',dict(all_ext))
print('UNCLASSIFIED TYPES',Counter((r['extension'],r['family']) for r in unknown))
print('DECODING_GAP_GROUPS',len(groups),'DWC_NITROFS',len(nitro))
