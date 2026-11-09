"""Actual Tk GUI smoke: new original-source stage BIN/MOB inspector fields.

Uses local fixture bytes and a real tkinter widget, not fabricated previews.
"""
import sys,tkinter as tk
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
sys.path.insert(0,str(Path(__file__).resolve().parent))
from test_level_workspace_authoring import mob_fixture,bin_fixture
from app.workspaces.mapobjects import MapObjectsPanel, GROUPS

class Status:
    def set(self,value):pass
class App:
    def __init__(self):self.status=Status()
class Workspace:
    def __init__(self,root):
        self.k=1.0
        self.preview_markers=tk.BooleanVar(root,value=True)
        self.preview_paths=tk.BooleanVar(root,value=True)
        self.preview_collisions=tk.BooleanVar(root,value=True)
        self.view=type('V',(),{'redraw':lambda self:None})()
        self.app=App()
    def frame_all_objects(self):pass
    def checkpoint_objects(self,label):pass
    def objects_changed(self,detail):pass
    def focus_map_object(self,kind,index):pass
try:
    tkroot=tk.Tk()
    tkroot.withdraw()
    ws=Workspace(tkroot)
    panel=MapObjectsPanel(ws,tkroot)
    panel.load(mob_fixture(),bin_fixture())
    registered={k for _,_,items in GROUPS for k in items}
    expect={
        'itemweights':6,'itemjpower':7,'itemcategory':6,
        'floor-shape':5,'gimmick-visual':2,'stage-tail':3
    }
    for kind,fields in expect.items():
        assert kind in registered,(kind,registered)
        assert any(x.kind==kind for x in panel.model.records()),kind
        panel.selected=(kind,0)
        panel._render()
        tkroot.update_idletasks()
        assert len(panel.fields)==fields,(kind,len(panel.fields),fields)
        for key,var in panel.fields.items():
            assert var.get()!='',(kind,key)
    assert any(panel.tree.exists('itemweights:0') for _ in [0])
    panel.selected=('stage-tail',0)
    panel._render()
    panel.fields['raw_u16_0'].set('512')
    panel.fields['raw_u16_2'].set('576')
    panel.commit()
    assert panel.model.g.trailing_source_words==(512,576,0)
    panel.selected=('gimmick-visual',0)
    panel._render()
    panel.fields['variant'].set('5')
    panel.commit()
    assert panel.model.m.gimmicks[0].source_almt_id==0x401205
    panel.destroy()
    tkroot.destroy()
    print('GUI_STAGE_BIN_MOB_EXTENDED_FIELDS_PASS: six new compact record groups and staged commits')
except Exception:
    try:tkroot.destroy()
    except Exception:pass
    raise
