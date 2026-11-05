"""Synthetic GUI Missions smoke: xvfb-run -a python tests/gui_missions_smoke.py"""
import sys
import time
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp
from jus_formats.alar import Archive, Entry
from jus_formats.progression import GalaxyGraph
from jus_package.project import DataRoot
from jus_package.progression import GRAPH
from test_progression import definition_table, galaxy_graph


def make_data(root):
    (root/'chr').mkdir()
    (root/'bin').mkdir()
    (root/'jgalaxy').mkdir()
    dummy = Archive(entries=[Entry('dummy.bin', b'abcd')]).build()
    (root/'chr/ChrArc.aar').write_bytes(Archive(entries=[Entry('chr/aa_b_01.aar', dummy, 0x47000001)]).build())
    (root/'bin/koma.bin').write_bytes(bytes(12*890))
    galaxy = Archive(version=3, entries=[
        Entry('jgalaxy/jgalaxy.bin', galaxy_graph()),
        Entry('jgalaxy/mission.bin', definition_table(['Mission']), 0x10000),
        Entry('jgalaxy/battle.bin', definition_table(['Battle']), 0x10001),
    ]).build()
    (root/'jgalaxy/jgalaxy.aar').write_bytes(galaxy)


def main():
    with tempfile.TemporaryDirectory() as td:
        data = Path(td)
        make_data(data)
        app = EditorApp(str(data))
        try:
            for _ in range(12):
                app.update()
                time.sleep(.04)
            w = app.suite['missions']
            app.show_workspace('missions')
            assert w.catalog is not None, w.load_error
            w.node_id = 0
            w.refresh()
            original = w.catalog.graph.build()
            assert not w.dirty
            w.slot = 0
            w.kind_var.set('Koma')
            w.koma_var.set('522')
            w.update_reward()
            assert w.dirty, app.status.get()
            assert w.catalog.graph.get(0).rewards[0].koma_id == 522
            app.undo()
            assert not w.dirty and w.catalog.graph.build() == original
            app.redo()
            assert w.dirty and w.catalog.graph.get(0).rewards[0].koma_id == 522
            w.apply()
            assert not w.dirty and app.root_data.dirty_files()
            with tempfile.TemporaryDirectory() as out:
                app.root_data.save(out)
                blob = DataRoot(out).read(GRAPH)
                assert GalaxyGraph.parse(blob).get(0).rewards[0].koma_id == 522
            print('OK: Mission reward → Undo/Redo → Apply → Save → reload')
        finally:
            app.destroy()


if __name__ == '__main__':
    main()
