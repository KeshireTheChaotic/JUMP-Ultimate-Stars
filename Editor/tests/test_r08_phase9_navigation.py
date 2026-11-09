"""Phase 9 original-source and navigation/Archive behavior regressions."""
from __future__ import annotations

import ast
import hashlib
import io
import json
import textwrap
import tokenize
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import Mock, patch

from app.editor import EditorApp
from jus_formats import roster
from jus_package.project import join

ROOT=Path(__file__).resolve().parents[1]
SNAP=json.loads((ROOT/"docs/EDITOR_R08_PHASE9_SOURCE_SNAPSHOT_20261108.json").read_text("utf8"))
CONTRACT=json.loads((ROOT/"tests/fixtures/editor_r08_phase9_method_hashes.json").read_text("utf8"))

def sha(s):
    return hashlib.sha256(s.encode("utf8")).hexdigest()

def rebound(source, hx):
    lines=source.splitlines(keepends=True)
    positions={}
    for t in tokenize.generate_tokens(io.StringIO(source).readline):
        if t.type==tokenize.NAME and t.string=="self":
            positions.setdefault(t.start[0]-1,[]).append((t.start[1],t.end[1]))
    for i,span in positions.items():
        for a,b in sorted(span,reverse=True):
            lines[i]=lines[i][:a]+"editor"+lines[i][b:]
    if hx:
        assert lines[0].rstrip().endswith("):")
        lines[0]=lines[0][:-3]+", *, hx):\n"
    return "".join(lines)

class Var:
    def __init__(self,value):self.value=value
    def get(self):return self.value
    def set(self,value):self.value=value

class R08Phase9Tests(unittest.TestCase):
    def test_original_method_bytes_and_external_signatures_match_eighteen(self):
        self.assertEqual(len(CONTRACT["original_method_body_contracts"]),18)
        current=(ROOT/"app/editor.py").read_text("utf8")
        cls=next(n for n in ast.parse(current).body if isinstance(n,ast.ClassDef) and n.name=="EditorApp")
        curr={n.name:n for n in cls.body if isinstance(n,ast.FunctionDef)}
        for name,record in CONTRACT["original_method_body_contracts"].items():
            with self.subTest(method=name):
                original=SNAP["methods"][name]["original_source"]
                transformed=rebound(original,record["injected_formatter"])
                self.assertEqual(sha(original),record["original_source_sha256"])
                self.assertEqual(sha(transformed),SNAP["methods"][name]["transformed_source_sha256"])
                module_src=(ROOT/record["module"]).read_text("utf8")
                mod_ast=ast.parse(module_src)
                fn=next(n for n in mod_ast.body if isinstance(n,ast.FunctionDef) and n.name==name)
                text="".join(module_src.splitlines(keepends=True)[fn.lineno-1:fn.end_lineno])
                self.assertEqual(text,transformed)
                body=textwrap.dedent("".join(module_src.splitlines(keepends=True)[fn.lineno:fn.end_lineno]))
                self.assertEqual(sha(body),record["transformed_body_sha256"])
                previous=ast.parse(original).body[0]
                self.assertEqual(ast.dump(previous.args),ast.dump(curr[name].args))
                self.assertEqual(curr[name].end_lineno-curr[name].lineno+1,3)

    def test_form_detection_keeps_battle_and_support_table_separate(self):
        battle=sorted(roster.BATTLE_IDS)[0]
        support=sorted(roster.SUPPORT_IDS)[0]
        actor=SimpleNamespace(almt_path=join("chr/ChrArc.aar",f"chr/{battle}.aar",f"{battle}.amt"))
        self.assertEqual(EditorApp._move_source_form(actor),(battle,f"{battle}.amt"))
        self.assertTrue(EditorApp._battle_base_table(actor))
        actor.almt_path=join("chr/ChrArc.aar",f"chr/{support}_2.aar",f"{support}_2.amt")
        self.assertEqual(EditorApp._move_source_form(actor),(support,f"{support}_2.amt"))
        self.assertFalse(EditorApp._battle_base_table(actor))
        actor.almt_path="chr/ChrArc.aar|chr/not_a_game_id.aar|not_a_game_id.amt"
        self.assertEqual(EditorApp._move_source_form(actor),(None,None))
        actor.almt_path=None
        self.assertEqual(EditorApp._move_source_form(actor),(None,None))

    def test_movexref_cache_and_parse_error_refusal(self):
        actor=SimpleNamespace(root_data=object(),_move_xrefs=None,_move_xrefs_error="")
        with patch("app.lifecycle.roster_navigation.movelinks.MoveLinks",side_effect=ValueError("bad BIN")) as ctor:
            self.assertIsNone(EditorApp._move_xref(actor))
            self.assertEqual(actor._move_xrefs_error,"bad BIN")
            self.assertIsNone(EditorApp._move_xref(actor))
            ctor.assert_called_once()
        actor.root_data=None
        self.assertIsNone(EditorApp._move_xref(actor))

    def test_ai_block_caches_source_original_aipm(self):
        battle=sorted(roster.BATTLE_IDS)[0]
        actor=SimpleNamespace(move=SimpleNamespace(id=0x5C12B),
            _battle_base_table=lambda:True,
            root_data=SimpleNamespace(exists=lambda p: True,read=Mock(return_value=b"AIPM")),
            almt_path=f"chr/ChrArc.aar|chr/{battle}.aar|{battle}.amt",
            _ai_profiles={})
        prof=SimpleNamespace(for_selector=Mock(return_value="selected"))
        with patch.dict("app.lifecycle.roster_navigation.battleinput.MOVE_CONTROLS",{0x2B:("Test",4)}),\
             patch("app.lifecycle.roster_navigation.battleai.parse_aipm",return_value=prof) as parse:
            self.assertEqual(EditorApp._ai_block(actor),"selected")
            self.assertEqual(EditorApp._ai_block(actor),"selected")
            parse.assert_called_once_with(b"AIPM")
            self.assertEqual(prof.for_selector.call_count,2)
        self.assertEqual(prof.for_selector.call_args.args,(4,))

    def test_invalid_or_missing_move_target_does_not_change_active_selection(self):
        battle=sorted(roster.BATTLE_IDS)[0]
        status=Var("")
        actor=SimpleNamespace(root_data=SimpleNamespace(exists=lambda t:False),status=status)
        self.assertFalse(EditorApp.open_move_resource(actor,battle,0x1234,"different.amt"))
        self.assertIn("Unverified move source",status.get())
        self.assertFalse(EditorApp.open_move_resource(actor,battle,0x1234,f"{battle}.amt"))
        self.assertIn("Missing ALMT",status.get())
        actor.root_data=None
        self.assertFalse(EditorApp.open_move_resource(actor,battle,0x1234,f"{battle}.amt"))

    def test_cancel_almt_move_navigation_prevents_switch_and_discard(self):
        battle=sorted(roster.BATTLE_IDS)[0]
        actor=SimpleNamespace(
            root_data=SimpleNamespace(exists=lambda p:True),
            status=Var(""),almt_path="old/table.amt",
            confirm_discard=Mock(return_value=False),
            select_container=Mock(),load_almt=Mock())
        self.assertFalse(EditorApp.open_move_resource(actor,battle,0x1234,f"{battle}.amt"))
        actor.confirm_discard.assert_called_once()
        actor.select_container.assert_not_called()
        actor.load_almt.assert_not_called()

    def test_move_navigation_follows_verified_same_archive_and_action_order(self):
        battle=sorted(roster.BATTLE_IDS)[0]
        member=f"{battle}.amt"
        archive=join("chr/ChrArc.aar",f"chr/{battle}.aar")
        target=join(archive,member)
        rid=0x550011
        actions=[]
        actor=SimpleNamespace(
            root_data=SimpleNamespace(exists=lambda p:p==target),
            status=SimpleNamespace(set=lambda s:actions.append(("status",s))),
            almt_path=target,container=archive,
            almt=SimpleNamespace(moves=[SimpleNamespace(id=rid)]),
            roster_browser=SimpleNamespace(
                index=None,select_move=lambda *a:actions.append(("select_move",a))),
            sound_form=SimpleNamespace(set=lambda s:actions.append(("sound_form",s))),
            _sound_koma_card=None,
            show_workspace=lambda s:actions.append(("workspace",s)),
            move_filter=Var("old filter"),
            populate_moves=lambda **k:actions.append(("populate_moves",k)),
            confirm_discard=Mock(),select_container=Mock(),load_almt=Mock())
        self.assertTrue(EditorApp.open_move_resource(actor,battle,rid,member))
        self.assertEqual(actor.move_filter.get(),"")
        self.assertEqual([a[0] for a in actions],
            ["sound_form","workspace","select_move","populate_moves","status"])
        self.assertEqual(actions[2][1],(battle,rid,member))
        self.assertEqual(actions[3][1],{"select":0})
        actor.confirm_discard.assert_not_called()
        actor.select_container.assert_not_called()
        actor.load_almt.assert_not_called()

    def test_koma_card_stays_in_koma_workspace_and_preserves_selected_card(self):
        actions=[]
        roster_browser=SimpleNamespace(select_card=lambda i:actions.append(("roster",i)))
        ws=SimpleNamespace(open_card_by_id=lambda i:actions.append(("open",i)) or True)
        actor=SimpleNamespace(suite={"koma":ws},root_data=object(),
                              show_workspace=lambda n:actions.append(("workspace",n)),
                              roster_browser=roster_browser,_sound_koma_card=None)
        self.assertTrue(EditorApp.open_koma_card(actor,17))
        self.assertEqual(actions,[("workspace","koma"),("open",17),("roster",17)])
        self.assertEqual(actor._sound_koma_card,17)
        actor.suite={}
        self.assertFalse(EditorApp.open_koma_card(actor,17))

    def test_hidden_tk_move_select_callback_is_ignored(self):
        actor=SimpleNamespace(_animation_clips=SimpleNamespace(winfo_ismapped=lambda:False),
                              _stop_play=Mock(),refresh_animation=Mock())
        EditorApp.on_move_select(actor,object())
        actor._stop_play.assert_not_called()
        actor.refresh_animation.assert_not_called()

    def test_move_selection_sets_timeline_before_redraw(self):
        events=[]
        m=SimpleNamespace(id=5,duration=7)
        tree=SimpleNamespace(focus=lambda:"0")
        actor=SimpleNamespace(_animation_clips=SimpleNamespace(winfo_ismapped=lambda:True),
            moves_tree=tree,almt=SimpleNamespace(moves=[m]),move=None,tick=12,
            sel_track="old",sel_key="old",sel_virtual="old",_need_frame=False,
            _stop_play=lambda:events.append("stop"),
            _refresh_pursuer_links=lambda:events.append("links"),
            after=lambda n,fn:events.append(("after",n)),
            fit_timeline=lambda:None,frame_view_if_needed=lambda:None,
            refresh_animation=lambda:events.append("refresh"))
        EditorApp.on_move_select(actor,object())
        self.assertIs(actor.move,m)
        self.assertEqual(actor.tick,0)
        self.assertEqual((actor.sel_track,actor.sel_key,actor.sel_virtual),(None,None,None))
        self.assertTrue(actor._need_frame)
        self.assertEqual(events,["stop",("after",5),"links","refresh",("after",10)])

    def test_archive_population_preserves_byte_type_and_hash_flags(self):
        entry=SimpleNamespace(name="data.amt",compressed=False,data=b"ALMTxxxx",
            name_hash=0x3B1E,id=3,attributes=2)
        other=SimpleNamespace(name="packed",compressed=True,data=b"xxxx",
            name_hash=None,id=4,attributes=0)
        arc=SimpleNamespace(version=2,flags=0x10,entries=[entry,other],
                            expected_hash=lambda e:0x3B1E)
        rows=[]
        tree=SimpleNamespace(get_children=lambda:("old",),delete=lambda *a:rows.append(("delete",a)),
            insert=lambda *a,**kw:rows.append(("insert",a,kw)))
        title=SimpleNamespace(configure=lambda **kw:rows.append(("title",kw)))
        actor=SimpleNamespace(member_tree=tree,container="chr/ChrArc.aar",
            root_data=SimpleNamespace(archive=lambda p:arc),
            archive_info=title,_member_details=lambda:rows.append(("details",)))
        EditorApp.populate_archive(actor)
        entries=[c for c in rows if c[0]=="insert"]
        self.assertEqual(len(entries),2)
        self.assertEqual(entries[0][2]["values"][1],"ALMT")
        self.assertEqual(entries[0][2]["values"][4],"3B1E ✓")
        self.assertEqual(entries[1][2]["values"][1],"packed")
        self.assertEqual(entries[1][2]["values"][-1],"yes")
        self.assertEqual(rows[-1],("details",))

    def test_selected_archive_member_refuses_table_and_missing_selection(self):
        e=object()
        actor=SimpleNamespace(container="arc",member_tree=SimpleNamespace(focus=lambda:"0"),
            root_data=SimpleNamespace(archive=lambda _:SimpleNamespace(entries=[e])),
            _table=None)
        self.assertIs(EditorApp._selected_member(actor),e)
        actor._table=object()
        self.assertIsNone(EditorApp._selected_member(actor))
        actor._table=None
        actor.container=None
        self.assertIsNone(EditorApp._selected_member(actor))

    def test_rebuild_check_does_not_write_source_archive(self):
        arc=SimpleNamespace(entries=[
            SimpleNamespace(data=b"A"),SimpleNamespace(data=b"B")],
            build=Mock(return_value=b"built"))
        rebuilt=SimpleNamespace(entries=[
            SimpleNamespace(data=b"A"),SimpleNamespace(data=b"C")])
        actor=SimpleNamespace(container="src",root_data=SimpleNamespace(archive=lambda p:arc))
        with patch("app.lifecycle.archive_navigation.alar.Archive.parse",return_value=rebuilt) as parser,\
             patch("app.lifecycle.archive_navigation.messagebox.showinfo") as info:
            EditorApp.rebuild_check(actor)
            parser.assert_called_once_with(b"built")
            self.assertIn("1/2 members",info.call_args.args[1])
        arc.build.assert_called_once_with()

if __name__=="__main__":
    unittest.main()
