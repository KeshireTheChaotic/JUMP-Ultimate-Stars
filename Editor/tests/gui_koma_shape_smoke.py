"""Run under xvfb or Windows Tk: exercise new shape variant dialog → Apply → save."""
from __future__ import annotations

import struct
import sys
import tempfile
import tkinter as tk
from pathlib import Path
from types import SimpleNamespace
from tkinter import ttk

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from app.workspaces.koma import KomaWorkspace
from jus_formats import kshape
from jus_package.komacards import KomaCatalog
from jus_package.project import DataRoot
from tests.test_koma_cards import synthetic_shapes


def descendants(w):
    for child in w.winfo_children():
        yield child
        yield from descendants(child)


def main():
    with tempfile.TemporaryDirectory() as td:
        folder = Path(td)
        (folder / 'bin').mkdir()
        raw_shape = synthetic_shapes()
        raw_card = struct.pack('<H', 0) + bytes([0xA5, 0x5A, 1, 1, 0, 0, 3, 0, 0xFC, 0xBE])
        (folder / 'bin/kshape.bin').write_bytes(raw_shape)
        (folder / 'bin/koma.bin').write_bytes(raw_card)
        window = tk.Tk()
        window.withdraw()
        try:
            obj = KomaWorkspace.__new__(KomaWorkspace)
            obj.frame = window
            obj.k = 1.0
            obj.path = 'koma/koma.aar|koma/test.dtx'
            obj.cat = KomaCatalog(kshape.ShapeTable.parse(raw_shape),
                                  kshape.CardTable.parse(raw_card), {})
            obj.card = obj.cat.cards.cards[0]
            obj.kf = SimpleNamespace(panels=[None] * 4)
            obj.layout_mode = tk.StringVar(value='Card')
            obj._dirty = obj._cards_dirty = obj._shape_dirty = False
            obj.refresh = lambda **kw: None
            obj.checkpoint = lambda name: None
            obj.app = SimpleNamespace(root_data=DataRoot(td), status=tk.StringVar(),
                                      update_dirty=lambda: None, resources_applied=lambda: None)
            obj.add_shape_variant()
            dialogs = [w for w in window.winfo_children() if isinstance(w, tk.Toplevel)]
            assert len(dialogs) == 1
            buttons = [w for w in descendants(dialogs[0])
                       if isinstance(w, ttk.Button) and w.cget('text') == 'Create variant']
            assert len(buttons) == 1
            buttons[0].invoke()
            window.update()
            assert obj.cat.shapes.get(4, 1) and obj.card.variant == 1
            assert obj._shape_dirty and obj._cards_dirty
            obj.apply()
            assert obj.app.root_data.dirty_files() == ['bin/koma.bin', 'bin/kshape.bin']
            with tempfile.TemporaryDirectory() as out:
                obj.app.root_data.save(out)
                shape_bytes = (Path(out) / 'bin/kshape.bin').read_bytes()
                card_bytes = (Path(out) / 'bin/koma.bin').read_bytes()
                parsed = kshape.ShapeTable.parse(shape_bytes)
                parsed_cards = kshape.CardTable.parse(card_bytes, parsed)
                assert len(parsed.shapes) == 9 and parsed_cards.cards[0].variant == 1
                assert card_bytes[:9] + card_bytes[10:] == raw_card[:9] + raw_card[10:]
            print('OK: 5×4 shape variant dialog → Apply → Save → reload')
        finally:
            window.destroy()


if __name__ == '__main__':
    main()
