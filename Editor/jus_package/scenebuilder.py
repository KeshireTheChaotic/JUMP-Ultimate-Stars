"""Canonical JUS scene metadata builder (R05).

Pure, deterministic assembly of the *derived* portable editor metadata.
Sources:
- original decompiled ARM9 navigation graph, never a screenshot;
- explicit, source-backed scene-widget/LCD evidence in scene_scene_authoring.json;
- original ARM9 v2 callgraph and ROM callback index, unchanged inputs;
- immutable original ALTM/DIG scene definitions in screenvariants.py.

No game asset, save, binary, or decompiled function is ever written here.
The historical V1 asset audit remains archived in reverse_engineering/docs;
production V2 generation does not consume or recreate a V1 editor index.
"""
from __future__ import annotations
from copy import deepcopy

from . import screenvariants


def _validate_nav(nav: dict):
    scenes=nav.get('scenes')
    if nav.get('scene_count')!=46 or not isinstance(scenes,list) or len(scenes)!=46:
        raise ValueError('Original ROM navigation graph must contain exactly 46 scene IDs')
    if [r.get('id') for r in scenes]!=list(range(46)):
        raise ValueError('Original scene graph has reordered or duplicate IDs')
    if not isinstance(nav.get('edges'),list) or len(nav['edges'])!=94:
        raise ValueError('Original scene graph requires the 94 code-traced transitions')
    for edge in nav['edges']:
        if not (0<=edge['from']<46 and 0<=edge['to']<46):
            raise ValueError(f'Invalid ROM navigation edge: {edge}')


def _validate_authoring(a:dict):
    if a.get('version')!=1 or set(a['native_fallback'])!={
       '1','11','12','13','14','16','23','24','25','26','27','31','35','39','41','43','44','45'}:
        raise ValueError('Canonical native render family authoring is incomplete')
    hdr=a['manifest_header']
    if hdr['version']!=1 or hdr['scene_table']!='0x0209E32C':
        raise ValueError('Wrong native scene dispatch table')
    if not isinstance(hdr['notes'],list):
        raise ValueError('Scene authoring notes must be a list')
    for key,data in a['scene_overrides'].items():
        if not key.isdecimal() or not 0<=int(key)<46:
            raise ValueError(f'Invalid scene authoring ID {key!r}')
        if not set(data)<={'archive','archive_evidence','widgets','display_routing'}:
            raise ValueError(f'Unrecognized source extension in scene {key}')
        if data.get('archive') and not data.get('archive_evidence'):
            raise ValueError(f'Scene {key} lacks archive evidence')
        for widget in data.get('widgets',()):
            if widget.get('allow_layout_edit') is not False or not widget.get('source'):
                raise ValueError(f'Scene {key} has mutable or unsourced original ROM layout')
        r=data.get('display_routing')
        if r and (r.get('swap_bit15_at_entry') not in (0,1) or r.get('evidence')!='Direct' or
                  not r.get('source')):
            raise ValueError(f'Scene {key} LCD routing lacks direct original source')
    conditional=a['conditional_scene_ids']
    if len(conditional)!=len(set(conditional)) or not all(0<=n<46 for n in conditional):
        raise ValueError('Invalid conditional source-backed variant IDs')


def build_manifest(nav:dict, authoring:dict)->dict:
    """Derive all 46 identities and 94 transition edges from original nav C trace."""
    _validate_nav(nav)
    _validate_authoring(authoring)
    header=deepcopy(authoring['manifest_header'])
    scenes=[]
    for original in nav['scenes']:
        sid=original['id']
        extension=deepcopy(authoring['scene_overrides'].get(str(sid),{}))
        record={'id':sid,'name':original['label'],'overlay':original['overlay'],
                'archive':extension.pop('archive',None),
                'archive_evidence':extension.pop('archive_evidence','unresolved'),
                'widgets':extension.pop('widgets',[]),
                'create':deepcopy(original['create'])}
        if extension:
            if set(extension)!={'display_routing'}:
                raise ValueError(f'Unhandled source evidence scene {sid}: {list(extension)}')
            record['display_routing']=extension['display_routing']
        scenes.append(record)
    edges=[{'from':e['from'],'to':e['to'],'method':e['method'],'selector':e['case'],
            'action':e['button_or_action'],'code':e['file']+f'#L{e["line"]}'}
           for e in nav['edges']]
    return {'version':header['version'],'provenance':header['provenance'],
            'scene_table':header['scene_table'],'scenes':scenes,'edges':edges,
            'notes':header['notes']}


def _validate_traces(manifest:dict, source:dict, callbacks:dict):
    if source.get('version')!=2 or source.get('scene_count')!=46:
        raise ValueError('Incompatible original binary/source v2 callgraph')
    for sid,(m,g) in enumerate(zip(manifest['scenes'],source['scenes'])):
        if (m['id'],m['name'],m['overlay'])!=(g['id'],g['name'],g['overlay']):
            raise ValueError(f'Original ARM9 callgraph mismatch for scene {sid}')
        if g.get('create_table')!=m.get('create'):
            raise ValueError(f'ARM9 scene constructor mismatch for scene {sid}')
    if len(source['scenes'])!=46:
        raise ValueError('ARM9 callgraph scene coverage incomplete')
    families=callbacks.get('families',[])
    expected=('JQuiz','CommuMenu','JGalaxyPreConstructor','JGalaxyCreator',
              'JGalaxyPostConstructor','JArenaJobs')
    if [x.get('id') for x in families]!=list(expected):
        raise ValueError('ROM selector family list differs from original indexed table')
    for f in families:
        if len(f['table_entries'])!=f['count']:
            raise ValueError(f'Original ROM callback table count mismatch: {f["id"]}')
        for n,item in enumerate(f['table_entries']):
            if item['index']!=n or int(item['table_word_address'],16)!=f['callback_table']+n*4:
                raise ValueError(f'ROM callback pointer slot mismatch {f["id"]}:{n}')
    for entry in callbacks['scene_dispatch']:
        if entry['scene_id']<0 or entry['scene_id']>=46:
            raise ValueError(f"Unknown callback scene {entry['scene_id']}")
        f=next((f for f in families if f['id']==entry['family']),None)
        if f is None or f['overlay']!=manifest['scenes'][entry['scene_id']]['overlay']:
            raise ValueError(f"Wrong callback overlay/family for scene {entry['scene_id']}")
        for branch in entry['branches']:
            if not 0<=branch['selected_state_index']<f['count']:
                raise ValueError(f"Unknown original callback slot in scene {entry['scene_id']}")


def build_native_registry(manifest:dict, authoring:dict,
                          source:dict, callbacks:dict)->dict:
    """Derive one runtime renderer declaration per original ARM9 scene ID.

    Do not promote referenced archive names to rendered/visible scene layers.
    Source-backed BGs come only from scenevariants; callbacks are possible
    runtime states, not a current game-state reconstruction.
    """
    _validate_traces(manifest,source,callbacks)
    _validate_authoring(authoring)
    fallback=authoring['native_fallback']
    conditional=set(authoring['conditional_scene_ids'])
    items=[]
    for sid,s in enumerate(manifest['scenes']):
        g=source['scenes'][sid]
        variants=screenvariants.variants_for_scene(sid)
        if str(sid) in fallback:
            if variants:
                raise ValueError(f'{sid}: static BG declared for runtime-only renderer family')
            desc=fallback[str(sid)]
            kind,explanation,src=desc['family'],desc['explanation'],desc['source']
            status='native renderer path verified; no scene BG composition asserted'
        else:
            if not variants:
                raise ValueError(f'{sid}: code-backed BG binding missing; classify native renderer')
            kind='Original ALTM/DIG background + runtime UI'
            explanation=('Original ARM9 loader identifies the engine and source tilemap; '
                         'other scene elements may still require runtime state')
            src=variants[0]['layers'][0]['source'] if variants[0]['layers'] else (
                g['constructor_files'][0]['path'] if g['constructor_files'] else '')
            status=('conditional source-backed BG variant' if sid in conditional else
                    'source-backed native BG instance')
        refs=[{'id':x['id'],'condition':x.get('condition',''),
               'routing':x.get('routing_source',''),
               'source_layers':[{'engine':layer['engine'],'bg_slot':layer['slot'],
                                 'atm':layer['atm'],'dig':layer['dig'],
                                 'source':layer['source'],
                                 'initially_visible':layer.get('visible',True)}
                                for layer in x['layers']]} for x in variants]
        cb=[{'family':x['family'],'selection':x['selection'],
             'branch_count':len(x['branches'])}
            for x in callbacks['scene_dispatch'] if x['scene_id']==sid]
        items.append({
            'id':sid,'name':s['name'],'overlay':s['overlay'],
            'native_family':kind,'code_source':src,
            'native_explanation':explanation,'composition_status':status,
            'background_variant_count':len(variants),'background_variants':refs,
            'callback_families':cb,
            'scene_table_create':deepcopy(s['create']),
            'asset_reference_count':len(g['asset_references']),
            'unresolved_original_call_count':len(g['unresolved']),
            'render_mode':'Source-backed tile BG' if variants else kind,
            'evidence':'original ROM and ARM9 code; no emulator placement',
            'deck_characters':('skip: render from player saved decks at game runtime; '
                               'never generate fixed characters in editor'),
            'dynamic_state_unknown':('variant not confirmed at a particular tick' if variants
                                     else 'no static ALTM/DIG placement proven; original runtime pathway indexed')
        })
    return {'version':1,'scene_count':46,
            'source_authority':('Original ARM9 source table and original overlay bytes; '
                                'no screenshot-derived state'),
            'composition_scene_count':sum(bool(x['background_variants']) for x in items),
            'non_tile_static_unresolved_count':sum(not x['background_variants'] for x in items),
            'all_ids':list(range(46)),'scenes':items}
