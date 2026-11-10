"""Shared look-and-feel for the JUS Editor (dark, engine-editor style).

Colours follow the neutral-grey scheme used by Godot / Unity / Unreal editors:
grey panels, one blue accent for selection and the playhead, and per-track-type
key colours in the timeline.
"""
from __future__ import annotations

import sys
import tkinter as tk
from tkinter import ttk

BG = '#1E2024'          # window background
PANEL = '#262A2F'       # docked panels
PANEL2 = '#2F343A'      # inputs / headers
PANEL3 = '#373D44'      # hover / toolbar buttons
LINE = '#3E454D'        # separators, grid
FG = '#D8DCE1'
MUTED = '#8C949E'
ACCENT = '#4EA1FF'      # selection / playhead
SELECT = '#2F5A8A'
GOOD = '#7FCB8A'
WARN = '#E8C27A'
BAD = '#E57A84'
EFFECT = '#F0A35E'     # spawned effects (GenerateID)
READONLY = '#8C96A0'   # read-only overlays (Level v1 collision/gimmick, unknown structures)
CANVAS_BG = '#17191C'

# Evidence grades shown in every inspector (docs/03 + 01 policy)
EVIDENCE = {
    'Direct': GOOD,            # traced in code, or exact byte roundtrip of every file
    'Cross-checked': ACCENT,   # two independent sources agree
    'Inferred': WARN,          # consistent with all data, loader not traced
    'Unknown': BAD,            # not decoded: shown raw / read-only
}
CHECK_A = '#2A2D31'
CHECK_B = '#232629'

# timeline key colours by field family
KEY_COLOURS = {
    'BoundsIndex': '#4EA1FF', 'TextureID': '#7AB6FF', '2DPos': '#E8C27A',
    'Marker': '#C9A0FF', 'NoteTrack': '#FF9E64', 'GenerateID': '#F7768E',
    'Collision': '#5FD3BC', 'DrawPrio': '#9DA5B4', 'Alpha': '#9DA5B4',
}
COLLISION_COLOURS = ['#5FD3BC', '#FF8B92', '#E8C27A', '#B0EDB2', '#D2A9FF', '#9DD5FF', '#E5A1CE']
EVENT_COLOURS = {0: '#C9A0FF', 1: '#E8C27A', 2: '#9DD5FF', 3: '#FF9E64', 4: '#7FCB8A'}

UI_FONT = ('Segoe UI', 9)
UI_BOLD = ('Segoe UI', 9, 'bold')
HEAD_FONT = ('Segoe UI Semibold', 10)
MONO = ('Consolas', 9)
MONO_SMALL = ('Consolas', 8)


def key_colour(field: str) -> str:
    if field.startswith('Collision'):
        return KEY_COLOURS['Collision']
    return KEY_COLOURS.get(field, '#A9B1BC')


def dpi_aware() -> None:
    if sys.platform == 'win32':
        try:
            import ctypes
            ctypes.windll.shcore.SetProcessDpiAwareness(1)
        except (AttributeError, OSError):
            pass


def ui_scale(widget: tk.Misc) -> float:
    try:
        return max(1.0, widget.winfo_fpixels('1i') / 96.0)
    except tk.TclError:
        return 1.0


def apply_styles(root: tk.Misc) -> None:
    k = ui_scale(root)
    s = ttk.Style(root)
    s.theme_use('clam')
    s.configure('.', background=PANEL, foreground=FG, fieldbackground=PANEL2, bordercolor=LINE,
                lightcolor=PANEL2, darkcolor=PANEL2, troughcolor=PANEL2, font=UI_FONT)
    s.configure('TFrame', background=PANEL)
    s.configure('Bg.TFrame', background=BG)
    s.configure('Toolbar.TFrame', background=PANEL2)
    s.configure('Header.TFrame', background=PANEL2)
    s.configure('TLabel', background=PANEL, foreground=FG)
    s.configure('Muted.TLabel', background=PANEL, foreground=MUTED)
    s.configure('Head.TLabel', background=PANEL2, foreground=FG, font=HEAD_FONT, padding=(8, 4))
    s.configure('Section.TLabel', background=PANEL, foreground=ACCENT, font=UI_BOLD, padding=(0, 6, 0, 2))
    s.configure('Toolbar.TLabel', background=PANEL2, foreground=MUTED)
    s.configure('Value.TLabel', background=PANEL, foreground=FG, font=MONO)
    s.configure('TButton', background=PANEL3, foreground=FG, borderwidth=0, focusthickness=0,
                padding=(8, 3))
    s.map('TButton', background=[('pressed', SELECT), ('active', '#424A53')])
    s.configure('Tool.TButton', background=PANEL2, padding=(6, 2))
    s.map('Tool.TButton', background=[('pressed', SELECT), ('active', PANEL3)])
    s.configure('Accent.TButton', background=SELECT, foreground='#FFFFFF')
    s.map('Accent.TButton', background=[('active', '#3B6EA8')])
    s.configure('Tab.TButton', background=PANEL2, foreground=MUTED, padding=(14, 5), font=UI_BOLD)
    s.map('Tab.TButton', background=[('active', PANEL3)])
    s.configure('TabOn.TButton', background=PANEL, foreground=FG, padding=(14, 5), font=UI_BOLD)
    s.configure('TCheckbutton', background=PANEL, foreground=FG)
    s.map('TCheckbutton', background=[('active', PANEL)])
    s.configure('Toolbar.TCheckbutton', background=PANEL2, foreground=FG)
    s.map('Toolbar.TCheckbutton', background=[('active', PANEL2)])
    # tool palette toggles (Unity tool buttons): flat, highlighted when selected
    s.layout('ToolToggle.TRadiobutton', [('Radiobutton.padding', {'sticky': 'nswe', 'children': [
        ('Radiobutton.label', {'sticky': 'nswe'})]})])
    s.configure('ToolToggle.TRadiobutton', background=PANEL2, foreground=MUTED, padding=(8, 2))
    s.map('ToolToggle.TRadiobutton', background=[('selected', SELECT), ('active', PANEL3)],
          foreground=[('selected', '#FFFFFF')])
    s.configure('TEntry', fieldbackground=PANEL2, foreground=FG, insertcolor=FG, borderwidth=1)
    s.configure('TSpinbox', fieldbackground=PANEL2, foreground=FG, arrowcolor=FG, insertcolor=FG)
    s.configure('TCombobox', fieldbackground=PANEL2, foreground=FG, arrowcolor=FG,
                selectbackground=PANEL2, selectforeground=FG)
    s.map('TCombobox', fieldbackground=[('readonly', PANEL2)], foreground=[('readonly', FG)])
    root.option_add('*TCombobox*Listbox.background', PANEL2)
    root.option_add('*TCombobox*Listbox.foreground', FG)
    root.option_add('*TCombobox*Listbox.selectBackground', SELECT)
    root.option_add('*Menu.background', PANEL2)
    root.option_add('*Menu.foreground', FG)
    root.option_add('*Menu.activeBackground', SELECT)
    root.option_add('*Menu.activeForeground', '#FFFFFF')
    root.option_add('*Menu.relief', 'flat')
    s.configure('Treeview', background=PANEL, fieldbackground=PANEL, foreground=FG, borderwidth=0,
                rowheight=int(20 * k), font=UI_FONT)
    s.configure('Treeview.Heading', background=PANEL2, foreground=MUTED, font=UI_BOLD, relief='flat')
    s.map('Treeview', background=[('selected', SELECT)], foreground=[('selected', '#FFFFFF')])
    s.configure('Mono.Treeview', font=MONO)
    s.configure('TScrollbar', background=PANEL2, troughcolor=PANEL, arrowcolor=MUTED, borderwidth=0)
    s.configure('TPanedwindow', background=BG)
    s.configure('Sash', sashthickness=int(5 * k), background=BG)
    s.configure('Horizontal.TScale', background=PANEL2, troughcolor=PANEL)
    s.configure('TLabelframe', background=PANEL, foreground=MUTED, bordercolor=LINE)
    s.configure('TLabelframe.Label', background=PANEL, foreground=ACCENT, font=UI_BOLD)


def tool_button(parent, text, cmd, tip=None, style='Tool.TButton', width=None):
    b = ttk.Button(parent, text=text, command=cmd, style=style)
    if width:
        b.configure(width=width)
    b.pack(side='left', padx=1, pady=2)
    if tip:
        Tooltip(b, tip)
    return b


def separator(parent):
    tk.Frame(parent, width=1, bg=LINE).pack(side='left', fill='y', padx=6, pady=4)


def tree(parent, cols, widths, height=10, show='headings', style='Treeview', headings=None):
    frame = ttk.Frame(parent)
    t = ttk.Treeview(frame, columns=cols, show=show, height=height, selectmode='browse', style=style)
    k = ui_scale(parent)
    for i, (c, w) in enumerate(zip(cols, widths)):
        t.heading(c, text=(headings[i] if headings else c))
        t.column(c, width=int(w * k), minwidth=int(w * k * 0.5), stretch=c == cols[-1])
    sb = ttk.Scrollbar(frame, command=t.yview)
    t.configure(yscrollcommand=sb.set)
    t.pack(side='left', fill='both', expand=True)
    sb.pack(side='right', fill='y')
    return frame, t


class Tooltip:
    """Small hover tooltip (engine editors show one on every tool button)."""

    def __init__(self, widget, text, delay=450):
        self.widget, self.text, self.delay = widget, text, delay
        self.tip = None
        self._after = None
        self._timer_owner = widget.winfo_toplevel()
        widget.bind('<Enter>', self._schedule, add='+')
        widget.bind('<Leave>', self._hide, add='+')
        widget.bind('<ButtonPress>', self._hide, add='+')
        widget.bind('<Destroy>', self._hide, add='+')

    def _schedule(self, _e=None):
        self._hide()
        self._after = self._timer_owner.after(self.delay, self._show)

    def _show(self):
        self._after = None
        if self.tip or not self.text or not self.widget.winfo_exists():
            return
        x = self.widget.winfo_rootx() + 12
        y = self.widget.winfo_rooty() + self.widget.winfo_height() + 4
        self.tip = tk.Toplevel(self.widget)
        self.tip.wm_overrideredirect(True)
        self.tip.wm_geometry(f'+{x}+{y}')
        tk.Label(self.tip, text=self.text, bg='#11151A', fg=FG, font=UI_FONT, padx=6, pady=3,
                 relief='solid', bd=1, justify='left').pack()

    def _hide(self, _e=None):
        if self._after:
            try:
                self._timer_owner.after_cancel(self._after)
            except tk.TclError:
                pass
            self._after = None
        if self.tip:
            self.tip.destroy()
            self.tip = None


class Panel(ttk.Frame):
    """Docked panel with a title strip (and optional header widgets on the right)."""

    def __init__(self, parent, title, **kw):
        super().__init__(parent, **kw)
        self.header = ttk.Frame(self, style='Header.TFrame')
        self.header.pack(fill='x')
        self.title_label = ttk.Label(self.header, text=title, style='Head.TLabel')
        self.title_label.pack(side='left')
        self.body = ttk.Frame(self)
        self.body.pack(fill='both', expand=True)

    def set_title(self, text):
        self.title_label.configure(text=text)
