"""Original-source UI coordination extracted from EditorApp — R08 Phase 10.
Source/engine unknowns remain unknown; do not infer native runtime physics.
"""
from __future__ import annotations

from jus_formats import almt,eventops
from jus_package import motion,sounds


def _refresh_notetrack_effects(editor):
    editor._motion = motion.simulate(editor.move, editor.almt.node_names, editor._motion_params()) if editor.move else None
    form = editor.sound_form.get()
    card_index = (editor._sound_koma_card if form.endswith('-cell') else None)
    editor._cues = (editor._sounds.cues(editor.move, editor.almt.node_names, editor.container,
                                    form=int(form.split('-')[0]) if form.endswith('-cell') else None,
                                    card_index=card_index)
                  if editor.move and editor._sounds else [])
    if editor._audio:
        editor._audio.prepare(editor._cues)


def _motion_changed(editor):
    if editor.move:
        editor._refresh_notetrack_effects()
        editor.refresh_inspector()
        editor.redraw_view()


def _physics_tooltip(editor, tick):
    mo = editor._motion
    lines = [f'tick {tick}']
    for t, node, c in mo.commands:
        if t == tick:
            lines.append(f'{node}: 0x{c.opcode:04X} {motion.LABELS.get(c.opcode, "")} {c.values()}  '
                         f'(ov06 0x{motion.FUNCTIONS.get(c.opcode, 0):08X})')
    f = mo.at(tick)
    if f:
        lines.append(f'offset ({f.px[0]:.1f}, {f.px[1]:.1f}) px · v ({f.vx / 256:.2f}, {f.vy / 256:.2f}) px/frame')
    return '\n'.join(lines)


def _sound_tooltip(editor, tick):
    lines = [f'tick {tick}']
    for c, played in sounds.dedupe_same_frame(editor._cues):
        if c.tick == tick:
            lines.append(f'0x{c.opcode:04X} seq {c.seq}: {c.label}' + ('' if played or c.ssar is None
                                                                       else '  (same-frame duplicate: ignored)'))
    return '\n'.join(lines)


def _event_tooltip(editor, tick, payload):
    if not payload:
        return ''
    row_events = []
    _, _, cmd = payload
    lines = [f'tick {tick}  {eventops.category(cmd.opcode)}', editor.command_text(cmd)]
    info = cmd.info
    if info:
        lines.append(info.meaning[:90])
    fn = motion.FUNCTIONS.get(cmd.opcode) or sounds.FUNCTIONS.get(cmd.opcode)
    if fn:
        lines.append(f'handler: ov06 0x{fn:08X}' + (' → main FUN_0207342C' if cmd.opcode >> 8 == 4 else
                                                    ' · physics step main FUN_02082E10'))
    return '\n'.join(lines + row_events)


def _fmt(editor, field, v, *, hx):
    if isinstance(v, list):
        return '(' + ', '.join(str(x) for x in v) + ')'
    if v is None:
        return '—'
    if field in almt.FIXED_20_12:
        return f'{hx(v)} ({v / 4096:g})'
    if field == 'Marker':
        return eventops.marker_label(v)
    if field in ('TextureID', 'GenerateID'):
        return hx(v)
    if field == 'EffectFlags':
        return hx(v, 4)
    return str(v)


def _fmt_short(editor, field, v, *, hx):
    if isinstance(v, list):
        return ','.join(str(x) for x in v)
    if field in ('TextureID', 'GenerateID'):
        return hx(v, 6)
    if field in almt.FIXED_20_12:
        return f'{v / 4096:g}'
    return str(v)
