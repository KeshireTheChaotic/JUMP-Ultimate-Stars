"""Source-backed Level CAM and Archive ALOD/deck metadata display tests."""
from pathlib import Path
from types import SimpleNamespace
import unittest

from jus_package.project import DataRoot
from app.workspaces.level import LevelWorkspace
from app.inspectors.archive_member import render_archive_member_details

DATA=Path(r"D:\Library\Development\JUS\Data")


class Recorder:
    def __init__(self):self.rows=[]
    def clear(self):self.rows.clear()
    def section(self,*args,**kwargs):self.rows.append(("section",args,kwargs))
    def value(self,*args,**kwargs):self.rows.append(("value",args,kwargs))
    def evidence(self,*args,**kwargs):self.rows.append(("evidence",args,kwargs))
    def buttons(self,*args,**kwargs):pass
    def text(self,*args,**kwargs):self.rows.append(("text",args,kwargs))

def render(container,member):
    root=DataRoot(DATA)
    inspector=Recorder()
    editor=SimpleNamespace(
        root_data=root,container=container,member_details=inspector,_table=None,
        _selected_member=lambda:root.archive(container).get(member),
        add_member=lambda:None,rebuild_check=lambda:None,
        extract_member=lambda:None,replace_member=lambda:None,remove_member=lambda:None,
    )
    render_archive_member_details(editor,lambda v,w=8:f"0x{v:0{w}X}")
    return inspector.rows


@unittest.skipUnless((DATA/"stage/stage.aar").is_file(),"Original stage data absent")
class OriginalFormatInspectorTests(unittest.TestCase):
    def test_camera_source_inspector_is_structural_and_never_simulates_scroll(self):
        inspector=Recorder()
        path="stage/stage.aar|stage/bg_bb.cam"
        root=DataRoot(DATA)
        camera=SimpleNamespace(
            inspector=inspector,stage=SimpleNamespace(members={"cam":path},stem="bg_bb"),
            sel_overlay="cam",app=SimpleNamespace(root_data=root),
            _mission_inspector=lambda _ins:None
        )
        LevelWorkspace.refresh_inspector(camera)
        values=[args for kind,args,kw in inspector.rows if kind=="value"]
        self.assertIn(("Point count (+0x0D)","4"),values)
        self.assertIn(("Header signed pair 0 (+0x00)","(-432, -400)"),values)
        self.assertIn(("Raw point rectangle (unclassified)","(-592, -656, -432, -400)"),values)
        self.assertIn(("Original rectangular point order","yes"),values)
        self.assertTrue(any(kind=="text" and "unproved" in args[0] for kind,args,kw in inspector.rows))
        self.assertTrue(any(kind=="evidence" and args[1]=="Cross-checked" for kind,args,kw in inspector.rows))

    def test_camera_row_available_in_level_layers(self):
        mock=SimpleNamespace(
            stage=SimpleNamespace(members={"cam":"stage/stage.aar|stage/bg_bb.cam"},stem="bg_bb"),
            layers=[],_stage_geo=None,_stage_mob=None,_stage_sprites=None,
            map_objects=SimpleNamespace(model=SimpleNamespace(m=None)),
            visible={},show_sprites={"floor":True,"gimmick":True},
            preview_objects=SimpleNamespace(get=lambda:True),
        )
        rows=LevelWorkspace._layer_rows(mock)
        row=next(r for r in rows if r["id"]=="O:cam")
        self.assertTrue(row["available"])
        self.assertFalse(row["readonly"])  # Source coordinates editable; projection is not
        self.assertIn("structural",row["status"])
        self.assertIn("runtime unknown",row["status"])

    def test_alod_archive_inspector_has_real_parents_not_raw_unknown(self):
        rows=render("chr/ChrArc.aar|chr/bb_b_01.aar","bb_b_01.aod")
        self.assertTrue(any(kind=="section" and "ALOD node relationships" in args for kind,args,kw in rows))
        self.assertTrue(any(kind=="value" and args[0]=="GN01" and "SP01" in args[1] for kind,args,kw in rows))
        self.assertTrue(any(kind=="evidence" and "1,247" in args[2] for kind,args,kw in rows))

    def test_deck_companion_inspector_keeps_runtime_metadata_numeric(self):
        rows=render("deck/Deck.aar","deck/jard/p000.bin")
        self.assertTrue(any(kind=="section" and "Deck companion metadata" in args for kind,args,kw in rows))
        values=[args for kind,args,kw in rows if kind=="value"]
        self.assertTrue(any(k=="Metadata +0x34" and "0x00010A02" in v for k,v in values))
        self.assertTrue(any(k=="Profile name (+0x34)" and v.startswith("2 → ") for k,v in values))
        self.assertTrue(any(k=="Location (+0x35)" and v.startswith("10 → ") for k,v in values))
        self.assertTrue(any(k=="Word +0x3C" and "FUN_020725AC" in v for k,v in values))
        self.assertFalse(any("reward" in str(v).lower() or "cost" in str(v).lower() for v in values))


if __name__=="__main__":unittest.main()
