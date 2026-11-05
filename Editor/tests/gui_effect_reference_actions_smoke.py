"""Real-data GUI smoke for move41 reference count trace; xvfb-run -a python ... DATA_ROOT."""
import sys,time,traceback
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp

class Capture:
    def __init__(self): self.values=[];self.messages=[]
    def section(self,*a,**kw): pass
    def value(self,name,value,**kw): self.values.append((name,value))
    def text(self,msg,**kw): self.messages.append(str(msg))
    def buttons(self,*a,**kw): pass

def main():
    app=EditorApp(sys.argv[1]); errors=[]
    app.report_callback_exception=lambda *exc:errors.append(''.join(traceback.format_exception(*exc)))
    try:
        for _ in range(4):app.update();time.sleep(.01)
        app.select_container('chr/ChrArc.aar|chr/db_b_01.aar','db_b_01')
        app.moves_tree.selection_set('41');app.moves_tree.focus('41');app.on_move_select()
        app.set_tick(55)
        projection=app.spawn_projection()
        assert len(projection.instances)==4,len(projection.instances)
        assert any('GN child ref+' in str(row.get('label')) for row in app.timeline.rows), 'missing reference timeline row'
        row=next(row for row in app.timeline.rows if row.get('spawn') and
                 row['spawn'].effect_id==0x5C18A and row['spawn'].tick==45)
        cap=Capture();app._inspect_spawn(cap,row)
        assert any(k=='Spawn lifetime control' and '-1' in v for k,v in cap.values),cap.values
        assert any(k=='GN reference actions' for k,v in cap.values),cap.values
        assert any(k=='Image path' and 'GX textured atlas' in v for k,v in cap.values),cap.values
        assert any('polygon alpha' in m for m in cap.messages),cap.messages
        assert not errors,'\n'.join(errors)
        print('OK: move41 tick55, 4 nominal effects and GN refcount operations labelled, not culled')
    finally:
        app.destroy()

if __name__=='__main__':main()
