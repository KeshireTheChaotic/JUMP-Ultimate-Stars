"""GUI smoke for source-backed dual LCD layers, modes, selected native text."""
import sys,time,traceback
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp
from jus_formats import infotext

def main(root):
 app=EditorApp(root)
 errors=[]
 app.report_callback_exception=lambda *exc: errors.append(''.join(traceback.format_exception(*exc)))
 try:
  for _ in range(9):
   app.update();time.sleep(.03)
  app.show_workspace('screen')
  w=app.suite['screen']
  app.update()
  assert w.scene_id==3,w.scene_id
  assert len(w.layers)>=4,[(l.name,l.atm_path) for l in w.layers]
  assert any(c['screen']=='Top' and c.get('native_bg') for c in w.cfg.values())
  assert any(c['screen']=='Bottom' and c.get('native_bg') for c in w.cfg.values())
  assert w._scene_text_id()==0,w._scene_text_id()
  assert w._text_vars[0].get()=='J-Universe|Great|Adventure!'
  w.selected_widget_id=1
  w.refresh_inspector()
  assert w._scene_text_id()==1
  assert w._text_vars[0].get()=='J-Arena|mode!'
  w.scene_series.set('bb')
  w._scene_variant_changed()
  assert len(w.layers)>=5
  assert any('info/chr' in l.atm_path for l in w.layers)
  original=app.root_data.read(infotext.INFO_CANONICAL)
  w._text_vars[0].set('Editor|temporary|test')
  w._apply_scene_explanation(1)
  assert infotext.read_shared_explanation(app.root_data,1)[0]=='Editor|temporary|test'
  assert app.root_data.read(infotext.INFO_CANONICAL)!=original
  assert 'bin/InfoDeck.aar' in app.root_data.dirty_files()
  w.load_scene(21)
  app.update()
  assert w._scene_text_id()==41
  assert len(w._scene_widgets)==4
  assert len(w.layers)>=4
  assert any(c['screen']=='Top' for c in w.cfg.values())
  w.load_scene(6)
  app.update()
  assert len(w.layers)==3,len(w.layers)
  assert len(w.variant_combo['values'])==2
  assert all(c['screen']=='Bottom' for c in w.cfg.values())
  w.scene_variant.set(w.variant_combo['values'][1])
  w._scene_variant_changed()
  assert len(w.layers)==3
  assert all(w.images[l.name] is not None for l in w.layers)
  w.load_scene(7)
  app.update()
  assert len(w.layers)==4
  assert w._scene_text_id()==10
  assert len(w._explanation_options)>=11
  w._selected_explanation='rule-2'
  w.refresh_inspector()
  assert w._scene_text_id()==12
  w.load_scene(34)
  app.update()
  assert len(w.layers)==4
  assert w._scene_text_id()==24
  assert len(w._explanation_options)==5
  w.load_scene(32)
  app.update()
  assert len(w.variant_combo['values'])>=7
  assert len(w.layers)==2
  choices=list(w.variant_combo['values'])
  w.scene_variant.set(next(s for s in choices if 'comic' in s.lower()))
  w._scene_variant_changed()
  w.scene_series.set('bb')
  w._scene_variant_changed()
  assert len(w.layers)==3
  assert any('database/comic' in l.atm_path for l in w.layers)
  assert not errors,'\n'.join(errors)
  print('OK: Scene3/21 mode text; 42 staged copies; Scene6 solo/multiplayer; Scene7 rules; Scene34 options; Scene32 comic series; real top/bottom backgrounds')
 finally:
  app.destroy()

if __name__=='__main__':
 main(sys.argv[1])
