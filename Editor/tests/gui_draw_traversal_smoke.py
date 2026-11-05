"""Real-data smoke for DrawPrio priority inspector without editing archives.

Usage: python tests/gui_draw_traversal_smoke.py DATA_ROOT
"""
import sys
import time
import traceback
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp


class RecordedInspector:
    def __init__(self):
        self.values = []
        self.messages = []

    def section(self, *args, **kwargs):
        pass

    def value(self, name, value, **kwargs):
        self.values.append((name, value))

    def text(self, value, **kwargs):
        self.messages.append(str(value))

    def buttons(self, *args, **kwargs):
        pass


def main():
    if len(sys.argv) != 2:
        raise SystemExit('Usage: gui_draw_traversal_smoke.py DATA_ROOT')
    app = EditorApp(sys.argv[1])
    errors = []
    app.report_callback_exception = lambda *exc: errors.append(''.join(traceback.format_exception(*exc)))
    try:
        for _ in range(5):
            app.update(); time.sleep(.02)
        app.select_container('chr/ChrArc.aar|chr/dg_b_02.aar', 'dg_b_02')
        app.moves_tree.selection_set('25')
        app.moves_tree.focus('25')
        app.on_move_select()
        app.set_tick(4)
        app.update()
        rows = [r for r in app.timeline.rows if r.get('spawn') is not None]
        assert rows, 'no GenerateID events in sample'
        ins = RecordedInspector()
        for row in rows:
            app._inspect_spawn(ins, row)
        matches = [v for n,v in ins.values if n == 'Renderer link priority']
        assert matches, 'renderer-priority diagnostic not exposed in Inspector'
        assert any('high-first draw callbacks' in t for t in ins.messages)
        assert not errors, '\n'.join(errors)
        print('OK: DrawPrio stored-priority diagnostic in real Animation Inspector')
    finally:
        app.destroy()


if __name__ == '__main__':
    main()
