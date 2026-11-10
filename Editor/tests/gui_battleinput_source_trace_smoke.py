"""Real Tk smoke: native input raw predicates appear on actual ALMT moves.

No screenshot substitutions, no files modified.
"""
from __future__ import annotations
import os
import sys
import traceback
from pathlib import Path

sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp
from jus_formats import battleinput

DATA=Path(os.environ.get('JUS_DATA',r'D:\Library\Development\JUS\Data'))


def descendants(w):
    for child in w.winfo_children():
        yield child
        yield from descendants(child)


def all_inspector_text(ins):
    bits=[]
    for child in descendants(ins.inner):
        try:
            bits.append(str(child.cget('text')))
        except Exception:
            pass
    return '\n'.join(bits)


def main():
    app=EditorApp(str(DATA));errors=[]
    app.report_callback_exception=lambda *args:errors.append(
        ''.join(traceback.format_exception(*args)))
    try:
        for _ in range(6):app.update()
        app.select_container('chr/ChrArc.aar|chr/bb_b_01.aar','bb_b_01')
        for _ in range(4):app.update()
        for offset,expected in [(0x1E,'input & 0x80'),
                                (0x22,'(input & 0x81) == 0x81'),
                                (0x24,'(input & 0x82) == 0x82'),
                                (0x26,'input & 0x80'),
                                (0x2B,'input & 0x40'),
                                (0x2C,'(input & 0x41) == 0x41')]:
            idx=next(i for i,m in enumerate(app.almt.moves) if m.id&255==offset)
            app.populate_moves(select=idx)
            for _ in range(2):app.update()
            text=all_inspector_text(app.inspector)
            assert expected in text,(offset,expected,text[:4500])
            assert 'Original input to ALMT' in text or 'ORIGINAL INPUT TO ALMT' in text,text[:500]
            assert app.move.id&255==offset
        idx=next(i for i,m in enumerate(app.almt.moves) if m.id&255==0x18)
        app.populate_moves(select=idx)
        for _ in range(2):app.update()
        text=all_inspector_text(app.inspector)
        assert 'KEYINPUT 0x0004' in text,text[:4500]
        assert 'HwPad 0x4000' in text,text[:4500]
        assert 'actor+0x6C bit 0x1000' in text,text[:4500]
        assert 'No verified HwPad 0x4000' in text,text[:4500]

        idx=next(i for i,m in enumerate(app.almt.moves) if m.id&255==0x03)
        app.populate_moves(select=idx)
        for _ in range(2):app.update()
        text=all_inspector_text(app.inspector)
        assert 'ENGINE-DRIVEN MOVEMENT STATE' in text,text[:4500]
        assert '0215E9A0' in text and '0215EAEC' in text,text[:4500]
        assert 'No native input-selector mapping established' in text,text[:4500]

        idx=next(i for i,m in enumerate(app.almt.moves) if m.id&255==0)
        app.populate_moves(select=idx)
        for _ in range(3):app.update()
        text=all_inspector_text(app.inspector)
        assert 'UNNAMED BASE ACTION' in text,text[:1000]
        assert '0x00' in text,text[:1300]
        assert not errors,'\n'.join(errors)
        assert app.root_data.dirty_files()==[]
        assert not app.almt_dirty
        print('OK: original normal-action and special button bitmask predicates in Editor Inspector; '
              'unnamed action remains unnamed')
    finally:
        app.destroy()


if __name__=='__main__':
    main()
