"""Read-only census of all hard-coded battle character slot authoring contracts."""
from __future__ import annotations

import json
from collections import Counter, defaultdict
from pathlib import Path

from jus_formats import almt, dstx, koma, roster
from jus_package import komacards
from jus_package.project import DataRoot
from . import slots


def scan(root: DataRoot) -> dict:
    cat = komacards.load(root)
    cards_by_slot = defaultdict(list)
    by_art = defaultdict(set)
    for card in cat.cards.cards:
        for path in cat.art_for_card(card):
            by_art[path].add(card.index)     # all roles, not just battle cards
        if card.raw[6] == 0:
            cards_by_slot[card.raw[7]].append(card)
    results = []
    for slot in roster.BATTLE_IDS:
        errors, warnings = [], []
        record = slots.record(slot)
        files = slots.slot_files(root, slot)
        source_files = files.animation + files.images + files.windows
        total_animations = 0
        unique_move_ids = set()
        image_files = 0
        image_frames = 0
        effects = 0
        for path in source_files:
            try:
                arc = root.archive(path)
            except (KeyError, ValueError, OSError) as exc:
                errors.append(f'{path}: cannot load archive: {exc}')
                continue
            for member in arc.entries:
                if member.ext == '.amt':
                    try:
                        moves = almt.parse(member.payload()).moves
                        total_animations += len(moves)
                        unique_move_ids.update(m.id & 0xffffff for m in moves)
                    except ValueError as exc:
                        errors.append(f'{path}|{member.name}: ALMT {exc}')
                if member.ext == '.dtx':
                    try:
                        d = dstx.parse(member.payload())
                        image_files += 1
                        image_frames += len(d.frames)
                        if '_e' in member.name:
                            effects += 1
                    except ValueError as exc:
                        errors.append(f'{path}|{member.name}: DSTX {exc}')
        koma_paths = set()
        koma_panels = 0
        owned_card_ids = {card.index for card in cards_by_slot[record]}
        for card in cards_by_slot[record]:
            paths = cat.art_for_card(card)
            if len(paths) != 1:
                errors.append(f'card {card.index}: expected one Koma art member, got {paths}')
            for path in paths:
                koma_paths.add(path)
                if by_art[path] - owned_card_ids:
                    warnings.append(f'{path}: also referenced by cards outside the slot, cannot safely edit independently')
        for path in sorted(koma_paths):
            try:
                kf = koma.parse(root.read(path))
                koma_panels += len(kf.panels)
                if any(p.size != (48, 48) for p in kf.panels):
                    errors.append(f'{path}: unexpected Koma panel size')
                errors.extend(f'{path}: {p}' for p in kf.problems())
            except (OSError, ValueError, KeyError) as exc:
                errors.append(f'{path}: bad Koma resource: {exc}')
        results.append({
            'slot': slot, 'record': record, 'resource_block': f'0x{files.base:06X}',
            'forms': files.forms, 'animation_archives': len(files.animation),
            'image_archives': len(files.images), 'window_archives': len(files.windows),
            'gameplay_tables': sorted(files.tables),
            'almt_move_records': total_animations, 'unique_almt_move_ids': len(unique_move_ids),
            'dstx_sprite_members': image_files, 'dstx_frames': image_frames,
            'effect_sprite_members_name_hint': effects,
            'koma_card_count': len(cards_by_slot[record]), 'koma_art_members': len(koma_paths),
            'koma_panels': koma_panels, 'errors': errors, 'warnings': warnings,
        })
    return {
        'authority': 'Extracted JUS data + native parsers, hard-coded ARM9 74-entry battle slot table',
        'scope': 'Battle roster; support-only and passive Koma do not use the same replacement contract',
        'total_slots': len(results), 'slots_with_errors': sum(bool(x['errors']) for x in results),
        'slots_with_warnings': sum(bool(x['warnings']) for x in results),
        'totals': {k: sum(x[k] for x in results) for k in (
            'almt_move_records', 'dstx_sprite_members', 'dstx_frames',
            'koma_card_count', 'koma_art_members', 'koma_panels')},
        'records': results,
    }


def write(root: DataRoot, out: Path) -> dict:
    report = scan(root)
    out = Path(out)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(json.dumps(report, indent=1, ensure_ascii=False) + '\n', encoding='utf-8')
    return report
