"""Traced non-button TopMenu sprites and emulator-capture variant metadata.

The original scene and primary widget manifest remain independent. This file
only reads the embedded code/source-backed metadata; missing runtime CharaData
animation is left unresolved rather than replaced with an invented sprite.
"""
from __future__ import annotations
import json
from pathlib import Path
from jus_package.screencomposition import PlacedWidget,place_widget,screen_for_engine

PATH=Path(__file__).with_name('screen_extras.json')

def load_metadata()->dict:
    obj=json.loads(PATH.read_text(encoding='utf-8'))
    if obj.get('version')!=1 or obj.get('scene')!=3 or len(obj.get('elements',[]))!=12:
        raise ValueError('Unsupported original TopMenu extras manifest')
    return obj

def scene_widgets_override(scene:dict,variant_id:str|None)->dict:
    if scene['id']!=3 or variant_id!='captured':
        return scene
    cfg=load_metadata()['snapshot']
    copy=dict(scene)
    copy['widgets']=[dict(w) for w in scene['widgets']]
    for w in copy['widgets']:
        override=cfg['disabled_icon_moves'].get(str(w['id']))
        if override:
            w['move_id']=override
            w['name']=w['name']+' (captured disabled)'
            w['snapshot_evidence']='JUS.ml2: live widget +0x124=8, source fallback index8'
    return copy

def visible_extras(root,scene:dict,variant_id:str|None)->tuple[list[PlacedWidget],list[str]]:
    if scene['id']!=3:return [],[]
    md=load_metadata()
    results,errors=[],[]
    for entry in md['elements']:
        spec=dict(entry)
        spec['screen'] = screen_for_engine(spec['engine'],0)
        if spec['id']=='info-icon' and variant_id!='captured':
            # TopMenu_Add -> CommonInfo_Create(0,-1,1,-1), then
            # CommonInfo_Create sets object+0x40 to param_1 (0). The
            # initial steady-position icon0 is code-backed independently
            # of the optional emulator state comparison.
            spec['state_condition']=('Constructor-initial information mode0 only; '
                                     'other modes select different authored ALMT moves')
            spec['snapshot_evidence']=('functions_layout/arm9_ov00/arm9_ov00_02153cfc.c#L444; '
                                      'functions_layout/arm9_ov12/arm9_ov12_021bcf1c.c#L31-L49')
        if variant_id=='captured' and spec['id']=='label:3':
            spec['move_id']=md['snapshot']['disabled_label_moves']['3']
            spec['name']+=' (captured disabled)'
            spec['snapshot_evidence']='JUS.ml2 active fallback label mode 0x00500020'
        try:
            results.append(place_widget(root,spec))
        except (ValueError,KeyError,IndexError,OSError) as exc:
            errors.append(f'{spec["id"]}: {exc}')
    return results,errors

def captured_deck_caption(variant_id:str|None)->str|None:
    if variant_id!='captured':return None
    return load_metadata()['snapshot']['deck_caption']
