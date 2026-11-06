"""Mission-first Level integration / runtime smoke (needs extracted game data)."""
import sys, traceback, time
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from app.editor import EditorApp

def main(root):
    app=EditorApp(root)
    errors=[]
    app.report_callback_exception=lambda *exc: errors.append(''.join(traceback.format_exception(*exc)))
    try:
        for _ in range(12):app.update();time.sleep(.05)
        app.show_workspace('level');w=app.suite['level']
        assert w.tree.exists('n:0'), 'Mission tree should be the left navigation'
        assert not w.tree.exists('g:stages'), 'Stage-first browser reappeared'
        assert w.missions.catalog is not None
        found=False
        for node_id in range(w.missions.catalog.graph.node_count):
            if w.missions.stage_of(node_id)=='bg_ch' and w.missions.definition(node_id).data[0x7C]&2:
                w.select_mission(node_id)
                found=True;break
        assert found
        w.stage_tick.set(55);w._preview_changed();app.update()
        assert w._stage_mob is not None
        assert w._stage_geo is not None
        assert len(w._stage_frame.floors)==len(w._stage_mob.floors)
        assert w._stage_frame.tick==55
        assert not errors,'\n'.join(errors)
        print('OK: mission-first sidebar, assigned stage, floor/gimmick runtime preview')
    finally:app.destroy()
if __name__=='__main__':main(sys.argv[1])