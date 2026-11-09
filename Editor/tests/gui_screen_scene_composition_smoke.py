"""GUI smoke: scene graph -> placed source sprite -> existing sprite editor -> preview update."""
import sys, time, traceback
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from app.editor import EditorApp
from app.workspaces.screen import ORIGIN


def main(root):
    app = EditorApp(root)
    errors = []
    app.report_callback_exception = lambda *exc: errors.append(''.join(traceback.format_exception(*exc)))
    try:
        for _ in range(15):
            app.update()
            time.sleep(.025)
        app.show_workspace('screen')
        w = app.suite['screen']
        assert w.mode.get() == 'Scenes'
        assert len(w._scene_by_id) == 46
        assert w.scene_id == 3
        assert len(w._scene_widgets) == 8
        assert w.tree.exists('scene:21')
        assert w.tree.exists('edge:3:0')
        selected = w._scene_widgets[0]
        assert selected.dtx_path.endswith('top_button00.dtx')
        # Pick a real opaque source pixel (not a fabricated rectangle).
        point = next(( (x, y) for y in range(selected.image.height)
                     for x in range(selected.image.width)
                     if selected.image.getpixel((x, y))[3] > 0), None)
        assert point is not None
        local_x, local_y = point
        w._scene_press(selected.image_x + local_x,
                       ORIGIN[selected.screen][1] + selected.image_y + local_y)
        assert w.selected_widget_id is not None  # overlapping sprite wins if any
        w.selected_widget_id = selected.spec['id']
        base_file = app.root_data.read(selected.dtx_path)
        w._edit_selected_widget()
        app.update()
        assert app.workspace == 'sprite', app.workspace
        assert app.sprite_path == selected.dtx_path, app.sprite_path
        assert app.frame_i == selected.frame, (app.frame_i, selected.frame)
        pieces = app.sprite_d.frames[selected.frame].pieces
        assert pieces
        pieces[0].x += 1 if pieces[0].x < 127 else -1
        app.mark_sprite()
        app.apply_sprite()  # stages byte changes inside DataRoot; never save original files
        assert app.root_data.read(selected.dtx_path) != base_file
        app.show_workspace('screen')
        app.update()
        assert w.scene_id == 3
        assert len(w._scene_widgets) == 8
        assert not errors, '\n'.join(errors)
        # Secondary scene rendering includes four original J-Arena widget sources.
        w.load_scene(21)
        app.update()
        assert len(w._scene_widgets) == 4
        assert [v.frame for v in w._scene_widgets] == [12, 13, 14, 15]
        assert not errors, '\n'.join(errors)
        print('OK: graph, alpha selection, source sprite editor, staged apply, refresh, J-Arena scene')
    finally:
        app.destroy()


if __name__ == '__main__':
    main(sys.argv[1])
