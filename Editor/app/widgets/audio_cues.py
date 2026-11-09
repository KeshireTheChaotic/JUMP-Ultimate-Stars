"""Audition resolved NoteTrack cues without changing authored event data."""
import tkinter as tk
from tkinter import ttk


AUDIO_OPS = (0x0400, 0x0401, 0x0402)


class CuePreview:
    def __init__(self, owner, editor, status):
        self.owner, self.editor, self.status = owner, editor, status
        self.resolver = getattr(editor, '_sounds', None)
        self.audio = getattr(editor, '_audio', None)
        self.job = None
        self.generation = 0
        self.used = False
        self.closed = False
        self.form = editor.sound_form.get() if hasattr(editor, 'sound_form') else 'Auto'

    def resolve(self, opcode, seq):
        if self.resolver is None:
            raise ValueError('Sound metadata is unavailable in this data root.')
        if opcode not in AUDIO_OPS or not 0 <= seq <= 32767:
            raise ValueError('Choose a sound sequence index from 0 to 32767.')
        form = int(self.form.split('-')[0]) if self.form.endswith('-cell') else None
        return self.resolver.resolve(opcode, seq, getattr(self.editor, 'container', None),
                    form=form, card_index=getattr(self.editor, '_sound_koma_card', None) if form else None)

    def choices(self, opcode):
        cue = self.resolve(opcode, 0)
        symbols = self.resolver.symbols
        if cue.ssar is None:
            self.status.set(cue.label)
            return []
        if symbols is None or not 0 <= cue.ssar < len(symbols.seqarcs):
            self.status.set('No named cue list for this bank; enter an index to preview.')
            return []
        self.status.set(cue.ssar_name)
        return [(i, name or f'Sequence {i}') for i, name in enumerate(symbols.seqarcs[cue.ssar].sequences)
                if i <= 32767]

    def stop(self):
        self.generation += 1
        if self.job is not None:
            self.owner.after_cancel(self.job)
            self.job = None
        if self.used and self.audio:
            try:
                self.audio.stop()
            except OSError as exc:
                self.status.set(str(exc))

    def play(self, opcode, seq):
        self.stop()
        if self.closed:
            return
        try:
            cue = self.resolve(opcode, seq)
            if cue.ssar is None:
                self.status.set(cue.label)
                return
            if self.audio is None:
                self.status.set('Audio playback is unavailable in this data root.')
                return
            self.editor._stop_play()
            self.used = True
            self.audio.prepare([cue])
            self.status.set(f'Decoding {cue.label}…')
            generation = self.generation
            def ready():
                if self.closed or generation != self.generation:
                    return
                self.job = None
                if not self.audio.ready():
                    self.job = self.owner.after(50, ready)
                    return
                errors = self.audio.play_tick([cue], cue.tick)
                self.status.set('; '.join(errors) if errors else f'Playing {cue.label} · {self.audio.status(cue)}')
            ready()
        except (ValueError, OSError, IndexError) as exc:
            self.status.set(str(exc))

    def close(self):
        self.stop()
        self.closed = True
        if self.used and self.audio and not self.audio.closed:
            self.audio.prepare(getattr(self.editor, '_cues', []))


class AudioCuePicker(tk.Toplevel):
    def __init__(self, parent, preview, opcode, current, on_pick):
        super().__init__(parent)
        self.preview, self.opcode, self.on_pick = preview, opcode, on_pick
        self.last_selected = ()
        self.previous_grab = self.grab_current()
        self.title('Choose and preview audio cue')
        self.geometry('670x540')
        self.minsize(520, 380)
        self.query = tk.StringVar(master=self)
        self.auto = tk.BooleanVar(master=self, value=False)
        top = ttk.Frame(self, padding=8)
        top.pack(fill='x')
        ttk.Label(top, text='Search name or index').pack(side='left')
        ttk.Entry(top, textvariable=self.query).pack(side='left', fill='x', expand=True, padx=8)
        forms = preview.resolver.forms(getattr(preview.editor, 'container', None)) if preview.resolver else []
        self.form = tk.StringVar(master=self, value=preview.form)
        if opcode == 0x0402 and forms:
            combo = ttk.Combobox(top, textvariable=self.form, values=['Auto']+[f'{n}-cell' for n in forms],
                                 state='readonly', width=9)
            combo.pack(side='right')
            combo.bind('<<ComboboxSelected>>', self.change_form)
        footer = ttk.Frame(self, padding=8)
        footer.pack(side='bottom', fill='x')
        ttk.Button(footer, text='▶ Preview', command=self.play).pack(side='left')
        ttk.Button(footer, text='■ Stop', command=self.stop).pack(side='left', padx=4)
        ttk.Checkbutton(footer, text='Preview on selection', variable=self.auto).pack(side='left')
        ttk.Button(footer, text='Use cue', command=self.choose).pack(side='right')
        ttk.Button(footer, text='Cancel', command=self.destroy).pack(side='right', padx=4)
        ttk.Label(self, textvariable=preview.status, wraplength=620).pack(side='bottom', fill='x', padx=8, pady=6)
        body = ttk.Frame(self)
        body.pack(fill='both', expand=True, padx=8)
        self.tree = ttk.Treeview(body, columns=('index','name'), show='headings', selectmode='browse')
        self.tree.heading('index', text='Index'); self.tree.column('index', width=65, stretch=False)
        self.tree.heading('name', text='Sound cue'); self.tree.column('name', width=470)
        scroll = ttk.Scrollbar(body, orient='vertical', command=self.tree.yview)
        scroll.pack(side='right', fill='y')
        self.tree.configure(yscrollcommand=scroll.set)
        self.tree.pack(fill='both', expand=True)
        self.tree.bind('<<TreeviewSelect>>', self.selected)
        self.tree.bind('<Double-1>', lambda e: self.play())
        self.bind('<Escape>', lambda e: self.destroy())
        self.query.trace_add('write', lambda *_: self.filter())
        self.rows = []
        self.change_form()
        if self.tree.exists(str(current)):
            self.tree.selection_set(str(current)); self.tree.see(str(current))
        self.transient(parent)
        self.grab_set()

    def change_form(self, _event=None):
        self.preview.stop()
        self.preview.form = self.form.get()
        try:
            self.rows = self.preview.choices(self.opcode)
        except ValueError as exc:
            self.rows = []
            self.preview.status.set(str(exc))
        self.filter()

    def filter(self):
        self.preview.stop()
        self.tree.delete(*self.tree.get_children())
        query = self.query.get().strip().lower()
        for seq, name in self.rows:
            if query in name.lower() or query in str(seq):
                self.tree.insert('', 'end', iid=str(seq), values=(seq, name))

    def selected(self, _event=None):
        selected = self.tree.selection()
        if selected == self.last_selected:
            return
        self.last_selected = selected
        self.preview.stop()
        if self.auto.get():
            self.play()

    def play(self):
        selected = self.tree.selection()
        if selected:
            self.last_selected = selected
            self.preview.play(self.opcode, int(selected[0]))

    def stop(self):
        self.preview.stop()
        self.preview.status.set('Preview stopped.')

    def choose(self):
        selected = self.tree.selection()
        if selected:
            seq = int(selected[0])
            self.destroy()
            self.on_pick(seq)

    def destroy(self):
        self.preview.stop()
        previous = self.previous_grab
        super().destroy()
        if previous is not None and previous.winfo_exists():
            previous.grab_set()
