"""Native 46-ID original ROM rendering family index, not a screenshot cache."""
from __future__ import annotations
from functools import lru_cache
from pathlib import Path
import json

PATH=Path(__file__).with_name('screen_native_registry.json')

@lru_cache(maxsize=1)
def catalog()->dict:
    data=json.loads(PATH.read_text(encoding='utf8'))
    if data.get('version')!=1 or data.get('scene_count')!=46:
        raise ValueError('Native scene registry version/count mismatch')
    if [s['id'] for s in data.get('scenes',())]!=list(range(46)):
        raise ValueError('Native scene registry has unindexed or reordered scene IDs')
    if sum(bool(s['background_variants']) for s in data['scenes'])!=data['composition_scene_count']:
        raise ValueError('Source-bound renderer count inconsistent')
    return data

def scene_info(scene_id:int)->dict:
    if not 0<=scene_id<46:
        raise IndexError(f'Invalid native scene ID {scene_id}')
    return catalog()['scenes'][scene_id]
