"""Create a typed animation track without entering a textual key list."""
import tkinter as tk
from tkinter import ttk, messagebox
from jus_formats import almt
from app.widgets.inspector import Inspector
from app.inspectors.track_controls import ValueControls, default_value


class AddTrackDialog(tk.Toplevel):
    def __init__(self, editor):
        super().__init__(editor)
        self.editor = editor
        self.title('Add animation track')
        self.geometry('470x650')
        self.node = tk.StringVar(master=self, value=editor.almt.node_names[editor.sel_track[0] if editor.sel_track else 0])
        self.field = tk.StringVar(master=self, value='BoundsIndex')
        self.keyed = tk.BooleanVar(master=self, value=True)
        bar = ttk.Frame(self, padding=8)
        bar.pack(fill='x')
        ttk.Label(bar, text='Node').grid(row=0, column=0)
        ttk.Combobox(bar, textvariable=self.node, values=editor.almt.node_names, state='readonly').grid(row=0, column=1)
        ttk.Label(bar, text='Field').grid(row=1, column=0)
        fields = sorted(set(almt.FIELD_WIDTHS) | {f'Collision{kind}{i}' for kind in ('Rect', 'Enable', 'Type') for i in range(7)}
                        | {f for f in editor.almt.field_names if almt.field_width(f) is not None})
        combo = ttk.Combobox(bar, textvariable=self.field, values=fields, state='readonly')
        combo.grid(row=1, column=1)
        combo.bind('<<ComboboxSelected>>', lambda e: self.rebuild())
        ttk.Checkbutton(bar, text=f'Key at frame {editor.tick} (unchecked = static)', variable=self.keyed).grid(row=2, columnspan=2)
        self.ins = Inspector(self)
        self.ins.pack(fill='both', expand=True)
        ttk.Button(self, text='Cancel', command=self.destroy).pack(pady=6)
        self.rebuild()
        self.transient(editor)
        self.grab_set()

    def rebuild(self):
        self.ins.clear()
        self.ins.section(self.field.get(), note='Set the initial value, then Apply value to create the track.')
        dialog = self
        class NodeContext:
            @property
            def sel_track(self):
                return (dialog.editor.almt.node_names.index(dialog.node.get()), 0)
            def __getattr__(self, name):
                return getattr(dialog.editor, name)
        self.controls = ValueControls(NodeContext(), self.ins, self.field.get(), default_value(self.field.get()), self.create)

    def create(self, value):
        editor, field = self.editor, self.field.get()
        ni = editor.almt.node_names.index(self.node.get())
        node = editor.move.nodes[ni]
        if node and node.track(field):
            messagebox.showerror('Add track', f'{self.node.get()} already has {field}', parent=self)
            return
        if field not in editor.almt.field_names and len(editor.almt.field_names) >= 255:
            raise ValueError('The ALMT field table is full')
        if self.keyed.get() and not 0 <= editor.tick <= 65534:
            raise ValueError('Key frame must be 0–65534')
        editor.checkpoint(f'Add {field} track')
        editor.almt.field_index(field)
        if node is None:
            node = editor.move.nodes[ni] = almt.NodeAnim()
        node.tracks.append(almt.Track(field, self.keyed.get(),
                           value=None if self.keyed.get() else value,
                           keys=[almt.Key(editor.tick, value)] if self.keyed.get() else [], dirty=True))
        editor.sel_track = (ni, len(node.tracks)-1)
        editor.sel_key = editor.tick if self.keyed.get() else None
        editor.sel_virtual = None
        self.destroy()
        editor._track_done()
