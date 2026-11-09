"""Read the portable evidence index extracted from original ARM9 C.

The index covers all 46 scene-table entries. A string reference is NOT
equivalent to active loading, placement or LCD routing; UI labels must
distinguish it from a directly verified constructor's drawable binding.
"""
from __future__ import annotations
import json
from functools import lru_cache
from pathlib import Path

PATH=Path(__file__).with_name('screen_code_sources_v2.json')
RUNTIME_PATH=Path(__file__).with_name('screen_runtime_dispatch.json')
HARDWARE_PATH=Path(__file__).with_name('screen_hardware_trace.json')


@lru_cache(maxsize=1)
def runtime_dispatch_catalog() -> dict:
    model=json.loads(RUNTIME_PATH.read_text(encoding='utf8'))
    if model.get('version')!=1 or len(model.get('families',()))!=6:
        raise ValueError('ROM callback-table metadata is incompatible')
    return model


def runtime_scene_modes(scene_id:int) -> list[dict]:
    return [s for s in runtime_dispatch_catalog()['scene_dispatch']
            if s['scene_id']==scene_id]


def runtime_scene(scene_id: int) -> dict | None:
    return next(iter(runtime_scene_modes(scene_id)),None)


def topmenu_action_sites() -> list[dict]:
    return runtime_dispatch_catalog()['topmenu_dynamic_actions']['offset_sites']


@lru_cache(maxsize=1)
def hardware_catalog() -> dict:
    model=json.loads(HARDWARE_PATH.read_text(encoding='utf8'))
    if model.get('version')!=1 or model.get('scene_count')!=46:
        raise ValueError('Hardware trace metadata is incompatible')
    return model


def hardware_scene(scene_id:int) -> dict:
    return hardware_catalog()['scenes'][scene_id]


@lru_cache(maxsize=1)
def catalog() -> dict:
    result=json.loads(PATH.read_text(encoding='utf8'))
    if result['version']!=2 or result['scene_count']!=46:
        raise ValueError('Original code reference index is missing or incomplete')
    return result


def scene_sources(scene_id:int) -> dict:
    return catalog()['scenes'][scene_id]


def code_asset_paths(root,scene_id:int) -> list[str]:
    values=[]
    for a in scene_sources(scene_id)['confirmed_resource_paths']:
        if root.exists(a) and a not in values: values.append(a)
    return values


def source_evidence(scene_id:int, asset_path:str) -> list[str]:
    evidence=[]
    for r in scene_sources(scene_id)['asset_references']:
        if asset_path in r['asset_paths']:
            link=f'{r["source"]}#L{r["line"]} ({r["symbol"]}, depth {r["code_call_depth"]})'
            if link not in evidence:evidence.append(link)
    return evidence
