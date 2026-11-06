"""GUI: separate menu-screen backgrounds and sprite-cell atlases."""
import sys, traceback, time
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp

def main(root):
    app=EditorApp(root)
    errors=[]
    app.report_callback_exception=lambda *exc: errors.append(''.join(traceback.format_exception(*exc)))
    try:
        
        for _ in range(12): app.update(); time.sleep(.05)
        app.show_workspace('screen'); w=app.suite['screen']
        assert w.mode.get()=='Screens'
        w.load('title/title.aar')
        assert w.layers and w.sprite_image is None
        w.mode.set('Elements');w._mode_changed();app.update()
        assert w.tree.exists('deckmake/deckmake.aar|deckmake/edit_obj.aar')
        w.load('deckmake/deckmake.aar|deckmake/edit_obj.aar')
        app.update()
        assert w.sprite_info and w.sprite_info.frame_count==82
        assert len(w._atlas_photos)==82,len(w._atlas_photos)
        w.sprite_frame.set('5');w._frame_changed();app.update()
        assert w.sprite_image is not None
        w.load('JArena/JArena.aar|JArena/arena_top_obj.aar')
        app.update()
        assert w.sprite_info.frame_count == 23
        w.load('battle/ChrWin.aar|battle/chr/bb_b_01.aar')
        app.update()
        assert w.sprite_info is not None and not w.sprite_info.embedded
        w.mode.set('Screens'); w._mode_changed(); w.load('title/title.aar'); app.update()
        assert len(w.layers)==4 and w.sprite_image is None
        assert not errors,'\n'.join(errors)
        print('OK: separated screen and element views; 82 cell thumbnails')
    finally: app.destroy()
if __name__=='__main__':main(sys.argv[1])