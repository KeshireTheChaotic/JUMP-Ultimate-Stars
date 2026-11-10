"""Typed ALMT controls. Unknown enumerations keep their numeric identities."""
import copy
import math
import re
import tkinter as tk
from tkinter import ttk, messagebox, colorchooser

from jus_formats import almt, eventops
from jus_package import spawns


TOGGLES = {'ParentLink', 'HFlip', 'VFlip', 'Disp', 'ZWriteEnable', 'ZTestEnable'}


def validate_value(field, value):
    kind = almt.value_kind(field)
    count = 2 if kind == 's16x2' else 4 if kind == 's16x4' else int(kind[4:]) if kind.startswith('u32x') else 0
    values = value if count else [value]
    if count and (not isinstance(value, list) or len(value) != count):
        raise ValueError(f'{field} requires {count} components')
    lo, hi = (-32768, 32767) if kind.startswith('s16') else (0, (1 << (32 if count else 8 * almt.field_width(field))) - 1)
    if any(not isinstance(v, int) or not lo <= v <= hi for v in values):
        raise ValueError(f'{field}: values must be integers from {lo} to {hi}')
    almt.encode_value(field, value)
    return value


def commit_value(editor, track, value, tick=None):
    """One history item, no duplicate keys; never mutate on failed validation."""
    validate_value(track.field, value)
    if track.keyed:
        tick = editor.tick if tick is None else tick
        if not 0 <= tick <= 0xFFFE:
            raise ValueError('Key frame must be 0–65534')
        key = next((k for k in track.keys if k.tick == tick), None)
        if key and key.value == value:
            return
    elif track.value == value:
        return
    editor.checkpoint(f'Set {track.field}')
    if track.keyed:
        if key:
            key.value = copy.deepcopy(value)
        else:
            track.keys.append(almt.Key(tick, copy.deepcopy(value)))
            track.keys.sort(key=lambda k: k.tick)
        editor.sel_key = tick
    else:
        track.value = copy.deepcopy(value)
    track.touch()
    editor._track_done()


def default_value(field):
    if field == 'Scale':
        return [4096] * 3
    if field == 'Color':
        return [4096] * 4
    if field == 'Alpha':
        return 4096
    if field in ('Disp', 'ZWriteEnable', 'ZTestEnable'):
        return 1
    kind = almt.value_kind(field)
    return ([0, 0] if kind == 's16x2' else [0] * 4 if kind == 's16x4'
            else [0] * int(kind[4:]) if kind.startswith('u32x') else 0)


class ValueControls:
    """Reusable in both the Inspector and the native Add Track dialog."""
    def __init__(self, editor, ins, field, value, on_apply):
        self.editor, self.ins, self.field = editor, ins, field
        self.original = copy.deepcopy(value)
        self.variables = []
        self.on_apply = on_apply
        self.reader = None
        self.first = None
        self.build(value)

    def integer(self, label, value, lo, hi):
        var = tk.StringVar(master=self.ins, value=str(value))
        self.variables.append(var)
        widget = self.ins.spin(label, var, lo, hi, on_change=self.apply)
        self.first = self.first or widget
        return var

    def apply(self):
        try:
            value = validate_value(self.field, self.reader())
            self.on_apply(value)
        except (ValueError, OverflowError, TypeError) as exc:
            messagebox.showerror('Edit field', str(exc), parent=self.ins.winfo_toplevel())

    def build(self, value):
        f, ins = self.field, self.ins
        if f in TOGGLES or re.fullmatch(r'CollisionEnable\d+', f):
            var = tk.BooleanVar(master=ins, value=bool(value))
            self.variables.append(var)
            ins.check('Enabled', var, on_change=self.apply)
            self.reader = lambda: value if bool(value) == var.get() else int(var.get())
        elif f == 'EffectFlags':
            variables = []
            for bit in range(16):
                mask = 1 << bit
                var = tk.BooleanVar(master=ins, value=bool(value & mask))
                self.variables.append(var)
                variables.append((mask, var))
                label = spawns.EFFECT_FLAG_NAMES.get(mask, f'Bit {bit} (0x{mask:04X})')
                ins.check(label[:25] + ('…' if len(label)>25 else ''), var, tip=label,
                          on_change=self.apply)
            self.reader = lambda: sum(mask for mask, var in variables if var.get())
        elif f in ('Alpha', 'DrawPrio'):
            signed = value - 0x100000000 if f == 'DrawPrio' and value & 0x80000000 else value
            var = tk.StringVar(master=ins, value=str(signed / 4096))
            self.variables.append(var)
            self.first = ins.entry('Opacity' if f == 'Alpha' else 'Draw priority', var,
                                   '1.0 = 4096 stored units', on_return=self.apply)
            def read_fixed():
                v = float(var.get())
                if not math.isfinite(v):
                    raise ValueError('Enter a finite number')
                raw = round(v * 4096)
                lo, hi = (0, 0xFFFFFFFF) if f == 'Alpha' else (-0x80000000, 0x7FFFFFFF)
                if not lo <= raw <= hi:
                    raise ValueError('Value is outside the stored 32-bit range')
                return raw & 0xFFFFFFFF
            self.reader = read_fixed
            if f == 'Alpha':
                def slider(parent):
                    scale = ttk.Scale(parent, from_=0, to=1, value=min(1, value / 4096),
                                      command=lambda v: var.set(f'{float(v):.4f}'))
                    scale.bind('<ButtonRelease-1>', lambda e: self.apply())
                    scale.bind('<KeyRelease>', lambda e: self.apply())
                    return scale
                ins.widget(slider)
        elif f in ('Position', 'Scale'):
            variables = []
            for axis, raw in zip(('X', 'Y', 'Z'), value):
                signed = raw - 0x100000000 if raw & 0x80000000 else raw
                var = tk.StringVar(master=ins, value=str(signed / 4096))
                variables.append(var)
                self.variables.append(var)
                widget = ins.entry(axis, var, '1.0 = 4096 stored units', on_return=self.apply)
                self.first = self.first or widget
            def vector():
                out = []
                for var in variables:
                    number = float(var.get())
                    if not math.isfinite(number):
                        raise ValueError('Enter finite component values')
                    raw = round(number * 4096)
                    if not -0x80000000 <= raw <= 0x7FFFFFFF:
                        raise ValueError('Component is outside the signed 20.12 range')
                    out.append(raw & 0xFFFFFFFF)
                return out
            self.reader = vector
        elif isinstance(value, list):
            names = ('Left', 'Top', 'Right', 'Bottom') if f.startswith('CollisionRect') else (
                    ('R', 'G', 'B', 'A') if f == 'Color' else ('X', 'Y', 'Z'))
            signed = almt.value_kind(f).startswith('s16')
            variables = [self.integer(name, v, -32768 if signed else 0,
                                      32767 if signed else 0xFFFFFFFF)
                         for name, v in zip(names, value)]
            self.reader = lambda: [int(var.get(), 0) for var in variables]
            if f in ('Position', 'Scale', 'Color'):
                ins.text('Components are stored integer units (4096 = 1.0).')
            if f == 'Color':
                def choose():
                    current = self.reader()
                    rgb = tuple(max(0, min(255, round(v * 255 / 4096))) for v in current[:3])
                    picked, _ = colorchooser.askcolor('#%02x%02x%02x' % rgb, parent=ins.winfo_toplevel())
                    if picked:
                        for var, channel in zip(variables, picked):
                            var.set(str(round(channel * 4096 / 255)))
                        self.apply()
                ins.buttons(('Choose colour…', choose))
                ins.widget(lambda parent: tk.Label(parent, height=2, background='#%02x%02x%02x' % tuple(
                    max(0, min(255, round(v * 255 / 4096))) for v in value[:3])))
        else:
            hi = (1 << (8 * almt.field_width(f))) - 1
            var = self.integer({'BoundsIndex': 'Frame', 'TextureID': 'Texture ID', 'GenerateID': 'Effect ID',
                                '2DRot': 'Angle (stored units)', 'LifeType': 'Lifetime policy',
                                'PatternNo': 'Pattern / frame', 'Marker': 'Label ID',
                                'BlendMode': 'Mode'}.get(f, 'Type ID' if f.startswith('CollisionType') else f),
                               value, 0, hi)
            self.reader = lambda: int(var.get(), 0)
            choices = None
            if f == 'BlendMode':
                choices = {f'Mode {n}': n for n in range(8)}
            elif f == 'Marker':
                choices = {eventops.marker_label(v): v for v in list(range(0xFF00, 0xFF10)) + list(range(0xFF80, 0xFF90))}
            elif f == 'LifeType':
                choices = {'0 (policy 0)': 0, '−1 (0xFFFF)': 65535}
            elif f.startswith('CollisionType'):
                # main 0207D440: 0 none, 1..0xFF builtin ROM records, 0x100+i chr/col row i.
                from jus_package import movecombat
                form = None
                if getattr(self.editor, 'root_data', None) is not None:
                    try:
                        form = self.editor._move_source_form()[0]
                    except (AttributeError, TypeError, ValueError):
                        form = None
                try:
                    pairs = movecombat.collision_choices(self.editor.root_data, form) if form else []
                except (OSError, KeyError, ValueError):
                    pairs = []
                if pairs:
                    choices = {label: wid for wid, label in pairs}
                else:
                    choices = {'0 — none (no collision record)': 0}
                    choices.update({f'0x{w:04X} — builtin record': w for w in range(1, 0x100)})
                if value not in choices.values():
                    choices[f'0x{value:04X} — no such row for this character'] = value
            if choices:
                choice = tk.StringVar(master=ins, value=next((k for k, v in choices.items() if v == value), 'Custom'))
                self.variables.append(choice)
                def select():
                    var.set(str(choices[choice.get()]))
                    self.apply()
                ins.combo('Collision record' if f.startswith('CollisionType') else 'Preset',
                          choice, list(choices), on_change=select,
                          width=34 if f.startswith('CollisionType') else 22)
            if f in ('TextureID', 'BoundsIndex', 'PatternNo', 'GenerateID'):
                from app.widgets.resource_picker import ResourcePicker, preview_widget
                ins.widget(lambda parent: preview_widget(parent, self.editor, f, value))
                def pick():
                    ResourcePicker(ins.winfo_toplevel(), self.editor, f,
                                   lambda selected: (var.set(str(selected)), self.apply()))
                ins.buttons(('Browse thumbnails…', pick))
            if f == 'PatternNo':
                ins.text('Shares the frame selector with BoundsIndex. Avoid conflicting tracks.')
        ins.buttons(('Apply value', self.apply, 'Accent.TButton'))


def render_track_controls(editor, ins, track, focus_value=False):
    key = next((k for k in track.keys if k.tick == editor.sel_key), None) if track.keyed else None
    target = key.tick if key else editor.tick
    value = key.value if key else editor._active_value(track, target)
    if value is None:
        value = default_value(track.field)
    ins.value('Editing', f'Frame {target}' + (' (creates key)' if key is None else '') if track.keyed else 'Static (whole move)')
    if key:
        tick = tk.StringVar(master=ins, value=str(key.tick))
        def retime():
            import json
            editor.set_key(tick.get(), json.dumps(key.value))
        ins.spin('Key frame', tick, 0, 65534, on_change=retime)
    controls = ValueControls(editor, ins, track.field, value,
                             lambda v: commit_value(editor, track, v, target))
    ins._value_controls = controls
    if focus_value and controls.first:
        controls.first.focus_set()
        controls.first.select_range(0, 'end')
    ins.buttons(('Edit as text…', editor.edit_track), ('Delete track', editor.delete_track))
    if key:
        ins.buttons(('Delete key', editor.delete_selected_key))
