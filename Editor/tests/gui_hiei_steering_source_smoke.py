"""Original Hiei True Dragon source graphics and native code Inspector smoke.

This renders only the authentic initial +0x0C source frame in the viewport.
No fake curved dragon trail, D-pad samples, screenshot, or on-hit effect.
"""
from __future__ import annotations
import os,sys,traceback
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp

DATA=Path(os.environ.get('JUS_DATA',r'D:\Library\Development\JUS\Data'))


def main():
    app=EditorApp(str(DATA))
    errors=[]
    app.report_callback_exception=lambda *args:errors.append(
        ''.join(traceback.format_exception(*args)))
    try:
        for _ in range(7):app.update()
        app.select_container('chr/ChrArc.aar|chr/yh_b_03.aar','yh_b_03')
        for _ in range(4):app.update()
        idx=next(i for i,m in enumerate(app.almt.moves) if m.id==0x9832C)
        app.populate_moves(select=idx)
        for _ in range(4):app.update()
        events=[e for e in app._shot_events_current() if e.handler==5]
        assert len(events)==1,events
        ev=events[0]
        assert (ev.tick,ev.record_index,ev.launch_x,ev.launch_y)==(34,2,32,-24)
        assert ev.directly_constructed_animations==(0x98357,)
        assert app.show_shot_repeat_model.get()
        assert 0x98357 in app._effect_moves
        actual=[]
        original=app._draw_node_sprites
        def trace(vp,move,tick,base=(0,0),alpha=None,info=None,names=None):
            if move.id==0x98357:
                rows=tuple((st.get('TextureID'),st.get('BoundsIndex'))
                           for st in app._state(move,tick).values()
                           if 'TextureID' in st)
                actual.append((move.id,tick,rows,base))
            return original(vp,move,tick,base,alpha,info,names)
        app._draw_node_sprites=trace
        app.show_workspace('animation')
        app.set_tick(33)
        app._draw_animation(app.view)
        assert not actual,actual
        actual.clear()
        app.set_tick(34)
        app._draw_animation(app.view)
        assert (0x98357,0,((0x98341,1),),(32,-24)) in actual,actual
        shotrow=next(r for r in app.timeline.rows if r.get('derived')=='shot')
        app.sel_virtual=shotrow
        app.refresh_inspector()
        app.update()
        texts=[]
        technical=[]
        def walk(w):
            for child in w.winfo_children():
                try:texts.append(str(child.cget('text')))
                except Exception:pass
                detail=getattr(child, '_technical_note', None)
                if detail:
                    technical.append(detail)
                walk(child)
        walk(app.inspector.inner)
        combined='\n'.join(texts)
        notes='\n'.join(technical)
        for term in ('128 saved positions','0x098357','0x098358',
                     '0x098359','D-pad'):
            assert term.lower() in combined.lower(),(term,combined[:9000])
        for term in ('FUN_0216BE0C','FUN_021593E8','0x24'):
            assert term.lower() in notes.lower(),(term,notes[:9000])
            assert term.lower() not in combined.lower(),(term,combined[:9000])
        assert not app.root_data.dirty_files()
        assert not app.almt_dirty
        assert not errors,'\n'.join(errors)
        print('OK: Hiei True Dragon source head 0x98357 real frame1 at tick34; '
              'D-pad, 128-sample history, 12-child, terminal 0x98359 and status '
              '0x24 code evidence in Inspector; no game assets changed')
    finally:
        app.destroy()


if __name__=='__main__':
    main()
