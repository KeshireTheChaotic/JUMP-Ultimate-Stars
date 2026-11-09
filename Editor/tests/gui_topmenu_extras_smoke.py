"""Live GUI smoke for TopMenu widget composition + captured melonDS variant."""
from pathlib import Path
import sys, traceback,time
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp
from app.workspaces.screen import ORIGIN
from jus_package import screenextras,screencomposition
from jus_formats import aft

def main(root):
    app=EditorApp(root)
    errors=[]
    app.report_callback_exception=lambda *err: errors.append(''.join(traceback.format_exception(*err)))
    try:
        for _ in range(10):app.update();time.sleep(.025)
        app.show_workspace('screen')
        w=app.suite['screen']
        app.update()
        assert w.scene_id==3
        assert w._variant_options.get(w.scene_variant.get())=='menu'
        w.scene_variant.set(next(s for s in w.variant_combo['values']
                                 if 'Captured melonDS' in s))
        w._scene_variant_changed()
        app.update()
        assert w._variant_options.get(w.scene_variant.get())=='captured'
        assert w.scene_series.get()=='jp',w.scene_series.get()
        assert len(w._scene_widgets)==8,len(w._scene_widgets)
        assert len(w._scene_extras)==12,len(w._scene_extras)
        assert len(w.layers)==5,len(w.layers)
        extra={p.spec['id']:p for p in w._scene_extras}
        assert extra['info-icon'].screen=='Top'
        assert extra['speech-box'].screen=='Top'
        assert extra['label:0'].screen=='Bottom'
        assert extra['right-back'].screen=='Bottom'
        assert w._scene_widgets[0].origin_y==50
        assert w._scene_widgets[3].frame==37
        assert extra['label:3'].frame==61
        assert w._scene_text_id()==0
        top=[n for n in w.order if w.cfg[n]['screen']=='Top']
        assert top[-1].endswith('jp.atm'),top
        assert w.cfg[top[-1]]['preview_order']==0
        assert w.cfg[top[-1]]['baseline_bg_priority']==0
        assert all(w.images[n] is not None for n in w.order)
        top_pixels=screencomposition.sprite_layer(w._scene_extras,'Top')
        assert top_pixels.getbbox()
        assert top_pixels.getpixel((128,190))[3] in range(256)
        # Inspect original resource rather than image-detection using guessed boxes.
        s=extra['info-icon']
        pixel=next(((x,y) for y in range(s.image.height)
                    for x in range(s.image.width)
                    if s.image.getpixel((x,y))[3]),None)
        assert pixel is not None
        w._scene_press(s.image_x+pixel[0],s.image_y+pixel[1])
        assert w.selected_widget_id=='info-icon',w.selected_widget_id
        w._select_layer({'id':'widget:label:1'})
        assert w.selected_widget_id=='label:1'
        assert w._scene_text_id()==1
        w._select_layer({'id':'runtime-chara:0'})
        assert w._selected_runtime_character==0
        assert w.selected_widget_id is None
        # The art is linked but the original ALMT motion is not faked.
        ch=screenextras.load_metadata()['snapshot']['characters'][0]
        assert ch['roster_name']=='op_b_01' and ch['character_index']==12
        assert app.root_data.exists(ch['resource_archive'])
        assert app.root_data.exists(ch['source_texture_archive'])
        # Return to selecting a genuine top-screen sprite and hand it to the
        # existing source-aware Sprite workspace (no in-memory file changes).
        w._select_layer({'id':'widget:info-icon'})
        w._edit_selected_widget()
        app.update()
        assert app.workspace=='sprite',app.workspace
        assert app.sprite_path.endswith('info/icon.aar|icon.dtx'),app.sprite_path
        assert app.frame_i==0
        app.show_workspace('screen')
        app.update()
        assert len(w._scene_extras)==12
        w.scene_variant.set(next(x for x in w.variant_combo['values']
                                 if 'TopMenu' in x and 'original constructor' in x))
        w._scene_variant_changed()
        app.update()
        assert len(w._scene_extras)==12,len(w._scene_extras)
        assert any(e.spec['id']=='info-icon' for e in w._scene_extras)
        assert w._scene_widgets[3].frame==15
        assert not errors,'\n'.join(errors)
        print('OK: captured main-menu layers/disabled state, top UI icon and speech, '
              'eight captions, two controls, two dynamic character metadata slots, '
              'original sprite handoff, generic variant')
    finally:
        app.destroy()

if __name__=='__main__':
    main(sys.argv[1])
