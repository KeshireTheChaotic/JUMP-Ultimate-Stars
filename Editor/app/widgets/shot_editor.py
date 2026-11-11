"""Native controls for the 32-byte shot source records, preserving all bytes."""
import struct
import tkinter as tk
from tkinter import ttk, messagebox
from jus_formats import chrbin
from jus_package import sourceassets
from app.widgets.inspector import Inspector
from app.widgets.resource_picker import ResourcePicker, preview_widget


FIELDS = (
    ('Behavior type (advanced)', 0, 'B'), ('Behavior option (advanced)', 1, 'B'),
    ('Maximum projectiles', 2, 'H'), ('Movement setting (advanced)', 4, 'H'),
    ('Lifetime (0 = 30 frames)', 6, 'h'),
    ('Effect options (advanced)', 8, 'I'), ('Starting animation', 12, 'I'),
    ('Repeated animation', 16, 'I'), ('Ending animation', 20, 'I'),
    ('Additional animation (advanced)', 24, 'I'),
    ('Other setting 1 (advanced)', 28, 'B'),
    ('Other setting 2 (advanced)', 29, 'B'),
    ('Other setting 3 (advanced)', 30, 'B'),
    ('Other setting 4 (advanced)', 31, 'B'))


def update_record(raw, values):
    if len(raw) != 32:
        raise ValueError('Expected a 32-byte shot record')
    result = bytearray(raw)
    for name, offset, fmt in FIELDS:
        if offset in values:
            try:
                struct.pack_into('<' + fmt, result, offset, values[offset])
            except struct.error as exc:
                raise ValueError(f'{name}: value outside its stored range') from exc
    return bytes(result)


class ShotEditor(tk.Toplevel):
    def __init__(self, editor, path, record=0):
        super().__init__(editor)
        self.editor, self.path = editor, path
        self.title('Edit projectile effects')
        self.geometry('570x760')
        self.original = editor.root_data.read(path)
        self.table = chrbin.parse(self.original, path)
        if self.table.stride != 32 or not self.table.count:
            self.destroy()
            raise ValueError('No editable projectile effects were found in this file')
        self.undo_stack = []
        self.record = tk.IntVar(master=self, value=record)
        bar = ttk.Frame(self, padding=8)
        bar.pack(fill='x')
        ttk.Label(bar, text='Projectile').pack(side='left')
        selector = ttk.Combobox(bar, textvariable=self.record, values=list(range(self.table.count)), state='readonly', width=8)
        selector.pack(side='left', padx=8)
        selector.bind('<<ComboboxSelected>>', self.select_record)
        self.ins = Inspector(self)
        self.ins.pack(fill='both', expand=True)
        foot = ttk.Frame(self, padding=8)
        foot.pack(fill='x')
        ttk.Button(foot, text='Apply changes', command=self.apply_record).pack(side='left')
        ttk.Button(foot, text='Undo record edit', command=self.undo).pack(side='left', padx=5)
        ttk.Button(foot, text='Stage and close', command=self.stage).pack(side='left')
        ttk.Button(foot, text='Cancel', command=self.destroy).pack(side='right')
        self.transient(editor)
        self.grab_set()
        self.load()

    def load(self):
        self.loaded_index = self.record.get()
        self.ins.clear()
        self.ins.section(f'Shot {self.record.get()}', note='References and parameters depend on the selected handler.')
        raw = self.table.record(self.record.get())
        self.vars = {}
        for name, offset, fmt in FIELDS:
            value = struct.unpack_from('<' + fmt, raw, offset)[0]
            var = tk.StringVar(master=self, value=str(value))
            self.vars[offset] = var
            self.ins.spin(name, var, -32768 if fmt == 'h' else 0,
                          {'B':255, 'H':65535, 'h':32767, 'I':0xFFFFFFFF}[fmt])
            if offset in (12, 16, 20, 24):
                self.ins.widget(lambda parent, v=value: preview_widget(parent, self.editor, 'GenerateID', v))
                self.ins.buttons(('Choose animation…', lambda var=var: ResourcePicker(
                    self, self.editor, 'GenerateID', lambda rid: var.set(str(rid)))))
        self.ins.text('Apply record keeps a local undo step. Stage and close updates unsaved game data; Save writes archives.')

    def apply_record(self):
        try:
            i = self.loaded_index
            raw = update_record(self.table.record(i), {offset:int(v.get(), 0) for offset,v in self.vars.items()})
            if raw != self.table.record(i):
                self.undo_stack.append(self.table)
                self.table = self.table.replace_record(i, raw)
            return True
        except (ValueError, IndexError) as exc:
            messagebox.showerror('Shot record', str(exc), parent=self)
            return False

    def select_record(self, _event=None):
        if self.apply_record():
            self.load()
        else:
            self.record.set(self.loaded_index)

    def undo(self):
        if self.undo_stack:
            self.table = self.undo_stack.pop()
            self.load()

    def stage(self):
        if not self.apply_record():
            return
        try:
            if self.editor.root_data.read(self.path) != self.original:
                raise ValueError('Source changed while this dialog was open. Reopen it before editing.')
            if self.table.build() != self.original:
                sourceassets.stage_asset(self.editor.root_data, self.path, self.table.build())
                self.editor.update_dirty()
                self.editor.refresh_animation()
            self.destroy()
        except (ValueError, OSError, KeyError) as exc:
            messagebox.showerror('Shot record', str(exc), parent=self)
