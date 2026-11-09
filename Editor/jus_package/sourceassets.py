"""Editable game-data bytes, distinct from immutable ARM9 scene layout.

This module only stages *asset* changes in DataRoot. It never serializes a
scene's engine selection, BG register state, hard-coded coordinate, callback,
or transition ID into the game code. Unknown asset formats can still be edited
as bytes; explicit unsafe override is required for broken known structures.
"""
from __future__ import annotations

import re
from pathlib import Path

from jus_package.project import split,join


def validate_asset_path(path: str) -> str:
    parts=split(path)
    if not parts or any(not p or Path(p).is_absolute() or '..' in p.replace('\\','/').split('/')
                        or p.startswith('/') for p in parts):
        raise ValueError(f'Unsafe or empty game-relative asset path: {path!r}')
    return path


def archive_member_paths(root, archive_path: str, *, depth: int = 2,
                         limit: int = 1500) -> list[str]:
    """Browse actual source resources, not claims about onscreen instances."""
    validate_asset_path(archive_path)
    todo=[(archive_path,0)]
    found=[]
    while todo and len(found)<limit:
        current,level=todo.pop(0)
        try: members=root.archive(current).entries
        except (ValueError,KeyError,OSError):continue
        for member in members:
            path=join(current,member.name)
            if member.ext=='.aar' and level<depth:
                todo.append((path,level+1))
            else:
                found.append(path)
            if len(found)>=limit:break
    return found


def edit_paths_for_layer(layer, cfg: dict) -> list[str]:
    paths = [layer.atm_path, layer.image_path]
    paths.extend(cfg.get('palette_replacements', ()))
    return _unique(p for p in paths if p)


def edit_paths_for_widget(widget,root=None) -> list[str]:
    spec=widget.spec
    archive=spec['resource_archive']
    items=[widget.dtx_path,archive+'|'+spec['animation']]
    # Find the original DSIG from the exact DSTX resource ID, not guessed
    # filename pairs; embedded DSIGs live inside editable DSTX bytes.
    if root is not None:
        from jus_package import scenes
        try:
            original,_,_=scenes.screen_sprite(root,archive,spec['sprite'])
            items.append(original.image_path)
        except (ValueError,IndexError,KeyError,OSError):
            pass
    if spec.get('source_texture_path'):
        items.append(spec['source_texture_path'])
    return _unique(items)


def _unique(paths):
    return list(dict.fromkeys(paths))


def scene_asset_paths(root, scene: dict, layers=(), configs=None, widgets=(),
                      extra_paths=()) -> list[str]:
    """Enumerate actual source *asset* paths; no inferred placement."""
    configs = configs or {}
    result = []
    for layer in layers:
        result.extend(edit_paths_for_layer(layer, configs.get(layer.name, {})))
    for w in widgets:
        result.extend(edit_paths_for_widget(w))
    result.extend(extra_paths)
    # AAR resources are containers, not editable geometry.
    return [p for p in _unique(result) if root.exists(p)]


def cp932_roundtrip(data: bytes) -> str | None:
    """Use text mode only when source bytes re-encode exactly."""
    if b'\0' in data:
        return None  # Binary tables must not be rendered as plain text.
    try:
        s = data.decode('cp932', 'strict')
    except UnicodeError:
        return None
    if s.encode('cp932', 'strict') != data:
        return None
    return s


def decode_hex(s: str) -> bytes:
    if not re.fullmatch(r'[0-9a-fA-F\s]*', s):
        raise ValueError('Hex editor accepts only 00–FF bytes and whitespace.')
    compact = ''.join(s.split())
    if len(compact) & 1:
        raise ValueError('Hex input has an odd number of digits.')
    return bytes.fromhex(compact)


def format_hex(data: bytes) -> str:
    return '\n'.join(' '.join(f'{v:02X}' for v in data[i:i+16])
                     for i in range(0, len(data), 16))


def inspect_asset(path: str, payload: bytes) -> str:
    """Validate recognized original file formats after a source-data edit.

    Raises on structural mismatch. In an expert raw-edit workflow users may
    opt in to staging malformed/changed layouts. This is never engine code.
    """
    from jus_formats import aft, altm, almt, dsig, dstx, ncl, alar
    from jus_formats.binary import is_dscp, dscp_unwrap
    name=split(path)[-1].lower()
    if not payload:
        raise ValueError('Asset is empty')
    if name.endswith('.ncl'):
        p=ncl.parse(payload)
        return f'NCCL, {len(p.banks)} color banks'
    if name.endswith('.aft'):
        p=aft.parse(payload)
        return f'ALFT, {len(p.ranges)} character ranges'
    blob=dscp_unwrap(payload) if is_dscp(payload) else payload
    if name.endswith('.atm'):
        p=altm.parse(blob)
        return f'ALTM, {p.width}×{p.height} tiles'
    if name.endswith('.dig'):
        p=dsig.parse(blob)
        return f'DSIG, {p.width}×{p.height} pixels'
    if name.endswith('.dtx'):
        if len(blob)<6 or blob[:4]!=b'DSTX':
            raise ValueError('Not DSTX')
        if blob[5]&0x7f == 3:
            p=dstx.parse(blob)
            return f'DSTX, {len(p.frames)} sprite frames'
        if blob[5]&0x7f in (5,6):
            p=dstx.parse_layout(blob)
            return f'DSTX layout, {len(p.panel_maps)} panel maps'
        return 'DSTX, unsupported sprite format version (raw data only)'
    if name.endswith('.amt'):
        p=almt.parse(blob)
        return f'ALMT, {len(p.moves)} original moves'
    if name.endswith('.aar'):
        p=alar.open_nested(blob)
        return f'ALAR, {len(p.entries)} resources'
    return f'Unrecognized format ({Path(name).suffix or "raw bytes"})'


def stage_asset(root, path: str, payload: bytes, *, accept_invalid=False) -> str:
    """Stage bytes, preserving original archive hierarchy and save semantics."""
    validate_asset_path(path)
    if not root.exists(path):
        raise FileNotFoundError(path)
    if not isinstance(payload,bytes):
        raise TypeError('Asset replacement must be bytes')
    try:
        detail=inspect_asset(path,payload)
    except (ValueError,IndexError,OverflowError,TypeError,KeyError) as exc:
        if not accept_invalid:
            raise ValueError(f'{path}: source-format validation failed: {exc}') from exc
        detail=f'Unvalidated expert raw edit: {exc}'
    parts=split(path)
    if len(parts)==1:
        # Do not discard pending edits in parsed nested archives by replacing
        # the cached parent archive bytes.
        if path.lower().endswith('.aar') and any(
                k==path or k.startswith(path+'|')
                for k,n in root._archives.items() if n.dirty):
            raise ValueError('This archive has pending nested edits; save them first.')
        root.write_file(path,payload)
    else:
        root.write(path,payload)
    return detail
