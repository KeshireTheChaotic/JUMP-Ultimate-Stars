"""Cross-generated original scene authority consistency checks (audit R05).

Only checks *derived* portable metadata; does not rewrite game content or
decompiled sources. Legacy v1 generator dependencies are left untouched.
"""
from __future__ import annotations

from . import nativescenes, screencomposition, screenvariants, sourceauthority


def validate_indexes() -> list[str]:
    """Return discrepancies between the canonical 46-ID screen manifest and caches.

    screen_metadata.json is the identity/overlay authority for this check.
    The v2 callgraph and native scene registry are derived indexes; preserve
    their per-scene evidence edges instead of deduplicating runtime paths.
    """
    manifest=screencomposition.load_manifest()['scenes']
    source=sourceauthority.catalog()['scenes']
    native=nativescenes.catalog()['scenes']
    callbacks=sourceauthority.runtime_dispatch_catalog()
    issues=[]
    if not (len(manifest)==len(source)==len(native)==46):
        issues.append('Scene count differs among screen manifest, v2 source index and native registry')
        return issues
    for sid in range(46):
        canon=manifest[sid]
        a=source[sid]
        b=native[sid]
        ident=(canon['id'],canon['overlay'],canon['name'])
        if (a['id'],a['overlay'],a['name'])!=ident:
            issues.append(f'{sid:02d}: source index ID/overlay/name mismatches canonical scene manifest')
        if (b['id'],b['overlay'],b['name'])!=ident:
            issues.append(f'{sid:02d}: native registry ID/overlay/name mismatches canonical scene manifest')
        expected=screenvariants.variants_for_scene(sid)
        stored=b['background_variants']
        if b['background_variant_count']!=len(expected) or len(stored)!=len(expected):
            issues.append(f'{sid:02d}: variant count mismatch')
            continue
        for pos,(live,derived) in enumerate(zip(expected,stored)):
            if live['id']!=derived['id']:
                issues.append(f'{sid:02d}: variant ID differs at position {pos}')
            if live.get('condition','')!=derived.get('condition',''):
                issues.append(f'{sid:02d}: variant condition differs for {live["id"]}')
            if live.get('routing_source','')!=derived.get('routing',''):
                issues.append(f'{sid:02d}: hardware routing source differs for {live["id"]}')
            layers=derived['source_layers']
            if len(live['layers'])!=len(layers):
                issues.append(f'{sid:02d}: BG layer count differs for {live["id"]}')
                continue
            for n,(a_layer,b_layer) in enumerate(zip(live['layers'],layers)):
                compare=(('engine','engine'),('slot','bg_slot'),('atm','atm'),
                         ('dig','dig'),('source','source'))
                for left,right in compare:
                    if a_layer[left]!=b_layer[right]:
                        issues.append(f'{sid:02d}: {live["id"]} layer{n} field {left} differs')
                if a_layer.get('visible',True)!=b_layer['initially_visible']:
                    issues.append(f'{sid:02d}: {live["id"]} layer{n} visibility differs')
        groups=sourceauthority.runtime_scene_modes(sid)
        if len(groups)!=len(b['callback_families']):
            issues.append(f'{sid:02d}: callback family count mismatch')
        else:
            for one,two in zip(groups,b['callback_families']):
                if one['family']!=two['family'] or len(one['branches'])!=two['branch_count']:
                    issues.append(f'{sid:02d}: callback catalog differs for {one["family"]}')
    families={item['id']:item for item in callbacks['families']}
    for scene in callbacks['scene_dispatch']:
        if not 0<=scene['scene_id']<46:
            issues.append(f'Unknown callback scene ID {scene["scene_id"]}')
            continue
        family=families.get(scene['family'])
        if family is None:
            issues.append(f'Unregistered ROM callback family {scene["family"]}')
            continue
        if family['overlay']!=manifest[scene['scene_id']]['overlay']:
            issues.append(f'Callback family {scene["family"]} overlay differs from original scene')
        for branch in scene['branches']:
            idx=branch['selected_state_index']
            if idx<0 or idx>=family['count']:
                issues.append(f'{scene["scene_id"]:02d}: callback selector outside ROM table')
    return issues
