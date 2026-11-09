"""Source-preserving Tk shell menu, layout, and deferred sash setup (R08)."""
from __future__ import annotations
import tkinter as tk
from tkinter import ttk
from app import theme as T
from app.workspaces import SUITE
from app.workspaces.roster import RosterBrowser

def build_menu(editor):
    m = tk.Menu(editor, tearoff=False)
    f = tk.Menu(m, tearoff=False)
    f.add_command(label='Open data root…', command=editor.choose_root)
    f.add_separator()
    f.add_command(label='Import package…', command=editor.import_package)
    f.add_command(label='Export package…', command=editor.export_package)
    f.add_separator()
    f.add_command(label='Apply current edits', accelerator='Ctrl+Enter', command=editor.apply_current)
    f.add_command(label='Save in place', accelerator='Ctrl+S', command=lambda: editor.save(True))
    f.add_command(label='Save to folder…', accelerator='Ctrl+Shift+S', command=lambda: editor.save(False))
    f.add_command(label='Revert all', command=editor.revert)
    f.add_separator()
    f.add_command(label='Exit', command=editor.destroy)
    m.add_cascade(label='File', menu=f)
    e = tk.Menu(m, tearoff=False)
    e.add_command(label='Undo', accelerator='Ctrl+Z', command=editor.undo)
    e.add_command(label='Redo', accelerator='Ctrl+Y', command=editor.redo)
    m.add_cascade(label='Edit', menu=e)
    a = tk.Menu(m, tearoff=False)
    a.add_command(label='Duplicate move', accelerator='Ctrl+D', command=editor.duplicate_move)
    a.add_command(label='Delete move', command=editor.delete_move)
    a.add_separator()
    a.add_command(label='Add track…', command=editor.add_track)
    a.add_command(label='Add key at playhead', accelerator='K', command=editor.add_key_at_playhead)
    a.add_command(label='Delete selected key', accelerator='Del', command=editor.delete_selected_key)
    a.add_command(label='Add NoteTrack event at playhead', accelerator='E', command=editor.add_note_event)
    a.add_command(label='Edit NoteTrack events…', command=editor.edit_note_events)
    a.add_separator()
    a.add_command(label='Export move table JSON…', command=editor.export_almt_json)
    a.add_command(label='Import move table JSON…', command=editor.import_almt_json)
    a.add_command(label='Apply move table', command=editor.apply_almt)
    m.add_cascade(label='Animation', menu=a)
    s = tk.Menu(m, tearoff=False)
    s.add_command(label='Replace frame from PNG…', command=lambda: editor.import_frame(False))
    s.add_command(label='Append frame from PNG…', command=lambda: editor.import_frame(True))
    s.add_command(label='Re-layout frame pieces', command=editor.relayout_frame)
    s.add_command(label='Delete frame', command=editor.delete_frame)
    s.add_separator()
    s.add_command(label='Export frames (PNG)…', command=editor.export_frames)
    s.add_command(label='Export atlas…', command=editor.export_atlas)
    s.add_command(label='Import atlas…', command=editor.import_atlas)
    s.add_command(label='Edit palette…', command=editor.edit_palette)
    s.add_separator()
    s.add_command(label='Apply sprite', command=editor.apply_sprite)
    m.add_cascade(label='Sprite', menu=s)
    v = tk.Menu(m, tearoff=False)
    v.add_command(label='Roster workspace', accelerator='Ctrl+1', command=lambda: editor.show_workspace('roster'))
    v.add_command(label='Roster Sprite editor', accelerator='Ctrl+2', command=editor.show_roster_sprite)
    v.add_command(label='Archive workspace', accelerator='Ctrl+3', command=lambda: editor.show_workspace('archive'))
    v.add_command(label='Roster Koma editor', accelerator='Ctrl+4', command=lambda: editor.show_workspace('koma'))
    v.add_command(label='Level & mission editor', accelerator='Ctrl+5', command=lambda: editor.show_workspace('level'))
    v.add_command(label='Screen editor', accelerator='Ctrl+6', command=lambda: editor.show_workspace('screen'))
    v.add_separator()
    v.add_checkbutton(label='Collision boxes', variable=editor.show_collision, command=editor.redraw_view)
    v.add_checkbutton(label='Spawned effects (GenerateID)', variable=editor.show_spawns, command=editor.redraw_view)
    v.add_checkbutton(label='Shot animation sources (read-only)', variable=editor.show_shot_sources,
                      command=editor.redraw_view)
    v.add_checkbutton(label='Handler01 repeats (unobstructed model)',
                      variable=editor.show_shot_repeat_model, command=editor.redraw_view)
    v.add_checkbutton(label='Effect origin markers', variable=editor.show_effect_marks, command=editor.redraw_view)
    v.add_checkbutton(label='Pursuer effects', variable=editor.show_effects, command=editor.redraw_view)
    v.add_checkbutton(label='Onion skin', variable=editor.show_onion, command=editor.redraw_view)
    v.add_checkbutton(label='Sprite piece outlines', variable=editor.show_pieces, command=editor.redraw_sprite)
    m.add_cascade(label='View', menu=v)
    h = tk.Menu(m, tearoff=False)
    h.add_command(label='Keyboard shortcuts', accelerator='F1', command=editor.show_shortcuts)
    h.add_command(label='Format notes (docs/FORMATS.md)', command=lambda: editor._open_doc('FORMATS.md'))
    h.add_command(label='NoteTrack events (docs/NOTETRACK_EVENTS.md)',
                  command=lambda: editor._open_doc('NOTETRACK_EVENTS.md'))
    m.add_cascade(label='Help', menu=h)
    editor.config(menu=m)


def build_layout(editor):
    k = T.ui_scale(editor)
    top = ttk.Frame(editor, style='Toolbar.TFrame')
    top.pack(fill='x')
    tk.Label(top, text='JUS', fg=T.ACCENT, bg=T.PANEL2, font=('Segoe UI Black', 13)).pack(side='left', padx=(10, 2))
    tk.Label(top, text='Editor', fg=T.FG, bg=T.PANEL2, font=('Segoe UI', 12)).pack(side='left', padx=(0, 14))
    editor._tab_buttons = {}
    # One Roster: reusable Animation/Sprite/Koma editors, not duplicate parsers.
    for key, label in (('roster', 'Roster'), ('level', 'Level'), ('screen', 'Screen'),
                       ('|', None), ('archive', 'Archive')):
        if key == '|':
            tk.Frame(top, width=1, bg=T.LINE).pack(side='left', fill='y', padx=5, pady=8)
            continue
        b = ttk.Button(top, text=label, style='Tab.TButton', command=lambda kk=key: editor.show_workspace(kk))
        b.pack(side='left', padx=1, pady=(4, 0))
        editor._tab_buttons[key] = b
    T.Tooltip(editor._tab_buttons['roster'],
              'Unified Roster: battle moves, sprites, Koma, support and passive cards (Ctrl+1)')
    T.Tooltip(editor._tab_buttons['level'], 'Level Editor: stage backgrounds and the J-Galaxy missions '
                                          'fought on them, with Koma rewards (Ctrl+5)')
    T.Tooltip(editor._tab_buttons['screen'], 'Screen Editor: menu screens on the DS dual screen (Ctrl+6)')
    T.Tooltip(editor._tab_buttons['archive'], 'Archive members (Ctrl+3)')
    editor._roster_modes = ttk.Frame(top)
    editor._roster_mode_buttons = {}
    for mode, label, fn in (
        ('animation', 'Animation', editor.show_roster_animation),
        ('sprite', 'Sprite', editor.show_roster_sprite)):
        b = ttk.Button(editor._roster_modes, text=label, style='Tab.TButton', command=fn)
        b.pack(side='left', padx=1)
        editor._roster_mode_buttons[mode] = b
    T.separator(top)
    T.tool_button(top, '↶', editor.undo, 'Undo (Ctrl+Z)', width=3)
    T.tool_button(top, '↷', editor.redo, 'Redo (Ctrl+Y)', width=3)
    T.separator(top)
    T.tool_button(top, 'Apply', editor.apply_current, 'Write the current move table / sprite into its archive '
                                                     '(Ctrl+Enter)')
    T.tool_button(top, 'Save', lambda: editor.save(True), 'Save rebuilt archives in place (Ctrl+S)')
    T.tool_button(top, 'Save to…', lambda: editor.save(False), 'Save rebuilt archives to another folder')
    T.separator(top)
    T.tool_button(top, 'Import pkg…', editor.import_package, 'Import a sprite/animation package')
    T.tool_button(top, 'Export pkg…', editor.export_package, 'Export the selected character or archive')
    editor.dirty_label = tk.Label(top, text='', fg=T.WARN, bg=T.PANEL2, font=T.UI_BOLD)
    editor.dirty_label.pack(side='right', padx=10)
    # status bar
    bar = ttk.Frame(editor, style='Toolbar.TFrame')
    bar.pack(fill='x', side='bottom')
    tk.Label(bar, textvariable=editor.status, bg=T.PANEL2, fg=T.MUTED, anchor='w', font=T.UI_FONT).pack(
        side='left', fill='x', expand=True, padx=8, pady=2)
    editor.undo_label = tk.Label(bar, text='', bg=T.PANEL2, fg=T.MUTED, font=T.UI_FONT)
    editor.undo_label.pack(side='right', padx=8)
    editor.root_label = tk.Label(bar, text='', bg=T.PANEL2, fg=T.MUTED, font=T.MONO_SMALL)
    editor.root_label.pack(side='right', padx=8)
    # body
    body = ttk.PanedWindow(editor, orient='horizontal')
    body.pack(fill='both', expand=True)
    editor._body = body
    editor._build_project(body, k)
    editor.ws_host = ttk.Frame(body, style='Bg.TFrame')
    body.add(editor.ws_host, weight=1)
    editor.ws = {'animation': editor._build_animation(editor.ws_host, k),
               'sprite': editor._build_sprite(editor.ws_host, k),
               'archive': editor._build_archive(editor.ws_host, k)}
    editor.suite = {}
    for cls in SUITE:
        w = cls(editor, editor.ws_host, editor._project_panel.body, k)
        editor.suite[w.key] = w
        editor.ws[w.key] = w.frame
    editor._last_roster_view = 'animation'
    editor.show_workspace('roster')
    editor.after(250, editor._init_sashes)


def build_project(editor,body,k):
    p = T.Panel(body, 'Project')
    body.add(p, weight=0)
    p.configure(width=int(250 * k))
    editor._project_panel = p
    # Move Lab's browser; suite workspaces put their own browser in p.body and swap.
    editor._movelab_browser = ttk.Frame(p.body)
    editor._movelab_browser.pack(fill='both', expand=True)
    row = ttk.Frame(editor._movelab_browser)
    row.pack(fill='x', padx=6, pady=6)
    editor.find_var = tk.StringVar()
    editor.find_var.trace_add('write', lambda *_: editor.populate_tree())
    e = ttk.Entry(row, textvariable=editor.find_var)
    e.pack(fill='x')
    T.Tooltip(e, 'Filter characters and archives')
    tf = ttk.Frame(editor._movelab_browser)
    editor.res_tree = ttk.Treeview(tf, show='tree', selectmode='browse')
    editor.res_tree.column('#0', width=int(200 * k), stretch=True)
    sb = ttk.Scrollbar(tf, command=editor.res_tree.yview)
    editor.res_tree.configure(yscrollcommand=sb.set)
    editor.res_tree.pack(side='left', fill='both', expand=True)
    sb.pack(side='right', fill='y')
    tf.pack(fill='both', expand=True, padx=(6, 0), pady=(0, 6))
    editor.res_tree.bind('<<TreeviewSelect>>', editor.on_resource_select)
    editor.res_tree.bind('<<TreeviewOpen>>', editor.on_resource_open)
    editor.res_tree.bind('<Button-3>', editor._project_context)
    editor.roster_browser = RosterBrowser(editor, p.body, k)


def init_sashes(editor):
    """Initial dock sizes (left project, moves list, inspector, timeline height)."""
    k = T.ui_scale(editor)
    editor.update_idletasks()
    try:
        editor._body.sashpos(0, int(210 * k))
        editor.update_idletasks()
        w = editor._upper.winfo_width()
        h = editor.ws['animation'].winfo_height()
        if w < 400:
            editor.after(200, editor._init_sashes)
            return
        if len(editor._upper.panes()) == 2:
            editor._upper.sashpos(0, max(int(420 * k), w - int(340 * k)))
        else:
            editor._upper.sashpos(0, int(200 * k))
            editor._upper.sashpos(1, max(int(420 * k), w - int(340 * k)))
        editor.ws['animation'].sashpos(0, int(h * 0.56))
    except tk.TclError:
        pass
    editor.fit_timeline()


def init_sprite_sashes(editor):
    k = T.ui_scale(editor)
    try:
        w = editor._smid.winfo_width()
        editor._smid.sashpos(0, max(int(400 * k), w - int(330 * k)))
        editor._amid.sashpos(0, max(int(400 * k), editor._amid.winfo_width() - int(360 * k)))
    except tk.TclError:
        pass

