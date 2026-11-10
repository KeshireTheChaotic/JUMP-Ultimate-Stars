"""Move inspector: source-backed collision work, contact and status, edited in place.

No computation of final HP damage. ARM9 main 0207D440 resolves work ids
into chr/col or original ROM rows; 02080F14 consumes signed contact fields.
"""
from __future__ import annotations

import tkinter as tk
from tkinter import messagebox

from app import theme as T
from jus_formats import chrbin, collisionwork
from jus_package import movecombat


def _choice_var(ins, choices, value):
    """StringVar showing the label for ``value`` (or 'value — custom')."""
    label = next((lab for v, lab in choices if v == value), f'{value} — custom (outside the traced list)')
    return tk.StringVar(master=ins, value=label), [lab for _v, lab in choices] + (
        [] if any(v == value for v, _ in choices) else [label])


def _number(label: str) -> int:
    return int(label.split(' — ', 1)[0], 0)


def render_move_contacts(editor, inspector, form, move):
    if not form or editor.root_data is None:
        return
    try:
        links = movecombat.collisions_for_move(editor.root_data, form, move)
    except (OSError, KeyError, ValueError) as exc:
        inspector.value('Collision record lookup', f'Unavailable: {exc}', colour=T.WARN)
        return
    if not links:
        return
    inspector.section('Collision, contact and status',
                      note='The move\'s CollisionType values and the chr/col rows they select. '
                           'Edits stage the chr/col table; Save writes it. Not final HP damage.')
    rows: dict[int, list] = {}
    for item in links:
        tick = f'tick {item.tick}' if item.tick is not None else 'constant'
        where = f'{editor.almt.node_names[item.node]}.{item.field} ({tick})'
        if item.record is None:
            addr = (collisionwork.resolve_collision_work(item.work_id, 0).address_or_offset
                    if item.work_id < collisionwork.AUTHORED_WORK_BASE else None)
            inspector.value(where, f'work 0x{item.work_id:04X}: builtin ROM record 0x{addr:08X} (read-only)'
                            if addr is not None else
                            f'work 0x{item.work_id:04X}: chr/col row {item.record_index} does not exist',
                            colour=T.MUTED if addr is not None else T.BAD)
            continue
        rows.setdefault(item.record_index, []).append((where, item))
    for index, uses in sorted(rows.items()):
        _render_record_editor(editor, inspector, uses[0][1], [w for w, _ in uses])
    inspector.evidence('Source record lookup', 'Direct',
                       'ARM9 main 0207D440: builtin work <0x100, chr/col row (work-0x100) for authored ids')
    inspector.evidence('Contact and status', 'Direct',
                       'ARM9 main 02080F14: +0x02 flash priority, +0x03 signed status lane, +0x05 contact '
                       'magnitude, +0x07 accumulator, +0x0C/+0x0D knockback; ov06 0215AF34 +0x01 reaction')


def _render_record_editor(editor, ins, link, uses):
    rec = link.record
    v = rec.field_values()
    ins.section(f'chr/col row {link.record_index}  (work 0x{link.work_id:04X})',
                note='Used by ' + '; '.join(uses))
    class_var, class_values = _choice_var(ins, movecombat.class_choices(), v['class'])
    ins.combo('Class code', class_var, class_values,
              'main 0207D440 separates zero / nonzero; 0207FBD0 compares it as a precedence code', width=30)
    react_var, react_values = _choice_var(ins, movecombat.reaction_choices(), v['reaction'])
    ins.combo('Reaction', react_var, react_values,
              'Defender reaction row (ov06 table 0x021713E8, callbacks 0x021721A0)', width=30)
    flash = tk.StringVar(master=ins, value=str(v['flash_priority']))
    ins.spin('Flash priority', flash, 0, 255, 'Smaller nonzero value wins; indexes the impact flash table 0x0209FEE4')
    lane_name, lane_id = movecombat.status_lane(v['status'])
    lane = tk.StringVar(master=ins, value=lane_name)
    ident = tk.StringVar(master=ins, value=str(lane_id or 1))
    ins.combo('Status lane', lane, list(movecombat.STATUS_LANES),
              'Sign of +0x03: positive → work +0x172, negative → +0x173; the smaller value wins', width=30)
    ins.spin('Status ID', ident, 1, 128, 'Absolute value of +0x03. ID 0x17 also sets work +0x182 bits')
    nums = {}
    for name, label, tip in (('contact', 'Contact magnitude', 'Signed scalar used by the hit calculation'),
                             ('accumulator', 'Accumulator', 'Added to the defender\'s work +0x171'),
                             ('knockback_x', 'Knockback X', 'Scaled by 0x80, mirrored by facing'),
                             ('knockback_y', 'Knockback Y', 'Scaled by −0x9E')):
        nums[name] = tk.StringVar(master=ins, value=str(v[name]))
        ins.spin(label, nums[name], -128, 127, tip)

    def apply():
        try:
            values = {'class': _number(class_var.get()), 'reaction': _number(react_var.get()),
                      'flash_priority': int(flash.get(), 0),
                      'status': movecombat.status_value(lane.get(), int(ident.get(), 0))}
            values.update({k: int(var.get(), 0) for k, var in nums.items()})
            apply_col_fields(editor, link, values)
        except ValueError as exc:
            messagebox.showerror('chr/col fields', str(exc), parent=editor)

    ins.buttons(('Apply row', apply, 'Accent.TButton'))


def apply_col_fields(editor, link, values: dict[str, int]) -> bool:
    """Stage new chr/col field values for one row. Returns True if anything changed."""
    if link.record is None or editor.root_data is None or link.record_index is None:
        raise ValueError('This collision work has no editable chr/col row')
    member = link.source_path.rsplit('|', 1)[-1]
    table = chrbin.parse(editor.root_data.read(link.source_path), member)
    if table.stride != 20:
        raise ValueError('Missing valid 20-byte chr/col source table')
    old = table.col_record(link.record_index)
    if old.raw != link.record.raw:
        raise ValueError('The row changed since the Inspector was drawn; select the move again')
    patched = old.replace_fields(**values)
    if patched.raw == old.raw:
        return False
    updated = table.replace_record(link.record_index, patched.raw)
    if chrbin.parse(updated.build(), member).col_record(link.record_index).raw != patched.raw:
        raise ValueError('chr/col round-trip mismatch')
    editor.root_data.write(link.source_path, updated.build())
    editor.update_dirty()
    editor.status.set(f'Staged {member} row {link.record_index}; Save to write it')
    editor.refresh_inspector()
    return True
