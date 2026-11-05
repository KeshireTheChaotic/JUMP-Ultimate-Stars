"""Interactive-window smoke test against the real data (not part of unittest discovery).

    py -3 tests\\gui_smoke.py [data root]

Opens the editor, drives the Animation, Sprite and Archive workspaces
(selection, key retime + undo, piece nudge + undo, pursuer preview) and
reports any Tk callback exceptions.  Exit code 1 on failure.
"""
from __future__ import annotations

import os
import sys
import time
import traceback
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent))

from app.editor import EditorApp  # noqa: E402

DATA = sys.argv[1] if len(sys.argv) > 1 else os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data')


def main():
    errors = []
    app = EditorApp(DATA)
    app.report_callback_exception = lambda *exc: errors.append(''.join(traceback.format_exception(*exc)))

    def pump(t=0.3):
        end = time.time() + t
        while time.time() < end:
            app.update()
            time.sleep(0.02)

    checks = []
    pump(0.8)
    app.select_container('chr/ChrArc.aar|chr/bb_b_01.aar', 'bb_b_01')
    pump(0.5)
    app.moves_tree.selection_set('3')
    app.moves_tree.focus('3')
    app.on_move_select()
    pump(0.3)
    bi = next(r for r in app.timeline.rows if r.get('label') == 'BoundsIndex')
    t0 = bi['keys'][1][0]
    app._timeline_select(bi, t0, bi['keys'][1][1])
    before = [k.tick for k in app._track().keys]
    app._timeline_move_key(bi, t0, t0 + 1)
    app.undo()
    checks.append(('retime+undo', [k.tick for k in app._track().keys] == before))
    marker = next((r for r in app.timeline.rows if r.get('label') == 'Marker'), None)
    checks.append(('marker jump arc', bool(marker and marker.get('arcs'))))
    app.select_container('chr/ChrArc.aar|chr/dg_b_01.aar', 'dg_b_01')
    pump(0.5)
    app.moves_tree.selection_set('24')
    app.moves_tree.focus('24')
    app.on_move_select()
    app.set_tick(8)
    pump(0.3)
    checks.append(('pursuer rows', any(r.get('id') == ('virt', 'pursuer') for r in app.timeline.rows)))
    app.show_workspace('sprite')
    pump(0.4)
    app.select_frame(20)
    p = app.sprite_d.frames[20].pieces[0]
    app._sprite_press(p.x + 1, p.y + 1, None)
    x0 = app._piece().x
    app.nudge_piece(2, 0)
    moved = app._piece().x
    app.undo()
    checks.append(('nudge+undo', moved == x0 + 2 and app._piece().x == x0))
    app.show_workspace('archive')
    pump(0.3)
    app.destroy()
    ok = all(c for _, c in checks) and not errors
    for name, c in checks:
        print(('PASS ' if c else 'FAIL ') + name)
    for e in errors:
        print(e)
    return 0 if ok else 1


if __name__ == '__main__':
    sys.exit(main())
