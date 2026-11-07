"""Synthetic Screen workspace layout-panel selection smoke for xvfb-run."""
import sys
import tempfile
from pathlib import Path
import struct
sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp
from jus_formats.alar import Archive, Entry
from jus_formats.dsig import DsigFile, MODE_TILED4


def main():
    desc = struct.pack('<HBB', 0, 8, 5) + struct.pack('<HBB', 6, 6, 2)
    aux = (struct.pack('<HH', 4, 84) +
           struct.pack('<40H', *range(40)) +
           struct.pack('<12H', *range(0x1000, 0x100c)))
    palettes = [[0] * 16 for _ in range(2)]
    palettes[0][1] = 0x001F
    palettes[1][1] = 0x7C00
    image = DsigFile(version=1, mode=MODE_TILED4, w08=256, w0a=64,
                     palettes=palettes, payload=bytes([0x11]) * 8192).build()
    layout = b'DSTX\x01\x06' + struct.pack('<HH', 2, 20 + len(aux)) + desc + b'\0\0' + aux + image
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
            assert w.selected_layout is not None
            assert w.layout_image is not None
            assert w.layout_render_info is not None
            assert w.layout_render_info.width == 64
            assert w.layout_render_info.height == 40
            assert len(w.selected_layout.panel_maps) == 2
            assert w.selected_layout.panel_maps[1].row(0) == tuple(range(0x1000, 0x1006))
            app.update()  # drain the queued resource-select event before panel spin change
            w.layout_panel_index.set('1')
            w._layout_panel_changed()
            app.update()
            assert w.selected_layout.panel_maps[1].tiles_w == 6
            assert w.layout_image is not None
            assert w.layout_image.size == (48, 16)
            assert w.layout_render_info.palette_banks == (1,)
            w.mode.set('Elements')
            w._mode_changed()
            w.load('deckmake/deckmake.aar')
            app.update()
            assert w.selected_resource == 0
            assert w.selected_layout is not None
            assert w.sprite_image is None  # a tile panel is not an OAM sprite image
            assert w.layout_image is not None
            assert w.layout_image.size == (64, 40)
            print('OK: 2 original-source panel images rendered in Screen inspector')
        finally:
            app.destroy()


if __name__ == '__main__':
    main()
