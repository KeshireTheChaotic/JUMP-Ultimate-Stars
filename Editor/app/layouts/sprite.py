"""Audited Tk workspace layout extraction: _build_sprite (R08)."""
import tkinter as tk
from tkinter import ttk
from app import theme as T
from app.widgets import Filmstrip, Inspector, Viewport

def build_sprite(editor, host, k):
    ws = ttk.Frame(host, style='Bg.TFrame')
    top = ttk.Frame(ws, style='Toolbar.TFrame')
    top.pack(fill='x')
    ttk.Label(top, text='Sprite', style='Toolbar.TLabel').pack(side='left', padx=(8, 4))
    editor.sprite_combo = ttk.Combobox(top, state='readonly', width=46)
    editor.sprite_combo.pack(side='left', pady=3)
    editor.sprite_combo.bind('<<ComboboxSelected>>', lambda e: editor.load_sprite(editor.sprite_combo.get()))
    T.separator(top)
    ttk.Checkbutton(top, text='Pieces', variable=editor.show_pieces, style='Toolbar.TCheckbutton',
                    command=editor.redraw_sprite).pack(side='left', padx=3)
    ttk.Checkbutton(top, text='Onion', variable=editor.show_sprite_onion, style='Toolbar.TCheckbutton',
                    command=editor.redraw_sprite).pack(side='left', padx=3)
    ttk.Label(top, text='Bank', style='Toolbar.TLabel').pack(side='left', padx=(8, 2))
    bc = ttk.Combobox(top, values=['Auto'] + [str(i) for i in range(16)], width=5, state='readonly',
                      textvariable=editor.bank_override)
    bc.pack(side='left')
    bc.bind('<<ComboboxSelected>>', lambda e: editor.redraw_sprite(thumbs=True))
    T.Tooltip(bc, 'Preview every piece with one palette bank (does not change data)')
    ttk.Button(top, text='Frame', style='Tool.TButton', command=editor.frame_sprite).pack(side='left', padx=6)
    ttk.Button(top, text='Apply sprite', style='Accent.TButton', command=editor.apply_sprite).pack(
        side='right', padx=6, pady=3)
    editor.sprite_info = ttk.Label(top, text='', style='Toolbar.TLabel')
    editor.sprite_info.pack(side='right', padx=8)
    mid = ttk.PanedWindow(ws, orient='horizontal')
    mid.pack(fill='both', expand=True)
    editor._smid = mid
    vp = T.Panel(mid, 'Frame')
    mid.add(vp, weight=1)
    editor.sprite_title = vp
    editor.sview = Viewport(vp.body, on_draw=editor._draw_sprite, on_press=editor._sprite_press,
                          on_drag=editor._sprite_drag, on_release=editor._sprite_release,
                          origin_frac=(0.5, 0.62), zoom=4)
    editor.sview.pack(fill='both', expand=True)
    det = T.Panel(mid, 'Details')
    mid.add(det, weight=0)
    det.configure(width=int(330 * k))
    editor.details = Inspector(det.body)
    editor.details.pack(fill='both', expand=True)
    strip = T.Panel(ws, 'Frames')
    strip.pack(fill='x')
    h = strip.header
    T.separator(h)
    editor.flip_btn = T.tool_button(h, '▶', editor.toggle_flipbook, 'Play the frames as a flipbook (Space)', width=3)
    ttk.Label(h, text='fps', style='Toolbar.TLabel').pack(side='left', padx=(4, 2))
    ttk.Spinbox(h, from_=1, to=60, width=4, textvariable=editor.flip_fps, font=T.MONO).pack(side='left')
    T.separator(h)
    T.tool_button(h, 'Replace…', lambda: editor.import_frame(False), 'Replace the selected frame from a PNG')
    T.tool_button(h, 'Append…', lambda: editor.import_frame(True), 'Append a frame from a PNG')
    T.tool_button(h, 'Re-layout', editor.relayout_frame, 'Rebuild the piece layout of the selected frame')
    T.tool_button(h, 'Delete', editor.delete_frame, 'Delete the selected frame (Del)')
    T.separator(h)
    T.tool_button(h, 'Export PNGs…', editor.export_frames, 'Export all frames as indexed PNGs')
    editor.filmstrip = Filmstrip(strip.body, on_select=editor.select_frame, on_context=editor._film_context)
    editor.filmstrip.pack(fill='x', padx=4, pady=4)
    return ws
