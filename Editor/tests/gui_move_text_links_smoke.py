"""Real JUS Data GUI smoke: card ⇄ ALMT ⇄ BIN title navigation.

No screenshots are synthesized, no images are replaced, no source files saved.
Run on a desktop with Windows Tk:
    py -3 tests/gui_move_text_links_smoke.py
"""
from __future__ import annotations

import os
import sys
import time
import traceback
from pathlib import Path
from tkinter import ttk

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from app.editor import EditorApp

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\Data'))


def labels(widget):
    out = []
    for child in widget.winfo_children():
        if isinstance(child, (ttk.Label, ttk.Button)):
            out.append(str(child.cget('text')))
        out.extend(labels(child))
    return out


def tick(app, n=5):
    for _ in range(n):
        app.update()
        time.sleep(.015)


def main():
    assert (DATA / 'bin/chr_b_t.bin').is_file(), DATA
    app = EditorApp(str(DATA))
    errors = []
    app.report_callback_exception = lambda *args: errors.append(
        ''.join(traceback.format_exception(*args)))
    try:
        tick(app, 8)
        assert app.open_koma_card(59), 'battle card source art should open'
        tick(app)
        ws = app.suite['koma']
        assert ws.card.index == 59 and ws.card.size == 4
        source = labels(ws.inspector)
        assert any('Clenched Fists Shot' in a for a in source), source
        assert any('Megaton Punch' in a for a in source), source
        a = next(x for x in app._move_xref().card_moves(ws.card) if x.variant == 'A')
        assert app.open_move_resource(a.form, a.resource_id, a.almt_member)
        tick(app)
        assert app.move.id == a.resource_id and app.workspace == 'animation'
        assert 'Clenched Fists Shot' in app._move_control_and_title(app.move)
        assert any('bin/chr_b_t.bin' in item for item in labels(app.inspector)), labels(app.inspector)
        assert any('Open Koma card' in item for item in labels(app.inspector))
        assert app.open_koma_card(59)
        tick(app)

        assert app.open_koma_card(1), 'support card source art should open'
        tick(app)
        s = app._move_xref().card_moves(ws.card)[0]
        assert s.form == 'es_s_21' and s.text.display_title == 'Devil Bat Ghost'
        assert app.open_move_resource(s.form, s.resource_id, s.almt_member)
        tick(app)
        assert app.move.id == s.resource_id and app.workspace == 'animation'
        assert 'Devil Bat Ghost' in app._move_control_and_title(app.move)
        assert any('bin/chr_s_t.bin' in item for item in labels(app.inspector))
        assert not app.root_data.dirty_files(), app.root_data.dirty_files()
        assert not app.almt_dirty and not ws.dirty
        assert not errors, '\n'.join(errors)
        print('OK: Koma battle/support → original BIN title/ALMT; ALMT → Koma, all read-only')
    finally:
        app.destroy()


if __name__ == '__main__':
    main()
