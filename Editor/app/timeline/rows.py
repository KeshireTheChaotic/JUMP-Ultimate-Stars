"""Original ALMT timeline row presenters (R08). Immutable game code is authority."""
from __future__ import annotations
from app import theme as T
from jus_package import dynamicgeometry,spawns,timelineprojection
from jus_package.project import split

def build_timeline_rows(editor, hex_id):
    rows = []
    if not editor.move:
        editor._motion, editor._cues = None, []
        return rows
    marker_ticks = timelineprojection.marker_tick_map(editor.move)
    for ni, node in enumerate(editor.move.nodes):
        if node is None:
            continue
        name = editor.almt.node_names[ni]
        gid = ('node', ni)
        collapsed = gid in editor._collapsed
        child_rows = []
        all_ticks = set()
        for ti, tr in enumerate(node.tracks):
            row = {'id': ('trk', ni, ti), 'label': tr.field, 'indent': 1, 'editable': True,
                   'colour': T.key_colour(tr.field), 'sel': (ni, ti)}
            if tr.field == 'NoteTrack' and tr.opaque:
                row.update(timelineprojection.note_track_view(
                    tr, marker_ticks, T.EVENT_COLOURS, T.FG))
                row['tooltip'] = editor._event_tooltip
            elif tr.opaque:
                row.update(kind='static', keys=[], badge='raw', editable=False)
            elif not tr.keyed:
                row.update(kind='static', keys=[], badge=editor._fmt_short(tr.field, tr.value))
            else:
                keys = [(k.tick, k) for k in tr.keys]
                row.update(kind='track', keys=keys, badge=f'{len(keys)}',
                           tooltip=lambda t, k, f=tr.field: f'{f} @ {t}\n{editor._fmt(f, k.value)}')
                if tr.field == 'Marker':
                    row.update(timelineprojection.marker_track_view(tr, T.WARN))
            all_ticks.update(t for t, _ in row.get('keys', []))
            child_rows.append(row)
        rows.append({'id': gid, 'kind': 'group', 'label': name, 'collapsed': collapsed,
                     'keys': [(t, None) for t in sorted(all_ticks)], 'editable': False})
        if not collapsed:
            rows.extend(child_rows)
    rows.extend(editor._spawn_rows())
    rows.extend(editor._notetrack_effect_rows())
    rows.extend(editor._shot_rows())
    if editor._pursuer_events:
        gid = ('group', 'effects')
        collapsed = gid in editor._collapsed
        rows.append({'id': gid, 'kind': 'group', 'label': 'Pursuer effects (read-only)', 'collapsed': collapsed,
                     'keys': [(ev.tick, None) for ev in editor._pursuer_events], 'editable': False})
        if not collapsed:
            rows.append({'id': ('virt', 'pursuer'), 'label': 'chara_action 13/14', 'indent': 1, 'kind': 'track',
                         'colour': T.WARN, 'editable': False,
                         'keys': [(ev.tick, ev) for ev in editor._pursuer_events],
                         'tooltip': lambda t, ev: (f'tick {ev.tick}: ' + '; '.join(ev.operations) + '\n' +
                                                   ' / '.join(hex_id(i, 6) for i in ev.animation_ids))})
            seen = set()
            for ev in editor._pursuer_events:
                for eid in ev.animation_ids:
                    if (ev.tick, eid) in seen or eid not in editor._effect_moves:
                        continue
                    seen.add((ev.tick, eid))
                    effect, names, path = editor._effect_moves[eid]
                    for eni, enode in enumerate(effect.nodes):
                        if enode is None:
                            continue
                        for tr in enode.tracks:
                            if tr.field not in ('BoundsIndex', 'CollisionRect0', 'Marker') or tr.opaque:
                                continue
                            ks = [(ev.tick + k.tick, k) for k in tr.keys] if tr.keyed else [(ev.tick, None)]
                            ks = [(t, k) for t, k in ks if t <= editor.move.duration]
                            rows.append({'id': ('virt', eid, ev.tick, eni, tr.field), 'indent': 2,
                                         'label': f'{eid:06X} {names[eni]}.{tr.field}', 'kind': 'track',
                                         'colour': T.GOOD, 'editable': False, 'keys': ks,
                                         'info': (eid, path)})
    return rows


def build_notetrack_effect_rows(editor, short_cue):
    """Read-only rows derived from NoteTrack: physics (0x01xx) and sound cues (0x04xx)."""
    editor._refresh_notetrack_effects()
    mo, cues = editor._motion, editor._cues
    if not (mo and mo.commands) and not cues:
        return []
    gid = ('group', 'ntfx')
    collapsed = gid in editor._collapsed
    ticks = sorted({t for t, _, _ in (mo.commands if mo else [])} | {c.tick for c in cues})
    rows = [{'id': gid, 'kind': 'group', 'label': 'NoteTrack physics & sound', 'collapsed': collapsed,
             'keys': [(t, None) for t in ticks], 'editable': False}]
    if collapsed:
        return rows
    if mo and mo.commands:
        spans, labels, keys = [], [], []
        off_from = None
        for f in mo.frames:                               # gravity-off spans
            if not f.gravity and off_from is None:
                off_from = f.tick
            if f.gravity and off_from is not None:
                spans.append((off_from, f.tick, T.READONLY, 'gravity off'))
                off_from = None
        if off_from is not None:
            spans.append((off_from, editor.move.duration, T.READONLY, 'gravity off'))
        for t, node, c in mo.commands:
            keys.append((t, ('phys', t)))
            if c.opcode == 0x0104:
                v = c.values() or [0, 0, 0]
                spans.append((t, t + (v[2] & 0xFF), T.WARN, ''))
            if c.opcode in (0x0100, 0x0103, 0x0104):
                v = c.values() or []
                labels.append((t, 'stop' if c.opcode == 0x0100 else f'({v[0]},{v[1]})', T.WARN))
        rows.append({'id': ('ntfx', 'physics'), 'label': 'Physics', 'indent': 1, 'kind': 'track',
                     'colour': T.WARN, 'editable': False, 'keys': keys, 'spans': spans, 'labels': labels,
                     'derived': 'physics', 'badge': f'{len(mo.commands)}',
                     'tooltip': lambda t, p: editor._physics_tooltip(t)})
    if cues:
        rows.append({'id': ('ntfx', 'sound'), 'label': 'Sound', 'indent': 1, 'kind': 'track',
                     'colour': T.GOOD, 'editable': False, 'derived': 'sound', 'badge': f'{len(cues)}',
                     'keys': [(c.tick, ('snd', c.tick)) for c in cues],
                     'labels': [(c.tick, '♪ ' + short_cue(c),
                                 T.GOOD if c.ssar is not None else T.MUTED) for c in cues],
                     'tooltip': lambda t, p: editor._sound_tooltip(t)})
    return rows


def build_spawn_rows(editor):
    """One read-only clip row per GenerateID key (Unity-style sub-clip bars)."""
    sp_list = spawns.keyed_spawns(editor.move, editor.almt.node_names)
    ref_events = spawns.reference_events(editor.move, editor.almt.node_names)
    if not sp_list:
        return []
    gid = ('group', 'spawns')
    collapsed = gid in editor._collapsed
    rows = [{'id': gid, 'kind': 'group', 'label': f'Spawned effects ({len(sp_list)} keys)', 'collapsed': collapsed,
             'keys': [(sp.tick, None) for sp in sp_list] + [(e.tick, None) for e in ref_events],
             'editable': False}]
    if collapsed:
        return rows
    kills = (spawns.teardowns(editor.move, editor.almt.node_names, editor._effect_moves)
             if editor.effect_teardown.get() else {})
    editor._teardowns = kills
    if ref_events:
        rows.append({'id': ('spawn', 'references'), 'kind': 'track', 'indent': 1,
                     'label': 'GN effect teardown (4/5)', 'colour': T.BAD,
                     'editable': False, 'keys': [(e.tick, ('ref', e.tick)) for e in ref_events],
                     'labels': [(e.tick, '✕ all' if e.action == 4 else '✕ oldest', T.BAD) for e in ref_events],
                     'tooltip': lambda t, p, events=ref_events: '\n'.join(
                         f'{ev.node} tick {ev.tick}: chara_action({ev.action}) — {ev.kind}'
                         for ev in events if ev.tick == t) +
                         '\nARM9 0x0206C650 / 0x0206C760 → handle +0x08 (0x02049460) → '
                         'teardown 0x02027560. Runs before the same tick\'s spawns (inferred).'})
    horizon = editor.move.duration
    for sp in sp_list:
        entry = editor._effect_moves.get(sp.effect_id)
        row = {'id': ('spawn',) + sp.key, 'indent': 1, 'kind': 'track', 'editable': False,
               'keys': [(sp.tick, sp)], 'spawn': sp}
        if entry is None:
            row.update(label=f'{sp.effect_id:06X} ⚠ missing', colour=T.BAD, badge=sp.node,
                       tooltip=lambda t, s: f'GenerateID {s.effect_id:06X} from {s.node} @ {s.tick}\n'
                                            f'No move with this id in the character or efc/ archives.')
            rows.append(row)
            continue
        child, names, path = entry
        kill = kills.get(sp.key)
        a, b, open_end = spawns.effect_span(sp, child, horizon, kill)
        src = 'common' if path.startswith('efc/') else 'char'
        end_note = (f' ✕{kill.tick}' if kill else (' ⟳ →' if open_end else ''))
        row.update(label=f'{sp.effect_id:06X} #{sp.occurrence}', colour=T.EFFECT, badge=sp.node,
                   info=(sp.effect_id, path),
                   spans=[(a, b, T.EFFECT, f'{split(path)[-1]} ({src}){end_note}')],
                   tooltip=lambda t, s, c=child, p=path, oe=open_end, k=kill: (
                       f'GenerateID {s.effect_id:06X} — node {s.node}, key {s.key_index}, tick {s.tick}\n'
                       f'{p}\nlength {c.duration}' +
                       (f'\ntorn down at tick {k.tick} by chara_action({k.action})' if k else
                        '\nloops; no teardown in this move — the owner keeps it past the move end'
                        if oe else '') +
                       '\nDouble-click to open the effect move.'))
        rows.append(row)
        # one level of nested spawns, shifted into parent time
        for csp in spawns.keyed_spawns(child, names):
            if csp.tick > child.duration:
                continue
            t0 = sp.tick + csp.tick
            centry = editor._effect_moves.get(csp.effect_id)
            crow = {'id': ('spawn',) + sp.key + csp.key, 'indent': 2, 'kind': 'track', 'editable': False,
                    'keys': [(t0, csp)], 'label': f'↳ {csp.effect_id:06X}', 'badge': csp.node,
                    'colour': T.EFFECT if centry else T.BAD, 'spawn': csp}
            if centry:
                ca, cb, _ = spawns.effect_span(csp, centry[0], horizon - sp.tick)
                crow.update(info=(csp.effect_id, centry[2]),
                            spans=[(sp.tick + ca, sp.tick + cb, T.EFFECT, split(centry[2])[-1])])
            rows.append(crow)
    return rows


def build_shot_rows(editor, hex_id):
    """Timeline source events, including other handlers not rendered yet."""
    events = editor._shot_events_current()
    if not events:
        return []
    gid = ('group', 'shot')
    collapsed = gid in editor._collapsed
    out = [{'id': gid, 'kind': 'group',
            'label': 'Shot objects (NoteTrack action 2; source-only)',
            'collapsed': collapsed, 'editable': False,
            'keys': [(ev.tick, ev) for ev in events]}]
    if not collapsed:
        out.append({'id': ('virt', 'shot'), 'kind': 'track', 'derived': 'shot',
                    'label': 'chr/shot records', 'indent': 1, 'editable': False,
                    'colour': T.WARN,
                    'keys': [(ev.tick, ev) for ev in events],
                    'spans': [(ev.tick, min(editor.move.duration, ev.nominal_end),
                               T.WARN, 'nominal only') for ev in events],
                    'labels': [(ev.tick, f'#{ev.record_index} h{ev.handler:02X}', T.WARN)
                               for ev in events],
                    'tooltip': lambda t, ev: (
                        f'tick {ev.tick}: original shot record {ev.record_index}, '
                        f'handler 0x{ev.handler:02X}, launch ({ev.launch_x},{ev.launch_y}), '
                        f'authored lifetime {ev.record.effective_lifetime} ticks\\n'
                        + 'geometry: ' + dynamicgeometry.shot_dynamic_path(
                            ev.handler).geometry_family + '\\n'
                        + 'refs: ' + ', '.join(hex_id(r, 6) for r in ev.references)
                        + '\\nStatic source only. Hit/contact, runtime position, repeats, '
                          'conditional branch result and 3D transforms not simulated.')})
    return out

