"""Real-data GUI smoke for the db_b_01 lifecycle diagnostics and isolation.
Usage: xvfb-run -a python tests/gui_spawn_lifecycle_smoke.py DATA_ROOT
"""
import sys,time,traceback
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp

class InspectorCapture:
    def __init__(self):self.values=[];self.messages=[]
    def section(self,*a,**kw):pass
    def value(self,name,value,**kw):self.values.append((name,value))
    def text(self,msg,**kw):self.messages.append(str(msg))
    def buttons(self,*a,**kw):pass

def main():
    root=sys.argv[1]
    app=EditorApp(root)
    errors=[]
    app.report_callback_exception=lambda *exc:errors.append(''.join(traceback.format_exception(*exc)))
    try:
        for _ in range(5):app.update();time.sleep(.015)
        app.select_container('chr/ChrArc.aar|chr/db_b_01.aar','db_b_01')
        app.moves_tree.selection_set('40');app.moves_tree.focus('40');app.on_move_select()
        app.set_tick(30)
        projection=app.spawn_projection()
        assert len(projection.instances)==7,len(projection.instances)
        row=next(r for r in app.timeline.rows if r.get('spawn') and r['spawn'].effect_id==0x5C185)
        app.sel_virtual=row
        ins=InspectorCapture()
        app._inspect_spawn(ins,row)
        assert any(n=='Nominal state' and v=='within-authored-span' for n,v in ins.values),ins.values
        assert any(n=='Authored end tick' and v=='33' for n,v in ins.values),ins.values
        assert any(n=='Active sprite' and 'frame 5' in v for n,v in ins.values),ins.values
        app.isolate_selected_spawn.set(True)
        app.redraw_view();app.update()
        assert len([inst for inst in projection.instances if inst.spawn==row['spawn']])==1
        assert not errors,'\n'.join(errors)
        print('OK: db_b_01 tick 30 - 7 nominal effects, 05C185 isolated with frame 5 and end 33')
    finally:app.destroy()

if __name__=='__main__':main()
