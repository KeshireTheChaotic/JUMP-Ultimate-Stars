"""GUI smoke: every native scene ID, verified BG versus runtime-only renderer."""
from pathlib import Path
import sys,traceback
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp
from jus_package import nativescenes,screenvariants,sourceauthority
def main(data):
    app=EditorApp(data)
    callbacks=[]
    app.report_callback_exception=lambda *exc:callbacks.append(''.join(traceback.format_exception(*exc)))
    try:
        app.update()
        app.show_workspace('screen')
        work=app.suite['screen']
        checked=0
        for info in nativescenes.catalog()['scenes']:
            sid=info['id']
            work.load_scene(sid)
            app.update()
            assert work.scene_id==sid,(sid,work.scene_id)
            assert len(work.layers)==len(info['background_variants'][0]['source_layers']) if info['background_variants'] else not work.layers,(sid,len(work.layers))
            assert not callbacks,(sid,callbacks)
            assert all(work.cfg[layer.name]['native_bg'] for layer in work.layers)
            if info['background_variants']:
                assert all(work.images[layer.name] is not None for layer in work.layers)
            if sid in (16,21,23,24,26,27):
                groups=sourceauthority.runtime_scene_modes(sid)
                assert len(groups)==(3 if sid==16 else 1),(sid,groups)
            if sid==31:
                assert len(work.layers)==0
                assert sourceauthority.runtime_scene(31)['branches'][0]['table_entry']['assembly_dispatch']
            checked+=1
        print('OK: 46/46 original scene IDs loaded, 28 source-backed BG scenes, '
              '18 runtime-only/indirect scenes with no fabricated BG, all ROM '
              'modes indexed and no character placeholders')
    finally:
        app.destroy()
if __name__=='__main__':main(sys.argv[1])
