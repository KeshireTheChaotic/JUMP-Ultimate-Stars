"""End-to-end tree / bottom object edit / undo / nested stage archive save.

Linux: xvfb-run -a python tests/gui_level_workspace_patch_smoke.py
"""
from __future__ import annotations
import sys
import time
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp
from jus_formats import alar, stagephysics
from jus_package.project import DataRoot
from jus_package import progression as prog
from test_level_workspace_authoring import valid_navigation, mob_fixture, bin_fixture
from test_progression import definition_table
from gui_level_smoke import make_data


def main():
    with tempfile.TemporaryDirectory() as temp:
        data = Path(temp)
        make_data(data)
        (data/'bin').mkdir()
        (data/'jgalaxy').mkdir()
        (data/'bin/koma.bin').write_bytes(bytes(890 * 12))
        (data/'jgalaxy/jgalaxy.aar').write_bytes(alar.Archive(entries=[
            alar.Entry('jgalaxy/jgalaxy.bin', valid_navigation()),
            alar.Entry('jgalaxy/mission.bin', definition_table(['Mission'])),
            alar.Entry('jgalaxy/battle.bin', definition_table(['Battle'])),
        ]).build())
        stage_path = data/'stage/stage.aar'
        stage_arc = alar.open_nested(stage_path.read_bytes())
        stage_arc.add(alar.Entry('stage/bg_aa.mob', mob_fixture()))
        stage_arc.add(alar.Entry('stage/bg_aa.bin', bin_fixture()))
        stage_path.write_bytes(stage_arc.build())
        app = EditorApp(str(data))
        try:
            for _ in range(15):
                app.update()
                time.sleep(.01)
            app.show_workspace('level')
            w = app.suite['level']
            assert w.tree.get_children('g:0') == ('l:0',), w.tree.get_children('g:0')
            assert w.tree.get_children('l:0') == ('p:0',)
            assert w.tree.get_children('p:0') == ('n:0',)
            w.tree.selection_set('n:0')
            w.tree.event_generate('<<TreeviewSelect>>')
            app.update()
            assert w.right_tabs.index('current') == 0
            w.load('bg_aa')
            assert w.map_objects.model.m and w.map_objects.model.g
            assert w.map_objects.tree.exists('item:0')
            w.bottom.show('objects')
            w.map_objects.tree.selection_set('item:0')
            w.map_objects.tree.event_generate('<<TreeviewSelect>>')
            app.update()
            before = w.map_objects.model.snapshot()
            w.map_objects.fields['x'].set('33.25')
            w.map_objects.commit()
            assert w.map_objects.model.m.item_candidates[0].pixel_xy[0] == 33.25
            assert w.dirty
            app.undo()
            assert w.map_objects.model.snapshot() == before
            app.redo()
            assert w.map_objects.model.m.item_candidates[0].pixel_xy[0] == 33.25
            w.apply()
            assert not w.dirty
            with tempfile.TemporaryDirectory() as out:
                app.root_data.save(out)
                src = 'stage/stage.aar|stage/bg_aa.mob'
                parsed = stagephysics.parse_mob(DataRoot(out).read(src))
                assert parsed.item_candidates[0].pixel_xy[0] == 33.25
            print('OK: Space → Galaxy → World → Mission and map-object edit → Undo/Redo → Apply → Save')
        finally:
            app.destroy()

if __name__ == '__main__':
    main()
