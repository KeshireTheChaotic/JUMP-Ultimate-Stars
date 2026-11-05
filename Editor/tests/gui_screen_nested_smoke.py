"""GUI regression for valid nested menu sprites and frame selection.

Usage: xvfb-run -a python tests/gui_screen_nested_smoke.py DATA_ROOT
"""
import sys
import time
import traceback
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp


def main():
    if len(sys.argv) != 2:
        raise SystemExit('Pass extracted data root')
    app = EditorApp(sys.argv[1])
    errors = []
    app.report_callback_exception = lambda *exc: errors.append(''.join(traceback.format_exception(*exc)))
    try:
        for _ in range(6):
            app.update()
            time.sleep(.04)
        app.show_workspace('screen')
        w = app.suite['screen']
        parent = 'deckmake/deckmake.aar'
        child = 'deckmake/deckmake.aar|deckmake/edit_obj.aar'
        assert w.tree.exists(parent)
        w.tree.focus(parent)
        w._expand()                          # lazy nested member expansion
        assert w.tree.exists(child)
        w.tree.selection_set(child)
        w._browse()                          # browse exactly the nested path
        app.update()
        assert w.layers == [], 'Nested object should not need ALTM layers'
        assert w.sprite_info is not None and w.sprite_info.frame_count == 82, w.sprite_error
        assert w.sprite_image is not None
        first = w.sprite_image
        w.sprite_frame.set('1')
        w._frame_changed()
        app.update()
        assert w.sprite_image is not None and w.sprite_image != first
        # Selecting the ALMT partner should retain the matching sprite preview.
        w.res_tree.selection_set('1')
        w._select_resource()
        assert w.sprite_image is not None and w.sprite_info.frame_count == 82
        w.filter_var.set('edit_obj.aar')
        app.update()
        assert w.tree.exists('deckmake/deckmake.aar|deckmake/edit_obj.aar')
        w.load('JArena/JArena.aar|JArena/arena_top_obj.aar')
        app.update()
        assert w.sprite_info is not None and w.sprite_info.frame_count == 23
        w.load('battle/ChrWin.aar|battle/chr/bb_b_01.aar')
        app.update()
        assert w.sprite_info is not None and not w.sprite_info.embedded
        w.load('title/title.aar')
        app.update()
        assert len(w.layers) == 4
        assert w.sprite_image is None
        assert not errors, '\n'.join(errors)
        print('OK: nested sprite preview, frame selection, search, external DSIG pairing, normal backgrounds')
    finally:
        app.destroy()


if __name__ == '__main__':
    main()
