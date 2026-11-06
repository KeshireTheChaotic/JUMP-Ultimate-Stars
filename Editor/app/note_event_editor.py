"""Typed, non-destructive ALMT NoteTrack event editor for the Move Lab."""
from __future__ import annotations

import tkinter as tk
from tkinter import messagebox, ttk

from jus_formats import eventops, notetrack


class NoteEventEditor(tk.Toplevel):
    """One NoteTrack per node; list commands by tick, then edit/add/delete rows.

    A changed NoteTrack is rebuilt; the parent owns the final save. This dialog
    leaves the original raw bytes untouched until Save is explicitly clicked.
    """
    def __init__(self, master, node_name, track, duration, initial_tick=0,
                 on_done=None, operation='edit', format_command=None):
        super().__init__(master)
        self.title(f'NoteTrack events — {node_name}')
        self.configure(bg='#172435')
        self.geometry('990x740')
        self.minsize(820, 620)
        self.track = track
        self.duration = duration
        self.on_done = on_done
        self.format_command = format_command or (lambda command: command.text())
        self.original = track.encoded()
        self.data = notetrack.parse(self.original)
        self._locations = []
        self._selected = None
        self._updating = False
        self.tick_var = tk.StringVar(value=str(initial_tick))
        self.op_var = tk.StringVar()
        self.detail_var = tk.StringVar()
        self.raw_var = tk.StringVar()
        self.arg_vars: list[tk.StringVar] = []
        self._chara_arg_var = None
        self._build()
        self._populate(select_tick=initial_tick)
        if operation == 'add':
            # Preselection may have changed the tick to the nearest existing row.
            self.tick_var.set(str(initial_tick))
            self.add_event()
        self.transient(master)
        self.grab_set()

    def _build(self):
        title = ttk.Frame(self)
        title.pack(fill='x', padx=9, pady=(9, 4))
        ttk.Label(title, text='Timed NoteTrack commands', font=('Segoe UI', 11, 'bold')).pack(side='left')
        ttk.Label(title, text='Events fire as the player crosses each tick, not while held.').pack(side='right')

        outer = ttk.PanedWindow(self, orient='horizontal')
        outer.pack(fill='both', expand=True, padx=9, pady=7)
        left = ttk.Frame(outer)
        right = ttk.Frame(outer)
        outer.add(left, weight=3)
        outer.add(right, weight=2)

        self.tree = ttk.Treeview(left, columns=('tick', 'category', 'event'), show='headings', height=20)
        for col, width in (('tick', 64), ('category', 146), ('event', 380)):
            self.tree.heading(col, text=col)
            self.tree.column(col, width=width, stretch=col=='event')
        self.tree.pack(fill='both', expand=True)
        self.tree.bind('<<TreeviewSelect>>', self._select)
        controls = ttk.Frame(left)
        controls.pack(fill='x', pady=5)
        ttk.Button(controls, text='Add event at tick', command=self.add_event).pack(side='left', padx=2)
        ttk.Button(controls, text='Remove selected', command=self.remove_event).pack(side='left', padx=2)
        ttk.Button(controls, text='Duplicate', command=self.duplicate_event).pack(side='left', padx=2)

        form = ttk.Frame(right)
        form.pack(fill='both', expand=True, padx=(12, 0))
        ttk.Label(form, text='Tick').pack(anchor='w')
        ttk.Entry(form, textvariable=self.tick_var, width=12).pack(anchor='w', pady=(0, 8))
        ttk.Label(form, text='Event / opcode').pack(anchor='w')
        self.opcodes = {eventops.opcode_label(op): op for op in sorted(notetrack.OPCODES)}
        self.op_combo = ttk.Combobox(form, values=list(self.opcodes), textvariable=self.op_var,
                                     state='readonly', width=47)
        self.op_combo.pack(fill='x', pady=(0, 6))
        self.op_combo.bind('<<ComboboxSelected>>', self._switch_opcode)
        self.details = ttk.Label(form, textvariable=self.detail_var, wraplength=365, justify='left')
        self.details.pack(fill='x', pady=(0, 7))
        self.args_frame = ttk.Frame(form)
        self.args_frame.pack(fill='x')
        ttk.Label(form, text='Raw arguments (hex); available as fallback').pack(anchor='w', pady=(9, 0))
        self.raw_entry = ttk.Entry(form, textvariable=self.raw_var)
        self.raw_entry.pack(fill='x')
        self.raw_enabled = tk.BooleanVar(value=False)
        ttk.Checkbutton(form, text='Edit raw argument bytes', variable=self.raw_enabled,
                        command=self._raw_toggle).pack(anchor='w', pady=(0, 7))
        ttk.Button(form, text='Apply event changes', command=self.apply_event).pack(anchor='w', pady=(3, 2))
        ttk.Label(form, text='For partially understood conditions, the numeric opcode and '
                  'arguments are preserved. Sound events show SDAT names when available.',
                  wraplength=365, justify='left').pack(anchor='w', pady=9)
        footer = ttk.Frame(self)
        footer.pack(fill='x', padx=9, pady=7)
        ttk.Button(footer, text='Save NoteTrack', command=self.commit).pack(side='right', padx=4)
        ttk.Button(footer, text='Cancel', command=self.destroy).pack(side='right', padx=4)

    def _raw_toggle(self):
        self.raw_entry.configure(state='normal' if self.raw_enabled.get() else 'disabled')
        for widget in self.args_frame.winfo_children():
            if isinstance(widget, ttk.Entry):
                widget.configure(state='disabled' if self.raw_enabled.get() else 'normal')

    def _populate(self, select_tick=None, select_command=None):
        self.tree.delete(*self.tree.get_children())
        self._locations = eventops.list_events(self.data)
        target = None
        for idx, ev in enumerate(self._locations):
            self.tree.insert('', 'end', iid=str(idx), values=(ev.tick, eventops.category(ev.command.opcode),
                              self.format_command(ev.command)))
            if select_command is ev.command or (select_command is None and target is None and ev.tick == select_tick):
                target = str(idx)
        if target is None and self._locations:
            target = '0'
        if target is not None:
            self.tree.selection_set(target)
            self.tree.focus(target)
            self.tree.see(target)
            self._select()
        else:
            self._selected = None
            self.op_var.set(eventops.opcode_label(0x0300))
            self._update_arg_form(0x0300, [0] * 7)
        self.tree.update_idletasks()

    def _selected_location(self):
        sel = self.tree.selection()
        return self._locations[int(sel[0])] if sel else None

    def _select(self, _event=None):
        selected = self._selected_location()
        if selected is None:
            return
        self._selected = selected
        cmd = selected.command
        self.tick_var.set(str(selected.tick))
        if cmd.opcode in notetrack.OPCODES:
            self.op_var.set(eventops.opcode_label(cmd.opcode))
        else:
            self.op_var.set(eventops.opcode_label(cmd.opcode))
            if self.op_var.get() not in self.opcodes:
                self.op_combo['values'] = list(self.opcodes) + [self.op_var.get()]
                self.opcodes[self.op_var.get()] = cmd.opcode
        self.raw_var.set(cmd.args.hex(' '))
        self.raw_enabled.set(cmd.info is None or cmd.values() is None)
        self._update_arg_form(cmd.opcode, cmd.values())

    def _switch_opcode(self, _event=None):
        opcode = self.opcodes.get(self.op_var.get())
        if opcode is None:
            return
        selected = self._selected_location()
        current = selected.command if selected else None
        values = current.values() if current and current.opcode == opcode else None
        if values is None:
            values = [0] * len(eventops.argument_types(opcode))
        self.raw_var.set('')
        self.raw_enabled.set(False)
        self._update_arg_form(opcode, values)

    def _update_arg_form(self, opcode, values):
        for child in self.args_frame.winfo_children():
            child.destroy()
        self.arg_vars = []
        self._chara_arg_var = None
        info = notetrack.op_info(opcode)
        self.detail_var.set(f'{eventops.category(opcode)}: {info.meaning}' if info else
                            'Unknown command. Preserve its opcode and raw argument bytes.')
        if values is not None:
            for i, (label, value) in enumerate(zip(eventops.argument_labels(opcode), values)):
                r = ttk.Frame(self.args_frame)
                r.pack(fill='x', pady=2)
                ttk.Label(r, text=label, width=22).pack(side='left')
                var = tk.StringVar(value=str(value))
                if opcode == 0x0300 and i == 0:
                    choices = [f'{n} — {eventops.CHARA_ACTION_NAMES.get(n, "unlabeled")}' for n in range(34)]
                    widget = ttk.Combobox(r, values=choices, width=42, textvariable=var)
                    widget.pack(side='left', fill='x', expand=True)
                    self._chara_arg_var = var
                    # The combobox is editable to preserve subcodes outside this observed range.
                    var.set(f'{value} — {eventops.CHARA_ACTION_NAMES.get(value, "unlabeled")}' if 0 <= value <= 33 else str(value))
                else:
                    ttk.Entry(r, textvariable=var, width=16).pack(side='left', fill='x', expand=True)
                self.arg_vars.append(var)
            if opcode == 0x0300 and values:
                hint = eventops.chara_action_text(values) if values[0] in eventops.CHARA_ACTION_NAMES else None
                if hint:
                    ttk.Label(self.args_frame, text=hint, foreground='#F3C178').pack(anchor='w', pady=3)
        self._raw_toggle()

    def _command_from_form(self) -> tuple[int, notetrack.Command]:
        tick = int(self.tick_var.get(), 0)
        if not 0 <= tick <= self.duration:
            raise ValueError(f'Tick must be between 0 and {self.duration}.')
        opcode = self.opcodes.get(self.op_var.get())
        if opcode is None:
            raise ValueError('Select an event from the dropdown.')
        if self.raw_enabled.get() or opcode not in notetrack.OPCODES:
            return tick, notetrack.Command(opcode, bytes.fromhex(self.raw_var.get()))
        values = [int(var.get().split(' — ', 1)[0], 0) for var in self.arg_vars]
        selected = self._selected_location()
        old = selected.command if selected else None
        if old and old.opcode == opcode and old.values() == values:
            # Preserve reserved words and padding in untouched commands.
            return tick, old
        return tick, notetrack.Command.from_values(opcode, values)

    def apply_event(self):
        selected = self._selected_location()
        if selected is None:
            messagebox.showerror('NoteTrack', 'Select an event first.', parent=self)
            return
        try:
            tick, command = self._command_from_form()
            eventops.change_event(self.data, selected.key_index, selected.command_index, tick, command)
            self._populate(select_tick=tick, select_command=command)
        except (ValueError, OverflowError, IndexError) as exc:
            messagebox.showerror('Invalid event', str(exc), parent=self)

    def add_event(self):
        try:
            tick = int(self.tick_var.get(), 0)
            if not 0 <= tick <= self.duration:
                raise ValueError(f'Tick must be between 0 and {self.duration}.')
            opcode = self.opcodes.get(self.op_var.get(), 0x0300)
            command = notetrack.Command.from_values(opcode, [0] * len(eventops.argument_types(opcode)))
            eventops.add_event(self.data, tick, command)
            self._populate(select_tick=tick, select_command=command)
        except (ValueError, OverflowError) as exc:
            messagebox.showerror('Add event', str(exc), parent=self)

    def remove_event(self):
        selected = self._selected_location()
        if selected is None:
            return
        tick = selected.tick
        eventops.remove_event(self.data, selected.key_index, selected.command_index)
        self._populate(select_tick=tick)

    def duplicate_event(self):
        selected = self._selected_location()
        if selected is None:
            return
        command = notetrack.Command(selected.command.opcode, selected.command.args)
        eventops.add_event(self.data, selected.tick, command)
        self._populate(select_tick=selected.tick, select_command=command)

    def commit(self):
        try:
            for ev in eventops.list_events(self.data):
                eventops.validate_event(self.data, ev, self.duration)
            raw = self.data.build()
            notetrack.parse(raw)
        except (ValueError, OverflowError) as exc:
            messagebox.showerror('Save NoteTrack', str(exc), parent=self)
            return
        if raw != self.original:
            self.track.raw = raw
            self.track.opaque = True
            self.track.keyed = True
            self.track.touch()
            if self.on_done:
                self.on_done()
        self.destroy()
