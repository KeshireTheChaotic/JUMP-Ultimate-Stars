"""Paged, searchable resource thumbnails made from the actual source sprites."""
import tkinter as tk
from tkinter import ttk
from PIL import Image, ImageTk
from jus_package.spawns import state_at
from app import ui_copy


def selected_texture(editor):
    ni = editor.sel_track[0] if editor.sel_track else 0
    return state_at(editor.move, editor.tick).get(ni, {}).get('TextureID') if editor.move else None


def effect_thumbnail(editor, rid):
    entry = editor._effect_moves.get(rid)
    if entry is None:
        return None
    move = entry[0]
    ticks = sorted({0} | {k.tick for n in move.nodes if n for tr in n.tracks
                         if tr.field in ('BoundsIndex', 'TextureID') for k in tr.keys})
    for tick in ticks[:32]:
        layers = []
        for st in state_at(move, tick).values():
            tid, frame = st.get('TextureID'), st.get('BoundsIndex')
            if tid is None or frame is None or frame == 65535:
                continue
            image = editor._frame_image(tid, frame)
            if image:
                pil, x, y = image
                px, py = st.get('2DPos', [0, 0])
                layers.append((pil, x + px, y + py))
        if layers:
            left, top = min(x for _, x, _ in layers), min(y for _, _, y in layers)
            right = max(x + im.width for im, x, _ in layers)
            bottom = max(y + im.height for im, _, y in layers)
            factor = min(1, 256 / max(1, right-left, bottom-top))
            out = Image.new('RGBA', (max(1, round((right-left)*factor)), max(1, round((bottom-top)*factor))))
            for im, x, y in layers:
                size = (max(1, round(im.width*factor)), max(1, round(im.height*factor)))
                out.alpha_composite(im.resize(size, Image.Resampling.NEAREST),
                                    (round((x-left)*factor), round((y-top)*factor)))
            return out
    return None


def resource_image(editor, field, value):
    if field == 'GenerateID':
        return effect_thumbnail(editor, value)
    tid = value if field == 'TextureID' else selected_texture(editor)
    if tid is None or not editor.index:
        return None
    if field == 'TextureID':
        spr = editor.index.sprite(tid)
        if spr:
            for frame in range(len(spr[0].frames)):
                result = editor._frame_image(tid, frame)
                if result:
                    return result[0]
        return None
    result = editor._frame_image(tid, value)
    return result[0] if result else None


def thumbnail(image, size=(96, 80)):
    out = Image.new('RGBA', size, '#252b33')
    if image is not None:
        image = image.copy()
        image.thumbnail(size, Image.Resampling.NEAREST)
        out.alpha_composite(image, ((size[0]-image.width)//2, (size[1]-image.height)//2))
    return out


def preview_widget(parent, editor, field, value):
    try:
        source = resource_image(editor, field, value)
    except (ValueError, IndexError, KeyError, OSError):
        source = None
    if source is None:
        return ttk.Label(parent, text='No artwork found for this selection' if value else 'No preview')
    photo = ImageTk.PhotoImage(thumbnail(source, (160, 100)), master=parent)
    label = ttk.Label(parent, image=photo)
    label.image = photo
    return label


def resource_choices(editor, field):
    if field == 'GenerateID':
        return [(0, 'None (0)')] + [(rid, f'0x{rid:08X} · {path}')
                                  for rid, (_, _, path) in sorted(editor._effect_moves.items()) if rid]
    if field == 'TextureID':
        return [(rid, f'0x{rid:06X} · {types[0x40]}') for rid, types in sorted(editor.index.by_rid.items())
                if 0x40 in types] if editor.index else []
    tid = selected_texture(editor)
    spr = editor.index.sprite(tid) if editor.index and tid is not None else None
    return [(65535, 'None (65535)')] + ([(i, f'Frame {i}') for i in range(len(spr[0].frames))] if spr else [])


class ResourcePicker(tk.Toplevel):
    PAGE_SIZE = 16

    def __init__(self, parent, editor, field, on_pick):
        super().__init__(parent)
        self.title(f'Choose {ui_copy.field_label(field)}')
        self.geometry('800x660')
        self.minsize(700, 620)
        self.editor, self.field, self.on_pick = editor, field, on_pick
        self.previous_grab = self.grab_current()
        self.jobs = []
        self.choices = resource_choices(editor, field)
        self.page = 0
        self.generation = 0
        self.photos = []
        self.query = tk.StringVar(master=self)
        bar = ttk.Frame(self, padding=8)
        bar.pack(fill='x')
        ttk.Label(bar, text='Search frames, images, or numbers').pack(side='left')
        ttk.Entry(bar, textvariable=self.query).pack(side='left', fill='x', expand=True, padx=8)
        self.query.trace_add('write', lambda *_: self.refresh(reset=True))
        self.grid_frame = ttk.Frame(self, padding=8)
        self.grid_frame.pack(fill='both', expand=True)
        for c in range(4):
            self.grid_frame.columnconfigure(c, weight=1)
        footer = ttk.Frame(self, padding=8)
        footer.pack(side='bottom', fill='x', before=self.grid_frame)
        self.previous = ttk.Button(footer, text='Previous', command=lambda: self.turn(-1))
        self.previous.pack(side='left')
        self.next = ttk.Button(footer, text='Next', command=lambda: self.turn(1))
        self.next.pack(side='left')
        self.summary = ttk.Label(footer)
        self.summary.pack(side='left', padx=12)
        ttk.Button(footer, text='Cancel', command=self.destroy).pack(side='right')
        self.bind('<Escape>', lambda e: self.destroy())
        self.transient(parent)
        self.grab_set()
        self.refresh()

    def turn(self, delta):
        self.page += delta
        self.refresh()

    def choose(self, rid):
        self.destroy()
        self.on_pick(rid)

    def refresh(self, reset=False):
        if reset:
            self.page = 0
        query = self.query.get().lower().strip()
        choices = [(rid, label) for rid, label in self.choices if query in label.lower() or query == str(rid)]
        pages = max(1, (len(choices) + self.PAGE_SIZE - 1) // self.PAGE_SIZE)
        self.page = max(0, min(pages - 1, self.page))
        self.generation += 1
        generation = self.generation
        for w in self.grid_frame.winfo_children():
            w.destroy()
        self.photos = []
        self.summary.configure(text=f'{len(choices)} resources · page {self.page+1}/{pages}')
        self.previous.configure(state='normal' if self.page else 'disabled')
        self.next.configure(state='normal' if self.page + 1 < pages else 'disabled')
        for i, (rid, label) in enumerate(choices[self.page*self.PAGE_SIZE:(self.page+1)*self.PAGE_SIZE]):
            button = ttk.Button(self.grid_frame, text=label, compound='top', width=23,
                                command=lambda rid=rid: self.choose(rid))
            button.grid(row=i//4, column=i%4, padx=3, pady=3, sticky='nsew')
            def load(button=button, rid=rid, label=label):
                if generation != self.generation or not button.winfo_exists():
                    return
                try:
                    source = resource_image(self.editor, self.field, rid)
                except (ValueError, IndexError, KeyError, OSError):
                    source = None
                photo = ImageTk.PhotoImage(thumbnail(source), master=self)
                self.photos.append(photo)
                if ' · ' in label:
                    ident, path = label.split(' · ', 1)
                    short = path.rsplit('|', 1)[-1].rsplit('/', 1)[-1]
                    caption = ident + '\n' + short[:19] + ('…' if len(short)>19 else '')
                else:
                    caption = label
                button.configure(image=photo, text=caption
                                 + ('\n(no image)' if source is None else ''))
                from app import theme
                theme.Tooltip(button, label)
            self.jobs.append(self.after_idle(load))

    def destroy(self):
        for job in getattr(self, 'jobs', []):
            self.after_cancel(job)
        previous = getattr(self, 'previous_grab', None)
        super().destroy()
        if previous is not None and previous.winfo_exists():
            previous.grab_set()
