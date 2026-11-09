"""Audited Tk workspace layout extraction: _build_animation (R08)."""
import tkinter as tk
from tkinter import ttk
from app import theme as T
from app.widgets import DopeSheet, Inspector, Viewport
from app.renderers import node_drag

def build_animation(editor, host, k, speeds):
    ws = ttk.PanedWindow(host, orient='vertical')
    upper = ttk.PanedWindow(ws, orient='horizontal')
    ws.add(upper, weight=3)
    editor._upper = upper
    # moves (clips) panel
    clips = T.Panel(upper, 'Moves')
    editor._animation_clips = clips
    upper.add(clips, weight=0)
    tb = ttk.Frame(clips.body)
    tb.pack(fill='x', padx=6, pady=(6, 2))
    editor.almt_combo = ttk.Combobox(tb, state='readonly')
    editor.almt_combo.pack(fill='x')
    editor.almt_combo.bind('<<ComboboxSelected>>', lambda e: editor._switch_almt(editor.almt_combo.get()))
    T.Tooltip(editor.almt_combo, 'Move table (ALMT) in the selected archive')
    editor.move_filter = tk.StringVar()
    editor.move_filter.trace_add('write', lambda *_: editor.populate_moves(keep=True))
    fe = ttk.Entry(clips.body, textvariable=editor.move_filter)
    fe.pack(fill='x', padx=6, pady=2)
    T.Tooltip(fe, 'Filter by index, resource id, input control or original BIN move title')
    mf, editor.moves_tree = T.tree(clips.body, ('#', 'id', 'len', 'loop', 'control'), (34, 86, 40, 34, 255),
                                 height=20, style='Mono.Treeview')
    mf.pack(fill='both', expand=True, padx=(6, 0), pady=2)
    editor.moves_tree.bind('<<TreeviewSelect>>', editor.on_move_select)
    mb = ttk.Frame(clips.body)
    mb.pack(fill='x', padx=6, pady=(2, 6))
    T.tool_button(mb, '＋ Dup', editor.duplicate_move, 'Duplicate the selected move (Ctrl+D)')
    T.tool_button(mb, '✕ Del', editor.delete_move, 'Delete the selected move')
    T.tool_button(mb, 'Apply', editor.apply_almt, 'Write this move table into its archive')
    # viewport
    vp = T.Panel(upper, 'Viewport')
    upper.add(vp, weight=1)
    # Unity-style "Gizmos" dropdown keeps the header uncluttered at any width.
    giz = ttk.Menubutton(vp.header, text='Show ▾', style='Tool.TButton')
    gm = tk.Menu(giz, tearoff=False)
    for text, var in (('Spawned effects (GenerateID)', editor.show_spawns),
                      ('Shot animation sources (chara_action 2)', editor.show_shot_sources),
                      ('Handler01 repeats: no contact/terrain model', editor.show_shot_repeat_model),
                      ('Effect origin markers', editor.show_effect_marks),
                      ('Pursuer effect (chara_action 13/14)', editor.show_effects),
                      ('Collision boxes', editor.show_collision),
                      ('AI attack profile (chr/ai AIPM)', editor.show_ai_profile),
                      ('Onion skin', editor.show_onion)):
        gm.add_checkbutton(label=text, variable=var, command=editor.redraw_view)
    gm.add_separator()
    gm.add_checkbutton(label='Physics trajectory (NoteTrack 0x01xx)', variable=editor.show_motion,
                       command=editor.redraw_view)
    gm.add_checkbutton(label='Root motion: move the character along it', variable=editor.root_motion,
                       command=editor.redraw_view)
    gm.add_checkbutton(label='Facing left (mirrors x impulses)', variable=editor.facing_left,
                       command=editor._motion_changed)
    gm.add_checkbutton(label='Assume floor at start height', variable=editor.motion_floor,
                       command=editor._motion_changed)
    gm.add_separator()
    gm.add_checkbutton(label='Isolate selected spawned effect (diagnostic only)',
                       variable=editor.isolate_selected_spawn, command=editor.redraw_view)
    gm.add_checkbutton(label='Effect teardown by chara_action 4/5', variable=editor.effect_teardown,
                       command=editor.refresh_animation)
    gm.add_checkbutton(label='ParentLink translation follow (no scale/facing)',
                       variable=editor.parent_link_preview, command=editor.redraw_view)
    gm.add_command(label='Effect layer (high-first callbacks; final occlusion unverified):', state='disabled')
    for v in ('Front', 'Behind'):
        gm.add_radiobutton(label=f'   Effects {v.lower()} character', value=v, variable=editor.effect_layer,
                           command=editor.redraw_view)
    gm.add_separator()
    gm.add_command(label='Pursuer position preview:', state='disabled')
    for mode in ('Follow (traced)', 'Target only'):
        gm.add_radiobutton(label='   ' + mode, value=mode, variable=editor.pursuer_motion_preview,
                           command=editor.redraw_view)
    gm.add_command(label='Pursuer initial position (unknown across moves):', state='disabled')
    for seed in ('First target', 'Origin (0,0)'):
        gm.add_radiobutton(label='   Assume ' + seed.lower(), value=seed,
                           variable=editor.pursuer_start_seed, command=editor.redraw_view)
    gm.add_command(label='Pursuer state (picked at run time):', state='disabled')
    for v in ('A', 'B'):
        gm.add_radiobutton(label=f'   State {v}', value=v, variable=editor.pursuer_choice, command=editor.redraw_view)
    giz['menu'] = gm
    giz.pack(side='right', padx=4)
    T.Tooltip(giz, 'Viewport overlays: effects, pursuer, collision, onion skin, effect layer')
    cb = ttk.Checkbutton(vp.header, text='Effects', variable=editor.show_spawns, style='Toolbar.TCheckbutton',
                         command=editor.redraw_view)
    cb.pack(side='right', padx=4)
    T.Tooltip(cb, 'Effects spawned by GenerateID keys, incl. nested spawns')
    ttk.Button(vp.header, text='Frame', style='Tool.TButton', command=editor.frame_view).pack(side='right', padx=6)
    editor.view = Viewport(vp.body, on_draw=editor._draw_animation, zoom=3,
                           on_press=lambda x, y, e: node_drag.press(editor, x, y, e),
                           on_drag=lambda x, y, e: node_drag.drag(editor, x, y, e),
                           on_release=lambda x, y, e: node_drag.release(editor, x, y, e))
    T.Tooltip(editor.view.canvas, 'Drag collider corners to resize; drag inside a box to move it. '
              'Drag a node handle or sprite to move 2DPos. Edits key the current frame. '
              'Middle-drag or Space+drag pans.')
    editor.view.pack(fill='both', expand=True)
    # inspector
    ins = T.Panel(upper, 'Inspector')
    upper.add(ins, weight=0)
    ins.configure(width=int(330 * k))
    editor.inspector = Inspector(ins.body)
    editor.inspector.pack(fill='both', expand=True)
    # timeline dock
    tl = T.Panel(ws, 'Timeline')
    ws.add(tl, weight=2)
    bar = tl.header
    T.separator(bar)
    T.tool_button(bar, '⏮', lambda: editor.set_tick(0), 'First tick (Home)', width=3)
    T.tool_button(bar, '◀|', lambda: editor.jump_key(-1), 'Previous key (Shift+←)', width=3)
    T.tool_button(bar, '◀', lambda: editor.set_tick(editor.tick - 1), 'Previous tick (←)', width=3)
    editor.play_btn = T.tool_button(bar, '▶', editor.toggle_play, 'Play / pause (Space)', width=3)
    T.tool_button(bar, '▶', lambda: editor.set_tick(editor.tick + 1), 'Next tick (→)', width=3)
    T.tool_button(bar, '|▶', lambda: editor.jump_key(1), 'Next key (Shift+→)', width=3)
    T.tool_button(bar, '⏭', lambda: editor.set_tick(editor.move.duration if editor.move else 0), 'Last tick (End)',
                  width=3)
    editor.tick_var = tk.StringVar(value='0')
    sp = ttk.Spinbox(bar, from_=0, to=9999, width=5, textvariable=editor.tick_var, font=T.MONO,
                     command=lambda: editor.set_tick(editor._int(editor.tick_var.get(), editor.tick)))
    sp.pack(side='left', padx=(8, 2))
    sp.bind('<Return>', lambda e: editor.set_tick(editor._int(editor.tick_var.get(), editor.tick)))
    editor.dur_label = ttk.Label(bar, text='/ 0', style='Toolbar.TLabel', font=T.MONO)
    editor.dur_label.pack(side='left')
    ttk.Checkbutton(bar, text='Loop', variable=editor.loop, style='Toolbar.TCheckbutton').pack(side='left', padx=6)
    ttk.Checkbutton(bar, text='Sound', variable=editor.sound_enabled, command=editor._sound_changed,
                    style='Toolbar.TCheckbutton').pack(side='left', padx=4)
    sc = ttk.Combobox(bar, values=speeds, textvariable=editor.speed, width=5, state='readonly')
    sc.pack(side='left')
    T.Tooltip(sc, 'Playback speed (the game runs one tick per frame at 60 Hz)')
    T.separator(bar)
    T.tool_button(bar, '◆ Key', editor.add_key_at_playhead, 'Add a key at the playhead on the selected track (K)')
    T.tool_button(bar, '− Key', editor.delete_selected_key, 'Remove the selected key (Delete)')
    T.tool_button(bar, '⚑ Event', editor.add_note_event, 'Add a NoteTrack event at the playhead (E)')
    T.tool_button(bar, '＋ Track', editor.add_track, 'Add a track to a node')
    T.tool_button(bar, '✎ Text', editor.edit_track, 'Edit the selected track as text')
    fit = ttk.Button(bar, text='Fit', style='Tool.TButton', command=editor.fit_timeline)
    fit.pack(side='right', padx=(2, 8))
    T.Tooltip(fit, 'Fit the whole move in the timeline (Ctrl+wheel zooms, Shift+wheel scrolls)')
    editor.timeline = DopeSheet(tl.body, on_scrub=editor.set_tick, on_select=editor._timeline_select,
                              on_move_key=editor._timeline_move_key, on_context=editor._timeline_context,
                              on_activate=editor._timeline_activate, on_toggle_group=editor._toggle_group)
    editor.timeline.pack(fill='both', expand=True)
    return ws
