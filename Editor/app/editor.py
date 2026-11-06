"""JUS Editor — animation, sprite and archive editor (Tkinter + Pillow).

Layout follows 2D animation editors in Unity (Animation window + Inspector),
Godot (AnimationPlayer dock, SpriteFrames) and Unreal (Paper2D Flipbook /
Sprite editors):

* **Project** panel (left): characters, effect archives, other archives.
* **Animation** workspace: Moves list | Viewport | Inspector, with a dock-style
  dope-sheet Timeline underneath (transport, ruler, playhead, key diamonds,
  NoteTrack event flags, Marker labels with jump/branch arcs, effect rows).
* **Sprite** workspace: Viewport with selectable/draggable pieces | Details,
  and a thumbnail Filmstrip with flipbook playback.
* **Archive** workspace: member table | Details.

All edits stay in memory with undo/redo until *Apply* writes them into the
archive tree; *Save* writes rebuilt archive files.
"""
from __future__ import annotations

import json
import os
import re
import sys
import threading
import tkinter as tk
from pathlib import Path
from tkinter import filedialog, messagebox, simpledialog, ttk

HERE = Path(__file__).resolve().parent.parent
if str(HERE) not in sys.path:
    sys.path.insert(0, str(HERE))

from jus_formats import alar, almt, dsig as dsigmod, dstx as dstxmod, eventops, notetrack, sdat, sprite  # noqa: E402
from jus_package import effectlinks, images, motion, package, sounds, spawns, spriteedit  # noqa: E402
from app.workspaces import SUITE  # noqa: E402
from jus_package.draworder import submission_note  # noqa: E402
from jus_package.audio_preview import AudioPreview
from jus_package.project import DataRoot, join, split  # noqa: E402
from jus_package.resources import ResourceIndex  # noqa: E402

from app import theme as T  # noqa: E402
from app.dialogs import SHORTCUTS, TextDialog, TrackDialog  # noqa: E402
from app.history import History  # noqa: E402
from app.note_event_editor import NoteEventEditor  # noqa: E402
from app.widgets import DopeSheet, Filmstrip, Inspector, Viewport  # noqa: E402

DEFAULT_DATA = os.environ.get('JUS_DATA', os.environ.get('JUS_DATA_ROOT', r'D:\Library\Development\JUS\data'))
SPEEDS = ('0.25×', '0.5×', '1×', '2×')
# Branch opcodes: argument positions holding Marker-label targets (seek via vtable+0xEC).
BRANCH_TARGET_ARGS = {0x000E: (1, 3), 0x001D: (1, 3), 0x0012: (1,), 0x0017: tuple(range(2, 10)),
                      0x0013: (), 0x0014: ()}


def hx(v: int, w: int = 8) -> str:
    return f'0x{v:0{w}X}'


def parse_int(text: str) -> int:
    return int(str(text).strip(), 0)


def _short_cue(c) -> str:
    """Timeline/HUD text for a sound cue; details stay in the tooltip and Inspector."""
    if c.ssar is not None:
        return c.label
    return '?' if c.evidence == 'Unknown' else '–'


def shape_label(code: int) -> str:
    w, h = dstxmod.SHAPES[code]
    kind = 'square' if w == h else ('wide' if w > h else 'tall')
    return f'{code:2d}: {w}×{h} {kind}'


class EditorApp(tk.Tk):
    def __init__(self, data_root: str | None = None):
        T.dpi_aware()
        super().__init__()
        self.title('JUS Editor')
        self.geometry('1680x1000')
        self.minsize(1240, 760)
        self.configure(bg=T.BG)
        T.apply_styles(self)
        # document state
        self.root_data: DataRoot | None = None
        self.container: str | None = None
        self.scope: list[str] = []
        self.index: ResourceIndex | None = None
        self.almt_path: str | None = None
        self.almt: almt.AlmtFile | None = None
        self.almt_dirty = False
        self._clean: dict = {}          # undo doc -> bytes at the last load/apply (clears dirty on undo)
        self.move: almt.Move | None = None
        self.sprite_path: str | None = None
        self.sprite_g_path: str | None = None
        self.sprite_d: dstxmod.DstxFile | None = None
        self.sprite_g: dsigmod.DsigFile | None = None
        self.sprite_dirty = False
        self._sprite_paths: dict[str, str] = {}
        self.history = History()
        # animation view state
        self.tick = 0
        self.playing = False
        self._play_job = None
        self.loop = tk.BooleanVar(value=True)
        self.speed = tk.StringVar(value='1×')
        self.show_collision = tk.BooleanVar(value=True)
        self.show_effects = tk.BooleanVar(value=True)      # pursuer (chara_action 13/14)
        self.show_spawns = tk.BooleanVar(value=True)       # GenerateID effects
        self.isolate_selected_spawn = tk.BooleanVar(value=False)  # viewport diagnostic, not saved
        self.show_effect_marks = tk.BooleanVar(value=True)
        self.effect_layer = tk.StringVar(value='Front')    # viewport occlusion override; high-first submission verified
        self.parent_link_preview = tk.BooleanVar(value=True)  # owner translation only; no scale/facing
        self.effect_teardown = tk.BooleanVar(value=True)   # chara_action(4/5) tear GN effects down
        self._teardowns = {}
        # NoteTrack physics (jus_package.motion) and sound cues (jus_package.sounds)
        self.show_motion = tk.BooleanVar(value=True)       # trajectory overlay
        self.root_motion = tk.BooleanVar(value=True)      # move the character by the simulated offset
        self.facing_left = tk.BooleanVar(value=False)
        self.motion_floor = tk.BooleanVar(value=True)
        self._motion = None
        self._cues = []
        self._sounds = None
        self.sound_form = tk.StringVar(value='Auto')       # preview choice for base-archive 0x0402 cues
        self._audio = None
        self.sound_enabled = tk.BooleanVar(value=True)
        self._audio_request = 0
        self.show_onion = tk.BooleanVar(value=False)
        self.pursuer_choice = tk.StringVar(value='A')
        self.pursuer_motion_preview = tk.StringVar(value='Follow (traced)')
        self.pursuer_start_seed = tk.StringVar(value='First target')
        self.sel_track: tuple[int, int] | None = None
        self.sel_key: int | None = None
        self.sel_virtual: dict | None = None
        self._collapsed: set = set()
        self._pursuer_events = ()
        self._effect_moves = {}
        self._common_tables = None      # [(path, AlmtFile)] from efc/*.aar, cached per data root
        self._spawn_list = []
        self._effect_table_error = ''
        self._frame_cache: dict = {}
        self._view_info: list[str] = []
        # sprite view state
        self.frame_i: int | None = None
        self.piece_i: int | None = None
        self.show_pieces = tk.BooleanVar(value=True)
        self.show_sprite_onion = tk.BooleanVar(value=False)
        self.bank_override = tk.StringVar(value='Auto')
        self.flip_fps = tk.StringVar(value='12')
        self.flip_playing = False
        self._piece_drag = None
        self.status = tk.StringVar(value='Open a data root to begin.')
        self.workspace = 'animation'
        self._build_menu()
        self._build_layout()
        self._bind_shortcuts()
        self.after(60, lambda: self.open_root(data_root or DEFAULT_DATA, quiet=True))
        self._audio_poll_job = self.after(100, self._poll_audio)
        self.protocol("WM_DELETE_WINDOW", self.destroy)

    # ================================================================ layout
    def _build_menu(self):
        m = tk.Menu(self, tearoff=False)
        f = tk.Menu(m, tearoff=False)
        f.add_command(label='Open data root…', command=self.choose_root)
        f.add_separator()
        f.add_command(label='Import package…', command=self.import_package)
        f.add_command(label='Export package…', command=self.export_package)
        f.add_separator()
        f.add_command(label='Apply current edits', accelerator='Ctrl+Enter', command=self.apply_current)
        f.add_command(label='Save in place', accelerator='Ctrl+S', command=lambda: self.save(True))
        f.add_command(label='Save to folder…', accelerator='Ctrl+Shift+S', command=lambda: self.save(False))
        f.add_command(label='Revert all', command=self.revert)
        f.add_separator()
        f.add_command(label='Exit', command=self.destroy)
        m.add_cascade(label='File', menu=f)
        e = tk.Menu(m, tearoff=False)
        e.add_command(label='Undo', accelerator='Ctrl+Z', command=self.undo)
        e.add_command(label='Redo', accelerator='Ctrl+Y', command=self.redo)
        m.add_cascade(label='Edit', menu=e)
        a = tk.Menu(m, tearoff=False)
        a.add_command(label='Duplicate move', accelerator='Ctrl+D', command=self.duplicate_move)
        a.add_command(label='Delete move', command=self.delete_move)
        a.add_separator()
        a.add_command(label='Add track…', command=self.add_track)
        a.add_command(label='Add key at playhead', accelerator='K', command=self.add_key_at_playhead)
        a.add_command(label='Delete selected key', accelerator='Del', command=self.delete_selected_key)
        a.add_command(label='Add NoteTrack event at playhead', accelerator='E', command=self.add_note_event)
        a.add_command(label='Edit NoteTrack events…', command=self.edit_note_events)
        a.add_separator()
        a.add_command(label='Export move table JSON…', command=self.export_almt_json)
        a.add_command(label='Import move table JSON…', command=self.import_almt_json)
        a.add_command(label='Apply move table', command=self.apply_almt)
        m.add_cascade(label='Animation', menu=a)
        s = tk.Menu(m, tearoff=False)
        s.add_command(label='Replace frame from PNG…', command=lambda: self.import_frame(False))
        s.add_command(label='Append frame from PNG…', command=lambda: self.import_frame(True))
        s.add_command(label='Re-layout frame pieces', command=self.relayout_frame)
        s.add_command(label='Delete frame', command=self.delete_frame)
        s.add_separator()
        s.add_command(label='Export frames (PNG)…', command=self.export_frames)
        s.add_command(label='Export atlas…', command=self.export_atlas)
        s.add_command(label='Import atlas…', command=self.import_atlas)
        s.add_command(label='Edit palette…', command=self.edit_palette)
        s.add_separator()
        s.add_command(label='Apply sprite', command=self.apply_sprite)
        m.add_cascade(label='Sprite', menu=s)
        v = tk.Menu(m, tearoff=False)
        v.add_command(label='Animation workspace', accelerator='Ctrl+1', command=lambda: self.show_workspace('animation'))
        v.add_command(label='Sprite workspace', accelerator='Ctrl+2', command=lambda: self.show_workspace('sprite'))
        v.add_command(label='Archive workspace', accelerator='Ctrl+3', command=lambda: self.show_workspace('archive'))
        v.add_command(label='Koma editor', accelerator='Ctrl+4', command=lambda: self.show_workspace('koma'))
        v.add_command(label='Level & mission editor', accelerator='Ctrl+5', command=lambda: self.show_workspace('level'))
        v.add_command(label='Screen editor', accelerator='Ctrl+6', command=lambda: self.show_workspace('screen'))
        v.add_separator()
        v.add_checkbutton(label='Collision boxes', variable=self.show_collision, command=self.redraw_view)
        v.add_checkbutton(label='Spawned effects (GenerateID)', variable=self.show_spawns, command=self.redraw_view)
        v.add_checkbutton(label='Effect origin markers', variable=self.show_effect_marks, command=self.redraw_view)
        v.add_checkbutton(label='Pursuer effects', variable=self.show_effects, command=self.redraw_view)
        v.add_checkbutton(label='Onion skin', variable=self.show_onion, command=self.redraw_view)
        v.add_checkbutton(label='Sprite piece outlines', variable=self.show_pieces, command=self.redraw_sprite)
        m.add_cascade(label='View', menu=v)
        h = tk.Menu(m, tearoff=False)
        h.add_command(label='Keyboard shortcuts', accelerator='F1', command=self.show_shortcuts)
        h.add_command(label='Format notes (docs/FORMATS.md)', command=lambda: self._open_doc('FORMATS.md'))
        h.add_command(label='NoteTrack events (docs/NOTETRACK_EVENTS.md)',
                      command=lambda: self._open_doc('NOTETRACK_EVENTS.md'))
        m.add_cascade(label='Help', menu=h)
        self.config(menu=m)

    def _build_layout(self):
        k = T.ui_scale(self)
        top = ttk.Frame(self, style='Toolbar.TFrame')
        top.pack(fill='x')
        tk.Label(top, text='JUS', fg=T.ACCENT, bg=T.PANEL2, font=('Segoe UI Black', 13)).pack(side='left', padx=(10, 2))
        tk.Label(top, text='Editor', fg=T.FG, bg=T.PANEL2, font=('Segoe UI', 12)).pack(side='left', padx=(0, 14))
        self._tab_buttons = {}
        # Move Lab (Animation + Sprite) · suite workspaces · Archive
        for key, label in (('animation', 'Animation'), ('sprite', 'Sprite'), ('|', None),
                           ('koma', 'Koma'), ('level', 'Level'), ('screen', 'Screen'), ('|', None),
                           ('archive', 'Archive')):
            if key == '|':
                tk.Frame(top, width=1, bg=T.LINE).pack(side='left', fill='y', padx=5, pady=8)
                continue
            b = ttk.Button(top, text=label, style='Tab.TButton', command=lambda kk=key: self.show_workspace(kk))
            b.pack(side='left', padx=1, pady=(4, 0))
            self._tab_buttons[key] = b
        T.Tooltip(self._tab_buttons['animation'], 'Move Lab: animations, effects, NoteTrack (Ctrl+1)')
        T.Tooltip(self._tab_buttons['sprite'], 'Move Lab: sprite frames and pieces (Ctrl+2)')
        T.Tooltip(self._tab_buttons['koma'], 'Koma Editor: comic panel art (Ctrl+4)')
        T.Tooltip(self._tab_buttons['level'], 'Level Editor: stage backgrounds and the J-Galaxy missions '
                                              'fought on them, with Koma rewards (Ctrl+5)')
        T.Tooltip(self._tab_buttons['screen'], 'Screen Editor: menu screens on the DS dual screen (Ctrl+6)')
        T.Tooltip(self._tab_buttons['archive'], 'Archive members (Ctrl+3)')
        T.separator(top)
        T.tool_button(top, '↶', self.undo, 'Undo (Ctrl+Z)', width=3)
        T.tool_button(top, '↷', self.redo, 'Redo (Ctrl+Y)', width=3)
        T.separator(top)
        T.tool_button(top, 'Apply', self.apply_current, 'Write the current move table / sprite into its archive '
                                                         '(Ctrl+Enter)')
        T.tool_button(top, 'Save', lambda: self.save(True), 'Save rebuilt archives in place (Ctrl+S)')
        T.tool_button(top, 'Save to…', lambda: self.save(False), 'Save rebuilt archives to another folder')
        T.separator(top)
        T.tool_button(top, 'Import pkg…', self.import_package, 'Import a sprite/animation package')
        T.tool_button(top, 'Export pkg…', self.export_package, 'Export the selected character or archive')
        self.dirty_label = tk.Label(top, text='', fg=T.WARN, bg=T.PANEL2, font=T.UI_BOLD)
        self.dirty_label.pack(side='right', padx=10)
        # status bar
        bar = ttk.Frame(self, style='Toolbar.TFrame')
        bar.pack(fill='x', side='bottom')
        tk.Label(bar, textvariable=self.status, bg=T.PANEL2, fg=T.MUTED, anchor='w', font=T.UI_FONT).pack(
            side='left', fill='x', expand=True, padx=8, pady=2)
        self.undo_label = tk.Label(bar, text='', bg=T.PANEL2, fg=T.MUTED, font=T.UI_FONT)
        self.undo_label.pack(side='right', padx=8)
        self.root_label = tk.Label(bar, text='', bg=T.PANEL2, fg=T.MUTED, font=T.MONO_SMALL)
        self.root_label.pack(side='right', padx=8)
        # body
        body = ttk.PanedWindow(self, orient='horizontal')
        body.pack(fill='both', expand=True)
        self._body = body
        self._build_project(body, k)
        self.ws_host = ttk.Frame(body, style='Bg.TFrame')
        body.add(self.ws_host, weight=1)
        self.ws = {'animation': self._build_animation(self.ws_host, k),
                   'sprite': self._build_sprite(self.ws_host, k),
                   'archive': self._build_archive(self.ws_host, k)}
        self.suite = {}
        for cls in SUITE:
            w = cls(self, self.ws_host, self._project_panel.body, k)
            self.suite[w.key] = w
            self.ws[w.key] = w.frame
        self.show_workspace('animation')
        self.after(250, self._init_sashes)

    def _build_project(self, body, k):
        p = T.Panel(body, 'Project')
        body.add(p, weight=0)
        p.configure(width=int(250 * k))
        self._project_panel = p
        # Move Lab's browser; suite workspaces put their own browser in p.body and swap.
        self._movelab_browser = ttk.Frame(p.body)
        self._movelab_browser.pack(fill='both', expand=True)
        row = ttk.Frame(self._movelab_browser)
        row.pack(fill='x', padx=6, pady=6)
        self.find_var = tk.StringVar()
        self.find_var.trace_add('write', lambda *_: self.populate_tree())
        e = ttk.Entry(row, textvariable=self.find_var)
        e.pack(fill='x')
        T.Tooltip(e, 'Filter characters and archives')
        tf = ttk.Frame(self._movelab_browser)
        self.res_tree = ttk.Treeview(tf, show='tree', selectmode='browse')
        self.res_tree.column('#0', width=int(200 * k), stretch=True)
        sb = ttk.Scrollbar(tf, command=self.res_tree.yview)
        self.res_tree.configure(yscrollcommand=sb.set)
        self.res_tree.pack(side='left', fill='both', expand=True)
        sb.pack(side='right', fill='y')
        tf.pack(fill='both', expand=True, padx=(6, 0), pady=(0, 6))
        self.res_tree.bind('<<TreeviewSelect>>', self.on_resource_select)
        self.res_tree.bind('<<TreeviewOpen>>', self.on_resource_open)
        self.res_tree.bind('<Button-3>', self._project_context)

    # ------------------------------------------------------ animation tab
    def _build_animation(self, host, k):
        ws = ttk.PanedWindow(host, orient='vertical')
        upper = ttk.PanedWindow(ws, orient='horizontal')
        ws.add(upper, weight=3)
        self._upper = upper
        # moves (clips) panel
        clips = T.Panel(upper, 'Moves')
        upper.add(clips, weight=0)
        tb = ttk.Frame(clips.body)
        tb.pack(fill='x', padx=6, pady=(6, 2))
        self.almt_combo = ttk.Combobox(tb, state='readonly')
        self.almt_combo.pack(fill='x')
        self.almt_combo.bind('<<ComboboxSelected>>', lambda e: self._switch_almt(self.almt_combo.get()))
        T.Tooltip(self.almt_combo, 'Move table (ALMT) in the selected archive')
        self.move_filter = tk.StringVar()
        self.move_filter.trace_add('write', lambda *_: self.populate_moves(keep=True))
        fe = ttk.Entry(clips.body, textvariable=self.move_filter)
        fe.pack(fill='x', padx=6, pady=2)
        T.Tooltip(fe, 'Filter by index or id')
        mf, self.moves_tree = T.tree(clips.body, ('#', 'id', 'len', 'loop'), (34, 86, 40, 34), height=20,
                                     style='Mono.Treeview')
        mf.pack(fill='both', expand=True, padx=(6, 0), pady=2)
        self.moves_tree.bind('<<TreeviewSelect>>', self.on_move_select)
        mb = ttk.Frame(clips.body)
        mb.pack(fill='x', padx=6, pady=(2, 6))
        T.tool_button(mb, '＋ Dup', self.duplicate_move, 'Duplicate the selected move (Ctrl+D)')
        T.tool_button(mb, '✕ Del', self.delete_move, 'Delete the selected move')
        T.tool_button(mb, 'Apply', self.apply_almt, 'Write this move table into its archive')
        # viewport
        vp = T.Panel(upper, 'Viewport')
        upper.add(vp, weight=1)
        # Unity-style "Gizmos" dropdown keeps the header uncluttered at any width.
        giz = ttk.Menubutton(vp.header, text='Show ▾', style='Tool.TButton')
        gm = tk.Menu(giz, tearoff=False)
        for text, var in (('Spawned effects (GenerateID)', self.show_spawns),
                          ('Effect origin markers', self.show_effect_marks),
                          ('Pursuer effect (chara_action 13/14)', self.show_effects),
                          ('Collision boxes', self.show_collision),
                          ('Onion skin', self.show_onion)):
            gm.add_checkbutton(label=text, variable=var, command=self.redraw_view)
        gm.add_separator()
        gm.add_checkbutton(label='Physics trajectory (NoteTrack 0x01xx)', variable=self.show_motion,
                           command=self.redraw_view)
        gm.add_checkbutton(label='Root motion: move the character along it', variable=self.root_motion,
                           command=self.redraw_view)
        gm.add_checkbutton(label='Facing left (mirrors x impulses)', variable=self.facing_left,
                           command=self._motion_changed)
        gm.add_checkbutton(label='Assume floor at start height', variable=self.motion_floor,
                           command=self._motion_changed)
        gm.add_separator()
        gm.add_checkbutton(label='Isolate selected spawned effect (diagnostic only)',
                           variable=self.isolate_selected_spawn, command=self.redraw_view)
        gm.add_checkbutton(label='Effect teardown by chara_action 4/5', variable=self.effect_teardown,
                           command=self.refresh_animation)
        gm.add_checkbutton(label='ParentLink translation follow (no scale/facing)',
                           variable=self.parent_link_preview, command=self.redraw_view)
        gm.add_command(label='Effect layer (high-first callbacks; final occlusion unverified):', state='disabled')
        for v in ('Front', 'Behind'):
            gm.add_radiobutton(label=f'   Effects {v.lower()} character', value=v, variable=self.effect_layer,
                               command=self.redraw_view)
        gm.add_separator()
        gm.add_command(label='Pursuer position preview:', state='disabled')
        for mode in ('Follow (traced)', 'Target only'):
            gm.add_radiobutton(label='   ' + mode, value=mode, variable=self.pursuer_motion_preview,
                               command=self.redraw_view)
        gm.add_command(label='Pursuer initial position (unknown across moves):', state='disabled')
        for seed in ('First target', 'Origin (0,0)'):
            gm.add_radiobutton(label='   Assume ' + seed.lower(), value=seed,
                               variable=self.pursuer_start_seed, command=self.redraw_view)
        gm.add_command(label='Pursuer state (picked at run time):', state='disabled')
        for v in ('A', 'B'):
            gm.add_radiobutton(label=f'   State {v}', value=v, variable=self.pursuer_choice, command=self.redraw_view)
        giz['menu'] = gm
        giz.pack(side='right', padx=4)
        T.Tooltip(giz, 'Viewport overlays: effects, pursuer, collision, onion skin, effect layer')
        cb = ttk.Checkbutton(vp.header, text='Effects', variable=self.show_spawns, style='Toolbar.TCheckbutton',
                             command=self.redraw_view)
        cb.pack(side='right', padx=4)
        T.Tooltip(cb, 'Effects spawned by GenerateID keys, incl. nested spawns')
        ttk.Button(vp.header, text='Frame', style='Tool.TButton', command=self.frame_view).pack(side='right', padx=6)
        self.view = Viewport(vp.body, on_draw=self._draw_animation, zoom=3)
        self.view.pack(fill='both', expand=True)
        # inspector
        ins = T.Panel(upper, 'Inspector')
        upper.add(ins, weight=0)
        ins.configure(width=int(330 * k))
        self.inspector = Inspector(ins.body)
        self.inspector.pack(fill='both', expand=True)
        # timeline dock
        tl = T.Panel(ws, 'Timeline')
        ws.add(tl, weight=2)
        bar = tl.header
        T.separator(bar)
        T.tool_button(bar, '⏮', lambda: self.set_tick(0), 'First tick (Home)', width=3)
        T.tool_button(bar, '◀|', lambda: self.jump_key(-1), 'Previous key (Shift+←)', width=3)
        T.tool_button(bar, '◀', lambda: self.set_tick(self.tick - 1), 'Previous tick (←)', width=3)
        self.play_btn = T.tool_button(bar, '▶', self.toggle_play, 'Play / pause (Space)', width=3)
        T.tool_button(bar, '▶', lambda: self.set_tick(self.tick + 1), 'Next tick (→)', width=3)
        T.tool_button(bar, '|▶', lambda: self.jump_key(1), 'Next key (Shift+→)', width=3)
        T.tool_button(bar, '⏭', lambda: self.set_tick(self.move.duration if self.move else 0), 'Last tick (End)',
                      width=3)
        self.tick_var = tk.StringVar(value='0')
        sp = ttk.Spinbox(bar, from_=0, to=9999, width=5, textvariable=self.tick_var, font=T.MONO,
                         command=lambda: self.set_tick(self._int(self.tick_var.get(), self.tick)))
        sp.pack(side='left', padx=(8, 2))
        sp.bind('<Return>', lambda e: self.set_tick(self._int(self.tick_var.get(), self.tick)))
        self.dur_label = ttk.Label(bar, text='/ 0', style='Toolbar.TLabel', font=T.MONO)
        self.dur_label.pack(side='left')
        ttk.Checkbutton(bar, text='Loop', variable=self.loop, style='Toolbar.TCheckbutton').pack(side='left', padx=6)
        ttk.Checkbutton(bar, text='Sound', variable=self.sound_enabled, command=self._sound_changed,
                        style='Toolbar.TCheckbutton').pack(side='left', padx=4)
        sc = ttk.Combobox(bar, values=SPEEDS, textvariable=self.speed, width=5, state='readonly')
        sc.pack(side='left')
        T.Tooltip(sc, 'Playback speed (the game runs one tick per frame at 60 Hz)')
        T.separator(bar)
        T.tool_button(bar, '◆ Key', self.add_key_at_playhead, 'Add a key at the playhead on the selected track (K)')
        T.tool_button(bar, '⚑ Event', self.add_note_event, 'Add a NoteTrack event at the playhead (E)')
        T.tool_button(bar, '＋ Track', self.add_track, 'Add a track to a node')
        T.tool_button(bar, '✎ Text', self.edit_track, 'Edit the selected track as text')
        fit = ttk.Button(bar, text='Fit', style='Tool.TButton', command=self.fit_timeline)
        fit.pack(side='right', padx=(2, 8))
        T.Tooltip(fit, 'Fit the whole move in the timeline (Ctrl+wheel zooms, Shift+wheel scrolls)')
        self.timeline = DopeSheet(tl.body, on_scrub=self.set_tick, on_select=self._timeline_select,
                                  on_move_key=self._timeline_move_key, on_context=self._timeline_context,
                                  on_activate=self._timeline_activate, on_toggle_group=self._toggle_group)
        self.timeline.pack(fill='both', expand=True)
        return ws

    # --------------------------------------------------------- sprite tab
    def _build_sprite(self, host, k):
        ws = ttk.Frame(host, style='Bg.TFrame')
        top = ttk.Frame(ws, style='Toolbar.TFrame')
        top.pack(fill='x')
        ttk.Label(top, text='Sprite', style='Toolbar.TLabel').pack(side='left', padx=(8, 4))
        self.sprite_combo = ttk.Combobox(top, state='readonly', width=46)
        self.sprite_combo.pack(side='left', pady=3)
        self.sprite_combo.bind('<<ComboboxSelected>>', lambda e: self.load_sprite(self.sprite_combo.get()))
        T.separator(top)
        ttk.Checkbutton(top, text='Pieces', variable=self.show_pieces, style='Toolbar.TCheckbutton',
                        command=self.redraw_sprite).pack(side='left', padx=3)
        ttk.Checkbutton(top, text='Onion', variable=self.show_sprite_onion, style='Toolbar.TCheckbutton',
                        command=self.redraw_sprite).pack(side='left', padx=3)
        ttk.Label(top, text='Bank', style='Toolbar.TLabel').pack(side='left', padx=(8, 2))
        bc = ttk.Combobox(top, values=['Auto'] + [str(i) for i in range(16)], width=5, state='readonly',
                          textvariable=self.bank_override)
        bc.pack(side='left')
        bc.bind('<<ComboboxSelected>>', lambda e: self.redraw_sprite(thumbs=True))
        T.Tooltip(bc, 'Preview every piece with one palette bank (does not change data)')
        ttk.Button(top, text='Frame', style='Tool.TButton', command=self.frame_sprite).pack(side='left', padx=6)
        ttk.Button(top, text='Apply sprite', style='Accent.TButton', command=self.apply_sprite).pack(
            side='right', padx=6, pady=3)
        self.sprite_info = ttk.Label(top, text='', style='Toolbar.TLabel')
        self.sprite_info.pack(side='right', padx=8)
        mid = ttk.PanedWindow(ws, orient='horizontal')
        mid.pack(fill='both', expand=True)
        self._smid = mid
        vp = T.Panel(mid, 'Frame')
        mid.add(vp, weight=1)
        self.sprite_title = vp
        self.sview = Viewport(vp.body, on_draw=self._draw_sprite, on_press=self._sprite_press,
                              on_drag=self._sprite_drag, on_release=self._sprite_release,
                              origin_frac=(0.5, 0.62), zoom=4)
        self.sview.pack(fill='both', expand=True)
        det = T.Panel(mid, 'Details')
        mid.add(det, weight=0)
        det.configure(width=int(330 * k))
        self.details = Inspector(det.body)
        self.details.pack(fill='both', expand=True)
        strip = T.Panel(ws, 'Frames')
        strip.pack(fill='x')
        h = strip.header
        T.separator(h)
        self.flip_btn = T.tool_button(h, '▶', self.toggle_flipbook, 'Play the frames as a flipbook (Space)', width=3)
        ttk.Label(h, text='fps', style='Toolbar.TLabel').pack(side='left', padx=(4, 2))
        ttk.Spinbox(h, from_=1, to=60, width=4, textvariable=self.flip_fps, font=T.MONO).pack(side='left')
        T.separator(h)
        T.tool_button(h, 'Replace…', lambda: self.import_frame(False), 'Replace the selected frame from a PNG')
        T.tool_button(h, 'Append…', lambda: self.import_frame(True), 'Append a frame from a PNG')
        T.tool_button(h, 'Re-layout', self.relayout_frame, 'Rebuild the piece layout of the selected frame')
        T.tool_button(h, 'Delete', self.delete_frame, 'Delete the selected frame (Del)')
        T.separator(h)
        T.tool_button(h, 'Export PNGs…', self.export_frames, 'Export all frames as indexed PNGs')
        self.filmstrip = Filmstrip(strip.body, on_select=self.select_frame, on_context=self._film_context)
        self.filmstrip.pack(fill='x', padx=4, pady=4)
        return ws

    # -------------------------------------------------------- archive tab
    def _build_archive(self, host, k):
        ws = ttk.PanedWindow(host, orient='horizontal')
        self._amid = ws
        left = T.Panel(ws, 'Members')
        ws.add(left, weight=1)
        self.archive_info = ttk.Label(left.header, text='', style='Toolbar.TLabel')
        self.archive_info.pack(side='left', padx=8)
        af, self.member_tree = T.tree(left.body, ('name', 'kind', 'id', 'attributes', 'hash', 'size', 'DSCP'),
                                      (240, 60, 92, 92, 90, 80, 50), height=30, style='Mono.Treeview')
        af.pack(fill='both', expand=True, padx=4, pady=4)
        self.member_tree.bind('<<TreeviewSelect>>', lambda e: self._member_details())
        right = T.Panel(ws, 'Details')
        ws.add(right, weight=0)
        right.configure(width=int(330 * k))
        self.member_details = Inspector(right.body)
        self.member_details.pack(fill='both', expand=True)
        return ws

    def show_workspace(self, name):
        if name == 'animation' or self.workspace == 'animation':
            self._stop_play()
        if self.workspace == 'sprite' and name != 'sprite':
            self._stop_flipbook()
        self.workspace = name
        for key, frame in self.ws.items():
            frame.pack_forget()
            self._tab_buttons[key].configure(style='TabOn.TButton' if key == name else 'Tab.TButton')
        self.ws[name].pack(fill='both', expand=True)
        # left dock: the workspace's own browser (one resource column, swapped per workspace)
        suite = self.suite.get(name) if hasattr(self, 'suite') else None
        for b in [self._movelab_browser] + [w.browser for w in getattr(self, 'suite', {}).values()]:
            b.pack_forget()
        (suite.browser if suite else self._movelab_browser).pack(fill='both', expand=True)
        self._project_panel.set_title(suite.browser_title if suite else 'Project')
        if suite:
            suite.on_show()
        self._update_undo_label() if hasattr(self, 'undo_label') else None
        if name in ('sprite', 'archive') and not getattr(self, f'_sashed_{name}', False):
            setattr(self, f'_sashed_{name}', True)
            self.after(60, self._init_sprite_sashes)
        self.after(30, self.redraw_view if name == 'animation' else
                   self.redraw_sprite if name == 'sprite' else lambda: None)
        if name == 'sprite':
            self.after(120, self._frame_sprite_if_needed)

    # ============================================================ shortcuts
    def _bind_shortcuts(self):
        def guard(fn, allow_in_entry=False):
            def handler(e):
                w = self.focus_get()
                if not allow_in_entry and isinstance(w, (tk.Entry, ttk.Entry, tk.Text, ttk.Spinbox,
                                                         ttk.Combobox, tk.Spinbox)):
                    return None
                fn(e)
                return 'break'
            return handler
        self.bind_all('<Control-z>', guard(lambda e: self.undo(), True))
        self.bind_all('<Control-y>', guard(lambda e: self.redo(), True))
        self.bind_all('<Control-Shift-Z>', guard(lambda e: self.redo(), True))
        self.bind_all('<Control-s>', guard(lambda e: self.save(True), True))
        self.bind_all('<Control-S>', guard(lambda e: self.save(False), True))
        self.bind_all('<Control-Return>', guard(lambda e: self.apply_current(), True))
        self.bind_all('<Control-Key-1>', guard(lambda e: self.show_workspace('animation'), True))
        self.bind_all('<Control-Key-2>', guard(lambda e: self.show_workspace('sprite'), True))
        self.bind_all('<Control-Key-3>', guard(lambda e: self.show_workspace('archive'), True))
        self.bind_all('<Control-Key-4>', guard(lambda e: self.show_workspace('koma'), True))
        self.bind_all('<Control-Key-5>', guard(lambda e: self.show_workspace('level'), True))
        self.bind_all('<Control-Key-6>', guard(lambda e: self.show_workspace('screen'), True))
        for key, tool in (('v', 'select'), ('b', 'pencil'), ('i', 'picker')):
            self.bind_all(f'<KeyPress-{key}>', guard(lambda e, t=tool: self.suite[self.workspace].tool.set(t)
                                                     if self.workspace in ('koma', 'level') else None))
        self.bind_all('<F1>', guard(lambda e: self.show_shortcuts(), True))
        self.bind_all('<Control-d>', guard(lambda e: self.duplicate_move() if self.workspace == 'animation' else None))
        self.bind_all('<space>', guard(lambda e: self.toggle_play() if self.workspace == 'animation'
                                       else self.toggle_flipbook() if self.workspace == 'sprite' else None))
        self.bind_all('<Left>', guard(lambda e: self._arrow(-1, 0, e)))
        self.bind_all('<Right>', guard(lambda e: self._arrow(1, 0, e)))
        self.bind_all('<Up>', guard(lambda e: self._arrow(0, -1, e)))
        self.bind_all('<Down>', guard(lambda e: self._arrow(0, 1, e)))
        self.bind_all('<Shift-Left>', guard(lambda e: self._arrow(-1, 0, e, big=True)))
        self.bind_all('<Shift-Right>', guard(lambda e: self._arrow(1, 0, e, big=True)))
        self.bind_all('<Shift-Up>', guard(lambda e: self._arrow(0, -1, e, big=True)))
        self.bind_all('<Shift-Down>', guard(lambda e: self._arrow(0, 1, e, big=True)))
        self.bind_all('<Home>', guard(lambda e: self.set_tick(0) if self.workspace == 'animation' else self.select_frame(0)))
        self.bind_all('<End>', guard(lambda e: self.set_tick(self.move.duration if self.move else 0)
                                     if self.workspace == 'animation' else
                                     self.select_frame(len(self.sprite_d.frames) - 1 if self.sprite_d else 0)))
        self.bind_all('<Delete>', guard(lambda e: self.delete_selected_key() if self.workspace == 'animation'
                                        else self.delete_frame() if self.workspace == 'sprite' else None))
        self.bind_all('<KeyPress-k>', guard(lambda e: self.add_key_at_playhead() if self.workspace == 'animation' else None))
        self.bind_all('<KeyPress-e>', guard(lambda e: self.add_note_event() if self.workspace == 'animation' else None))
        self.bind_all('<KeyPress-f>', guard(lambda e: self.frame_view() if self.workspace == 'animation'
                                            else self.frame_sprite()))

    def _arrow(self, dx, dy, e, big=False):
        if self.workspace == 'animation':
            if dx:
                if big:
                    self.jump_key(dx)
                else:
                    self.set_tick(self.tick + dx)
        elif self.workspace == 'sprite':
            if self.piece_i is not None and self._piece() is not None:
                step = 8 if big else 1
                self.nudge_piece(dx * step, dy * step)
            elif dx and self.sprite_d:
                self.select_frame(max(0, min(len(self.sprite_d.frames) - 1, (self.frame_i or 0) + dx)))

    def show_shortcuts(self):
        TextDialog(self, 'Keyboard shortcuts', SHORTCUTS, lambda t: True)

    def _open_doc(self, name):
        p = HERE / 'docs' / name
        if p.is_file():
            os.startfile(str(p)) if sys.platform == 'win32' else None
        else:
            messagebox.showinfo('Docs', f'{p} not found')

    @staticmethod
    def _int(text, default):
        try:
            return parse_int(text)
        except ValueError:
            return default

    # ============================================================ data root
    def choose_root(self):
        d = filedialog.askdirectory(title='Select the JUS data root (folder containing chr/, efc/, …)')
        if d:
            self.open_root(d)

    def open_root(self, path, quiet=False):
        self._stop_play()
        if self._audio:
            self._audio.close()
            self._audio = None
        try:
            self.root_data = DataRoot(path)
            self.root_data.characters()
            self._common_tables = None
        except Exception as exc:  # noqa: BLE001
            self.root_data = None
            if not quiet:
                messagebox.showerror('Data root', f'Cannot open {path}:\n{exc}')
            self.status.set(f'No data root loaded ({exc}). Use File › Open data root…')
            return
        self._sdat = None
        self._sounds = sounds.SoundResolver(self.root_data.root)
        self._audio = AudioPreview(self.root_data.root)
        self._sounds.set_characters([c for c in self.root_data.characters() if '_b_' in c])
        self.status.set('Select a character or archive in the Project panel.')
        self.root_label.configure(text=str(path))
        self.container = None
        self.populate_tree()
        for w in self.suite.values():
            w.on_root()
        self.update_dirty()

    def populate_tree(self):
        t = self.res_tree
        t.delete(*t.get_children())
        if not self.root_data:
            return
        flt = self.find_var.get().strip().lower()
        chars = t.insert('', 'end', 'chars', text='Characters', open=True)
        for cid in self.root_data.characters():
            if flt and flt not in cid:
                continue
            node = t.insert(chars, 'end', f'char:{cid}', text=f'👤 {cid}')
            t.insert(node, 'end', f'lazy:{cid}', text='…')
        effs = t.insert('', 'end', 'effects', text='Effect archives', open=True)
        for p in self.root_data.effect_archives():
            if flt and flt not in p.lower():
                continue
            t.insert(effs, 'end', f'arc:{p}', text=f'✦ {Path(p).name}')
        other = t.insert('', 'end', 'other', text='Other archives', open=False)
        for p in ('battle/ChrWin.aar', 'chr/ChrBin.aar'):
            if (self.root_data.root / p).is_file():
                t.insert(other, 'end', f'arc:{p}', text=f'▣ {p}')

    def on_resource_open(self, _e=None):
        sel = self.res_tree.focus()
        if sel.startswith('char:'):
            cid = sel[5:]
            kids = self.res_tree.get_children(sel)
            if kids and kids[0].startswith('lazy:'):
                self.res_tree.delete(*kids)
                icons = {'animation': '🎞', 'image': '🖼', 'window': '▢'}
                for s in self.root_data.character_sources(cid):
                    if s['role'] == 'gameplay-table':
                        continue
                    role = s['role'].split('-')[0]
                    label = f'{icons.get(role, "•")} {split(s["path"])[-1]}'
                    self.res_tree.insert(sel, 'end', f'arc:{s["path"]}|@{cid}', text=label)

    def on_resource_select(self, _e=None):
        sel = self.res_tree.focus()
        if sel.startswith('char:'):
            self.res_tree.item(sel, open=True)
            self.on_resource_open()
            kids = self.res_tree.get_children(sel)
            if kids:
                self.res_tree.selection_set(kids[0])
                self.res_tree.focus(kids[0])
            return
        if not sel.startswith('arc:'):
            return
        if not self.confirm_discard():
            return
        rest = sel[4:]
        cid = None
        if '|@' in rest:
            rest, cid = rest.split('|@')
        self.select_container(rest, cid)

    def _project_context(self, e):
        item = self.res_tree.identify_row(e.y)
        if not item:
            return
        self.res_tree.selection_set(item)
        self.res_tree.focus(item)
        menu = tk.Menu(self, tearoff=False)
        menu.add_command(label='Export package…', command=self.export_package)
        menu.add_command(label='Import package…', command=self.import_package)
        menu.tk_popup(e.x_root, e.y_root)

    def select_container(self, path, char_id=None):
        self.container = path
        if char_id:
            self.scope = [s['path'] for s in self.root_data.character_sources(char_id)
                          if s['role'] in ('animation-archive', 'image-archive')]
            if path not in self.scope:
                self.scope.insert(0, path)
        else:
            self.scope = [path]
        try:
            # Common effect archives come last so character resources win on id clashes.
            common = [p for p in self.root_data.effect_archives() if p not in self.scope]
            self.index = ResourceIndex(self.root_data, self.scope + common)
            arc = self.root_data.archive(path)
        except Exception as exc:  # noqa: BLE001
            messagebox.showerror('Archive', f'{path}:\n{exc}')
            return
        self._frame_cache.clear()
        self._need_frame = True
        self.status.set(f'{path}: ALAR v{arc.version}, {len(arc.entries)} members')
        self.title(f'JUS Editor — {path}')
        self.populate_archive()
        amts = [e.name for e in arc.entries if e.ext == '.amt']
        self.almt_combo['values'] = amts
        if amts:
            self.almt_combo.set(amts[0])
            self.load_almt(amts[0])
        else:
            self.almt_combo.set('')
            self.almt = None
            self.almt_path = None
            self.populate_moves()
        sprites = []
        for c in self.scope:
            try:
                for e in self.root_data.archive(c).entries:
                    if e.ext == '.dtx':
                        sprites.append(join(c, e.name))
            except Exception:  # noqa: BLE001
                pass
        sprites.sort(key=lambda p: (not p.startswith(path), p))
        self.sprite_combo['values'] = [self._short(p) for p in sprites]
        self._sprite_paths = {self._short(p): p for p in sprites}
        if sprites:
            self.sprite_combo.set(self._short(sprites[0]))
            self.load_sprite(self._short(sprites[0]), force=True)
        else:
            self.sprite_combo.set('')
            self.sprite_d = self.sprite_g = None
            self.populate_frames()
        if not amts and sprites and self.workspace == 'animation':
            self.show_workspace('sprite')

    @staticmethod
    def _short(path):
        parts = split(path)
        return f'{parts[-1]}   ({" › ".join(parts[:-1])})'

    def _char_of(self, path):
        m = re.search(r'([a-z]{2}_[bsh]_\d{2})', path, re.I)
        return m.group(1).lower() if m else None

    # =========================================================== dirty/save
    def update_dirty(self):
        files = self.root_data.dirty_files() if self.root_data else []
        parts = []
        if self.almt_dirty:
            parts.append('● move table not applied')
        if self.sprite_dirty:
            parts.append('● sprite not applied')
        for w in getattr(self, 'suite', {}).values():
            if w.dirty:
                parts.append(f'● {w.title.lower()} not applied')
        if files:
            parts.append(f'unsaved: {", ".join(files)}')
        self.dirty_label.configure(text='   '.join(parts))
        self._update_undo_label()

    def confirm_discard(self):
        if not (self.almt_dirty or self.sprite_dirty):
            return True
        ans = messagebox.askyesnocancel('Unapplied edits',
                                        'Apply the current move-table / sprite edits before switching?')
        if ans is None:
            return False
        if ans:
            if self.almt_dirty:
                self.apply_almt()
            if self.sprite_dirty:
                self.apply_sprite()
        else:
            self.almt_dirty = self.sprite_dirty = False
        return True

    def apply_current(self):
        if self.workspace in self.suite:
            self.suite[self.workspace].apply()
            return
        if self.workspace == 'sprite' or (self.sprite_dirty and not self.almt_dirty):
            self.apply_sprite()
        if self.almt_dirty or self.workspace == 'animation':
            self.apply_almt()

    def save(self, in_place):
        if not self.root_data or not self.confirm_discard():
            return
        if not self.root_data.dirty_files():
            messagebox.showinfo('Save', 'Nothing to save. Apply edits first (Ctrl+Enter).')
            return
        if in_place:
            if not messagebox.askyesno('Save in place',
                                       'Overwrite the archives in the data root?\n'
                                       'The first overwrite of each file keeps a .orig backup.\n\n'
                                       + '\n'.join(self.root_data.dirty_files())):
                return
            out = None
        else:
            out = filedialog.askdirectory(title='Output root (archives are written at their data-relative paths)')
            if not out:
                return
        try:
            written = self.root_data.save(out)
        except (OSError, ValueError) as exc:
            messagebox.showerror('Save failed', f'No edits have been marked saved.\n{exc}')
            self.update_dirty()
            return
        self.update_dirty()
        self.status.set(f'Saved {len(written)} archive file(s).')
        messagebox.showinfo('Save', 'Wrote:\n' + '\n'.join(str(w) for w in written))

    def revert(self):
        if not self.root_data:
            return
        if (self.root_data.dirty_files() or self.almt_dirty or self.sprite_dirty) and \
                not messagebox.askyesno('Revert', 'Discard all unsaved edits?'):
            return
        self.almt_dirty = self.sprite_dirty = False
        self.history = History()
        self.open_root(str(self.root_data.root))

    # ============================================================= packages
    def export_package(self):
        if not self.root_data:
            return
        sel = self.res_tree.focus()
        cid = None
        if sel.startswith('char:'):
            cid = sel[5:]
        elif '|@' in sel:
            cid = sel.split('|@')[1]
        choice = None
        if cid:
            choice = messagebox.askyesnocancel(
                'Export package', f'Export the full character package for {cid}?\n\n'
                                  'Yes = whole character (animations, images, tables, window)\n'
                                  'No = only the selected archive')
            if choice is None:
                return
        if not cid and not self.container:
            messagebox.showinfo('Export', 'Select a character or archive first.')
            return
        out = filedialog.askdirectory(title='Empty folder for the package')
        if not out:
            return
        out = Path(out)
        if any(out.iterdir()):
            out = out / (cid if choice else Path(split(self.container)[-1]).stem)

        def work():
            if cid and choice:
                return package.export_character(self.root_data, cid, out)
            return package.export_package(self.root_data, [self.container], out,
                                          name=Path(split(self.container)[-1]).stem,
                                          kind='effect' if self.container.startswith('efc/') else 'archive')
        self.run_task('Exporting package…', work, lambda p: messagebox.showinfo('Export', f'Package written to\n{p}'))

    def import_package(self):
        if not self.root_data or not self.confirm_discard():
            return
        p = filedialog.askdirectory(title='Package folder (contains package.json)')
        if not p:
            zp = filedialog.askopenfilename(title='…or a package .zip', filetypes=[('Package zip', '*.zip')])
            if not zp:
                return
            p = zp

        def work():
            return package.import_package(Path(p), self.root_data, write=False)

        def done(rep):
            self.update_dirty()
            if self.container:
                self.select_container(self.container, None if len(self.scope) == 1 else self._char_of(self.container))
            msg = rep.summary()
            if rep.changed_members or rep.added:
                msg += '\n\n' + '\n'.join((rep.changed_members + rep.added)[:30])
            if rep.warnings:
                msg += '\n\nWarnings:\n' + '\n'.join(rep.warnings[:20])
            msg += '\n\nUse Save to write the rebuilt archives.'
            messagebox.showinfo('Import package', msg)
        self.run_task('Importing package…', work, done)

    def run_task(self, label, work, done):
        self.status.set(label)
        self.config(cursor='watch')
        result = {}

        def runner():
            try:
                result['value'] = work()
            except Exception as exc:  # noqa: BLE001
                result['error'] = exc

        th = threading.Thread(target=runner, daemon=True)
        th.start()

        def poll():
            if th.is_alive():
                self.after(100, poll)
                return
            self.config(cursor='')
            if 'error' in result:
                self.status.set(f'{label} failed')
                messagebox.showerror('Error', str(result['error']))
            else:
                self.status.set(label.rstrip('…') + ' done')
                done(result['value'])
        poll()

    # ============================================================ undo/redo
    def _doc(self):
        if self.workspace in getattr(self, 'suite', {}):
            return self.suite[self.workspace].doc() or f'{self.workspace}:'
        if self.workspace == 'sprite' and self.sprite_path:
            return 'sprite:' + self.sprite_path
        return 'almt:' + (self.almt_path or '')

    def _almt_snapshot(self):
        if self.almt is None:
            return None
        try:
            idx = self.almt.moves.index(self.move) if self.move in self.almt.moves else 0
            return (self.almt.build(), idx, self.sel_track, self.sel_key)
        except Exception:  # noqa: BLE001
            return None

    def _sprite_snapshot(self):
        if self.sprite_d is None:
            return None
        try:
            return (self.sprite_d.build(), self.sprite_g.build() if self.sprite_g else None, self.frame_i,
                    self.piece_i)
        except Exception:  # noqa: BLE001
            return None

    def checkpoint(self, label, kind='almt', snap=None):
        """Record the state *before* an edit."""
        if kind == 'almt':
            snap = snap if snap is not None else self._almt_snapshot()
            if snap is not None and self.almt_path:
                doc = 'almt:' + self.almt_path
                if not self.almt_dirty:          # first edit since load/apply: remember the clean bytes
                    self._clean[doc] = snap[0]
                self.history.push(doc, label, snap)
        else:
            snap = snap if snap is not None else self._sprite_snapshot()
            if snap is not None and self.sprite_path:
                doc = 'sprite:' + self.sprite_path
                if not self.sprite_dirty:
                    self._clean[doc] = snap[:2]
                self.history.push(doc, label, snap)
        self._update_undo_label()

    def _restore_almt(self, snap):
        data, idx, sel_track, sel_key = snap
        self.almt = almt.parse(data)
        for m in self.almt.moves:
            m.dirty = True
        # undoing back to the applied/loaded bytes leaves nothing to apply
        self.almt_dirty = data != self._clean.get('almt:' + (self.almt_path or ''))
        self.populate_moves(select=idx)
        self.sel_track, self.sel_key = sel_track, sel_key
        self.refresh_animation()

    def _restore_sprite(self, snap):
        dbytes, gbytes, fi, pi = snap
        self.sprite_d = dstxmod.parse(dbytes)
        if gbytes is not None:
            self.sprite_g = dsigmod.parse(gbytes)
        self.sprite_dirty = (dbytes, gbytes) != self._clean.get('sprite:' + (self.sprite_path or ''))
        self.populate_frames(select=fi)
        self.piece_i = pi
        self.redraw_sprite(thumbs=True)

    def undo(self):
        self._history_step(self.history.undo, 'Undo')

    def redo(self):
        self._history_step(self.history.redo, 'Redo')

    def _history_step(self, fn, verb):
        doc = self._doc()
        ws = getattr(self, 'suite', {}).get(self.workspace)
        if ws is not None:
            current = ws.snapshot()
            res = fn(doc, current) if current is not None else None
            if res is None:
                self.status.set(f'Nothing to {verb.lower()}.')
                return
            ws.restore(res[1])
            self.status.set(f'{verb}: {res[0]}')
            self.update_dirty()
            return
        current = self._sprite_snapshot() if doc.startswith('sprite:') else self._almt_snapshot()
        if current is None:
            return
        res = fn(doc, current)
        if res is None:
            self.status.set(f'Nothing to {verb.lower()}.')
            return
        label, snap = res
        if doc.startswith('sprite:'):
            self._restore_sprite(snap)
        else:
            self._restore_almt(snap)
        self.status.set(f'{verb}: {label}')
        self.update_dirty()

    def _update_undo_label(self):
        u, r = self.history.peek(self._doc())
        self.undo_label.configure(text=(f'Undo: {u}' if u else '') + (f'   Redo: {r}' if r else ''))

    # ================================================================ ALMT
    def _switch_almt(self, name):
        if self.almt_dirty and not self.confirm_discard():
            self.almt_combo.set(split(self.almt_path)[-1] if self.almt_path else '')
            return
        self.load_almt(name)

    def load_almt(self, name):
        if not self.container or not name:
            return
        self.almt_path = join(self.container, name)
        try:
            self.almt = almt.parse(self.root_data.read(self.almt_path))
        except Exception as exc:  # noqa: BLE001
            messagebox.showerror('ALMT', str(exc))
            self.almt = None
        self.almt_dirty = False
        if self.container.startswith('efc/'):
            self._common_tables = None      # re-read the common effects after an edit/apply
        self._load_effect_catalog()
        self.populate_moves()
        self.update_dirty()

    def populate_moves(self, keep=False, select=None):
        t = self.moves_tree
        cur = self.almt.moves.index(self.move) if keep and self.move in (self.almt.moves if self.almt else []) else select
        t.delete(*t.get_children())
        if not self.almt:
            self.move = None
            self.refresh_animation()
            return
        flt = self.move_filter.get().strip().lower()
        for i, m in enumerate(self.almt.moves):
            if flt and flt not in str(i) and flt not in hx(m.id).lower():
                continue
            t.insert('', 'end', str(i), values=(i, hx(m.id, 6), m.duration, '⟳' if m.flags & 1 else ''))
        target = str(cur if cur is not None else 0)
        if t.exists(target):
            t.selection_set(target)
            t.focus(target)
            t.see(target)
        elif not keep:
            self.move = None
        self.on_move_select()

    def on_move_select(self, _e=None):
        sel = self.moves_tree.focus()
        new = self.almt.moves[int(sel)] if self.almt and sel else None
        changed = new is not self.move
        if changed:
            self._stop_play()
            self.sel_track = self.sel_key = self.sel_virtual = None
        self.move = new
        if changed:
            self.after(5, self.fit_timeline)
        self._refresh_pursuer_links()
        self.tick = min(self.tick, self.move.duration) if self.move else 0
        if _e is not None:
            self.tick = 0
        self.refresh_animation()
        self.after(10, self.frame_view_if_needed)

    def _move_row(self, i):
        m = self.almt.moves[i]
        if self.moves_tree.exists(str(i)):
            self.moves_tree.item(str(i), values=(i, hx(m.id, 6), m.duration, '⟳' if m.flags & 1 else ''))

    def mark_almt(self):
        self.almt_dirty = True
        self.update_dirty()

    def duplicate_move(self):
        if not self.move:
            return
        self.checkpoint('duplicate move')
        d = almt.move_to_dict(self.move, self.almt.node_names)
        new = almt.move_from_dict(d, self.almt.node_names)
        new.id = max(m.id for m in self.almt.moves) + 1
        self.almt.moves.append(new)
        self.mark_almt()
        self.move_filter.set('')
        self.populate_moves(select=len(self.almt.moves) - 1)
        self.status.set(f'Duplicated move as {hx(new.id)}')

    def delete_move(self):
        if not self.move or len(self.almt.moves) <= 1:
            return
        if messagebox.askyesno('Delete move', f'Delete move {hx(self.move.id)}?'):
            self.checkpoint('delete move')
            i = self.almt.moves.index(self.move)
            self.almt.moves.remove(self.move)
            self.mark_almt()
            self.populate_moves(select=max(0, i - 1))

    def apply_almt(self):
        if not self.almt or not self.almt_path:
            return
        try:
            data = self.almt.build()
            almt.parse(data)
        except Exception as exc:  # noqa: BLE001
            messagebox.showerror('ALMT', f'Cannot build move table:\n{exc}')
            return
        self.root_data.write(self.almt_path, data)
        container = join(*split(self.almt_path)[:-1])
        arc = self.root_data.archive(container)
        rep = package.ImportReport()
        package._sync_spans(arc, rep)
        if arc.version == 2:
            arc.id_low = arc.id_high = None
        self.root_data.mark_archive_dirty(container)
        self.almt_dirty = False
        self._load_effect_catalog()
        self._refresh_pursuer_links()
        self.update_dirty()
        self.populate_archive()
        self.status.set(f'Applied {self.almt_path} ({len(data)} bytes). {" ".join(rep.warnings)}')

    def export_almt_json(self):
        if not self.almt:
            return
        p = filedialog.asksaveasfilename(defaultextension='.json', filetypes=[('JSON', '*.json')],
                                         initialfile=split(self.almt_path)[-1] + '.json')
        if p:
            Path(p).write_text(json.dumps(almt.to_dict(self.almt), indent=1) + '\n', encoding='utf-8')

    def import_almt_json(self):
        if not self.almt:
            return
        p = filedialog.askopenfilename(filetypes=[('JSON', '*.json')])
        if not p:
            return
        try:
            new = almt.from_dict(json.loads(Path(p).read_text(encoding='utf-8')))
        except Exception as exc:  # noqa: BLE001
            messagebox.showerror('ALMT JSON', str(exc))
            return
        self.checkpoint('import JSON')
        self.almt = new
        self.mark_almt()
        self.populate_moves()

    def apply_move_props(self):
        m = self.move
        if not m:
            return
        try:
            new = (parse_int(self._mv['id'].get()), parse_int(self._mv['duration'].get()),
                   (m.flags & ~1) | (1 if self._mv['loop'].get() else 0))
        except ValueError as exc:
            messagebox.showerror('Move', f'Invalid number: {exc}')
            return
        if new == (m.id, m.duration, m.flags):
            return
        self.checkpoint('move properties')
        m.id, m.duration, m.flags = new
        m.touch()
        self.mark_almt()
        self._move_row(self.almt.moves.index(m))
        self.refresh_animation()

    # --------------------------------------------------------------- notes
    def sdat_symbols(self):
        if getattr(self, '_sdat', None) is None and self.root_data:
            self._sdat = False
            try:
                f = next((self.root_data.root / 'sound').glob('*.sdat'), None)
                if f:
                    self._sdat = sdat.parse_symbols(f.read_bytes())
            except (OSError, ValueError):
                self._sdat = False
        return self._sdat or None

    def command_text(self, c: notetrack.Command, short=False) -> str:
        text = c.text()
        if c.opcode == 0x0300:
            v = c.values()
            if v and v[0] in eventops.CHARA_ACTION_NAMES:
                text += f'  — {eventops.CHARA_ACTION_NAMES[v[0]]}'
        if c.opcode in (0x0400, 0x0401, 0x0402) and self._sounds is not None:
            v = c.values()
            if v:
                cue = self._sounds.resolve(c.opcode, v[0], self.container)
                text += f' = {cue.label}' if cue.ssar is not None else f'  (silent: {cue.note})'
        if short and len(text) > 48:
            text = text[:46] + '…'
        return text

    def notes_to_text(self, raw: bytes) -> str:
        nt = notetrack.parse(raw)
        lines = ['# tick opcode args...   (one command per line; same tick = same key)',
                 '# args are the decoded values; unknown opcodes take hex bytes: tick 0xNNNN hex:aabb']
        for k in nt.keys:
            for c in k.commands:
                v = c.values()
                args = ' '.join(str(x) for x in v) if v is not None else 'hex:' + c.args.hex()
                lines.append(f'{k.tick} 0x{c.opcode:04X} {args}    # {self.command_text(c)}')
            if not k.commands:
                lines.append(f'{k.tick} -')
        if nt.tail:
            lines.append(f'# tail {nt.tail.hex()}')
        return '\n'.join(lines)

    @staticmethod
    def text_to_notes(text: str, old_raw: bytes) -> bytes:
        old = notetrack.parse(old_raw)
        keys: list[notetrack.NoteKey] = []
        for line in text.splitlines():
            line = line.split('#', 1)[0].strip()
            if not line:
                continue
            parts = line.split()
            tick = int(parts[0], 0)
            if not keys or keys[-1].tick != tick:
                keys.append(notetrack.NoteKey(tick))
            if len(parts) == 1 or parts[1] == '-':
                continue
            op = int(parts[1], 0)
            rest = parts[2:]
            if rest and rest[0].startswith('hex:'):
                cmd = notetrack.Command(op, bytes.fromhex(rest[0][4:]))
            else:
                cmd = notetrack.Command.from_values(op, [int(x, 0) for x in rest])
            keys[-1].commands.append(cmd)
        if notetrack.NoteTrack(keys, old.tail).build() == old_raw:
            return old_raw
        return notetrack.NoteTrack(keys).build()

    # --------------------------------------------------------------- tracks
    def _track(self, sel=None):
        sel = sel if sel is not None else self.sel_track
        if not sel or not self.move:
            return None
        ni, ti = sel
        node = self.move.nodes[ni] if ni < len(self.move.nodes) else None
        if node is None or ti >= len(node.tracks):
            return None
        return node.tracks[ti]

    def _track_done(self, label='edit track', snap=None):
        if snap is not None:
            self.checkpoint(label, snap=snap)
        if self.move:
            self.move.touch()
        self.mark_almt()
        self._refresh_pursuer_links()
        self.refresh_animation()

    def edit_track(self):
        tr = self._track()
        if tr is None:
            self.status.set('Select a track in the timeline first.')
            return
        ni = self.sel_track[0]
        if tr.field == 'NoteTrack':
            self._note_dialog(ni, tr, self.tick)
            return
        snap = self._almt_snapshot()
        TrackDialog(self, self.almt, self.move, ni, tr, lambda: self._track_done('edit track', snap),
                    self.notes_to_text, self.text_to_notes)

    def add_track(self):
        if not self.move:
            return
        snap = self._almt_snapshot()
        ni = self.sel_track[0] if self.sel_track else 0
        TrackDialog(self, self.almt, self.move, ni, None, lambda: self._track_done('add track', snap),
                    self.notes_to_text, self.text_to_notes)

    def delete_track(self):
        tr = self._track()
        if tr is None:
            return
        ni, ti = self.sel_track
        if messagebox.askyesno('Delete track', f'Delete {self.almt.node_names[ni]} / {tr.field}?'):
            self.checkpoint('delete track')
            del self.move.nodes[ni].tracks[ti]
            if not self.move.nodes[ni].tracks and ni != 0:
                self.move.nodes[ni] = None
            self.sel_track = self.sel_key = None
            self._track_done()

    def _active_value(self, tr, tick):
        if not tr.keyed:
            return tr.value
        cur = None
        for k in tr.keys:
            if k.tick <= tick:
                cur = k.value
        if cur is None and tr.keys:
            cur = tr.keys[0].value
        return cur

    def add_key_at_playhead(self):
        tr = self._track()
        if tr is None or not self.move:
            self.status.set('Select a keyed track first (click its name in the timeline).')
            return
        if tr.field == 'NoteTrack':
            self.add_note_event()
            return
        if tr.opaque or not tr.keyed:
            self.status.set(f'{tr.field} is static; edit its value in the Inspector.')
            return
        if any(k.tick == self.tick for k in tr.keys):
            self.sel_key = self.tick
            self.refresh_inspector()
            return
        value = self._active_value(tr, self.tick)
        if value is None:
            kind = almt.value_kind(tr.field)
            value = [0, 0] if kind == 's16x2' else [0, 0, 0, 0] if kind == 's16x4' else 0
        self.checkpoint(f'add {tr.field} key')
        tr.keys.append(almt.Key(self.tick, json.loads(json.dumps(value))))
        tr.keys.sort(key=lambda k: k.tick)
        tr.touch()
        self.sel_key = self.tick
        self._track_done()

    def delete_selected_key(self):
        tr = self._track()
        if tr is None or self.sel_key is None:
            return
        t = self.sel_key
        if tr.field == 'NoteTrack' and tr.opaque:
            nt = notetrack.parse(tr.encoded())
            n = sum(len(k.commands) for k in nt.keys if k.tick == t)
            if n > 1 and not messagebox.askyesno('Delete events', f'Delete all {n} events at tick {t}?'):
                return
            self.checkpoint('delete events')
            nt.keys = [k for k in nt.keys if k.tick != t]
            tr.raw = nt.build()
            tr.touch()
        elif tr.keyed and not tr.opaque:
            self.checkpoint(f'delete {tr.field} key')
            tr.keys = [k for k in tr.keys if k.tick != t]
            tr.touch()
        else:
            return
        self.sel_key = None
        self._track_done()

    def set_key(self, tick_text, value_text):
        tr = self._track()
        if tr is None:
            return
        try:
            value = TrackDialog.parse_value(value_text, tr.field)
            if tr.keyed:
                new_tick = parse_int(tick_text)
                if not 0 <= new_tick <= 0xFFFE:
                    raise ValueError('tick must be 0–65534')
                if new_tick != self.sel_key and any(k.tick == new_tick for k in tr.keys):
                    raise ValueError(f'{tr.field} already has a key at tick {new_tick}')
        except (ValueError, json.JSONDecodeError) as exc:
            messagebox.showerror('Key', str(exc))
            return
        self.checkpoint(f'set {tr.field}')
        if not tr.keyed:
            tr.value = value
        else:
            for k in tr.keys:
                if k.tick == self.sel_key:
                    k.tick, k.value = new_tick, value
                    break
            tr.keys.sort(key=lambda k: k.tick)
            self.sel_key = new_tick
        tr.touch()
        self._track_done()

    # ----------------------------------------------------- NoteTrack events
    def _note_track_for_selection(self, create=False):
        if not self.move or not self.almt:
            return None, None
        chosen = self._track()
        if chosen is not None and chosen.field == 'NoteTrack':
            return self.sel_track[0], chosen
        ni = self.sel_track[0] if self.sel_track else None
        if ni is not None and self.move.nodes[ni] and self.move.nodes[ni].track('NoteTrack'):
            return ni, self.move.nodes[ni].track('NoteTrack')
        for j, node in enumerate(self.move.nodes):
            if node and node.track('NoteTrack'):
                return j, node.track('NoteTrack')
        if not create:
            return None, None
        ni = self.almt.node_names.index('SP01') if 'SP01' in self.almt.node_names else 0
        track = almt.Track('NoteTrack', True, raw=notetrack.NoteTrack().build(), opaque=True)
        return ni, track

    def _note_dialog(self, ni, track, tick, operation='edit'):
        if track is None or self.move is None:
            return
        snap = self._almt_snapshot()

        def commit_changes():
            node = self.move.nodes[ni]
            if node is None:
                node = self.move.nodes[ni] = almt.NodeAnim()
            if not any(existing is track for existing in node.tracks):
                self.almt.field_index('NoteTrack')
                node.tracks.append(track)
            self._track_done('edit NoteTrack events', snap)
        NoteEventEditor(self, self.almt.node_names[ni], track, self.move.duration,
                        initial_tick=max(0, min(self.move.duration, tick)),
                        operation=operation, format_command=self.command_text, on_done=commit_changes)

    def edit_note_events(self):
        ni, track = self._note_track_for_selection(create=False)
        if track is not None:
            self._note_dialog(ni, track, self.tick)
        else:
            messagebox.showinfo('NoteTrack', 'No NoteTrack on this move. Use “⚑ Event” to create one.')

    def add_note_event(self):
        if not self.move:
            return
        ni, track = self._note_track_for_selection(create=True)
        if track is not None:
            self._note_dialog(ni, track, self.tick, operation='add')

    # ------------------------------------------------------- pursuer links
    def _amt_tables(self, paths):
        out = []
        for path in paths:
            try:
                arc = self.root_data.archive(path)
                for e in arc.entries:
                    if e.ext != '.amt':
                        continue
                    rp = join(path, e.name)
                    table = self.almt if (rp == self.almt_path and self.almt) else almt.parse(e.payload())
                    out.append((rp, table))
            except (KeyError, ValueError, OSError):
                continue
        return out

    def _load_effect_catalog(self):
        """Move-id → (move, node names, path) over the character scope, then efc/*.aar."""
        self._effect_moves = {}
        if not self.root_data:
            return
        if self._common_tables is None:
            self._common_tables = self._amt_tables(self.root_data.effect_archives())
        # The open table is always the live (possibly edited) object.
        common = [(p, self.almt if (p == self.almt_path and self.almt) else t) for p, t in self._common_tables]
        spawns.build_catalog(self._amt_tables(self.scope) + common, self._effect_moves)

    def _refresh_pursuer_links(self):
        self._pursuer_events = ()
        self._effect_table_error = ''
        if self.move is None or self.root_data is None or not self.container:
            return
        char = self._char_of(self.container)
        if char:
            path = join('chr/ChrBin.aar', f'chr/effect/{char}.bin')
            try:
                if self.root_data.exists(path):
                    recs = effectlinks.parse_effect_records(self.root_data.read(path))
                    self._pursuer_events = effectlinks.pursuer_events(self.move, self.almt.node_names, recs)
            except (ValueError, OSError, KeyError) as exc:
                self._effect_table_error = str(exc)

    # ============================================================= timeline
    def _timeline_rows(self):
        rows = []
        if not self.move:
            self._motion, self._cues = None, []
            return rows
        marker_ticks = {}
        for node in self.move.nodes:
            tr = node.track('Marker') if node else None
            if tr and not tr.opaque:
                for k in (tr.keys if tr.keyed else [almt.Key(0, tr.value)]):
                    marker_ticks.setdefault(k.value, k.tick)
        for ni, node in enumerate(self.move.nodes):
            if node is None:
                continue
            name = self.almt.node_names[ni]
            gid = ('node', ni)
            collapsed = gid in self._collapsed
            child_rows = []
            all_ticks = set()
            for ti, tr in enumerate(node.tracks):
                row = {'id': ('trk', ni, ti), 'label': tr.field, 'indent': 1, 'editable': True,
                       'colour': T.key_colour(tr.field), 'sel': (ni, ti)}
                if tr.field == 'NoteTrack' and tr.opaque:
                    try:
                        nt = notetrack.parse(tr.encoded())
                    except ValueError:
                        nt = None
                    keys, flags, arcs = [], {}, []
                    if nt:
                        for ki, key in enumerate(nt.keys):
                            for ci, cmd in enumerate(key.commands):
                                keys.append((key.tick, (ki, ci, cmd)))
                                flags.setdefault(key.tick, []).append(T.EVENT_COLOURS.get(cmd.opcode >> 8, T.FG))
                                for tgt in self._branch_targets(cmd):
                                    if tgt in marker_ticks:
                                        arcs.append((key.tick, marker_ticks[tgt], 'branch'))
                    n = len(keys)
                    row.update(kind='events', keys=keys, flags=flags, arcs=arcs, badge=f'{n} ev',
                               tooltip=self._event_tooltip)
                elif tr.opaque:
                    row.update(kind='static', keys=[], badge='raw', editable=False)
                elif not tr.keyed:
                    row.update(kind='static', keys=[], badge=self._fmt_short(tr.field, tr.value))
                else:
                    keys = [(k.tick, k) for k in tr.keys]
                    row.update(kind='track', keys=keys, badge=f'{len(keys)}',
                               tooltip=lambda t, k, f=tr.field: f'{f} @ {t}\n{self._fmt(f, k.value)}')
                    if tr.field == 'Marker':
                        labels, arcs = [], []
                        for fire, label, target in eventops.marker_jump_pairs(tr.keys):
                            arcs.append((fire, target, 'jump' if target is not None else 'missing'))
                        for k in tr.keys:
                            v = k.value
                            ev = eventops.marker_event(v)
                            labels.append((k.tick, f'→L{ev & 15}' if ev is not None else f'L{v:X}' if v >= 0xFF00
                                           else str(v), T.WARN if ev is not None else '#C9A0FF'))
                        row.update(labels=labels, arcs=arcs)
                all_ticks.update(t for t, _ in row.get('keys', []))
                child_rows.append(row)
            rows.append({'id': gid, 'kind': 'group', 'label': name, 'collapsed': collapsed,
                         'keys': [(t, None) for t in sorted(all_ticks)], 'editable': False})
            if not collapsed:
                rows.extend(child_rows)
        rows.extend(self._spawn_rows())
        rows.extend(self._notetrack_effect_rows())
        if self._pursuer_events:
            gid = ('group', 'effects')
            collapsed = gid in self._collapsed
            rows.append({'id': gid, 'kind': 'group', 'label': 'Pursuer effects (read-only)', 'collapsed': collapsed,
                         'keys': [(ev.tick, None) for ev in self._pursuer_events], 'editable': False})
            if not collapsed:
                rows.append({'id': ('virt', 'pursuer'), 'label': 'chara_action 13/14', 'indent': 1, 'kind': 'track',
                             'colour': T.WARN, 'editable': False,
                             'keys': [(ev.tick, ev) for ev in self._pursuer_events],
                             'tooltip': lambda t, ev: (f'tick {ev.tick}: ' + '; '.join(ev.operations) + '\n' +
                                                       ' / '.join(hx(i, 6) for i in ev.animation_ids))})
                seen = set()
                for ev in self._pursuer_events:
                    for eid in ev.animation_ids:
                        if (ev.tick, eid) in seen or eid not in self._effect_moves:
                            continue
                        seen.add((ev.tick, eid))
                        effect, names, path = self._effect_moves[eid]
                        for eni, enode in enumerate(effect.nodes):
                            if enode is None:
                                continue
                            for tr in enode.tracks:
                                if tr.field not in ('BoundsIndex', 'CollisionRect0', 'Marker') or tr.opaque:
                                    continue
                                ks = [(ev.tick + k.tick, k) for k in tr.keys] if tr.keyed else [(ev.tick, None)]
                                ks = [(t, k) for t, k in ks if t <= self.move.duration]
                                rows.append({'id': ('virt', eid, ev.tick, eni, tr.field), 'indent': 2,
                                             'label': f'{eid:06X} {names[eni]}.{tr.field}', 'kind': 'track',
                                             'colour': T.GOOD, 'editable': False, 'keys': ks,
                                             'info': (eid, path)})
        return rows

    def open_effect_move(self, eid, path):
        """Jump to an effect's own move table (like opening a sub-timeline)."""
        parts = split(path)
        container, name = join(*parts[:-1]), parts[-1]
        if not self.confirm_discard():
            return
        if container != self.container:
            cid = self._char_of(container) if container.startswith('chr/') else None
            self.select_container(container, cid)
        if self.almt_path != path:
            self.almt_combo.set(name)
            self.load_almt(name)
        if self.almt:
            idx = next((i for i, m in enumerate(self.almt.moves) if m.id == eid), None)
            if idx is not None:
                self.move_filter.set('')
                self.populate_moves(select=idx)
        self.status.set(f'Opened effect {hx(eid)} in {path}')

    # ------------------------------------------- NoteTrack physics and sound
    def _motion_params(self):
        return motion.Params(facing_left=self.facing_left.get(), floor=self.motion_floor.get())

    def _refresh_notetrack_effects(self):
        self._motion = motion.simulate(self.move, self.almt.node_names, self._motion_params()) if self.move else None
        form = self.sound_form.get()
        self._cues = (self._sounds.cues(self.move, self.almt.node_names, self.container,
                                        form=int(form.split('-')[0]) if form.endswith('-cell') else None)
                      if self.move and self._sounds else [])
        if self._audio:
            self._audio.prepare(self._cues)

    def _motion_changed(self):
        if self.move:
            self._refresh_notetrack_effects()
            self.refresh_inspector()
            self.redraw_view()

    def _notetrack_effect_rows(self):
        """Read-only rows derived from NoteTrack: physics (0x01xx) and sound cues (0x04xx)."""
        self._refresh_notetrack_effects()
        mo, cues = self._motion, self._cues
        if not (mo and mo.commands) and not cues:
            return []
        gid = ('group', 'ntfx')
        collapsed = gid in self._collapsed
        ticks = sorted({t for t, _, _ in (mo.commands if mo else [])} | {c.tick for c in cues})
        rows = [{'id': gid, 'kind': 'group', 'label': 'NoteTrack physics & sound', 'collapsed': collapsed,
                 'keys': [(t, None) for t in ticks], 'editable': False}]
        if collapsed:
            return rows
        if mo and mo.commands:
            spans, labels, keys = [], [], []
            off_from = None
            for f in mo.frames:                               # gravity-off spans
                if not f.gravity and off_from is None:
                    off_from = f.tick
                if f.gravity and off_from is not None:
                    spans.append((off_from, f.tick, T.READONLY, 'gravity off'))
                    off_from = None
            if off_from is not None:
                spans.append((off_from, self.move.duration, T.READONLY, 'gravity off'))
            for t, node, c in mo.commands:
                keys.append((t, ('phys', t)))
                if c.opcode == 0x0104:
                    v = c.values() or [0, 0, 0]
                    spans.append((t, t + (v[2] & 0xFF), T.WARN, ''))
                if c.opcode in (0x0100, 0x0103, 0x0104):
                    v = c.values() or []
                    labels.append((t, 'stop' if c.opcode == 0x0100 else f'({v[0]},{v[1]})', T.WARN))
            rows.append({'id': ('ntfx', 'physics'), 'label': 'Physics', 'indent': 1, 'kind': 'track',
                         'colour': T.WARN, 'editable': False, 'keys': keys, 'spans': spans, 'labels': labels,
                         'derived': 'physics', 'badge': f'{len(mo.commands)}',
                         'tooltip': lambda t, p: self._physics_tooltip(t)})
        if cues:
            rows.append({'id': ('ntfx', 'sound'), 'label': 'Sound', 'indent': 1, 'kind': 'track',
                         'colour': T.GOOD, 'editable': False, 'derived': 'sound', 'badge': f'{len(cues)}',
                         'keys': [(c.tick, ('snd', c.tick)) for c in cues],
                         'labels': [(c.tick, '♪ ' + _short_cue(c),
                                     T.GOOD if c.ssar is not None else T.MUTED) for c in cues],
                         'tooltip': lambda t, p: self._sound_tooltip(t)})
        return rows

    def _physics_tooltip(self, tick):
        mo = self._motion
        lines = [f'tick {tick}']
        for t, node, c in mo.commands:
            if t == tick:
                lines.append(f'{node}: 0x{c.opcode:04X} {motion.LABELS.get(c.opcode, "")} {c.values()}  '
                             f'(ov06 0x{motion.FUNCTIONS.get(c.opcode, 0):08X})')
        f = mo.at(tick)
        if f:
            lines.append(f'offset ({f.px[0]:.1f}, {f.px[1]:.1f}) px · v ({f.vx / 256:.2f}, {f.vy / 256:.2f}) px/frame')
        return '\n'.join(lines)

    def _sound_tooltip(self, tick):
        lines = [f'tick {tick}']
        for c, played in sounds.dedupe_same_frame(self._cues):
            if c.tick == tick:
                lines.append(f'0x{c.opcode:04X} seq {c.seq}: {c.label}' + ('' if played or c.ssar is None
                                                                           else '  (same-frame duplicate: ignored)'))
        return '\n'.join(lines)

    def _spawn_rows(self):
        """One read-only clip row per GenerateID key (Unity-style sub-clip bars)."""
        sp_list = spawns.keyed_spawns(self.move, self.almt.node_names)
        ref_events = spawns.reference_events(self.move, self.almt.node_names)
        self._spawn_list = sp_list
        if not sp_list:
            return []
        gid = ('group', 'spawns')
        collapsed = gid in self._collapsed
        rows = [{'id': gid, 'kind': 'group', 'label': f'Spawned effects ({len(sp_list)} keys)', 'collapsed': collapsed,
                 'keys': [(sp.tick, None) for sp in sp_list] + [(e.tick, None) for e in ref_events],
                 'editable': False}]
        if collapsed:
            return rows
        kills = (spawns.teardowns(self.move, self.almt.node_names, self._effect_moves)
                 if self.effect_teardown.get() else {})
        self._teardowns = kills
        if ref_events:
            rows.append({'id': ('spawn', 'references'), 'kind': 'track', 'indent': 1,
                         'label': 'GN effect teardown (4/5)', 'colour': T.BAD,
                         'editable': False, 'keys': [(e.tick, ('ref', e.tick)) for e in ref_events],
                         'labels': [(e.tick, '✕ all' if e.action == 4 else '✕ oldest', T.BAD) for e in ref_events],
                         'tooltip': lambda t, p, events=ref_events: '\n'.join(
                             f'{ev.node} tick {ev.tick}: chara_action({ev.action}) — {ev.kind}'
                             for ev in events if ev.tick == t) +
                             '\nARM9 0x0206C650 / 0x0206C760 → handle +0x08 (0x02049460) → '
                             'teardown 0x02027560. Runs before the same tick\'s spawns (inferred).'})
        horizon = self.move.duration
        for sp in sp_list:
            entry = self._effect_moves.get(sp.effect_id)
            row = {'id': ('spawn',) + sp.key, 'indent': 1, 'kind': 'track', 'editable': False,
                   'keys': [(sp.tick, sp)], 'spawn': sp}
            if entry is None:
                row.update(label=f'{sp.effect_id:06X} ⚠ missing', colour=T.BAD, badge=sp.node,
                           tooltip=lambda t, s: f'GenerateID {s.effect_id:06X} from {s.node} @ {s.tick}\n'
                                                f'No move with this id in the character or efc/ archives.')
                rows.append(row)
                continue
            child, names, path = entry
            kill = kills.get(sp.key)
            a, b, open_end = spawns.effect_span(sp, child, horizon, kill)
            src = 'common' if path.startswith('efc/') else 'char'
            end_note = (f' ✕{kill.tick}' if kill else (' ⟳ →' if open_end else ''))
            row.update(label=f'{sp.effect_id:06X} #{sp.occurrence}', colour=T.EFFECT, badge=sp.node,
                       info=(sp.effect_id, path),
                       spans=[(a, b, T.EFFECT, f'{split(path)[-1]} ({src}){end_note}')],
                       tooltip=lambda t, s, c=child, p=path, oe=open_end, k=kill: (
                           f'GenerateID {s.effect_id:06X} — node {s.node}, key {s.key_index}, tick {s.tick}\n'
                           f'{p}\nlength {c.duration}' +
                           (f'\ntorn down at tick {k.tick} by chara_action({k.action})' if k else
                            '\nloops; no teardown in this move — the owner keeps it past the move end'
                            if oe else '') +
                           '\nDouble-click to open the effect move.'))
            rows.append(row)
            # one level of nested spawns, shifted into parent time
            for csp in spawns.keyed_spawns(child, names):
                if csp.tick > child.duration:
                    continue
                t0 = sp.tick + csp.tick
                centry = self._effect_moves.get(csp.effect_id)
                crow = {'id': ('spawn',) + sp.key + csp.key, 'indent': 2, 'kind': 'track', 'editable': False,
                        'keys': [(t0, csp)], 'label': f'↳ {csp.effect_id:06X}', 'badge': csp.node,
                        'colour': T.EFFECT if centry else T.BAD, 'spawn': csp}
                if centry:
                    ca, cb, coe = spawns.effect_span(csp, centry[0], horizon - sp.tick)
                    crow.update(info=(csp.effect_id, centry[2]),
                                spans=[(sp.tick + ca, sp.tick + cb, T.EFFECT, split(centry[2])[-1])])
                rows.append(crow)
        return rows

    @staticmethod
    def _branch_targets(cmd):
        if cmd.opcode >> 8 != 0:
            return []
        v = cmd.values()
        if not v:
            return []
        idx = BRANCH_TARGET_ARGS.get(cmd.opcode, (0,))
        return [v[i] for i in idx if i < len(v) and v[i] not in (-1, 255)]

    def _event_tooltip(self, tick, payload):
        if not payload:
            return ''
        row_events = []
        tr = self._track()
        _, _, cmd = payload
        lines = [f'tick {tick}  {eventops.category(cmd.opcode)}', self.command_text(cmd)]
        info = cmd.info
        if info:
            lines.append(info.meaning[:90])
        fn = motion.FUNCTIONS.get(cmd.opcode) or sounds.FUNCTIONS.get(cmd.opcode)
        if fn:
            lines.append(f'handler: ov06 0x{fn:08X}' + (' → main FUN_0207342C' if cmd.opcode >> 8 == 4 else
                                                        ' · physics step main FUN_02082E10'))
        return '\n'.join(lines + row_events)

    def _fmt(self, field, v):
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

    def _fmt_short(self, field, v):
        if isinstance(v, list):
            return ','.join(str(x) for x in v)
        if field in ('TextureID', 'GenerateID'):
            return hx(v, 6)
        if field in almt.FIXED_20_12:
            return f'{v / 4096:g}'
        return str(v)

    def _timeline_select(self, row, tick, payload):
        if row.get('kind') == 'group':
            return
        if row.get('sel'):
            self.sel_track = row['sel']
            self.sel_virtual = None
        else:
            self.sel_track = None
            self.sel_virtual = row
        self.sel_key = tick
        if tick is not None:
            self.set_tick(tick)
        self.refresh_inspector()
        self.redraw_view()

    def _timeline_move_key(self, row, start, end):
        if not row.get('sel') or not row.get('editable'):
            return False
        tr = self._track(row['sel'])
        if tr is None or end > 0xFFFE:
            return False
        if row.get('kind') == 'events':
            nt = notetrack.parse(tr.encoded())
            moving = [k for k in nt.keys if k.tick == start]
            if not moving:
                return False
            self.checkpoint('retime events')
            target = next((k for k in nt.keys if k.tick == end), None)
            if target is not None:
                target.commands.extend(c for k in moving for c in k.commands)
                nt.keys = [k for k in nt.keys if k.tick != start]
            else:
                for k in moving:
                    k.tick = end
            nt.keys.sort(key=lambda k: k.tick)
            tr.raw = nt.build()
        else:
            if any(k.tick == end for k in tr.keys):
                self.status.set(f'{tr.field} already has a key at tick {end}.')
                return False
            self.checkpoint(f'retime {tr.field} key')
            for k in tr.keys:
                if k.tick == start:
                    k.tick = end
            tr.keys.sort(key=lambda k: k.tick)
        tr.touch()
        self.sel_track, self.sel_key = row['sel'], end
        self._track_done()
        self.status.set(f'Moved {tr.field} key {start} → {end}')
        return True

    def _timeline_context(self, e, row, tick, key_tick):
        menu = tk.Menu(self, tearoff=False)
        if row is not None and row.get('sel'):
            self.sel_track = row['sel']
            tr = self._track()
            if key_tick is not None:
                self.sel_key = key_tick
            if tick is not None and key_tick is None:
                self.set_tick(min(tick, self.move.duration))
            self.refresh_inspector()
            if row.get('kind') == 'events':
                menu.add_command(label=f'Add event at tick {self.tick}', command=self.add_note_event)
                menu.add_command(label='Edit events…', command=self.edit_note_events)
                if key_tick is not None:
                    menu.add_command(label=f'Delete events at tick {key_tick}', command=self.delete_selected_key)
            elif tr is not None and tr.keyed and not tr.opaque:
                menu.add_command(label=f'Add key at tick {self.tick}', command=self.add_key_at_playhead)
                if key_tick is not None:
                    menu.add_command(label=f'Delete key at tick {key_tick}', command=self.delete_selected_key)
            menu.add_separator()
            menu.add_command(label='Edit track as text…', command=self.edit_track)
            menu.add_command(label='Delete track', command=self.delete_track)
        else:
            if tick is not None:
                self.set_tick(min(tick, self.move.duration if self.move else 0))
            menu.add_command(label='Add track…', command=self.add_track)
            menu.add_command(label=f'Add NoteTrack event at tick {self.tick}', command=self.add_note_event)
        menu.add_separator()
        menu.add_command(label='Expand all groups', command=lambda: self._set_collapsed(set()))
        menu.add_command(label='Collapse all groups',
                         command=lambda: self._set_collapsed({r['id'] for r in self.timeline.rows
                                                              if r.get('kind') == 'group'}))
        menu.tk_popup(e.x_root, e.y_root)

    def _timeline_activate(self, row, key_tick):
        if row.get('kind') == 'group':
            self._toggle_group(row)
            return
        if not row.get('sel'):
            info = row.get('info')
            if info:
                self.open_effect_move(*info)
            return
        self.sel_track = row['sel']
        tr = self._track()
        if tr is not None and tr.field == 'NoteTrack':
            self._note_dialog(self.sel_track[0], tr, key_tick if key_tick is not None else self.tick)
        elif key_tick is not None or (tr is not None and not tr.keyed):
            self.sel_key = key_tick
            self.refresh_inspector(focus_value=True)
        else:
            self.edit_track()

    def _toggle_group(self, row):
        gid = row['id']
        self._collapsed.symmetric_difference_update({gid})
        self.timeline.set_data(self._timeline_rows(), self.move.duration if self.move else 0)

    def _set_collapsed(self, s):
        self._collapsed = set(s)
        self.timeline.set_data(self._timeline_rows(), self.move.duration if self.move else 0)

    def jump_key(self, direction):
        if not self.move:
            return
        ticks = sorted({t for r in self.timeline.rows if r.get('kind') != 'group' for t, _ in r.get('keys', [])}
                       | {0, self.move.duration})
        if direction > 0:
            nxt = next((t for t in ticks if t > self.tick), None)
        else:
            nxt = next((t for t in reversed(ticks) if t < self.tick), None)
        if nxt is not None:
            self.set_tick(nxt)

    # ============================================================ playback
    def set_tick(self, t):
        dur = self.move.duration if self.move else 0
        self.tick = max(0, min(int(t), dur))
        self.tick_var.set(str(self.tick))
        self.timeline.set_tick(self.tick)
        self.redraw_view()
        if (self.sel_track is not None and self._track() is not None and self._track().field == 'NoteTrack'
                or self.sel_virtual is not None and self.sel_virtual.get('derived') in ('physics', 'sound')):
            self.refresh_inspector()

    def _poll_audio(self):
        try:
            if self._audio:
                self._audio.poll()
        except OSError as exc:
            self.status.set(str(exc))
        self._audio_poll_job = self.after(100, self._poll_audio)

    def _sound_changed(self):
        if not self.sound_enabled.get() and self._audio:
            self._audio.stop()

    def _play_sound_tick(self, tick):
        if self._audio and self.sound_enabled.get():
            errors = self._audio.play_tick(self._cues, tick)
            if errors:
                self.status.set('Sound: ' + '; '.join(dict.fromkeys(errors)))

    def _begin_play(self):
        if not self.playing:
            return
        if self.sound_enabled.get() and self._audio and not self._audio.ready():
            self.status.set('Decoding sound cues… playback will start when ready.')
            self._play_job = self.after(50, self._begin_play)
            return
        self.status.set('Playing authored timeline; sound cues use their original pitch and tempo.')
        self._play_sound_tick(self.tick)
        self._schedule_frame()

    def _schedule_frame(self):
        mult = float(self.speed.get().rstrip('×') or 1)
        self._play_job = self.after(max(8, int(1000 / (60 * mult))), self._animate)

    def _audition_tick(self):
        self._stop_play()
        self._audio_request += 1
        request, tick = self._audio_request, self.tick
        def ready():
            if request != self._audio_request or not self._audio:
                return
            if not self._audio.ready():
                self.status.set('Decoding sound cues…')
                self._play_job = self.after(50, ready)
                return
            self._play_job = None
            self._play_sound_tick(tick)
            self.refresh_inspector()
        ready()

    def destroy(self):
        self._stop_play()
        if getattr(self, '_audio_poll_job', None):
            self.after_cancel(self._audio_poll_job)
        if self._audio:
            self._audio.close()
        super().destroy()

    def toggle_play(self):
        if self.playing:
            self._stop_play()
        elif self.move:
            self.playing = True
            self.play_btn.configure(text='❚❚')
            self._begin_play()

    def _stop_play(self):
        self.playing = False
        self._audio_request += 1
        if self._audio:
            self._audio.stop()
        if self._play_job:
            self.after_cancel(self._play_job)
            self._play_job = None
        if hasattr(self, 'play_btn'):
            self.play_btn.configure(text='▶')

    def _animate(self):
        if not self.playing or not self.move:
            self._stop_play()
            return
        t = self.tick + 1
        if t > self.move.duration:
            if not self.loop.get():
                self._stop_play()
                return
            t = 0
        self.set_tick(t)
        self._play_sound_tick(t)
        self._schedule_frame()

    # ============================================================ viewport
    def refresh_animation(self):
        """Rebuild timeline rows, inspector, viewport and labels."""
        dur = self.move.duration if self.move else 0
        self.dur_label.configure(text=f'/ {dur}')
        self.tick = min(self.tick, dur)
        self.tick_var.set(str(self.tick))
        self.timeline.set_data(self._timeline_rows(), dur)
        if self.sel_track is not None and self.sel_key is not None:
            self.timeline.select(('trk',) + tuple(self.sel_track), self.sel_key)
        self.timeline.set_tick(self.tick)
        self.refresh_inspector()
        self.redraw_view()

    def _state(self, move, tick, names=None):
        out = {}
        for ni, node in enumerate(move.nodes):
            if node is None:
                continue
            st = {}
            for tr in node.tracks:
                if tr.opaque:
                    continue
                if not tr.keyed:
                    st[tr.field] = tr.value
                else:
                    cur = None
                    for k in tr.keys:
                        if k.tick <= tick:
                            cur = k.value
                    if cur is not None:
                        st[tr.field] = cur
            out[ni] = st
        return out

    def _frame_image(self, tid, frame):
        key = (tid & 0xFFFFFF, frame)
        if key not in self._frame_cache:
            res = None
            spr = self.index.sprite(tid) if self.index else None
            if spr is not None:
                d, src = spr
                if 0 <= frame < len(d.frames) and d.frames[frame].pieces:
                    try:
                        img = sprite.compose(d.frames[frame], src)
                        res = (images.to_rgba(img, src.dsig.palettes), img.left, img.top)
                    except (ValueError, IndexError):
                        res = None
            if len(self._frame_cache) > 600:
                self._frame_cache.clear()
            self._frame_cache[key] = res
        return self._frame_cache[key]

    def redraw_view(self):
        if self.workspace == 'animation':
            self.view.redraw()

    def frame_view_if_needed(self):
        if getattr(self, '_need_frame', False) and self.move:
            self._need_frame = False
            self.frame_view()

    def _init_sashes(self):
        """Initial dock sizes (left project, moves list, inspector, timeline height)."""
        k = T.ui_scale(self)
        self.update_idletasks()
        try:
            self._body.sashpos(0, int(210 * k))
            self.update_idletasks()
            w = self._upper.winfo_width()
            h = self.ws['animation'].winfo_height()
            if w < 400:
                self.after(200, self._init_sashes)
                return
            self._upper.sashpos(0, int(200 * k))
            self._upper.sashpos(1, max(int(420 * k), w - int(340 * k)))
            self.ws['animation'].sashpos(0, int(h * 0.56))
        except tk.TclError:
            pass
        self.fit_timeline()

    def fit_timeline(self):
        """Zoom the timeline so the whole move fits (like Unity's 'F' in the dope sheet)."""
        if not self.move:
            return
        avail = self.timeline.canvas.winfo_width() - self.timeline.HEADER_W - 40
        if avail > 50:
            self.timeline.xoff = 0
            self.timeline.set_zoom(max(3.0, min(40.0 * T.ui_scale(self), avail / max(8, self.move.duration + 2))))

    def _init_sprite_sashes(self):
        k = T.ui_scale(self)
        try:
            w = self._smid.winfo_width()
            self._smid.sashpos(0, max(int(400 * k), w - int(330 * k)))
            self._amid.sashpos(0, max(int(400 * k), self._amid.winfo_width() - int(360 * k)))
        except tk.TclError:
            pass

    def frame_view(self):
        rect = self._move_extent()
        if rect:
            self.view.frame_rect(rect)
        else:
            self.view.frame_origin()

    def _move_extent(self):
        if not self.move:
            return None
        xs = []
        st = self._state(self.move, self.tick)
        for ni, s in st.items():
            tid, frame = s.get('TextureID'), s.get('BoundsIndex')
            pos = s.get('2DPos', [0, 0])
            if tid is not None and frame not in (None, 0xFFFF):
                fi = self._frame_image(tid, frame)
                if fi:
                    pil, l, t = fi
                    xs.append((pos[0] + l, pos[1] + t, pos[0] + l + pil.width, pos[1] + t + pil.height))
            for f, v in s.items():
                if f.startswith('CollisionRect') and isinstance(v, list):
                    xs.append((pos[0] + v[0], pos[1] + v[1], pos[0] + v[2], pos[1] + v[3]))
        if self.show_spawns.get() and self.index:
            for inst in self._visible_spawn_instances(self.spawn_projection()):
                for s in self._state(inst.move, inst.sub_tick).values():
                    tid, frame = s.get('TextureID'), s.get('BoundsIndex')
                    if tid is None or frame in (None, 0xFFFF):
                        continue
                    fi = self._frame_image(tid, frame)
                    if fi:
                        pil, l, t = fi
                        p = s.get('2DPos', [0, 0])
                        x, y = inst.anchor[0] + p[0] + l, inst.anchor[1] + p[1] + t
                        xs.append((x, y, x + pil.width, y + pil.height))
        dx, dy = self._animation_origin(self.tick)
        xs = [(l + dx, t + dy, r + dx, b + dy) for l, t, r, b in xs]
        if self.show_motion.get() and self._motion and self._motion.commands:
            xs.extend((f.px[0], f.px[1], f.px[0], f.px[1]) for f in self._motion.frames)
        if not xs:
            return None
        return (min(r[0] for r in xs) - 8, min(r[1] for r in xs) - 8, max(r[2] for r in xs) + 8,
                max(r[3] for r in xs) + 8)

    def _draw_node_sprites(self, vp, move, tick, base=(0, 0), alpha=None, info=None, names=None):
        for ni, st in self._state(move, tick).items():
            pos = st.get('2DPos', [0, 0])
            tid, frame = st.get('TextureID'), st.get('BoundsIndex')
            if tid is None or frame is None or frame == 0xFFFF:
                continue
            fi = self._frame_image(tid, frame)
            name = (names or self.almt.node_names)[ni] if ni < len(names or self.almt.node_names) else f'N{ni}'
            if fi is None:
                if info is not None:
                    info.append(f'{name}: tex {hx(tid, 6)} frame {frame} unavailable')
                continue
            pil, l, t = fi
            if alpha is not None:
                pil = pil.copy()
                a = pil.getchannel('A').point(lambda v: int(v * alpha))
                pil.putalpha(a)
            vp.add_image(pil, base[0] + pos[0] + l, base[1] + pos[1] + t)
            if info is not None:
                info.append(f'{name}: tex {hx(tid, 6)} frame {frame} @({pos[0]},{pos[1]})')

    def _draw_animation(self, vp):
        info = []
        if not self.move or not self.almt:
            vp.hud.configure(text='No move selected')
            return
        tick = self.tick
        shift = self._animation_origin(tick)
        # Transform the body, never the camera/grid. Restore even after a draw error.
        with vp.translated(*shift):
            self._draw_animation_body(vp, tick, info, shift)
        self._draw_motion(vp, tick, info)
        for c, played in sounds.dedupe_same_frame(self._cues):
            if c.tick == tick:
                info.append('♪ ' + _short_cue(c) + (' (duplicate)' if c.ssar is not None and not played else ''))
        if self._effect_table_error:
            info.append('Effect table: ' + self._effect_table_error)
        vp.hud.configure(text=f'tick {tick}/{self.move.duration}   ' + '   '.join(info))

    def _animation_origin(self, tick):
        if self.root_motion.get() and self._motion and self._motion.commands:
            frame = self._motion.at(tick)
            if frame:
                return frame.px
        return (0.0, 0.0)

    def _draw_animation_body(self, vp, tick, info, shift):
        vp.text(0, 0, '+', fill=T.GOOD, font=T.UI_BOLD, tags=('animation_origin',))
        behind = self.effect_layer.get() == 'Behind'
        if behind:
            self._draw_spawns(vp, tick, info, marks=False)
        if self.show_onion.get():
            prev_t = max([t for r in self.timeline.rows if r.get('label') == 'BoundsIndex'
                          for t, _ in r.get('keys', []) if t < tick], default=None)
            if prev_t is not None:
                self._draw_node_sprites(vp, self.move, prev_t,
                                        base=tuple(a - b for a, b in zip(self._animation_origin(prev_t), shift)),
                                        alpha=0.3)
        self._draw_node_sprites(vp, self.move, tick, info=info)
        state = self._state(self.move, tick)
        sel = self.sel_track
        sel_field = self._track().field if self._track() is not None else None
        if self.show_collision.get():
            for ni, st in state.items():
                pos = st.get('2DPos', [0, 0])
                for f, v in st.items():
                    m = re.fullmatch(r'CollisionRect(\d+)', f)
                    if not m or not isinstance(v, list):
                        continue
                    ch = int(m.group(1))
                    en = st.get(f'CollisionEnable{ch}', 1)
                    col = T.COLLISION_COLOURS[ch % len(T.COLLISION_COLOURS)]
                    hot = sel is not None and sel[0] == ni and sel_field == f
                    x0, y0, x1, y1 = v
                    vp.rect(pos[0] + x0, pos[1] + y0, pos[0] + x1, pos[1] + y1, outline=col,
                            dash=() if en else (3, 3), width=3 if hot else (2 if en else 1))
                    if hot:
                        vp.text(pos[0] + x0, pos[1] + y0 - 2, f'{f} ({x0},{y0})-({x1},{y1})', anchor='sw',
                                fill=col, font=T.MONO_SMALL)
        for ni, st in state.items():
            name = self.almt.node_names[ni]
            pos = st.get('2DPos', [0, 0])
            if pos != [0, 0]:
                vp.text(pos[0], pos[1], '+', fill=T.WARN, font=T.UI_BOLD)
                vp.text(pos[0] + 2, pos[1] + 2, name, anchor='nw', fill=T.MUTED, font=T.MONO_SMALL)
            if st.get('GenerateID'):
                info.append(f'{name}: GenerateID {hx(st["GenerateID"])}')
            if 'Marker' in st and st['Marker']:
                info.append(f'{name}: {eventops.marker_label(st["Marker"])}')
        self._draw_spawns(vp, tick, info, sprites=not behind)
        self._draw_pursuer(vp, tick, info)

    def _inspect_spawn(self, ins, row):
        sp = row['spawn']
        ins.section('Spawned effect', note='GenerateID — read-only here; edit the key on the node track')
        ins.value('Effect id', hx(sp.effect_id, 6), colour=T.EFFECT)
        ins.value('Spawned by', f'{sp.node}, GenerateID key {sp.key_index}')
        ins.value('Spawn tick', f'{sp.tick}  (exact key time)')
        ins.value('Occurrence', f'#{sp.occurrence} of this id in the move')
        entry = self._effect_moves.get(sp.effect_id)
        if entry is None:
            ins.value('Move', 'not found in character or efc/ archives', colour=T.BAD)
            return
        child, names, path = entry
        ins.value('Table', path)
        ins.value('Length', f'{child.duration}{"  ⟳ loops" if child.flags & almt.MOVE_FLAG_LOOP else ""}')
        ins.value('Spawn lifetime control', '-1 (FUN_0206CA8C → +0xDC / 0x02025278)')
        lifetime = spawns.nominal_lifetime(sp, child, self.tick)
        ins.value('Nominal state', lifetime.phase)
        ins.value('Authored end tick', str(lifetime.scheduled_end) if lifetime.scheduled_end is not None
                  else 'not defined: loop / owner-controlled')
        kill = getattr(self, '_teardowns', {}).get(sp.key)
        if kill is not None:
            ins.value('Torn down', f'tick {kill.tick} by chara_action({kill.action})'
                      f' — {"all GN effects" if kill.action == 4 else "oldest live GN effect"}', colour=T.BAD)
        elif child.flags & almt.MOVE_FLAG_LOOP:
            ins.value('Torn down', 'not in this move: the loop outlives the move until a later '
                      'chara_action(4/5) or the owner\'s teardown', colour=T.MUTED)
        ins.text('Lifecycle (ARM9): a loop wrap only fires event 6 (0x02027B14) and keeps playing; a '
                 'one-shot ends after its length (0x0201BDEC → 0x02028868). Effects spawned by GN01..GN09 '
                 'are torn down by NoteTrack chara_action(4) (all) and (5) (oldest live): '
                 '0x0206C650 / 0x0206C760 → handle +0x08 = 0x02049460 → 0x02027560. '
                 'Same-tick order (action before spawn) is inferred from the data.')
        ins.text('Not simulated: branches, combat hits, and effects carried over from a previous move.')
        live = [i for i in self.spawn_projection().instances if i.spawn == sp]
        if live:
            inst = live[0]
            ins.section('At playhead')
            ins.value('Effect tick', str(inst.sub_tick))
            frame_state = spawns.state_at(inst.move, inst.sub_tick)
            for child_state in frame_state.values():
                if 'TextureID' in child_state and 'BoundsIndex' in child_state:
                    tex_id = int(child_state['TextureID'])
                    ins.value('Active sprite', f"texture 0x{tex_id:06X}, frame {child_state['BoundsIndex']}")
                    sprite_entry = self.index.sprite(tex_id) if self.index else None
                    if sprite_entry is not None:
                        _dstx, sprite_source = sprite_entry
                        if sprite_source.is_atlas:
                            ins.value('Image path', f'DSIG 0x{sprite_source.mode:02X} — GX textured atlas')
                            ins.text('Preview uses indexed-pixel RGBA on a Tk canvas. '
                                     'The DS submits atlas pieces through GX, with polygon alpha, '
                                     'depth and material state. Overlap in this preview is NOT a '
                                     'pixel-accurate hardware composite.')
                        elif sprite_source.is_obj:
                            ins.value('Image path', f'DSIG 0x{sprite_source.mode:02X} — OBJ/tile source')
                    break
            ins.value('Anchor', f'({inst.anchor[0]}, {inst.anchor[1]})')
            ins.value('EffectFlags', f'{hx(inst.flags, 4)}  {spawns.describe_flags(inst.flags)}')
            ins.value('ParentLink', f'{inst.parent_link} ({"attached" if inst.parent_link else "snapshot"})')
            ins.value('DrawPrio', '—' if inst.draw_prio is None else
                      f'{inst.draw_prio / 4096:g}  (raw {inst.draw_prio})')
            ins.value('Renderer link priority', submission_note(inst.draw_prio))
            ins.text('Verified: DrawPrio setter → sorted list → high-first draw callbacks. '
                     'DS depth, alpha and BG/OBJ rules still determine visible front/back.')
            for n in inst.notes:
                ins.text('• ' + n)
        else:
            ins.text('Outside the nominal authored span. This does not identify an observed runtime death.')
        ins.buttons(('Open effect move', lambda: self.open_effect_move(sp.effect_id, path), 'Accent.TButton'))
        ins.text('Projection follows the authored timeline straight through. Marker loops, branches, facing '
                 'and LifeType are not simulated.')

    def _draw_motion(self, vp, tick, info):
        """Trajectory of the body under the NoteTrack physics (world origin = start)."""
        mo = self._motion
        if not mo or not mo.commands or not self.show_motion.get():
            return
        pts = []
        for f in mo.frames:
            pts.extend(vp.to_screen(*f.px))
        if len(pts) >= 4:
            vp.canvas.create_line(*pts, fill=T.WARN, width=1, dash=(2, 3))
        for f in mo.frames:
            if f.events and any(e.startswith(('impulse', 'stop')) for e in f.events):
                x, y = vp.to_screen(*f.px)
                vp.canvas.create_oval(x - 3, y - 3, x + 3, y + 3, outline=T.WARN)
        f = mo.at(tick)
        if f:
            x, y = vp.to_screen(*f.px)
            vp.canvas.create_oval(x - 5, y - 5, x + 5, y + 5, outline='#FFFFFF', width=2)
            vx, vy = f.vx / 256, f.vy / 256
            if vx or vy:
                vp.canvas.create_line(x, y, x + vx * vp.zoom * 4, y + vy * vp.zoom * 4, fill='#FFFFFF',
                                      arrow='last')
            info.append(f'phys ({f.px[0]:.0f},{f.px[1]:.0f})px v({vx:.1f},{vy:.1f})' +
                        ('' if f.gravity else ' g-off'))

    def _inspect_physics(self, ins):
        mo = self._motion
        f = mo.at(self.tick) if mo else None
        ins.section('Physics (NoteTrack 0x01xx)', note='Traced integrator with preview assumptions; '
                    'read-only here — edit the NoteTrack commands.')
        if f:
            ins.value('Offset', f'({f.px[0]:.2f}, {f.px[1]:.2f}) px from the start')
            ins.value('Velocity', f'({f.vx / 256:.2f}, {f.vy / 256:.2f}) px/frame  raw ({f.vx}, {f.vy})')
            ins.value('Gravity', 'on' if f.gravity else 'off (0x0101)', colour=None if f.gravity else T.WARN)
            if f.counter:
                ins.value('Impulse frames', f'{f.counter} left (0x0104)')
            if f.grounded:
                ins.value('Floor', 'resting on the assumed floor', colour=T.MUTED)
        here = [(n, c) for t, n, c in mo.commands if t == self.tick]
        if here:
            ins.section(f'Commands @ {self.tick}')
            for n, c in here:
                ins.value(f'0x{c.opcode:04X}', f'{motion.LABELS.get(c.opcode, "?")} {c.values()}\n'
                                               f'{n} · ov06 0x{motion.FUNCTIONS.get(c.opcode, 0):08X}')
        ins.section('Preview')
        self._mvars = {'face': self.facing_left, 'floor': self.motion_floor, 'root': self.root_motion,
                       'show': self.show_motion}
        ins.check('Facing left', self.facing_left, 'x impulses are negated when the character faces left',
                  on_change=self._motion_changed)
        ins.check('Assume floor', self.motion_floor, 'Collision is not traced: stop falling at the start height',
                  on_change=self._motion_changed)
        ins.check('Root motion', self.root_motion, 'Move the character along the simulated path',
                  on_change=self.redraw_view)
        ins.check('Trajectory', self.show_motion, on_change=self.redraw_view)
        ins.section('Model')
        ins.value('Gravity', f'0x{motion.GRAVITY:02X} /frame²', tip='BattleMove::Battle_MoveManCreate 0x02082A38')
        ins.value('Friction', f'x {motion.FRICTION_X}/256, y {motion.FRICTION_Y}/256 per frame',
                  tip='body defaults, main FUN_02082C34')
        ins.value('Max speed', f'±0x{motion.MAX_SPEED * 0x100:X} ({motion.MAX_SPEED} px/frame)')
        ins.value('Units', '256 per pixel, +y down', tip='BattleMapMoveFloorInit 0x02085D74: pixels << 8')
        ins.evidence('Step', 'Direct', 'main FUN_02082E10 integrator; ov06 FUN_02155688 dispatcher')
        ins.evidence('Defaults', 'Direct', 'gravity 0x29, friction 0x20/8, max 0x20; per-state overrides not traced')
        ins.evidence('Floor/walls', 'Unknown', 'collision response not modelled')
        for n in mo.notes:
            ins.text('• ' + n)

    def _inspect_sound(self, ins):
        ins.section('Sound cues (NoteTrack 0x04xx)', note='FUN_0207342C(ssar, seq) on the SE player. '
                    'Decoded SSAR sequences with instrument/wave playback; preview synthesis is approximate.')
        t = self.tick
        cur = [(c, p) for c, p in sounds.dedupe_same_frame(self._cues) if c.tick == t]
        if cur:
            ins.section(f'At tick {t}')
        for c, played in cur:
            ins.value(f'0x{c.opcode:04X} [{c.seq}]', c.label +
                      (f'\n{c.ssar_name} (SSAR {c.ssar})' if c.ssar is not None else '') +
                      (f'\n{c.note}' if c.note else '') + ('' if played or c.ssar is None else '\nduplicate: ignored'),
                      tip=f'ov06 0x{sounds.FUNCTIONS[c.opcode]:08X} → main 0x{sounds.PLAY:08X}',
                      colour=T.GOOD if c.ssar is not None else T.MUTED)
        if cur:
            ins.buttons(('▶ Play cues at this tick', self._audition_tick, 'Accent.TButton'))
        ins.check('Sound enabled', self.sound_enabled, on_change=self._sound_changed)
        for c, _ in cur:
            if self._audio:
                ins.value('Audio', self._audio.status(c))
        forms = self._sounds.forms(self.container) if self._sounds else []
        if forms and not re.search(r'_[bs]_\d{2}_\d+\.aar', self.container or ''):
            ins.section('Koma size (0x0402)', note='0x0402 plays the special-move bank of the koma the character '
                        'was deployed with (form record +0x20 = chr_b.bin +0x32 + (size − 4)·2, main '
                        '0x02077C0C). Base-archive moves are shared by every koma, so the deck decides. Auto '
                        'resolves only when koma.bin has one size for this character; pick a size to audition '
                        '(preview only, nothing is saved).')
            values = ['Auto'] + [f'{k}-cell' for k in forms]
            if self.sound_form.get() not in values:
                self.sound_form.set('Auto')
            ins.combo('Deployed as', self.sound_form, values, on_change=self._motion_changed, width=10)
            m = re.search(r'([a-z]{2}_[bs]_\d{2})', self.container or '')
            slots = self._sounds.slots(m.group(1)) if m else None
            if slots:
                for k in forms:
                    v = slots.get(k, 0)
                    ins.value(f'{k}-cell', self._sounds._name(v) if v else 'silent (slot 0)',
                              colour=T.GOOD if v else T.MUTED)
        char = re.search(r'([a-z]{2}_b_\d{2})', self.container or '')
        if char and self._sounds and self._sounds.display_name(char.group(1)):
            ins.value('Character', f'{self._sounds.display_name(char.group(1))}  (chr_b record '
                      f'{self._sounds.roster.index(char.group(1))})', colour=T.MUTED)
        ins.section(f'All cues ({len(self._cues)})')
        for c in self._cues[:40]:
            ins.value(f'@{c.tick}', f'0x{c.opcode:04X} {c.label}',
                      colour=T.GOOD if c.ssar is not None else T.MUTED)
        ins.section('Evidence')
        ins.evidence('0x0400', 'Direct', 'SSAR 0x7A SEQ_BATTLE (ov06 0x021569CC)')
        ins.evidence('0x0401/0x0402', 'Cross-checked', '+0xA4/+0xA6 from the deck koma form record (main '
                     '0x02077C0C battle, 0x02077CB8 support); slots name SEQ_<CHAR>[_size] on all 429 entries')
        ins.evidence('Deck choice', 'Unknown', 'base-archive 0x0402 when the character has koma of several sizes; '
                                               'support 0x0401 (own vs owner record not traced)')
        ins.evidence('Same-frame repeats', 'Direct', 'FUN_0207342C skips a repeated (ssar, seq)')

    def spawn_projection(self, tick=None):
        if not self.move or not self.almt:
            return spawns.Projection([], [], [])
        return spawns.project(self.move, self.almt.node_names, self.tick if tick is None else tick,
                              self._effect_moves, follow_parent=self.parent_link_preview.get(),
                              origin_at=self._animation_origin,
                              apply_teardown=self.effect_teardown.get())

    def _visible_spawn_instances(self, projection):
        if not self.isolate_selected_spawn.get():
            return projection.instances
        hot = self.sel_virtual.get('spawn') if self.sel_virtual else None
        return [i for i in projection.instances if hot is not None and i.spawn == hot]

    def _draw_spawns(self, vp, tick, info, sprites=True, marks=True):
        """GenerateID effects: sprites (front or behind pass) and origin marks (always on top)."""
        if not self.show_spawns.get() or not self.index:
            return
        proj = self.spawn_projection(tick)
        hot = self.sel_virtual.get('spawn') if self.sel_virtual else None
        displayed = self._visible_spawn_instances(proj)
        for inst in displayed:
            if sprites:
                self._draw_node_sprites(vp, inst.move, inst.sub_tick, base=inst.anchor, names=inst.names)
            if not marks:
                continue
            if self.show_effect_marks.get() or inst.spawn == hot:
                ax, ay = inst.anchor
                sx, sy = vp.to_screen(ax, ay)
                col = '#FFFFFF' if inst.spawn == hot else T.EFFECT
                vp.canvas.create_polygon(sx, sy - 5, sx + 5, sy, sx, sy + 5, sx - 5, sy, outline=col, fill='',
                                         width=2 if inst.spawn == hot else 1)
                vp.canvas.create_text(sx + 7, sy - 7, anchor='sw', fill=col, font=T.MONO_SMALL,
                                      text=f'{inst.spawn.effect_id:06X} t{inst.sub_tick}' +
                                           (' ⚑' if inst.flags & spawns.FLAG_SCREEN_REFERENCE else ''))
        if not marks:
            return
        if proj.instances:
            info.append(f'effects: {len(proj.instances)} nominal / {len(displayed)} displayed'
                        + (' (isolated)' if self.isolate_selected_spawn.get() else ' (combat state unknown)'))
        if self.isolate_selected_spawn.get() and hot is None:
            info.append('Select an effect row to isolate it')
        for sp in proj.missing[:3]:
            info.append(f'⚠ GenerateID {hx(sp.effect_id, 6)} has no move')

    def _draw_pursuer(self, vp, tick, info):
        if not self.show_effects.get() or not self.index:
            return
        ev = effectlinks.active_event(self._pursuer_events, tick)
        if ev is None or not ev.animation_ids:
            return
        if ev.target_xy is None:
            info.append('Pursuer: target unknown (set by an earlier move)')
            return
        # FUN_021618E4 resolves the target against the live actor and facing,
        # then performs a capped quarter-distance follow in 24.8 units. The
        # unknown pre-move state is an explicit, selectable preview assumption.
        seed = 'origin' if self.pursuer_start_seed.get() == 'Origin (0,0)' else 'first_target'
        pos = effectlinks.pursuer_position_at(
            self._pursuer_events, tick, self._animation_origin,
            facing_left=self.facing_left.get(), seed=seed)
        if pos is None:
            return
        shift_x, shift_y = self._animation_origin(tick)
        tx, ty = pos.target
        px, py = pos.xy
        # The Viewport has already been translated by the root motion shift.
        sx, sy = vp.to_screen(tx - shift_x, ty - shift_y)
        vp.canvas.create_oval(sx - 5, sy - 5, sx + 5, sy + 5, outline=T.GOOD, dash=(2, 2))
        if self.pursuer_motion_preview.get() == 'Target only':
            px, py = tx, ty
        elif (px, py) != (tx, ty):
            sx2, sy2 = vp.to_screen(px - shift_x, py - shift_y)
            vp.canvas.create_line(sx2, sy2, sx, sy, fill=T.GOOD, dash=(2, 3))
        rid = ev.move_a if self.pursuer_choice.get() == 'A' else ev.move_b
        if rid is None or rid not in self._effect_moves:
            if rid is not None:
                info.append(f'Pursuer {hx(rid)}: ALMT unavailable')
            return
        effect, names, _ = self._effect_moves[rid]
        sub_tick = effectlinks.effect_frame_tick(effect, tick - ev.tick)
        if sub_tick is None:
            return
        self._draw_node_sprites(vp, effect, sub_tick,
                                base=(px - shift_x, py - shift_y), names=names)
        mode = ('follow (traced; seed assumed)' if self.pursuer_motion_preview.get() != 'Target only'
                else 'target only (reference)')
        info.append(f'Pursuer {hx(rid, 6)} t{sub_tick} @({px:.1f},{py:.1f}) [{mode}]')

    # ============================================================ inspector
    def refresh_inspector(self, focus_value=False):
        ins = self.inspector
        ins.clear()
        if not self.move:
            ins.section('Move')
            ins.text('Select a move in the Moves list.' if self.almt else
                     'This archive has no move table. Use the Sprite workspace (Ctrl+2).')
            return
        m = self.move
        i = self.almt.moves.index(m) if m in self.almt.moves else -1
        ins.section(f'Move {i}', note=split(self.almt_path)[-1] if self.almt_path else None)
        self._mv = {'id': tk.StringVar(value=hx(m.id)), 'duration': tk.StringVar(value=str(m.duration)),
                    'loop': tk.BooleanVar(value=bool(m.flags & almt.MOVE_FLAG_LOOP))}
        ins.entry('ID', self._mv['id'], 'Move id (high word: character/effect table)', on_return=self.apply_move_props)
        ins.spin('Length', self._mv['duration'], 0, 65535, 'Duration in ticks (60 per second)',
                 on_change=self.apply_move_props)
        ins.check('Loop', self._mv['loop'], 'Flags bit 0: wrap at the end instead of ending',
                  on_change=self.apply_move_props)
        ins.value('fps', f'{m.fps}  (not read by the game)', colour=T.MUTED)
        ins.value('Flags', hx(m.flags, 2), colour=T.MUTED)
        if self.sel_virtual is not None and self.sel_virtual.get('spawn') is not None:
            self._inspect_spawn(ins, self.sel_virtual)
            return
        if self.sel_virtual is not None and self.sel_virtual.get('derived') == 'physics' and self._motion:
            self._inspect_physics(ins)
            return
        if self.sel_virtual is not None and self.sel_virtual.get('derived') == 'sound':
            self._inspect_sound(ins)
            return
        if self.sel_virtual is not None:
            row = self.sel_virtual
            ins.section('Effect (read-only)')
            ins.value('Row', row.get('label', ''))
            if row.get('info'):
                ins.value('Move', hx(row['info'][0]))
                ins.value('Table', split(row['info'][1])[-1])
            ev = effectlinks.active_event(self._pursuer_events, self.tick)
            if ev:
                ins.value('Active', '; '.join(ev.operations) or '—')
                ins.value('Slots', f'A={ev.slot_a} → {hx(ev.move_a, 6) if ev.move_a is not None else "?"}\n'
                                   f'B={ev.slot_b} → {hx(ev.move_b, 6) if ev.move_b is not None else "?"}')
            ins.text('Driven by NoteTrack chara_action 13 (slots from ChrBin chr/effect) and 14 (target). '
                     'The position follow rule is traced to overlay 6 FUN_021618E4 (quarter-distance, '
                     'up to four pixels per axis per update, snap near target). Starting position, '
                     'active A/B state and runtime facing remain scenario assumptions.')
            return
        tr = self._track()
        if tr is None:
            ins.section('Selection')
            ins.text('Click a track name or key in the Timeline to inspect it. Double-click a key to edit; '
                     'drag a key to retime it; right-click for more.')
            return
        ni, ti = self.sel_track
        note = almt.FIELD_NOTES.get(tr.field)
        ins.section(f'{self.almt.node_names[ni]} / {tr.field}', note=note)
        if tr.field == 'NoteTrack' and tr.opaque:
            self._inspect_notes(ins, tr)
            return
        if tr.opaque:
            ins.value('Body', f'{len(tr.encoded())} raw bytes')
            ins.buttons(('Edit raw…', self.edit_track))
            return
        if not tr.keyed:
            ins.value('Kind', 'static (whole move)')
            self._key_val = tk.StringVar(value=json.dumps(tr.value))
            e = ins.entry('Value', self._key_val, self._value_hint(tr.field),
                          on_return=lambda: self.set_key('0', self._key_val.get()))
            ins.value('Shown as', self._fmt(tr.field, tr.value), colour=T.MUTED)
            ins.buttons(('Set', lambda: self.set_key('0', self._key_val.get()), 'Accent.TButton'),
                        ('Edit as text…', self.edit_track))
            if focus_value:
                e.focus_set()
                e.select_range(0, 'end')
            return
        ins.value('Keys', f'{len(tr.keys)} (values hold until the next key)')
        key = next((k for k in tr.keys if k.tick == self.sel_key), None)
        if key is None:
            ins.value('At playhead', self._fmt(tr.field, self._active_value(tr, self.tick)))
            ins.buttons(('◆ Add key at playhead', self.add_key_at_playhead, 'Accent.TButton'),
                        ('Edit as text…', self.edit_track))
            return
        ins.section(f'Key @ {key.tick}')
        self._key_tick = tk.StringVar(value=str(key.tick))
        self._key_val = tk.StringVar(value=json.dumps(key.value))
        ins.entry('Tick', self._key_tick, 'Move the key to another tick',
                  on_return=lambda: self.set_key(self._key_tick.get(), self._key_val.get()))
        e = ins.entry('Value', self._key_val, self._value_hint(tr.field),
                      on_return=lambda: self.set_key(self._key_tick.get(), self._key_val.get()))
        ins.value('Shown as', self._fmt(tr.field, key.value), colour=T.MUTED)
        ins.buttons(('Set', lambda: self.set_key(self._key_tick.get(), self._key_val.get()), 'Accent.TButton'),
                    ('Delete', self.delete_selected_key))
        if focus_value:
            e.focus_set()
            e.select_range(0, 'end')

    @staticmethod
    def _value_hint(field):
        kind = almt.value_kind(field)
        if kind == 's16x2':
            return 'JSON list [x, y]'
        if kind == 's16x4':
            return 'JSON list [x0, y0, x1, y1]'
        if kind.startswith('u32x'):
            return f'JSON list of {kind[4:]} u32 values'
        return 'Integer (0x… hex allowed)'

    def _inspect_notes(self, ins, tr):
        try:
            nt = notetrack.parse(tr.encoded())
        except ValueError as exc:
            ins.value('Error', str(exc), colour=T.BAD)
            return
        total = sum(len(k.commands) for k in nt.keys)
        ins.value('Events', f'{total} in {len(nt.keys)} keys (fire when playback crosses the tick)')
        t = self.sel_key if self.sel_key is not None else self.tick
        here = [c for k in nt.keys if k.tick == t for c in k.commands]
        ins.section(f'Events @ {t}')
        if not here:
            ins.text('No events at this tick.')
        for c in here:
            col = T.EVENT_COLOURS.get(c.opcode >> 8, T.FG)
            ins.value(eventops.category(c.opcode).split(' /')[0], self.command_text(c), colour=col)
        ins.buttons(('⚑ Add event here', self.add_note_event, 'Accent.TButton'),
                    ('Edit events…', self.edit_note_events))
        ins.buttons(('Edit as text…', self.edit_track), ('Delete @ tick', self.delete_selected_key))

    # ============================================================== sprites
    def load_sprite(self, label, force=False):
        if not label:
            return
        path = self._sprite_paths.get(label)
        if not path:
            return
        if self.sprite_dirty and not force and not self.confirm_discard():
            return
        self._stop_flipbook()
        self.sprite_path = path
        self.sprite_dirty = False
        self.piece_i = None
        try:
            self.sprite_d = dstxmod.parse(self.root_data.read(path))
            entry = self.root_data.entry(path)
            self.sprite_g = None
            self.sprite_g_path = None
            if self.sprite_d.embedded:
                self.sprite_g = dsigmod.parse(self.sprite_d.embedded)
            else:
                ref = self.index.sprite_ref(entry.resource_id) if self.index else None
                if ref and ref.dsig_path:
                    self.sprite_g_path = ref.dsig_path
                else:
                    stem = split(path)[-1][:-4]
                    for c in self.scope:
                        for cand in (stem.rstrip('_') + '.dig', stem + '.dig'):
                            if self.root_data.exists(join(c, cand)):
                                self.sprite_g_path = join(c, cand)
                                break
                        if self.sprite_g_path:
                            break
                if self.sprite_g_path:
                    self.sprite_g = dsigmod.parse(self.root_data.read(self.sprite_g_path))
        except Exception as exc:  # noqa: BLE001
            messagebox.showerror('Sprite', f'{path}:\n{exc}')
            self.sprite_d = self.sprite_g = None
        self.populate_frames()
        self.update_dirty()
        self._need_sframe = True
        if self.workspace == 'sprite':
            self.after(40, self._frame_sprite_if_needed)

    def _frame_sprite_if_needed(self):
        if getattr(self, '_need_sframe', False) and self.sview.canvas.winfo_width() > 100:
            self._need_sframe = False
            self.frame_sprite()

    def populate_frames(self, select=None):
        d = self.sprite_d
        self.sprite_info.configure(text=spriteedit.describe(d, self.sprite_g) if d else '')
        n = len(d.frames) if d else 0
        self.frame_i = None if not n else max(0, min(n - 1, select if select is not None else 0))
        self._thumb_cache = {}
        self.filmstrip.set_frames(n, self._thumb_for, self.frame_i)
        self.redraw_sprite()

    def _bank(self):
        g = self.sprite_g
        b = None if self.bank_override.get() == 'Auto' else int(self.bank_override.get())
        return None if (b is None or g is None or b >= g.banks) else b

    def _compose(self, i, canvas=None):
        d, g = self.sprite_d, self.sprite_g
        if d is None or g is None or not (0 <= i < len(d.frames)) or not d.frames[i].pieces:
            return None
        img = sprite.compose(d.frames[i], sprite.SpriteSource(g), self._bank(), canvas=canvas)
        return img, images.to_rgba(img, g.palettes)

    def _thumb_for(self, i):
        try:
            res = self._compose(i)
        except (ValueError, IndexError):
            return None
        return res[1] if res else None

    def select_frame(self, i):
        if not self.sprite_d or not self.sprite_d.frames:
            return
        i = max(0, min(len(self.sprite_d.frames) - 1, i))
        if i != self.frame_i:
            self.piece_i = None
        self.frame_i = i
        self.filmstrip.set_current(i)
        self.redraw_sprite()

    def _piece(self):
        d = self.sprite_d
        if d is None or self.frame_i is None or self.piece_i is None:
            return None
        pieces = d.frames[self.frame_i].pieces
        return pieces[self.piece_i] if 0 <= self.piece_i < len(pieces) else None

    def redraw_sprite(self, thumbs=False):
        if thumbs:
            self.filmstrip.invalidate()
        if self.workspace == 'sprite':
            self.sview.redraw()
        self.refresh_details()
        title = f'Frame {self.frame_i}' if self.frame_i is not None else 'Frame'
        if self.sprite_path:
            title += f'  —  {split(self.sprite_path)[-1]}'
        self.sprite_title.set_title(title)

    def frame_sprite(self):
        d = self.sprite_d
        if d and d.frames:
            self.sview.frame_rect(sprite.frame_extent(d))
        else:
            self.sview.frame_origin()

    def _draw_sprite(self, vp):
        d, g = self.sprite_d, self.sprite_g
        if d is None or self.frame_i is None:
            vp.hud.configure(text='No sprite loaded')
            return
        fr = d.frames[self.frame_i]
        ext = sprite.frame_extent(d)
        vp.rect(*ext, outline='#3B4652', dash=(2, 4))
        if g is None:
            vp.hud.configure(text='No image (DSIG) found for this sprite')
            return
        if self.show_sprite_onion.get() and self.frame_i > 0:
            try:
                prev = self._compose(self.frame_i - 1)
                if prev:
                    img, pil = prev
                    pil = pil.copy()
                    pil.putalpha(pil.getchannel('A').point(lambda v: int(v * 0.3)))
                    vp.add_image(pil, img.left, img.top)
            except (ValueError, IndexError):
                pass
        try:
            res = self._compose(self.frame_i)
            if res:
                img, pil = res
                vp.add_image(pil, img.left, img.top)
        except Exception as exc:  # noqa: BLE001
            vp.canvas.create_text(10, 10, text=str(exc), fill=T.BAD, anchor='nw')
        if self.show_pieces.get():
            for k, p in enumerate(fr.pieces):
                try:
                    w, h = p.size
                except ValueError:
                    continue
                sel = k == self.piece_i
                vp.rect(p.x, p.y, p.x + w, p.y + h, outline=T.ACCENT if sel else '#5B8DB8',
                        width=2 if sel else 1, dash=() if sel else (3, 2))
                vp.text(p.x + 1, p.y, str(k), anchor='nw', fill=T.ACCENT if sel else '#7FA8CC', font=T.MONO_SMALL)
        n = len(fr.pieces)
        vp.hud.configure(text=f'frame {self.frame_i}/{len(d.frames) - 1}   {n} pieces   '
                              f'click a piece to select · drag to move · arrows nudge')

    def _hit_piece(self, wx, wy):
        d = self.sprite_d
        if d is None or self.frame_i is None:
            return None
        pieces = d.frames[self.frame_i].pieces
        order = range(len(pieces)) if self.sprite_g is None or sprite.SpriteSource(self.sprite_g).is_obj \
            else reversed(range(len(pieces)))
        for k in order:
            p = pieces[k]
            try:
                w, h = p.size
            except ValueError:
                continue
            if p.x <= wx < p.x + w and p.y <= wy < p.y + h:
                return k
        return None

    def _sprite_press(self, wx, wy, e):
        k = self._hit_piece(wx, wy)
        self.piece_i = k
        self._piece_drag = (wx, wy, self._piece().x, self._piece().y, self._sprite_snapshot()) if k is not None else None
        self.redraw_sprite()

    def _sprite_drag(self, wx, wy, e):
        if not self._piece_drag:
            return
        x0, y0, px, py, _ = self._piece_drag
        p = self._piece()
        nx = max(-128, min(127, px + round(wx - x0)))
        ny = max(-128, min(127, py + round(wy - y0)))
        if (nx, ny) != (p.x, p.y):
            p.x, p.y = nx, ny
            self.sview.redraw()

    def _sprite_release(self, wx, wy, e):
        drag, self._piece_drag = self._piece_drag, None
        if not drag:
            return
        p = self._piece()
        if p is not None and (p.x, p.y) != (drag[2], drag[3]):
            self.checkpoint('move piece', kind='sprite', snap=drag[4])
            self._after_piece_edit()

    def nudge_piece(self, dx, dy):
        p = self._piece()
        if p is None:
            return
        nx, ny = max(-128, min(127, p.x + dx)), max(-128, min(127, p.y + dy))
        if (nx, ny) == (p.x, p.y):
            return
        self.checkpoint('nudge piece', kind='sprite')
        p.x, p.y = nx, ny
        self._after_piece_edit()

    def _after_piece_edit(self):
        d = self.sprite_d
        fr = d.frames[self.frame_i]
        if d.version == 2:
            fr.bounds = fr.computed_bounds()
        d.frame_refs = None
        self.sprite_dirty = True
        self.update_dirty()
        self.filmstrip.invalidate(self.frame_i)
        self.redraw_sprite()

    def refresh_details(self):
        ins = self.details
        ins.clear()
        d, g = self.sprite_d, self.sprite_g
        if d is None:
            ins.section('Sprite')
            ins.text('Select an archive with sprites in the Project panel.')
            return
        ins.section('Sprite', note=split(self.sprite_path)[-1] if self.sprite_path else None)
        ins.value('Format', f'DSTX v{d.version}, {len(d.frames)} frames')
        if g is not None:
            mode = g.mode if g.version == 1 else dsigmod.MODE_CHARSTREAM
            ins.value('Image', f'{dsigmod.MODE_NAMES.get(mode, hex(mode))}' +
                      (f'\natlas {g.width}×{g.height}' if mode in sprite.ATLAS_MODES else '') +
                      (' (embedded)' if d.embedded else ''))
            ins.value('Banks', str(g.banks))
        if self.frame_i is not None:
            fr = d.frames[self.frame_i]
            ins.section(f'Frame {self.frame_i}')
            r = sprite.frame_rect(fr)
            ins.value('Pieces', str(len(fr.pieces)))
            ins.value('Rect', f'{r}' if r else 'empty')
            if fr.bounds is not None:
                ins.value('Bounds', str(tuple(fr.bounds)))
        p = self._piece()
        if p is not None:
            ins.section(f'Piece {self.piece_i}', note='attr: bits 0-3 shape · 4 H-flip · 5 V-flip · '
                                                      '6 2bpp (textured path) · 8-15 palette bank')
            self._pv = {'index': tk.StringVar(value=str(p.index)), 'x': tk.StringVar(value=str(p.x)),
                        'y': tk.StringVar(value=str(p.y)),
                        'shape': tk.StringVar(value=shape_label(p.shape) if p.shape in dstxmod.SHAPES else str(p.shape)),
                        'h': tk.BooleanVar(value=p.hflip), 'v': tk.BooleanVar(value=p.vflip),
                        'b2': tk.BooleanVar(value=bool(p.attr & 0x40)), 'bank': tk.StringVar(value=str(p.bank))}
            ins.entry('Index', self._pv['index'], 'Frame number (0x40), tile number (0x10) or texture cell (atlas)',
                      on_return=self.apply_piece)
            ins.spin('X', self._pv['x'], -128, 127, on_change=self.apply_piece)
            ins.spin('Y', self._pv['y'], -128, 127, on_change=self.apply_piece)
            ins.combo('Shape', self._pv['shape'], [shape_label(c) for c in sorted(dstxmod.SHAPES)],
                      on_change=self.apply_piece)
            ins.check('Flip H', self._pv['h'], on_change=self.apply_piece)
            ins.check('Flip V', self._pv['v'], on_change=self.apply_piece)
            ins.check('2bpp', self._pv['b2'], 'Attribute bit 6: 4-colour texture view on the textured path',
                      on_change=self.apply_piece)
            ins.spin('Bank', self._pv['bank'], 0, 255, on_change=self.apply_piece)
            ins.value('Attr', hx(p.attr, 4), colour=T.MUTED)
            if g is not None and sprite.SpriteSource(g).is_atlas:
                ins.value('Texture', f'cell ({(p.index & 31) * 8}, {(p.index >> 5) * 8})', colour=T.MUTED)
        if g is not None:
            ins.section('Palette', note='Click a bank to assign it to the selected piece.')
            ins.widget(self._palette_widget)
            ins.buttons(('Edit palette…', self.edit_palette))
            if sprite.SpriteSource(g).is_atlas:
                ins.section('Atlas')
                ins.buttons(('Export atlas…', self.export_atlas), ('Import atlas…', self.import_atlas))

    def _palette_widget(self, parent):
        g = self.sprite_g
        k = T.ui_scale(self)
        cell = int(12 * k)
        banks = g.palettes[:32]
        c = tk.Canvas(parent, bg=T.PANEL, highlightthickness=0, height=len(banks) * (cell + 2) + 4,
                      width=16 * cell + int(40 * k))
        cur = self._piece().bank if self._piece() is not None else None
        for b, bank in enumerate(banks):
            y = b * (cell + 2) + 2
            c.create_text(2, y + cell // 2, anchor='w', text=str(b), fill=T.ACCENT if b == cur else T.MUTED,
                          font=T.MONO_SMALL)
            for i, v in enumerate(bank):
                r, gg, bb = dsigmod.rgb555_to_rgb(v)
                x = int(26 * k) + i * cell
                c.create_rectangle(x, y, x + cell, y + cell, fill=f'#{r:02X}{gg:02X}{bb:02X}',
                                   outline=T.ACCENT if b == cur else ('#000000' if i else '#FF00FF'))

        def click(e):
            b = int((e.y - 2) // (cell + 2))
            if 0 <= b < len(banks) and self._piece() is not None:
                self._pv['bank'].set(str(b))
                self.apply_piece()
        c.bind('<Button-1>', click)
        return c

    def apply_piece(self):
        p = self._piece()
        if p is None:
            return
        try:
            shape = int(self._pv['shape'].get().split(':')[0])
            bank = parse_int(self._pv['bank'].get())
            attr = (p.attr & ~0xFF7F) | shape | (0x10 if self._pv['h'].get() else 0) | \
                (0x20 if self._pv['v'].get() else 0) | (0x40 if self._pv['b2'].get() else 0) | ((bank & 0xFF) << 8)
            new = dstxmod.Piece(parse_int(self._pv['index'].get()), parse_int(self._pv['x'].get()),
                                parse_int(self._pv['y'].get()), attr)
            new.size
            if not (-128 <= new.x <= 127 and -128 <= new.y <= 127) or not 0 <= new.index <= 0xFFFF:
                raise ValueError('x/y must fit in a signed byte, index in 0–65535')
        except (ValueError, KeyError) as exc:
            messagebox.showerror('Piece', str(exc))
            return
        if new == p:
            return
        self.checkpoint('edit piece', kind='sprite')
        self.sprite_d.frames[self.frame_i].pieces[self.piece_i] = new
        self._after_piece_edit()

    def toggle_flipbook(self):
        if self.flip_playing:
            self._stop_flipbook()
        elif self.sprite_d and self.sprite_d.frames:
            self.flip_playing = True
            self.flip_btn.configure(text='❚❚')
            self._flip_step()

    def _stop_flipbook(self):
        self.flip_playing = False
        if hasattr(self, 'flip_btn'):
            self.flip_btn.configure(text='▶')

    def _flip_step(self):
        if not self.flip_playing or not self.sprite_d:
            return
        n = len(self.sprite_d.frames)
        self.select_frame(((self.frame_i or 0) + 1) % n)
        fps = max(1, min(60, self._int(self.flip_fps.get(), 12)))
        self.after(int(1000 / fps), self._flip_step)

    def _film_context(self, e, i):
        menu = tk.Menu(self, tearoff=False)
        menu.add_command(label='Replace from PNG…', command=lambda: self.import_frame(False))
        menu.add_command(label='Append from PNG…', command=lambda: self.import_frame(True))
        menu.add_command(label='Re-layout pieces', command=self.relayout_frame)
        menu.add_command(label='Delete frame', command=self.delete_frame)
        menu.tk_popup(e.x_root, e.y_root)

    def mark_sprite(self):
        self.sprite_dirty = True
        self.update_dirty()

    def apply_sprite(self):
        if not self.sprite_d or not self.sprite_dirty:
            return
        d, g = self.sprite_d, self.sprite_g
        try:
            if d.embedded is not None and g is not None:
                d.embedded = g.build()
            elif g is not None and self.sprite_g_path:
                self.root_data.write(self.sprite_g_path, g.build())
            self.root_data.write(self.sprite_path, d.build())
        except Exception as exc:  # noqa: BLE001
            messagebox.showerror('Sprite', f'Cannot rebuild sprite:\n{exc}')
            return
        self.sprite_dirty = False
        if self.index:
            self.index.invalidate()
        self._frame_cache.clear()
        self.update_dirty()
        self.populate_archive()
        self.status.set(f'Applied {self.sprite_path}')

    def export_frames(self):
        d, g = self.sprite_d, self.sprite_g
        if not d or not g:
            return
        out = filedialog.askdirectory(title='Folder for PNG frames')
        if not out:
            return
        src = sprite.SpriteSource(g)
        canvas = sprite.frame_extent(d)
        meta = {'canvas': list(canvas), 'frames': []}
        for i, fr in enumerate(d.frames):
            if fr.pieces:
                images.save_png(sprite.compose(fr, src, canvas=canvas), g.palettes, Path(out) / f'{i:03d}.png')
            meta['frames'].append({'png': f'{i:03d}.png' if fr.pieces else None,
                                   'pieces': [p.to_list() for p in fr.pieces]})
        (Path(out) / 'frames.json').write_text(json.dumps(meta, indent=1), encoding='utf-8')
        self.status.set(f'Exported {len(d.frames)} frames to {out} (canvas {canvas})')

    def _ask_png_origin(self, path):
        meta = Path(path).with_name('frames.json')
        if meta.is_file():
            try:
                cv = json.loads(meta.read_text(encoding='utf-8'))['canvas']
                return int(cv[0]), int(cv[1])
            except (KeyError, ValueError, IndexError):
                pass
        cv = sprite.frame_extent(self.sprite_d)
        s = simpledialog.askstring('Image origin', 'Sprite-space position of the PNG top-left corner (x,y):',
                                   initialvalue=f'{cv[0]},{cv[1]}', parent=self)
        if not s:
            return None
        x, y = (int(v) for v in s.split(','))
        return x, y

    def import_frame(self, append):
        d, g = self.sprite_d, self.sprite_g
        if not d or not g:
            return
        if sprite.SpriteSource(g).is_atlas:
            messagebox.showinfo('Atlas sprite', 'This sprite draws from a shared atlas: use Import atlas…, '
                                'then edit the pieces.')
            return
        i = len(d.frames) if append else self.frame_i
        if i is None:
            return
        p = filedialog.askopenfilename(filetypes=[('PNG', '*.png')])
        if not p:
            return
        origin = self._ask_png_origin(p)
        if origin is None:
            return
        warn = []
        snap = self._sprite_snapshot()
        try:
            img = images.load_png(Path(p), g.palettes, origin[0], origin[1], warn)
            spriteedit.set_frame_image(d, g, i, img, warn)
        except Exception as exc:  # noqa: BLE001
            messagebox.showerror('Import frame', str(exc))
            return
        self.checkpoint('import frame', kind='sprite', snap=snap)
        self.mark_sprite()
        self.populate_frames(select=i)
        if warn:
            messagebox.showwarning('Import frame', '\n'.join(warn[:20]))

    def relayout_frame(self):
        d, g = self.sprite_d, self.sprite_g
        i = self.frame_i
        if not d or not g or i is None or not d.frames[i].pieces:
            return
        src = sprite.SpriteSource(g)
        if src.is_atlas:
            self.status.set('Atlas sprites keep their texture-cell layout; edit pieces directly.')
            return
        self.checkpoint('re-layout frame', kind='sprite')
        img = sprite.compose(d.frames[i], src)
        spriteedit.set_frame_image(d, g, i, img, [], relayout=True)
        self.mark_sprite()
        self.piece_i = None
        self.filmstrip.invalidate(i)
        self.redraw_sprite()
        self.status.set(f'Frame {i}: {len(d.frames[i].pieces)} pieces after automatic layout')

    def delete_frame(self):
        d = self.sprite_d
        i = self.frame_i
        if d is None or i is None:
            return
        if messagebox.askyesno('Delete frame', f'Delete frame {i}? Later frames shift down; '
                                               'ALMT BoundsIndex values are not renumbered.'):
            self.checkpoint('delete frame', kind='sprite')
            spriteedit.delete_frame(d, i)
            self.mark_sprite()
            self.populate_frames(select=max(0, i - 1))

    def export_atlas(self):
        g = self.sprite_g
        if not g or not sprite.SpriteSource(g).is_atlas:
            messagebox.showinfo('Atlas', 'This sprite does not use an atlas image.')
            return
        p = filedialog.asksaveasfilename(defaultextension='.png', filetypes=[('PNG', '*.png')])
        if p:
            images.save_png(sprite.atlas_image(g, 0), g.palettes, Path(p))

    def import_atlas(self):
        g = self.sprite_g
        if not g or not sprite.SpriteSource(g).is_atlas:
            messagebox.showinfo('Atlas', 'This sprite does not use an atlas image.')
            return
        p = filedialog.askopenfilename(filetypes=[('PNG', '*.png')])
        if not p:
            return
        snap = self._sprite_snapshot()
        try:
            spriteedit.set_atlas_image(g, images.load_png(Path(p), g.palettes, 0, 0))
        except Exception as exc:  # noqa: BLE001
            messagebox.showerror('Atlas', str(exc))
            return
        self.checkpoint('import atlas', kind='sprite', snap=snap)
        self.mark_sprite()
        self.redraw_sprite(thumbs=True)

    def edit_palette(self):
        g = self.sprite_g
        if not g:
            return
        text = '\n'.join(' '.join(f'{v:04X}' for v in bank) for bank in g.palettes)
        TextDialog(self, 'Palette banks (RGB555 hex, 16 per line; colour 0 is transparent)', text,
                   self._palette_done)

    def _palette_done(self, text):
        try:
            banks = [[int(v, 16) & 0xFFFF for v in line.split()] for line in text.strip().splitlines() if line.strip()]
            if not banks or any(len(b) != 16 for b in banks):
                raise ValueError('each line needs 16 colours')
        except ValueError as exc:
            messagebox.showerror('Palette', str(exc))
            return False
        self.checkpoint('edit palette', kind='sprite')
        self.sprite_g.palettes = banks
        self.mark_sprite()
        self.redraw_sprite(thumbs=True)
        return True

    # ============================================================== archive
    def populate_archive(self):
        t = self.member_tree
        t.delete(*t.get_children())
        if not self.container:
            return
        arc = self.root_data.archive(self.container)
        self.archive_info.configure(text=f'{split(self.container)[-1]}   ALAR v{arc.version} · flags '
                                         f'{hx(arc.flags, 2)} · {len(arc.entries)} members')
        kinds = {b'ALMT': 'ALMT', b'DSTX': 'DSTX', b'DSIG': 'DSIG', b'ALOD': 'ALOD', b'ALAR': 'ALAR',
                 b'ALTM': 'ALTM'}
        for k, e in enumerate(arc.entries):
            payload_kind = 'packed' if e.compressed else kinds.get(e.data[:4], 'data')
            ok = '' if e.name_hash is None else ('✓' if arc.expected_hash(e) == e.name_hash else '✗')
            t.insert('', 'end', str(k), values=(e.name, payload_kind, hx(e.id), hx(e.attributes),
                                                f'{(e.name_hash or 0):04X} {ok}', len(e.data),
                                                'yes' if e.compressed else ''))
        self._member_details()

    def _selected_member(self):
        sel = self.member_tree.focus()
        if not sel or not self.container:
            return None
        return self.root_data.archive(self.container).entries[int(sel)]

    def _member_details(self):
        ins = self.member_details
        ins.clear()
        if not self.container:
            ins.section('Archive')
            ins.text('Select an archive in the Project panel.')
            return
        arc = self.root_data.archive(self.container)
        ins.section('Archive', note=self.container)
        ins.value('Version', f'ALAR{arc.version}  flags {hx(arc.flags, 2)}')
        ins.value('Members', str(len(arc.entries)))
        ins.value('Name hash', 'resource_hash' if arc.uses_resource_hash() else 'rotl_hash')
        ins.buttons(('Add…', self.add_member), ('Rebuild check', self.rebuild_check))
        e = self._selected_member()
        if e is None:
            return
        ins.section('Member', note=e.name)
        ins.value('Type', f'{hx(e.type_byte, 2)}  ({e.ext or "?"})')
        ins.value('Resource id', hx(e.resource_id, 6))
        a = e.attributes
        ins.value('Attributes', f'{hx(a)}\nspan {e.span}' + ('  · bit30 (span>1)' if a & 0x40000000 else '') +
                  ('  · bit24' if a & 0x01000000 else ''))
        ok = arc.expected_hash(e) == e.name_hash if e.name_hash is not None else None
        ins.value('Hash', f'{(e.name_hash or 0):04X}  ' + ('ok' if ok else 'MISMATCH' if ok is False else ''),
                  colour=T.GOOD if ok else T.BAD if ok is False else None)
        ins.value('Size', f'{len(e.data):,} bytes' + ('  (DSCP)' if e.compressed else ''))
        ins.buttons(('Extract…', self.extract_member), ('Replace…', self.replace_member),
                    ('Remove', self.remove_member))

    def extract_member(self):
        e = self._selected_member()
        if not e:
            return
        p = filedialog.asksaveasfilename(initialfile=Path(e.name).name)
        if p:
            Path(p).write_bytes(e.payload())

    def replace_member(self):
        e = self._selected_member()
        if not e:
            return
        p = filedialog.askopenfilename(title=f'Replacement for {e.name}')
        if not p:
            return
        self.root_data.write(join(self.container, e.name), Path(p).read_bytes())
        self.after_archive_edit()

    def add_member(self):
        if not self.container:
            return
        p = filedialog.askopenfilename(title='File to add')
        if not p:
            return
        name = simpledialog.askstring('Member name', 'Name inside the archive:', initialvalue=Path(p).name,
                                      parent=self)
        if not name:
            return
        rid = simpledialog.askstring('Resource id', 'Full 32-bit id (type byte + 24-bit id), e.g. 0x40084150 '
                                     '(blank = automatic for ALAR3):', parent=self)
        try:
            entry = alar.Entry(name, b'', parse_int(rid) if rid else 0)
            entry.set_payload(Path(p).read_bytes(), False)
            self.root_data.add(self.container, entry)
        except Exception as exc:  # noqa: BLE001
            messagebox.showerror('Add member', str(exc))
            return
        self.after_archive_edit()

    def remove_member(self):
        e = self._selected_member()
        if e and messagebox.askyesno('Remove', f'Remove {e.name} from the archive?'):
            self.root_data.remove(join(self.container, e.name))
            self.after_archive_edit()

    def after_archive_edit(self):
        if self.index:
            self.index.rebuild()
        self.update_dirty()
        self.select_container(self.container, self._char_of(self.container) if len(self.scope) > 1 else None)

    def rebuild_check(self):
        if not self.container:
            return
        arc = self.root_data.archive(self.container)
        built = arc.build()
        again = alar.Archive.parse(built)
        same = [a.data == b.data for a, b in zip(arc.entries, again.entries)]
        messagebox.showinfo('Rebuild check', f'Rebuilt {len(built):,} bytes; {sum(same)}/{len(same)} members '
                                             're-read identically.')


def main():
    import argparse
    ap = argparse.ArgumentParser(description='JUS Editor')
    ap.add_argument('--data', default=None, help='data root (default: JUS_DATA / JUS_DATA_ROOT or the project data folder)')
    a = ap.parse_args()
    EditorApp(a.data).mainloop()


if __name__ == '__main__':
    main()
