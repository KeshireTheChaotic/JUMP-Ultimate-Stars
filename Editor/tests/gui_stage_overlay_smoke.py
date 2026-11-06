"""GUI regression for stage-space background, author markers, paths, colliders.

Linux: xvfb-run -a python tests/gui_stage_overlay_smoke.py
Optional preview: JUS_STAGE_OVERLAY_SCREENSHOT=/mnt/data/Stage_Overlay_Preview.png
"""
from __future__ import annotations
import os
import struct
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp
from jus_formats import alar, altm
from test_level_workspace_authoring import mob_fixture, bin_fixture
from gui_level_smoke import make_data


def main():
    with tempfile.TemporaryDirectory() as temp:
        root = Path(temp)
        make_data(root)
        path = root/'stage/stage.aar'
        a = alar.open_nested(path.read_bytes())
        b = bytearray(bin_fixture())
        struct.pack_into('<hh', b, 24, -24, 4)
        b[24 + 9] = 1
        a.add(alar.Entry('stage/bg_aa.bin', bytes(b)))
        a.add(alar.Entry('stage/bg_aa.mob', mob_fixture()))
        path.write_bytes(a.build())
        app = EditorApp(str(root))
        try:
            app.geometry('1440x920')
            app.update()
            app.show_workspace('level')
            app.update()
            ws = app.suite['level']
            ws.load('bg_aa')
            app.update()
            assert ws._layer_position(ws.layers[0]) == (-24., 4.)
            assert ws.visible[ws.layers[0].name], 'enabled BG0 must start visible'
            assert ws.preview_collisions.get() and ws.preview_paths.get()
            assert ws.map_objects.model.m and ws.map_objects.model.g
            canvas = ws.view.canvas
            paths = [i for i in canvas.find_all()
                     if canvas.type(i)=='line' and canvas.itemcget(i,'dash') == '2 3']
            assert paths, 'expected dotted movement trajectory'
            x0,y0=ws.view.to_screen(40,50)
            x1,y1=ws.view.to_screen(150,120)
            assert any(len(canvas.coords(i))==4 and
                       all(abs(a-b)<1 for a,b in zip(canvas.coords(i), (x0,y0,x1,y1)))
                       for i in paths), 'floor route must match world coords without BG offset'
            assert any(canvas.type(i)=='rectangle' and
                       all(abs(a-b)<1 for a,b in zip(canvas.coords(i),
                                    (*ws.view.to_screen(10,20), *ws.view.to_screen(40,30))))
                       for i in canvas.find_all()), 'collider bounds must match 24.8 world pixels'
            ws.tool.set('select')
            ws._press(10,20,None)
            assert ws.map_objects.selected == ('item', 0), ws.map_objects.selected
            ws._press(34,25,None)
            assert ws.map_objects.selected == ('collider', 0), ws.map_objects.selected
            ws.select_map_object('path',0)
            assert ws.map_objects.selected == ('path',0)
            # Editing is staged: updating a waypoint moves its dotted line on
            # the very next render, with no Apply/Save round-trip required.
            ws.map_objects.fields['x'].set('180')
            ws.map_objects.fields['y'].set('140')
            ws.map_objects.commit()
            app.update()
            xp,yp=ws.view.to_screen(180,140)
            assert any(len(canvas.coords(i))==4 and
                       abs(canvas.coords(i)[-2]-xp)<1 and abs(canvas.coords(i)[-1]-yp)<1
                       and canvas.itemcget(i,'dash')=='2 3'
                       for i in canvas.find_all() if canvas.type(i)=='line'), 'updated path not rendered'
            if os.environ.get('JUS_STAGE_OVERLAY_SCREENSHOT'):
                from PIL import ImageGrab
                ws.frame_all_objects()
                app.update_idletasks()
                x,y=app.winfo_rootx(), app.winfo_rooty()
                ImageGrab.grab((x,y,x+app.winfo_width(),y+app.winfo_height())).save(
                    os.environ['JUS_STAGE_OVERLAY_SCREENSHOT'])
            print('OK: BG world origin, dotted route, collider bounds, picking, and staged waypoint redraw')
        finally:
            app.destroy()

if __name__=='__main__':
    main()
