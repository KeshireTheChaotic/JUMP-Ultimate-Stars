"""Synthetic GUI Missions smoke (missions live in the Level workspace's right inspector):
xvfb-run -a python tests/gui_missions_smoke.py"""
import sys
import time
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp
from jus_formats.alar import Archive, Entry
from jus_formats.progression import GalaxyGraph, DefinitionTable
from jus_package.project import DataRoot
from jus_package.progression import GRAPH, MISSIONS
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
            lv = app.suite['level']
            app.show_workspace('level')
            w = lv.missions
            assert w.catalog is not None, w.load_error
            assert lv.tree.exists('n:0'), 'mission node missing from the Level browser'
            lv.tree.selection_set('n:0')
            app.update()
            assert w.node_id == 0 and lv.right_tabs.index('current') == 0
            original = w.catalog.graph.build()
            assert not lv.dirty
            w.slot = 0
            w.kind_var.set('Koma')
            w.koma_var.set('522')
            w.update_reward()
            assert lv.dirty, app.status.get()
            assert w.catalog.graph.get(0).rewards[0].koma_id == 522
            app.undo()
            assert not lv.dirty and w.catalog.graph.build() == original
            app.redo()
            assert lv.dirty and w.catalog.graph.get(0).rewards[0].koma_id == 522
            before_params = w.catalog.missions.build()
            w.rule_var.set('7')
            w.opponents_var.set('3')
            w.time_var.set('1200')
            w.update_battle_parameters()
            record = w.catalog.missions.get(0)
            assert (record.rule, record.opponents, record.time_value) == (7, 3, 1200)
            app.undo()
            assert w.catalog.missions.build() == before_params
            app.redo()
            assert w.catalog.missions.get(0).opponents == 3
            w.title_var.set('ラオウの城')
            w.rename_definition()
            assert w.catalog.missions.get(0).name == 'ラオウの城'
            lv.apply()
            assert not lv.dirty and app.root_data.dirty_files()
            with tempfile.TemporaryDirectory() as out:
                app.root_data.save(out)
                root = DataRoot(out)
                blob = root.read(GRAPH)
                assert GalaxyGraph.parse(blob).get(0).rewards[0].koma_id == 522
                battle = DefinitionTable.parse(root.read(MISSIONS)).get(0)
                assert (battle.name, battle.rule, battle.opponents, battle.time_value) == (
                    'ラオウの城', 7, 3, 1200)
            print('OK: Level ▸ CP932 names / battle settings / rewards → Undo/Redo → Apply → Save')
        finally:
            app.destroy()


if __name__ == '__main__':
    main()
