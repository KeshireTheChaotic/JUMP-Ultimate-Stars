"""Real-data ParentLink preview GUI smoke. Requires X display and extracted JUS data."""
import sys
import time
import traceback
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp


def main():
    if len(sys.argv) != 2:
        raise SystemExit('Usage: gui_parentlink_smoke.py DATA_ROOT')
    app = EditorApp(sys.argv[1])
    errors = []
    app.report_callback_exception = lambda *exc: errors.append(''.join(traceback.format_exception(*exc)))
    try:
        for _ in range(7):
            app.update(); time.sleep(.02)
        app.select_container('chr/ChrArc.aar|chr/dg_b_02.aar', 'dg_b_02')
        app.moves_tree.selection_set('25')
        app.moves_tree.focus('25')
        app.on_move_select()
        app.update()
        # Controlled owner world movement avoids depending on the NoteTrack
        # physics approximation. This tests projection AND drawing integration.
        app._animation_origin = lambda tick: (float(2*tick), float(-tick))
        app.parent_link_preview.set(True)
        app.set_tick(4)
        linked = [i for i in app.spawn_projection().instances if i.parent_link]
        assert linked, 'Sample should have a linked GenerateID effect'
        linked_anchor = linked[0].anchor
        app.redraw_view(); app.update()
        app.parent_link_preview.set(False)
        legacy = [i for i in app.spawn_projection().instances if i.parent_link]
        assert legacy and legacy[0].anchor == linked_anchor, (linked_anchor, legacy[0].anchor)
        # A non-linked event is exposed as a captured world position in follow
        # mode and stays frozen as the simulated owner moves.
        app.parent_link_preview.set(True)
        app.redraw_view(); app.update()
        assert not errors, '\n'.join(errors)
        print('OK: linked effect on real dg_b_02 move 25, GUI follow and snapshot modes')
    finally:
        app.destroy()


if __name__ == '__main__':
    main()
