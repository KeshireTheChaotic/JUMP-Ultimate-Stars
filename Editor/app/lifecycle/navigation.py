"""Source-preserving workspace navigation and keyboard bindings (R08)."""
from __future__ import annotations
import tkinter as tk
from tkinter import ttk

def activate_workspace(editor,name):
    # The true editor subview remains 'animation'/'sprite'/'koma' so all
    # existing undo, keyboard shortcuts, apply, and playback paths work.
    if name == 'roster':
        name = getattr(editor, '_last_roster_view', 'animation')
    if name not in editor.ws:
        return
    if name == 'animation' or editor.workspace == 'animation':
        editor._stop_play()
    if editor.workspace == 'sprite' and name != 'sprite':
        editor._stop_flipbook()
    editor.workspace = name
    is_roster = name in ('animation', 'sprite', 'koma')
    if is_roster:
        editor._last_roster_view = name
        editor._set_roster_clips(True)
    active_tab = 'roster' if is_roster else name
    for key, frame in editor.ws.items():
        frame.pack_forget()
    for key, button in editor._tab_buttons.items():
        button.configure(style='TabOn.TButton' if key == active_tab else 'Tab.TButton')
    editor.ws[name].pack(fill='both', expand=True)
    if is_roster and name in ('animation', 'sprite'):
        editor._roster_modes.pack(side='left', padx=(10, 6))
        for key, button in editor._roster_mode_buttons.items():
            button.configure(style='TabOn.TButton' if key == name else 'Tab.TButton')
    else:
        editor._roster_modes.pack_forget()
    suite = editor.suite.get(name) if hasattr(editor, 'suite') else None
    for browser in [editor._movelab_browser, editor.roster_browser.frame] + [
        w.browser for w in getattr(editor, 'suite', {}).values()]:
        browser.pack_forget()
    if is_roster:
        editor.roster_browser.frame.pack(fill='both', expand=True)
        editor._project_panel.set_title('Roster')
    elif suite:
        suite.browser.pack(fill='both', expand=True)
        editor._project_panel.set_title(suite.browser_title)
    else:
        editor._movelab_browser.pack(fill='both', expand=True)
        editor._project_panel.set_title('Project')
    if suite:
        suite.on_show()
    editor._update_undo_label() if hasattr(editor, 'undo_label') else None
    if name in ('sprite', 'archive') and not getattr(editor, f'_sashed_{name}', False):
        setattr(editor, f'_sashed_{name}', True)
        editor.after(60, editor._init_sprite_sashes)
    editor.after(30, editor.redraw_view if name == 'animation' else
               editor.redraw_sprite if name == 'sprite' else lambda: None)
    if name == 'sprite':
        editor.after(120, editor._frame_sprite_if_needed)


def bind_shortcuts(editor):
    def guard(fn, allow_in_entry=False):
        def handler(e):
            w = editor.focus_get()
            if not allow_in_entry and isinstance(w, (tk.Entry, ttk.Entry, tk.Text, ttk.Spinbox,
                                                     ttk.Combobox, tk.Spinbox)):
                return None
            fn(e)
            return 'break'
        return handler
    editor.bind_all('<Control-z>', guard(lambda e: editor.undo(), True))
    editor.bind_all('<Control-y>', guard(lambda e: editor.redo(), True))
    editor.bind_all('<Control-Shift-Z>', guard(lambda e: editor.redo(), True))
    editor.bind_all('<Control-s>', guard(lambda e: editor.save(True), True))
    editor.bind_all('<Control-S>', guard(lambda e: editor.save(False), True))
    editor.bind_all('<Control-Return>', guard(lambda e: editor.apply_current(), True))
    editor.bind_all('<Control-Key-1>', guard(lambda e: editor.show_workspace('roster'), True))
    editor.bind_all('<Control-Key-2>', guard(lambda e: editor.show_roster_sprite(), True))
    editor.bind_all('<Control-Key-3>', guard(lambda e: editor.show_workspace('archive'), True))
    editor.bind_all('<Control-Key-4>', guard(lambda e: editor.show_workspace('koma'), True))
    editor.bind_all('<Control-Key-5>', guard(lambda e: editor.show_workspace('level'), True))
    editor.bind_all('<Control-Key-6>', guard(lambda e: editor.show_workspace('screen'), True))
    for key, tool in (('v', 'select'), ('b', 'pencil'), ('i', 'picker')):
        editor.bind_all(f'<KeyPress-{key}>', guard(lambda e, t=tool: editor.suite[editor.workspace].tool.set(t)
                                                 if editor.workspace in ('koma', 'level') else None))
    editor.bind_all('<F1>', guard(lambda e: editor.show_shortcuts(), True))
    editor.bind_all('<Control-d>', guard(lambda e: editor.duplicate_move() if editor.workspace == 'animation' else None))
    editor.bind_all('<space>', guard(lambda e: editor.toggle_play() if editor.workspace == 'animation'
                                   else editor.toggle_flipbook() if editor.workspace == 'sprite' else None))
    editor.bind_all('<Left>', guard(lambda e: editor._arrow(-1, 0, e)))
    editor.bind_all('<Right>', guard(lambda e: editor._arrow(1, 0, e)))
    editor.bind_all('<Up>', guard(lambda e: editor._arrow(0, -1, e)))
    editor.bind_all('<Down>', guard(lambda e: editor._arrow(0, 1, e)))
    editor.bind_all('<Shift-Left>', guard(lambda e: editor._arrow(-1, 0, e, big=True)))
    editor.bind_all('<Shift-Right>', guard(lambda e: editor._arrow(1, 0, e, big=True)))
    editor.bind_all('<Shift-Up>', guard(lambda e: editor._arrow(0, -1, e, big=True)))
    editor.bind_all('<Shift-Down>', guard(lambda e: editor._arrow(0, 1, e, big=True)))
    editor.bind_all('<Home>', guard(lambda e: editor.set_tick(0) if editor.workspace == 'animation' else editor.select_frame(0)))
    editor.bind_all('<End>', guard(lambda e: editor.set_tick(editor.move.duration if editor.move else 0)
                                 if editor.workspace == 'animation' else
                                 editor.select_frame(len(editor.sprite_d.frames) - 1 if editor.sprite_d else 0)))
    editor.bind_all('<Delete>', guard(lambda e: editor.delete_selected_key() if editor.workspace == 'animation'
                                    else editor.delete_frame() if editor.workspace == 'sprite' else None))
    editor.bind_all('<KeyPress-k>', guard(lambda e: editor.add_key_at_playhead() if editor.workspace == 'animation' else None))
    editor.bind_all('<KeyPress-e>', guard(lambda e: editor.add_note_event() if editor.workspace == 'animation' else None))
    editor.bind_all('<KeyPress-f>', guard(lambda e: editor.frame_view() if editor.workspace == 'animation'
                                        else editor.frame_sprite()))

