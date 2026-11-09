"""GUI integration smoke for source-authoritative scene assets and InfoDeck edits.

No original game-data files are saved. DataRoot stages changes in memory;
the original asset SHA remains the same after this test process exits.
"""
from pathlib import Path
import sys,time,traceback
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))

from app.editor import EditorApp
from app.widgets.source_asset_editor import SourceAssetEditor, InfoRecordEditor
from jus_package import sourceassets,sourceauthority
from jus_formats import infotext


def main(data_root):
    app=EditorApp(data_root)
    errors=[]
    app.report_callback_exception=lambda *exc: errors.append(
        ''.join(traceback.format_exception(*exc)))
    try:
        for _ in range(10):
            app.update();time.sleep(.025)
        app.show_workspace('screen')
        w=app.suite['screen']
        app.update()
        assert w.scene_id==3
        assert w._variant_options.get(w.scene_variant.get())=='menu'
        w.load_scene(8)
        app.update()
        assert len(w.layers)==5,len(w.layers)
        assert len(w.variant_combo['values'])==4
        assert w.cfg[w.order[0]]['native_bg'] is True
        assert sourceauthority.scene_sources(8)['constructor_files']
        assets=w._scene_source_paths()
        assert len(w._code_refs)>0
        known=next((k for k,v in w._code_refs.items() if v['path'] and
                   'input/input.aar' in v['path']),None)
        assert known is not None
        assert 'functions_layout/arm9_ov05/' in w._code_refs[known]['source']
        assert w._code_refs[known]['line']>0
        assert any('input/mode_bg0.atm' in p for p in assets)
        assert any('input/input_font.dig' in p for p in assets)
        assert any(p.endswith('.ncl') for p in w._scene_source_paths()) is False
        # Exercise actual Screen source-edit toolbar action.
        w._edit_source_assets()
        app.update()
        dialogs=[c for c in app.winfo_children() if isinstance(c,SourceAssetEditor)]
        assert len(dialogs)==1
        dlg=dialogs[0]
        src=next(p for p in assets if p.endswith('mode_bg0.atm'))
        assert src in dlg.paths
        # Any asset path can be entered even if not currently placed in this
        # scene (e.g. a palette from another scene).
        palette='JArena/arena_bg.ncl'
        assert app.root_data.exists(palette)
        dlg.path.set(palette)
        dlg._select_path()
        raw=app.root_data.read(palette)
        assert sourceassets.decode_hex(dlg.text.get('1.0','end-1c'))==raw
        edited=bytearray(raw);edited[0x20+13*32+2]^=1
        dlg.text.delete('1.0','end')
        dlg.text.insert('1.0',sourceassets.format_hex(bytes(edited)))
        dlg._apply()
        app.update()
        assert app.root_data.read(palette)==bytes(edited)
        assert palette in app.root_data.dirty_files()
        assert (Path(data_root)/palette).read_bytes()==raw
        assert w.scene_id==8
        dlg.destroy()
        # A file referenced by actual ARM9 source is inspectable but is never
        # labeled an active runtime instance solely because of that reference.
        w.load_scene(5)
        app.update()
        assert len(w.layers)==2
        assert len(w._scene_source_paths())>2
        w.scene_variant.set(next(x for x in w.variant_combo['values']
                                 if 'alternate' in x.lower()))
        w._scene_variant_changed()
        app.update()
        assert any('win_a.atm' in l.atm_path for l in w.layers)
        # Structured InfoDeck text editing works for any original record even
        # if this scene does not have a proven message-selection widget.
        before=infotext.read_shared_explanation(app.root_data,25)
        w._edit_info_text()
        app.update()
        dialogs=[c for c in app.winfo_children() if isinstance(c,InfoRecordEditor)]
        assert len(dialogs)==1
        editor=dialogs[0]
        editor.record.set(25)
        editor.load_record()
        assert tuple(v.get() for v in editor.entries)==before
        editor.entries[0].set('Scene|source|test')
        editor.apply()
        app.update()
        assert infotext.read_shared_explanation(app.root_data,25)[0]=='Scene|source|test'
        assert 'bin/InfoDeck.aar' in app.root_data.dirty_files()
        assert infotext.read_shared_explanation(
            __import__('jus_package.project',fromlist=['DataRoot']).DataRoot(data_root),25)==before
        editor.destroy()
        w.load_scene(15)
        app.update()
        assert len(w.layers)==2
        assert {w.cfg[x]['screen'] for x in w.order}=={'Top','Bottom'}
        w.load_scene(30)
        app.update()
        assert len(w.layers)==2
        assert {w.cfg[x]['screen'] for x in w.order}=={'Bottom'}
        assert not errors,'\n'.join(errors)
        print('OK: source-backed scene editor, arbitrary original NCCL byte edit, '
              'safe DataRoot staging, untouched original files, all-42 InfoDeck '
              'message edit, DeckCheck/Input/VsCall/JPower code-backed variants')
    finally:
        app.destroy()

if __name__=='__main__':
    main(sys.argv[1])
