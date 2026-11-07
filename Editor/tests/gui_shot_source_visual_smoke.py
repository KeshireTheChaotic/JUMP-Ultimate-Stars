"""Real Tk smoke for note-driven shot ALMT source frames, no synthetic screenshots.

Run on Windows desktop:
    py -3 tests/gui_shot_source_visual_smoke.py
"""
from __future__ import annotations

import os
import sys
import traceback
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\Data'))


def main():
    app = EditorApp(str(DATA))
    errors = []
    app.report_callback_exception = lambda *args: errors.append(
        ''.join(traceback.format_exception(*args)))
    try:
        for _ in range(8):
            app.update()
        app.select_container('chr/ChrArc.aar|chr/bb_b_01.aar', 'bb_b_01')
        for _ in range(5):
            app.update()
        m = next(i for i, m in enumerate(app.almt.moves) if m.id == 0x8412B)
        app.populate_moves(select=m)
        for _ in range(4):
            app.update()
        events = app._shot_events_current()
        assert [(e.tick, e.record_index) for e in events] == [(46, 5)], events
        assert [hex(x) for x in events[0].directly_constructed_animations] == [
            '0x84180', '0x84182']
        expected = {0x84180, 0x84181, 0x84182}
        assert expected.issubset(app._effect_moves)
        assert app.show_shot_sources.get(), 'source preview should default on'
        actual = []
        original = app._draw_node_sprites
        def traced(vp, move, tick, base=(0, 0), alpha=None, info=None, names=None):
            if move.id in expected:
                st = app._state(move, tick)
                actual.append((move.id, tick, tuple(
                    (v.get('TextureID'), v.get('BoundsIndex'))
                    for v in st.values() if v.get('TextureID') is not None), base))
            return original(vp, move, tick, base, alpha, info, names)
        app._draw_node_sprites = traced
        app.show_workspace('animation')
        assert app.move and app.move.id == 0x8412B, ('selection', getattr(app.move, 'id', None))
        app.set_tick(45)
        # Call the actual viewport drawing callback synchronously: redraw_view
        # normally schedules it, but Tk queue timing must not be a smoke-test
        # prerequisite when other GUI tests have run just beforehand.
        app._draw_animation(app.view)
        assert not actual, actual
        app.set_tick(46)
        assert app.move and app.move.id == 0x8412B, ('selection changed', getattr(app.move,'id',None))
        app._draw_animation(app.view)
        assert (0x84180, 0, ((0x84180, 0),), (46, -28)) in actual, actual
        assert (0x84182, 0, ((0x84180, 4),), (22, -28)) in actual, actual
        assert not any(a[0] == 0x84181 for a in actual), actual
        assert app.show_shot_repeat_model.get(), 'source repeat projection should be enabled'
        actual.clear()
        app.set_tick(49)  # 3 original no-contact updater calls after birth
        app._draw_animation(app.view)
        assert (0x84181, 0, ((0x84180, 2),), (40.75, -28.0)) in actual,actual
        actual.clear()
        app.set_tick(53)  # 7 native updates; source body emitted twice
        app._draw_animation(app.view)
        assert (0x84181, 4, ((0x84180, 3),), (65.75, -28.0)) in actual,actual
        assert (0x84181, 0, ((0x84180, 2),), (41.75, -28.0)) in actual,actual
        assert len(set(a for a in actual if a[0] == 0x84181)) == 2,actual
        shotrow = next(r for r in app.timeline.rows if r.get('derived') == 'shot')
        app.sel_virtual=shotrow
        app.set_tick(53)
        app.refresh_inspector()
        app.update()
        text_parts=[]
        def walk(w):
            for child in w.winfo_children():
                try:
                    text_parts.append(str(child.cget('text')))
                except Exception:
                    pass
                walk(child)
        walk(app.inspector.inner)
        details='\n'.join(text_parts)
        assert 'original dynamic geometry' in details.lower(),details[:3000]
        assert 'proven source child spacing' in details.lower(),details[:3000]
        assert 'GX textured atlas' in details,details[:2000]
        assert '-24' in details,details[:3000]
        assert 'FUN_0216BA2C' in details,details[:8000]
        assert 'handler01 field roles' in details.lower(),details[:8000]
        assert '0x084181' in details,details[:8000]
        assert 'repeated body segments' in details,details[:8000]
        assert 'NOT contact-gated' in details,details[:8000]
        assert 'NOT runtime expiry' in details,details[:8000]
        assert 'Total +0x10 launches' in details,details[:8500]
        assert '2 (source 0216BA2C counter path)' in details,details[:8500]
        # Original assets remain clean even after source sprite rendering.
        assert not app.root_data.dirty_files(), app.root_data.dirty_files()
        assert not app.almt_dirty
        assert not errors, '\n'.join(errors)
        print('OK: Bo-bobo native source +0x10 real ALMT fragments at ticks49/53 '
              '(3 and 7 updates), 24px spacing; XY explicitly no-contact modeled; '
              'original data unchanged')
    finally:
        app.destroy()


if __name__ == '__main__':
    main()
