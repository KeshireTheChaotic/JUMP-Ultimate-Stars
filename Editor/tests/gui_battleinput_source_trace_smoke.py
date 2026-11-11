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


def all_technical_notes(ins):
    return '\n'.join(getattr(child, '_technical_note', '')
                     for child in descendants(ins.inner))


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
            notes=all_technical_notes(app.inspector)
            assert expected in notes,(offset,expected,notes[:4500])
            assert 'HOW TO USE THIS MOVE' in text,text[:500]
            assert expected not in text  # source bytes are behind Details, not on the main panel
            assert app.move.id&255==offset
        idx=next(i for i,m in enumerate(app.almt.moves) if m.id&255==0x18)
        app.populate_moves(select=idx)
        for _ in range(2):app.update()
        text=all_inspector_text(app.inspector)
        notes=all_technical_notes(app.inspector)
        assert 'Select activates the Ultimate Action.' in text,text[:4500]
        assert 'KEYINPUT 0x0004' in notes,notes[:4500]
        assert 'HwPad 0x4000' in notes,notes[:4500]
        assert 'actor+0x6C bit 0x1000' in notes,notes[:4500]
        assert 'KEYINPUT 0x0004' not in text

        for offset,witness in ((0x00,'0215D2E4'),(0x01,'0215D6F8'),
                               (0x02,'0215D860'),(0x03,'0215E9A0')):
            idx=next(i for i,m in enumerate(app.almt.moves) if m.id&255==offset)
            app.populate_moves(select=idx)
            for _ in range(2):app.update()
            text=all_inspector_text(app.inspector)
            assert 'MOVEMENT AND STANCE' in text,text[:2500]
            assert witness in all_technical_notes(app.inspector),(offset,witness)
        for offset,witness in ((0x0B,'0215AF34'),(0x33,'Grabbed-victim reaction pose')):
            idx=next(i for i,m in enumerate(app.almt.moves) if m.id&255==offset)
            app.populate_moves(select=idx)
            for _ in range(2):app.update()
            text=all_inspector_text(app.inspector)
            assert 'REACTION ANIMATION' in text,text[:2500]
            assert witness in text or witness in all_technical_notes(app.inspector),(offset,witness,text[:3500])
        idx=next(i for i,m in enumerate(app.almt.moves) if m.id&255==0x09)
        app.populate_moves(select=idx)
        for _ in range(3):app.update()
        text=all_inspector_text(app.inspector)
        assert 'OTHER ANIMATION' in text,text[:1600]
        assert '0x09' in text,text[:1900]
        assert not errors,'\n'.join(errors)
        assert app.root_data.dirty_files()==[]
        assert not app.almt_dirty
        print('OK: physical attack predicates, 4 D-pad/stance actions, reactions '
              'and unnamed script entries render in the original Editor Inspector')
    finally:
        app.destroy()


if __name__=='__main__':
    main()
