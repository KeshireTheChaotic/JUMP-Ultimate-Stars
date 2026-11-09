"""GUI: original ROM callback provenance + native source-only scene backgrounds."""
from pathlib import Path
import sys,time,traceback
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp
from jus_package import sourceauthority,screenvariants,scenes
from app.widgets.source_asset_editor import SourceAssetEditor

def main(data):
    app=EditorApp(data)
    errors=[]
    app.report_callback_exception=lambda *a:errors.append(
       ''.join(traceback.format_exception(*a)))
    try:
        for _ in range(10):app.update();time.sleep(.02)
        app.show_workspace('screen')
        w=app.suite['screen']
        for sid,count in ((0,2),(18,4),(29,2),(36,3),(38,2),(40,4)):
            w.load_scene(sid)
            app.update()
            assert w.scene_id==sid,sid
            assert len(w.layers)==count,(sid,len(w.layers),w._probs)
            assert all(w.cfg[l.name]['native_bg'] for l in w.layers)
            assert all(w.images[l.name] is not None for l in w.layers)
            assert {w.cfg[l.name]['screen'] for l in w.layers}==(
                {'Top'} if sid==29 else {'Bottom'} if sid==38 else {'Top','Bottom'})
            if sid==29:
                assert w._scene_text_id()==0x44
            if sid in (36,38):
                assert sum(not w.cfg[l.name]['visible'] for l in w.layers)==1
            w.refresh_inspector()
            # Native game assets are editable despite read-only engine layout.
            p=w._scene_source_paths()
            assert p,(sid,'no source assets')
            assert all(app.root_data.exists(x) for x in p)
            assert not errors,'\n'.join(errors)
        assert w.archive=='jquiz/jquiz_pack.aar'
        w.load_scene(0)
        app.update()
        assert w.archive is None
        assert len(w.layers)==2
        assert any('copyright/' in x for x in w._scene_source_paths())
        assert w.sel in w.cfg
        w._edit_source_assets()
        app.update()
        editors=[x for x in app.winfo_children() if isinstance(x,SourceAssetEditor)]
        assert len(editors)==1
        assert 'copyright/ganbari.atm' in editors[0].paths
        editors[0].destroy()
        for sid,target in ((18,'0215a128.c'),(31,None),(40,'0215da38.c'),
                           (38,'0215d1c0.c'),(39,'021624e8.c')):
            w.load_scene(sid)
            app.update()
            info=sourceauthority.runtime_scene(sid)['branches'][0]['table_entry']
            assert info['target_path'].endswith(target) if target else info['target_path'] is None
            if sid==31:
                assert len(w.layers)==0,(sid,w._probs)
            assert not errors,'\n'.join(errors)
        w.load_scene(3)
        app.update()
        assert len(sourceauthority.topmenu_action_sites())==8
        assert len(w._scene_widgets)==8
        assert not errors,'\n'.join(errors)
        print('OK: Copyright source-only dual-BG, JQuiz18/40 native BG variants, '
              'ROM callback provenance 18/31/38/39/40, raw editable source assets, '
              'code-backed TopMenu move offsets; no invented poses or BGs')
    finally:
        app.destroy()

if __name__=='__main__':
    main(sys.argv[1])
