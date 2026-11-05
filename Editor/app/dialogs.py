"""Modal dialogs: free-text editing and the raw ALMT track editor."""
from __future__ import annotations

import json
import tkinter as tk
from tkinter import messagebox, ttk

from jus_formats import almt, notetrack

from . import theme as T


class TextDialog(tk.Toplevel):
    def __init__(self, master, title, text, on_ok):
        super().__init__(master)
        self.title(title)
        self.configure(bg=T.PANEL)
        self.on_ok = on_ok
        self.txt = tk.Text(self, width=100, height=20, bg=T.PANEL2, fg=T.FG, insertbackground=T.FG,
                           font=T.MONO, relief='flat')
        self.txt.pack(fill='both', expand=True, padx=8, pady=8)
        self.txt.insert('1.0', text)
        row = ttk.Frame(self)
        row.pack(fill='x')
        ttk.Button(row, text='OK', style='Accent.TButton', command=self.ok).pack(side='right', padx=6, pady=6)
        ttk.Button(row, text='Cancel', command=self.destroy).pack(side='right', pady=6)
        self.bind('<Escape>', lambda e: self.destroy())
        self.transient(master)
        self.grab_set()

    def ok(self):
        if self.on_ok(self.txt.get('1.0', 'end')) is not False:
            self.destroy()


class TrackDialog(tk.Toplevel):
    """Edit or create one ALMT track as text.  Keyed values: one 'tick value' per line."""

    def __init__(self, master, f: almt.AlmtFile, move: almt.Move, node_index: int, track, on_done,
                 notes_to_text=None, text_to_notes=None):
        super().__init__(master)
        self.f, self.move, self.track, self.on_done = f, move, track, on_done
        self.text_to_notes = text_to_notes
        self.title('Edit track' if track else 'Add track')
        self.configure(bg=T.PANEL)
        row = ttk.Frame(self)
        row.pack(fill='x', padx=8, pady=6)
        ttk.Label(row, text='Node').pack(side='left')
        self.node = ttk.Combobox(row, values=f.node_names, state='readonly', width=8)
        self.node.set(f.node_names[node_index])
        self.node.pack(side='left', padx=4)
        ttk.Label(row, text='Field').pack(side='left')
        known = sorted(set(f.field_names) | set(almt.FIELD_WIDTHS))
        self.field = ttk.Combobox(row, values=known, width=18)
        self.field.pack(side='left', padx=4)
        self.keyed = tk.BooleanVar(value=True)
        ttk.Checkbutton(row, text='Keyed (tick/value list)', variable=self.keyed).pack(side='left', padx=6)
        hint = ('Static: one value.  Keyed: one "tick value" pair per line.  Values: integers (0x.. allowed) or '
                'lists like [x, y] for 2DPos and [x0, y0, x1, y1] for CollisionRect.  Opaque tracks: hex bytes.')
        ttk.Label(self, text=hint, style='Muted.TLabel', wraplength=640, justify='left').pack(fill='x', padx=8)
        self.txt = tk.Text(self, width=80, height=18, bg=T.PANEL2, fg=T.FG, insertbackground=T.FG,
                           font=T.MONO, relief='flat')
        self.txt.pack(fill='both', expand=True, padx=8, pady=6)
        self.notes_mode = False
        if track:
            self.node.configure(state='disabled')
            self.field.set(track.field)
            self.field.configure(state='disabled')
            self.keyed.set(track.keyed)
            if track.opaque and track.field == 'NoteTrack' and notes_to_text:
                try:
                    self.txt.insert('1.0', notes_to_text(track.encoded()))
                    self.notes_mode = True
                except ValueError:
                    self.txt.insert('1.0', track.encoded().hex(' '))
            elif track.opaque:
                self.txt.insert('1.0', track.encoded().hex(' '))
            elif track.keyed:
                self.txt.insert('1.0', '\n'.join(f'{k.tick} {json.dumps(k.value)}' for k in track.keys))
            else:
                self.txt.insert('1.0', json.dumps(track.value))
        else:
            self.field.set('BoundsIndex')
        btns = ttk.Frame(self)
        btns.pack(fill='x')
        ttk.Button(btns, text='OK', style='Accent.TButton', command=self.ok).pack(side='right', padx=6, pady=6)
        ttk.Button(btns, text='Cancel', command=self.destroy).pack(side='right', pady=6)
        self.bind('<Escape>', lambda e: self.destroy())
        self.transient(master)
        self.grab_set()

    @staticmethod
    def parse_value(text, field):
        text = str(text).strip()
        v = json.loads(text) if text.startswith('[') else int(text, 0)
        width = almt.field_width(field)
        if width is None:
            raise ValueError(f'{field} has no known value width; edit it as opaque hex')
        almt.encode_value(field, v)      # validates shape/range
        return v

    def ok(self):
        field = self.field.get().strip()
        text = self.txt.get('1.0', 'end').strip()
        try:
            if self.track and self.notes_mode:
                new = self.text_to_notes(text, self.track.encoded())
                notetrack.parse(new)
                if new != self.track.encoded():
                    self.track.raw = new
                    self.track.touch()
            elif self.track and self.track.opaque:
                self.track.raw = bytes.fromhex(text)
                self.track.touch()
            else:
                if self.keyed.get():
                    keys = []
                    for line in text.splitlines():
                        if not line.strip():
                            continue
                        tick, val = line.strip().split(None, 1)
                        keys.append(almt.Key(int(tick, 0), self.parse_value(val, field)))
                    keys.sort(key=lambda k: k.tick)
                    value = None
                else:
                    value = self.parse_value(text, field)
                    keys = []
                if self.track:
                    self.track.keys, self.track.value = keys, value
                    self.track.touch()
                else:
                    ni = self.f.node_names.index(self.node.get())
                    node = self.move.nodes[ni]
                    if node is None:
                        node = self.move.nodes[ni] = almt.NodeAnim()
                    if node.track(field):
                        raise ValueError(f'{self.node.get()} already has a {field} track')
                    self.f.field_index(field)
                    node.tracks.append(almt.Track(field, self.keyed.get(), value, keys, dirty=True))
        except Exception as exc:  # noqa: BLE001
            messagebox.showerror('Track', str(exc), parent=self)
            return
        self.destroy()
        self.on_done()


SHORTCUTS = """\
Global
  Ctrl+1 / 2 / 3     Animation / Sprite / Archive workspace
  Ctrl+4 / 5 / 6     Koma / Level / Screen workspace
  Ctrl+7 / 8         References / Missions workspace
  Ctrl+Z, Ctrl+Y     Undo / redo (move-table, sprites, koma, missions and stage edits)
  Ctrl+S             Save rebuilt archives in place (asks first)
  Ctrl+Shift+S       Save rebuilt archives to a folder
  Ctrl+Enter         Apply edits in the current workspace to its archive

Animation
  Space              Play / pause
  ← / →              Previous / next tick      Shift+←/→  previous / next key
  Home / End         First / last tick
  Ctrl+D             Duplicate move            Delete  delete selected key
  K                  Add key at playhead on the selected track
  E                  Add NoteTrack event at playhead
  Timeline           click = scrub / select key, drag key = retime,
                     double-click = edit, right-click = menu,
                     Ctrl+wheel = zoom, Shift+wheel = scroll time

Sprite
  ← / →              Previous / next frame     Space  play / pause flipbook
  Click piece        select; drag to move it; arrow keys nudge (Shift = 8 px)
  Delete             delete selected frame

Koma
  V / B / I          Select / Pencil / Picker
  Palette            click = paint colour, double-click = edit colour

Missions
  Select node        inspect mission/battle definition and objective rewards
  Update reward      change Koma ID or six resource quantities
  Rename definition  shared mission/battle name (all referencing nodes)

Level / Screen
  Layers dock        click the ● column to show/hide a layer
  Read-only overlays are listed but unavailable until their formats are traced

Viewport
  Wheel = zoom (¼×–12×), middle-drag or Space+drag = pan, Frame = fit the content
"""
