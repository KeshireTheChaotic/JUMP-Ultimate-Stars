"""Source-preserving original EditorApp workflows (R08 Phase 9).
Actual ALMT/BIN authority and Tk selection behavior are unchanged.
"""
from __future__ import annotations

from jus_formats import battleai, battleinput, roster
from jus_package import movelinks
from jus_package.project import join, split


def show_roster_sprite(editor):
    """Open the sprite named by the current move's authored TextureID, if present."""
    if not editor.root_data:
        return
    if editor.move and editor.index:
        candidates = []
        for node in editor.move.nodes:
            if node is None:
                continue
            for track in node.tracks:
                if track.field != 'TextureID':
                    continue
                if track.keyed:
                    entries = [k.value for k in track.keys if k.tick <= editor.tick]
                    if entries:
                        candidates.append(entries[-1])
                else:
                    candidates.append(track.value)
        for rid in candidates:
            if not isinstance(rid, int):
                continue
            ref = editor.index.sprite_ref(rid)
            if ref is None:
                continue
            matching = next((label for label, path in editor._sprite_paths.items()
                             if path == ref.dstx_path), None)
            if matching:
                if editor.sprite_path != ref.dstx_path:
                    if (editor.sprite_dirty or editor.almt_dirty) and not editor.confirm_discard():
                        return
                    editor.sprite_combo.set(matching)
                    editor.load_sprite(matching, force=True)
                break
    editor.show_workspace('sprite')


def _switch_almt(editor, name):
    if editor.almt_dirty and not editor.confirm_discard():
        editor.almt_combo.set(split(editor.almt_path)[-1] if editor.almt_path else '')
        return
    editor.load_almt(name)


def _ai_block(editor):
    """AIPM block (chr/ai/<id>.bin) for the selected move's input selector, or None."""
    if editor.move is None or not editor._battle_base_table() or not editor.root_data:
        return None
    entry = battleinput.MOVE_CONTROLS.get(editor.move.id & 0xFF)
    if entry is None:
        return None
    cid = split(editor.almt_path)[-1][:-4]
    if cid not in editor._ai_profiles:
        path = battleai.AIPM_PATH.format(cid=cid)
        try:
            editor._ai_profiles[cid] = battleai.parse_aipm(editor.root_data.read(path)) \
                if editor.root_data.exists(path) else None
        except (ValueError, KeyError, OSError):
            editor._ai_profiles[cid] = None
    prof = editor._ai_profiles[cid]
    return prof.for_selector(entry[1]) if prof else None


def _move_xref(editor):
    """Read-only, session-local BIN/Koma/ALMT references."""
    if editor.root_data is None:
        return None
    if editor._move_xrefs is None and not editor._move_xrefs_error:
        try:
            editor._move_xrefs = movelinks.MoveLinks(editor.root_data)
        except (OSError, ValueError, KeyError) as exc:
            editor._move_xrefs_error = str(exc)
    return editor._move_xrefs


def _move_source_form(editor):
    if not editor.almt_path:
        return None, None
    member = split(editor.almt_path)[-1]
    stem = member[:-4] if member.endswith('.amt') else ''
    if stem in roster.BATTLE_IDS:
        return stem, member
    for size in (2, 3):
        tail = f'_{size}'
        if stem.endswith(tail) and stem[:-len(tail)] in roster.SUPPORT_IDS:
            return stem[:-len(tail)], member
    return None, None


def _move_control_and_title(editor, move):
    form, member = editor._move_source_form()
    if not form:
        return ''
    label = (battleinput.control_for(move.id) or '') if form in roster.BATTLE_IDS else ''
    # The Roster tree already shows the original BIN-backed move titles.
    # This legacy Moves Treeview is deliberately hidden in Roster mode but
    # remains the selection model for Timeline/Undo. Never decompress the
    # same ChrArc ALMT once per row just to label a *hidden* list:
    # MoveLinks.text_for_move -> _source_ids -> DataRoot.read decompresses
    # the full nested DSCP payload for every row (an observable UI freeze).
    if getattr(editor, 'roster_browser', None) is not None:
        return label or (f'Support ({member})' if form in roster.SUPPORT_IDS else '')
    svc = editor._move_xref()
    if svc:
        title = svc.text_for_move(form, move.id, almt_member=member)
        if title and title.display_title:
            return f'{label} - {title.display_title}' if label else title.display_title
    return label or (f'Support ({member})' if form in roster.SUPPORT_IDS else '')


def open_move_resource(editor, form: str, resource_id: int, member: str, card_index: int | None = None, *, hx):
    """Go to the original ALMT whose ID this Koma actually references."""
    if not editor.root_data or not member or not member.endswith('.amt'):
        return False
    stem = member[:-4]
    valid = (stem == form and form in roster.BATTLE_IDS) or (
        form in roster.SUPPORT_IDS and stem in (f'{form}_2', f'{form}_3'))
    if not valid:
        editor.status.set(f'Unverified move source: {form} / {member}')
        return False
    archive = join('chr/ChrArc.aar', f'chr/{stem}.aar')
    target = join(archive, member)
    if not editor.root_data.exists(target):
        editor.status.set(f'Missing ALMT: {target}')
        return False
    if editor.almt_path != target and not editor.confirm_discard():
        return False
    if editor.container != archive:
        editor.select_container(archive, form)
    if editor.almt_path != target:
        editor.almt_combo.set(member)
        editor.load_almt(member)
    if not editor.almt:
        return False
    found = next((i for i, m in enumerate(editor.almt.moves) if m.id == resource_id), None)
    if found is None:
        editor.status.set(f'Missing move {hx(resource_id)} in {target}')
        return False
    # The same battle ALMT move can be played from several deployed Koma.
    # Resolve NoteTrack 0x0402 through the explicitly chosen Koma, or the
    # size-specific Special A/B source link. Never guess a size for a
    # common/unnamed action without an associated card.
    idx = editor.roster_browser.index
    matched_card = None
    if idx is not None:
        source_cards = []
        if card_index is not None:
            source_cards.append(card_index)
        elif editor._sound_koma_card is not None:
            source_cards.append(editor._sound_koma_card)
        for number in source_cards:
            if not 0 <= number < len(idx.cards.cards):
                continue
            candidate = idx.cards.cards[number]
            if any(v.resource_id == resource_id and v.almt_member == member
                   for v in idx.moves.card_moves(candidate)):
                matched_card = candidate
                break
        # Offset 0x29..0x32 encodes the 4..8 battle-Koma size in ROM.
        # Even when several cards use the same size, their sound bank is
        # identical (chr_b.bin +0x32 + 2*(size-4)).
        off = resource_id & 0xff
        if matched_card is None and form in roster.BATTLE_IDS and 0x29 <= off <= 0x32:
            size = 4 + (off - 0x29) // 2
            matched_card = next(
                (c for c in idx.by_form.get(form, ())
                 if c.size == size and
                 any(v.resource_id == resource_id and v.almt_member == member
                     for v in idx.moves.card_moves(c))),
                None)
    editor._sound_koma_card = matched_card.index if matched_card is not None else None
    editor.sound_form.set(f'{matched_card.size}-cell' if
                        matched_card is not None and form in roster.BATTLE_IDS else 'Auto')
    editor.show_workspace('animation')
    editor.roster_browser.select_move(form, resource_id, member)
    if editor.move_filter.get():
        editor.move_filter.set('')
    editor.populate_moves(select=found)
    editor.status.set(f'Koma source: {form} / {member} / {hx(resource_id)}')
    return True


def open_koma_card(editor, card_index: int):
    ws = editor.suite.get('koma')
    if ws is None or editor.root_data is None:
        return False
    editor.show_workspace('koma')
    ok = ws.open_card_by_id(card_index)
    if ok:
        editor._sound_koma_card = card_index
        editor.roster_browser.select_card(card_index)
    return ok


def _battle_base_table(editor) -> bool:
    """True for a battle character's base move table (chr/<id>.aar|<id>.amt), the
    only table the input selector 0x021712B8 indexes."""
    if not editor.almt_path:
        return False
    name = split(editor.almt_path)[-1]
    return name.endswith('.amt') and name[:-4] in roster.BATTLE_IDS
