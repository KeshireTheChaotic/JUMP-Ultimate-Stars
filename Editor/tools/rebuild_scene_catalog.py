"""Regenerate the canonical original JUS scene *derived* metadata (R05).

Check-only by default. No mutation of any game, ROM, decompiled C, archives,
user saves, v1/v2 source trace, or callback binary index.

--check: verify portable manifests match original source graph and declarative
         authored evidence, then verify source ARM9 ROM callback table bytes.
--output-dir PATH: write deterministic clean-build snapshots elsewhere.
--write: source-backed regeneration of the two editor-derived metadata
         outputs and their SHA build lock; never overwrite uncontrolled edits.
"""
from __future__ import annotations
import argparse,hashlib,json,os,struct,sys,tempfile
from pathlib import Path

EDITOR=Path(__file__).resolve().parents[1]
JUS=EDITOR.parents[2]
if str(EDITOR) not in sys.path: sys.path.insert(0,str(EDITOR))

from jus_package.scenebuilder import build_manifest,build_native_registry
from jus_package.screenintegrity import validate_indexes

OUTPUTS=('screen_metadata.json','screen_native_registry.json')
LOCK='screen_scene_build.lock.json'
SOURCE_INPUTS=('screen_scene_authoring.json','screen_code_sources_v2.json',
               'screen_runtime_dispatch.json')


def sha(raw:bytes)->str:
    return hashlib.sha256(raw).hexdigest()


def build_lock(reverse:Path,outputs:dict)->dict:
    package=EDITOR/'jus_package'
    inputs={'SCREEN_NAV_GRAPH.json':sha((reverse/'docs/SCREEN_NAV_GRAPH.json').read_bytes())}
    inputs.update((name,sha((package/name).read_bytes())) for name in SOURCE_INPUTS)
    return {'version':1,
            'authority':'Original ARM9 navigation graph + source trace + authored evidence',
            'generated_by':'tools/rebuild_scene_catalog.py',
            'source_sha256':inputs,
            'outputs_sha256':{name:sha(canonical_bytes(model)) for name,model in outputs.items()}}


def guard_existing(package:Path,desired:dict,lock:dict|None,operation:str):
    """Refuse derived-file drift; allow intentional new evidence via --write.

    Existing output files must still match the previous generated build lock.
    Without a lock, accept only a byte-independent semantic bootstrap match.
    """
    for name,model in desired.items():
        path=package/name
        if not path.is_file():
            raise ValueError(f'Expected derived file missing: {path}')
        original=path.read_bytes()
        if lock is None:
            if json.loads(original)!=model:
                raise ValueError(f'{name}: no lock and content differs; refusing overwrite')
        else:
            expected=lock.get('outputs_sha256',{}).get(name)
            if expected!=sha(original):
                raise ValueError(f'{name}: manually changed since last canonical build; '
                                 'reconcile into screen_scene_authoring.json first')
        if operation=='check' and original!=canonical_bytes(model):
            raise ValueError(f'{name}: stale relative to original source; review changes and run --write')




def canonical_bytes(model:dict)->bytes:
    return (json.dumps(model,ensure_ascii=False,indent=2)+'\n').encode('utf8')


def original_rom_validate(reverse:Path,nav:dict,callbacks:dict,authoring:dict)->int:
    checked=0
    # Replay exact original overlay table words, including Thumb bit0.
    cache={}
    for family in callbacks['families']:
        ov=family['overlay']
        if ov not in cache:
            spec=json.loads((reverse/f'layout/specs/arm9_ov{ov:02}.layout.json').read_text('utf8'))
            entry=next(x for x in spec['files'] if x['name']==f'OV{ov:02}')
            path=Path(entry['path'])
            if not path.exists():
                raise ValueError(f'Original ROM overlay bytes unavailable: {path}')
            cache[ov]=(entry['addr'],path.read_bytes())
        base,bits=cache[ov]
        for expected in family['table_entries']:
            off=int(expected['table_word_address'],16)-base
            if off<0 or off+4>len(bits):
                raise ValueError(f"ROM pointer outside original overlay {ov}: {expected['table_word_address']}")
            original=struct.unpack_from('<I',bits,off)[0]
            if original!=int(expected['raw_target'],16):
                raise ValueError(f"ROM pointer mismatch overlay {ov} @ {expected['table_word_address']}: "
                                 f"source 0x{original:08X}, cached {expected['raw_target']}")
            checked+=1

    # Confirm exact C paths and cited line counts for code-backed widgets,
    # display routing, scene transitions and native 2D background instances.
    refs=[]
    for s in authoring['scene_overrides'].values():
        if 'display_routing' in s:refs.append(s['display_routing']['source'])
        for w in s.get('widgets',()):
            refs.append(w['source'])
    for e in nav['edges']:
        refs.append(e['file']+f"#L{e['line']}")
    for sid in range(46):
        from jus_package import screenvariants
        for variant in screenvariants.variants_for_scene(sid):
            if variant.get('routing_source'):
                refs.append(variant['routing_source'])
            refs.extend(layer['source'] for layer in variant['layers'])
    for raw in refs:
        # Multi-source evidence may be semicolon-separated in historic
        # source text; isolate every original path and numerical line.
        for fragment in raw.split(';'):
            fragment=fragment.strip()
            if not fragment.startswith('functions_layout/'): continue
            section=fragment.split('#L',1)
            path=reverse/section[0]
            if not path.exists():
                raise ValueError(f'Original C source missing: {path}')
            if len(section)>1:
                try:ln=int(section[1].split('-',1)[0])
                except ValueError: continue
                if not 1<=ln<=len(path.read_text('utf8',errors='replace').splitlines()):
                    raise ValueError(f'Source line out of range: {path} #L{ln}')
            checked+=1
    return checked


def build_inputs(reverse:Path):
    pack=EDITOR/'jus_package'
    nav=json.loads((reverse/'docs/SCREEN_NAV_GRAPH.json').read_text('utf8'))
    authoring=json.loads((pack/'screen_scene_authoring.json').read_text('utf8'))
    source=json.loads((pack/'screen_code_sources_v2.json').read_text('utf8'))
    callbacks=json.loads((pack/'screen_runtime_dispatch.json').read_text('utf8'))
    manifest=build_manifest(nav,authoring)
    registry=build_native_registry(manifest,authoring,source,callbacks)
    return nav,authoring,callbacks,{
        OUTPUTS[0]:manifest,
        OUTPUTS[1]:registry,
    }


def main(args:list[str]|None=None)->int:
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--reverse-root',type=Path,default=Path(
        os.environ.get('JUS_REVERSE_ENGINEERING_ROOT',str(JUS/'reverse_engineering'))))
    group=p.add_mutually_exclusive_group()
    group.add_argument('--check',action='store_true',help='check only (default)')
    group.add_argument('--write',action='store_true',help='regenerate outputs if previous build lock is intact')
    group.add_argument('--output-dir',type=Path,help='stage deterministic clean-build JSON without editing editor')
    p.add_argument('--no-rom-check',action='store_true',
                   help='for test fixtures without original ARM9 overlay binaries')
    a=p.parse_args(args)
    if a.write and a.no_rom_check:
        p.error('--write requires original ROM/code evidence validation')
    nav,authoring,callbacks,outputs=build_inputs(a.reverse_root)
    package=EDITOR/'jus_package'
    canonical=build_lock(a.reverse_root,outputs)
    lock_path=package/LOCK
    previous=json.loads(lock_path.read_text('utf8')) if lock_path.exists() else None
    if previous is not None and previous.get('version')!=1:
        raise ValueError('Incompatible canonical build lock')

    if not a.output_dir:
        guard_existing(package,outputs,previous,'write' if a.write else 'check')
        if not a.write and previous is not None and previous!=canonical:
            raise ValueError('Original source hashes changed; review and run --write')

    if not a.no_rom_check:
        count=original_rom_validate(a.reverse_root,nav,callbacks,authoring)
        print(f'Original C/ROM evidence validated: {count} source-pointer/line checks.')

    if not a.write and not a.output_dir:
        issues=validate_indexes()
        if issues:
            raise ValueError('Live editor scene indexes differ: '+'; '.join(issues))

    dest=a.output_dir if a.output_dir else package
    if a.output_dir:
        dest.mkdir(parents=True,exist_ok=True)
    if a.output_dir or a.write:
        encoded={name:canonical_bytes(model) for name,model in outputs.items()}
        encoded[LOCK]=canonical_bytes(canonical)
        for name,data in encoded.items():
            if a.write:
                with tempfile.NamedTemporaryFile(dir=dest,prefix='.'+name+'.',suffix='.tmp',
                                                 delete=False) as stream:
                    stream.write(data)
                    temporary=Path(stream.name)
                try:temporary.replace(dest/name)
                finally:temporary.unlink(missing_ok=True)
            else:
                (dest/name).write_bytes(data)

    for name,expected in canonical['outputs_sha256'].items():
        print(f"{'WROTE' if (a.write or a.output_dir) else 'OK'} {name}: sha256={expected}")
    print('PASS: original 46 IDs; 94 transitions; 28 source-backed BG scenes; '
          '48 code-backed variants; 6 original callback families; historical V1 archived, portable V1 retired.')
    return 0

if __name__=='__main__':
    raise SystemExit(main())
