"""Tabbed bottom dock (Unity's Console/Project row, Godot's bottom panel)."""
from __future__ import annotations

import tkinter as tk
from tkinter import ttk

from .. import theme as T


class TabbedPanel(ttk.Frame):
    """Header strip of tab buttons plus right-aligned tool area; one page visible."""

    def __init__(self, parent, **kw):
        super().__init__(parent, **kw)
        self.header = ttk.Frame(self, style='Header.TFrame')
        self.header.pack(fill='x')
        self.tabs_frame = ttk.Frame(self.header, style='Header.TFrame')
        self.tabs_frame.pack(side='left')
        self.tools = ttk.Frame(self.header, style='Header.TFrame')   # per-page tool buttons
        self.tools.pack(side='right')
        self.body = ttk.Frame(self)
        self.body.pack(fill='both', expand=True)
        self.pages: dict[str, ttk.Frame] = {}
        self.buttons: dict[str, ttk.Button] = {}
        self.current: str | None = None
        self.on_change = None

    def add(self, name: str, title: str | None = None) -> ttk.Frame:
        page = ttk.Frame(self.body)
        self.pages[name] = page
        b = ttk.Button(self.tabs_frame, text=title or name, style='Tab.TButton',
                       command=lambda n=name: self.show(n))
        b.pack(side='left', padx=(0, 1))
        self.buttons[name] = b
        if self.current is None:
            self.show(name)
        return page

    def set_title(self, name: str, title: str) -> None:
        self.buttons[name].configure(text=title)

    def show(self, name: str) -> None:
        for n, p in self.pages.items():
            p.pack_forget()
            self.buttons[n].configure(style='TabOn.TButton' if n == name else 'Tab.TButton')
        self.pages[name].pack(fill='both', expand=True)
        self.current = name
        if self.on_change:
            self.on_change(name)


class TextLog(tk.Text):
    """Read-only monospace text (problems list, hex dump)."""

    def __init__(self, parent, **kw):
        super().__init__(parent, bg=T.PANEL, fg=T.FG, insertbackground=T.FG, relief='flat', bd=0,
                         font=T.MONO, wrap='none', height=6, **kw)
        self.tag_configure('bad', foreground=T.BAD)
        self.tag_configure('warn', foreground=T.WARN)
        self.tag_configure('good', foreground=T.GOOD)
        self.tag_configure('muted', foreground=T.MUTED)
        self.configure(state='disabled')

    def set_lines(self, lines):
        """``lines``: iterable of str or (str, tag)."""
        self.configure(state='normal')
        self.delete('1.0', 'end')
        for ln in lines:
            text, tag = (ln, None) if isinstance(ln, str) else ln
            self.insert('end', text + '\n', tag or ())
        self.configure(state='disabled')
