"""Synthetic Tk Level-editing smoke test; no commercial game data required.

Windows: py -3 tests\\gui_level_smoke.py
Linux CI: xvfb-run -a python tests/gui_level_smoke.py
"""
import sys
import time
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp
from jus_formats import alar, altm, dsig
from jus_formats.sprite import write_tiled4
from jus_package.project import DataRoot


def make_data(root: Path):
    (root / 'stage').mkdir()
    (root / 'chr').mkdir()
    m = altm.AltmFile(width=8, height=8,
                      entries=[int((x + y) % 2 == 0) for y in range(8) for x in range(8)])
    image = dsig.DsigFile(1, dsig.MODE_TILED4, 0, 8, 16, [list(range(16))],
                          write_tiled4([1] * 64, 8, 8) + write_tiled4([7] * 64, 8, 8))
    bg = alar.Archive(entries=[alar.Entry('bg_aa_00.atm', m.build(), 0x46000001),
                                  alar.Entry('bg_aa_00.dig', image.build(), 0x42000001)]).build()
    stage = alar.Archive(entries=[alar.Entry('stage/bg_aa.aar', bg, 0x47000001)]).build()
    (root / 'stage/stage.aar').write_bytes(stage)
    dummy = alar.Archive(entries=[alar.Entry('dummy.bin', b'abcd')]).build()
    (root / 'chr/ChrArc.aar').write_bytes(alar.Archive(
        entries=[alar.Entry('chr/aa_b_01.aar', dummy, 0x47000001)]).build())


def main():
    with tempfile.TemporaryDirectory() as data_tmp:
        data = Path(data_tmp)
        make_data(data)
        app = EditorApp(str(data))
        try:
            for _ in range(20):
                app.update()
                time.sleep(0.05)
            w = app.suite['level']
            app.show_workspace('level')
            w.load('bg_aa')
            assert w.sel_layer is not None, app.status.get()
            before = w.sel_layer.map.build()
            first = w.sel_layer.map.get(0, 0)
            w._set_brush(first)
            w.brush = 0 if (first & 0x3ff) else 1
            w.tool.set('pencil')
            w._press(1, 1, None)
            w._release(1, 1, None)
            assert w.dirty and w.sel_layer.map.build() != before
            app.undo()
            assert w.sel_layer.map.build() == before and not w.dirty
            app.redo()
            assert w.dirty
            w.apply()
            assert not w.dirty and app.root_data.dirty_files()
            with tempfile.TemporaryDirectory() as out_tmp:
                app.root_data.save(out_tmp)
                new = DataRoot(Path(out_tmp)).read(w.sel_layer.atm_path)
                assert altm.parse(new).get(0, 0) == w.brush
            print('OK: Level paint → undo/redo → Apply → Save → reload')
        finally:
            app.destroy()


if __name__ == '__main__':
    main()
