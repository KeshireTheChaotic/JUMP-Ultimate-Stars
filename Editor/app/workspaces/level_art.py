"""Editor-local native sprite browsing for J-Space navigation previews.

The progression graph has names, but galaxy/world sprite ID ownership is not
verified. Avoid arbitrary assignments: user-selected DSTX resource paths are
previewed via the existing screen sprite loader and never written to game data.
"""
from __future__ import annotations

import tkinter as tk
from tkinter import ttk, messagebox

from PIL import Image, ImageTk

from jus_package import scenes
from jus_package.project import join, split


class LevelArtworkMixin:
    def _init_navigation_art(self):
        self._nav_art_paths = {}
        self._nav_art_cache = {}
        self._nav_candidates = []
        self.nav_art_path = tk.StringVar()
        self.nav_art_frame = tk.StringVar(value='0')

    def _nav_key(self):
        return self.nav_kind, self.nav_id

    def _sync_nav_art_fields(self):
        path, frame = self._nav_art_paths.get(self._nav_key(), ('', 0))
        self.nav_art_path.set(path)
        self.nav_art_frame.set(str(frame))

    def _discover_navigation_art(self):
        """Scan only plausible UI archives; never treat matches as provenance."""
        self._nav_art_paths.clear()
        self._nav_art_cache.clear()
        self._nav_candidates.clear()
        root = self.app.root_data
        if root is None:
            return
        try:
            tops = scenes.screen_archives(root)
        except (OSError, ValueError):
            return
        filters = ('galaxy', 'space', 'planet', 'world', 'menu', 'common', 'select')
        tops = [p for p in tops if any(part in p.casefold() for part in filters)]
        found = set()
        def collect(archive, *, nested=False):
            if len(found) >= 500:
                return
            try:
                entries = root.archive(archive).entries
            except (OSError, ValueError, IndexError, KeyError):
                return
            for e in entries:
                if e.ext == '.dtx':
                    found.add(join(archive, e.name))
                    if len(found) >= 500:
                        break
            if nested:
                return
            for e in entries:
                if e.ext == '.aar':
                    collect(join(archive, e.name), nested=True)
                    if len(found) >= 500:
                        break
        for archive in tops[:32]:
            collect(archive)
            if len(found) >= 500:
                break
        self._nav_candidates = sorted(found)

    def _decode_nav_art(self, path, frame):
        key = path, frame
        if key in self._nav_art_cache:
            return self._nav_art_cache[key]
        parts = split(path)
        if len(parts) < 2 or not path.lower().endswith('.dtx'):
            raise ValueError('Sprite resource must be an archive-member path ending in .dtx')
        if self.app.root_data is None:
            raise ValueError('No game data root is loaded')
        arc = join(*parts[:-1])
        info, dtx, source = scenes.screen_sprite(self.app.root_data, arc, parts[-1])
        img, left, top = scenes.render_screen_sprite(dtx, source, frame)
        img = img.copy()
        img.thumbnail((392, 275), Image.Resampling.NEAREST)
        result = img, info, (left, top)
        if len(self._nav_art_cache) >= 32:
            self._nav_art_cache.clear()
        self._nav_art_cache[key] = result
        return result

    def _apply_nav_art(self):
        path = self.nav_art_path.get().strip()
        try:
            frame = int(self.nav_art_frame.get().strip(), 10)
            if frame < 0:
                raise ValueError('Frame must be nonnegative')
            if path:
                self._decode_nav_art(path, frame)
        except (ValueError, OSError, IndexError, KeyError) as exc:
            messagebox.showerror('Navigation sprite', f'Cannot preview asset: {exc}')
            return
        if path:
            self._nav_art_paths[self._nav_key()] = path, frame
        else:
            self._nav_art_paths.pop(self._nav_key(), None)
        self.view.redraw()
        self.app.status.set('Navigation artwork: editor-only preview; no J-Galaxy asset link was changed.')

    def _navigation_sprite_inspector(self, ins):
        ins.section('Native navigation sprite', note='Editor-local visual selection')
        ins.entry('DSTX resource', self.nav_art_path, width=25)
        ins.entry('Frame index', self.nav_art_frame, width=5)
        ins.buttons(('Browse .dtx assets', self._choose_nav_art),
                    ('Preview / clear', self._apply_nav_art))
        ins.text('The game’s galaxy/world sprite IDs are still untraced. '
                 'Choose an actual archive sprite for inspection; no guessed mapping '
                 'is written to the ROM or progression graph.')

    def _draw_navigation_art(self, vp):
        item = self._nav_art_paths.get(self._nav_key())
        if not item:
            return False
        try:
            img, _info, _xy = self._decode_nav_art(*item)
            vp.add_image(img, (410 - img.width) / 2, 172)
            return True
        except (ValueError, OSError, IndexError, KeyError):
            return False

    def _choose_nav_art(self):
        if not self._nav_candidates:
            messagebox.showinfo('Navigation sprites',
                'No candidate .dtx assets were found in the UI archives. '
                'You can paste an exact archive|member.dtx path in the Inspector.')
            return
        win = tk.Toplevel(self.frame)
        win.title('Choose native DSTX sprite')
        win.geometry('780x550')
        win.transient(self.app)
        query = tk.StringVar()
        ttk.Label(win, text='Search native UI sprite resources (.dtx); '
                  'asset → galaxy/world ownership is unverified').pack(fill='x', padx=8, pady=6)
        ttk.Entry(win, textvariable=query).pack(fill='x', padx=8)
        content = ttk.Frame(win)
        content.pack(fill='both', expand=True, padx=8, pady=6)
        tree = ttk.Treeview(content, columns=('path',), show='tree headings', height=10)
        tree.heading('#0', text='Resource')
        tree.heading('path', text='Archive path')
        tree.column('#0', width=210, stretch=False)
        tree.column('path', width=520, stretch=True)
        tree.pack(side='left', fill='both', expand=True)
        sb = ttk.Scrollbar(content, orient='vertical', command=tree.yview)
        sb.pack(side='right', fill='y')
        tree.configure(yscrollcommand=sb.set)
        preview = ttk.Label(win, text='Select a resource to preview its first frame.')
        preview.pack(fill='both', expand=False, padx=8, pady=(2, 6))
        def populate(*_args):
            tree.delete(*tree.get_children())
            fragment = query.get().casefold().strip()
            for i, path in enumerate(self._nav_candidates):
                if fragment and fragment not in path.casefold():
                    continue
                tree.insert('', 'end', iid=str(i), text=split(path)[-1],
                            values=(path,))
        query.trace_add('write', populate)
        populate()
        photo = [None]
        def show(_event=None):
            selected = tree.selection()
            if not selected:
                return
            path = self._nav_candidates[int(selected[0])]
            try:
                img, info, _xy = self._decode_nav_art(path, 0)
                thumbnail = img.copy()
                thumbnail.thumbnail((320, 135), Image.Resampling.NEAREST)
                photo[0] = ImageTk.PhotoImage(thumbnail)
                preview.configure(image=photo[0],
                                  text=f'{len(info.dtx_path)} path characters · frame 0 of {info.frame_count}',
                                  compound='left')
            except (ValueError, IndexError, KeyError, OSError) as exc:
                photo[0] = None
                preview.configure(image='', text=str(exc))
        tree.bind('<<TreeviewSelect>>', show)
        buttons = ttk.Frame(win)
        buttons.pack(fill='x', padx=8, pady=(0, 8))
        def choose():
            selected = tree.selection()
            if not selected:
                return
            self.nav_art_path.set(self._nav_candidates[int(selected[0])])
            self.nav_art_frame.set('0')
            win.destroy()
            self._apply_nav_art()
        ttk.Button(buttons, text='Use selected sprite', command=choose).pack(side='right')
        ttk.Button(buttons, text='Cancel', command=win.destroy).pack(side='right', padx=5)
