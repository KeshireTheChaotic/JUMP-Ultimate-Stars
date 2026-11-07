"""GUI smoke: original ChrBin shot and collision record inspector, read-only.

Run: py -3 tests/gui_shot_inspector_smoke.py
No source asset modifications, generated thumbnails or screenshot substitutes.
"""
import os
from pathlib import Path
import sys
import traceback
import time

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp
from jus_formats import chrbin


def main():
    root = os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data')
    assert (Path(root) / 'chr/ChrBin.aar').is_file(), root
    app = EditorApp(root)
    errors = []
    app.report_callback_exception = lambda *exc: errors.append(
        ''.join(traceback.format_exception(*exc)))
    try:
        for _ in range(12):
            app.update()
            time.sleep(.04)
        app.show_workspace('archive')
        app.select_container('chr/ChrBin.aar')
        for _ in range(6):
            app.update()
        entries = app.root_data.archive('chr/ChrBin.aar').entries
        for name,kind in [('chr/shot/bb_b_01.bin', 'shot'),
                          ('chr/col/bb_b_01.bin', 'col')]:
            idx = next(i for i,e in enumerate(entries) if e.name == name)
            assert chrbin.kind_of(entries[idx].name) == kind
            app.member_tree.selection_set(str(idx))
            app.member_tree.focus(str(idx))
            app._member_details()
            app.update()
        assert not errors, '\n'.join(errors)
        print('OK: GUI Archive shot/col typed inspectors opened original records')
    finally:
        app.destroy()


if __name__ == '__main__':
    main()
