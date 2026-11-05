"""Synthetic Screen workspace layout-panel selection smoke for xvfb-run."""
import sys
import tempfile
from pathlib import Path
import struct
sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp
from jus_formats.alar import Archive, Entry


def main():
    desc = struct.pack('<HBB', 0, 8, 5) + struct.pack('<HBB', 6, 6, 2)
    aux = bytes(14)
    layout = b'DSTX\x01\x06' + struct.pack('<HH', 2, 12 + len(desc) + len(aux)) + desc + b'\0\0' + aux + b'DSIG'
    with tempfile.TemporaryDirectory() as td:
        root = Path(td)
        (root / 'deckmake').mkdir()
        (root / 'chr').mkdir()
        (root / 'deckmake/deckmake.aar').write_bytes(Archive(entries=[Entry('deckmake/list02.dtx', layout, 0x40000001)]).build())
        dummy = Archive(entries=[Entry('dummy.bin', b'abcd')]).build()
        (root / 'chr/ChrArc.aar').write_bytes(Archive(entries=[Entry('chr/aa_b_01.aar', dummy, 0x47000001)]).build())
        app = EditorApp(str(root))
        try:
            import time
            for _ in range(12):
                app.update()
                time.sleep(.04)
            app.show_workspace('screen')
            w = app.suite['screen']
            w.load('deckmake/deckmake.aar')
            row = w.res_tree.item('0', 'values')
            assert '2 tile panels' in row[3], row
            w.res_tree.selection_set('0')
            w._select_resource()
            assert w.selected_resource == 0
            app.update()
            print('OK: Screen layout selected, parsed, and displayed read-only')
        finally:
            app.destroy()


if __name__ == '__main__':
    main()
