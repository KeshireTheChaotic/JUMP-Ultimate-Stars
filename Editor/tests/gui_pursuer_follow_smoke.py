"""Real-data pursuer GUI smoke: xvfb-run -a python tests/gui_pursuer_follow_smoke.py [data-root]."""
import os
import sys
import time
import traceback
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp
from jus_package import effectlinks


def main():
    data = sys.argv[1] if len(sys.argv) > 1 else os.environ.get('JUS_DATA')
    if not data or not Path(data, 'chr', 'ChrArc.aar').is_file():
        raise SystemExit('Set JUS_DATA to the extracted game data root')
    errors = []
    app = EditorApp(data)
    app.report_callback_exception = lambda *exc: errors.append(''.join(traceback.format_exception(*exc)))
    try:
        for _ in range(12):
            app.update()
            time.sleep(.04)
        app.select_container('chr/ChrArc.aar|chr/dg_b_01.aar', 'dg_b_01')
        app.moves_tree.selection_set('24')
        app.moves_tree.focus('24')
        app.on_move_select()
        app.set_tick(8)
        app.pursuer_motion_preview.set('Follow (traced)')
        app.pursuer_start_seed.set('Origin (0,0)')
        app.redraw_view()
        for _ in range(5):
            app.update()
            time.sleep(.02)
        events = app._pursuer_events
        assert events and events[0].target_xy == (0, -53), events
        pos = effectlinks.pursuer_position_at(events, app.tick, app._animation_origin, seed='origin')
        assert pos and pos.xy[1] > -53, pos
        hud = app.view.hud.cget('text')
        assert 'follow (traced; seed assumed)' in hud, hud
        app.pursuer_start_seed.set('First target')
        app.redraw_view()
        app.update()
        app.pursuer_motion_preview.set('Target only')
        app.redraw_view()
        app.update()
        assert 'target only (reference)' in app.view.hud.cget('text')
        assert not errors, '\n'.join(errors)
        print('OK: real-data pursuer follow/seed/target-only modes')
    finally:
        app.destroy()


if __name__ == '__main__':
    main()
