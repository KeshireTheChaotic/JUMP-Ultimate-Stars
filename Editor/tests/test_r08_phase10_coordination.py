"""R08 Phase 10 source-preserving effect/diagnostic/viewport coordination tests."""
from __future__ import annotations

import ast, hashlib, io, json, textwrap, tokenize, unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import Mock, patch

from app.editor import EditorApp
from jus_formats import almt, notetrack
from jus_package.project import join

ROOT=Path(__file__).resolve().parents[1]
SNAP=json.loads((ROOT/"docs/EDITOR_R08_PHASE10_SOURCE_SNAPSHOT_20261108.json").read_text("utf8"))
CONTRACT=json.loads((ROOT/"tests/fixtures/editor_r08_phase10_method_hashes.json").read_text("utf8"))

def sha(s):return hashlib.sha256(s.encode("utf8")).hexdigest()
def receiver_rebound(source, formatter=False):
    lines=source.splitlines(keepends=True)
    changes={}
    for tok in tokenize.generate_tokens(io.StringIO(source).readline):
        if tok.type==tokenize.NAME and tok.string=="self":
            changes.setdefault(tok.start[0]-1,[]).append((tok.start[1],tok.end[1]))
    for i,spans in changes.items():
        for a,b in sorted(spans,reverse=True):
            lines[i]=lines[i][:a]+"editor"+lines[i][b:]
    if formatter:lines[0]=lines[0][:-3]+", *, hx):\n"
    return "".join(lines)

class Var:
    def __init__(self,value):self.value=value
    def get(self):return self.value
    def set(self,value):self.value=value

class Phase10Tests(unittest.TestCase):
    def test_fourteen_source_fingerprints_and_public_signatures(self):
        records=CONTRACT["original_method_body_contracts"]
        self.assertEqual(len(records),14)
        controller=next(n for n in ast.parse((ROOT/"app/editor.py").read_text("utf8")).body
                        if isinstance(n,ast.ClassDef) and n.name=="EditorApp")
        delegates={n.name:n for n in controller.body if isinstance(n,ast.FunctionDef)}
        for name,record in records.items():
            with self.subTest(method=name):
                original=SNAP["methods"][name]["original_source"]
                reb=receiver_rebound(original,record["injected_formatter"])
                self.assertEqual(sha(original),record["original_source_sha256"])
                self.assertEqual(sha(reb),SNAP["methods"][name]["transformed_source_sha256"])
                p=ROOT/record["module"];src=p.read_text("utf8")
                n=next(x for x in ast.parse(src).body
                       if isinstance(x,ast.FunctionDef) and x.name==name)
                relocated="".join(src.splitlines(keepends=True)[n.lineno-1:n.end_lineno])
                self.assertEqual(relocated,reb)
                self.assertEqual(sha(textwrap.dedent("".join(
                    src.splitlines(keepends=True)[n.lineno:n.end_lineno]))),
                    record["transformed_body_sha256"])
                self.assertEqual(ast.dump(ast.parse(original).body[0].args),
                                 ast.dump(delegates[name].args))
                self.assertEqual(delegates[name].end_lineno-delegates[name].lineno+1,3)

    def test_amt_tables_uses_open_live_table_then_skips_invalid_archive(self):
        e1=SimpleNamespace(ext=".amt",name="a.amt",payload=Mock(return_value=b"A"))
        e2=SimpleNamespace(ext=".bin",name="skip.bin",payload=Mock())
        e3=SimpleNamespace(ext=".amt",name="b.amt",payload=Mock(return_value=b"B"))
        arc=SimpleNamespace(entries=[e1,e2,e3])
        root=SimpleNamespace(archive=lambda p:arc if p=="valid" else (_ for _ in ()).throw(KeyError("broken")))
        live=object()
        actor=SimpleNamespace(root_data=root,almt_path="valid|a.amt",almt=live)
        with patch("app.lifecycle.effect_sources.almt.parse",return_value="other") as parser:
            self.assertEqual(EditorApp._amt_tables(actor,["valid","unavailable"]),
                             [("valid|a.amt",live),("valid|b.amt","other")])
        parser.assert_called_once_with(b"B")
        e2.payload.assert_not_called()

    def test_effect_catalog_retains_edited_table_and_catalog_cache(self):
        live=object();previous=object();local=object();effects={}
        root=SimpleNamespace(effect_archives=Mock(return_value=["effect"]))
        actor=SimpleNamespace(root_data=root,almt_path="active",almt=live,
            _common_tables=None,scope=["char"],_effect_moves={99:"stale"},
            _amt_tables=Mock(side_effect=[
                [("active",previous),("common",previous)],
                [("char-path",local)]]))
        with patch("app.lifecycle.effect_sources.spawns.build_catalog",side_effect=
                   lambda tables,out:effects.update({"tables":tables,"out":out})):
            EditorApp._load_effect_catalog(actor)
        self.assertEqual(effects["tables"],[("char-path",local),("active",live),("common",previous)])
        self.assertIs(effects["out"],actor._effect_moves)
        self.assertNotIn(99,actor._effect_moves)
        root.effect_archives.assert_called_once()

    def test_pursuer_bin_parse_error_is_explicit_and_no_events_invented(self):
        actor=SimpleNamespace(
            move=object(),almt=SimpleNamespace(node_names=["GN01"]),
            root_data=SimpleNamespace(exists=lambda p:True,read=lambda p:b"bad"),
            container="chr/test.aar",
            _char_of=lambda p:"aa_b_01",
            _pursuer_events=("old",),_effect_table_error="previous")
        with patch("app.lifecycle.effect_sources.effectlinks.parse_effect_records",
                   side_effect=ValueError("malformed original effect BIN")):
            EditorApp._refresh_pursuer_links(actor)
        self.assertEqual(actor._pursuer_events,())
        self.assertEqual(actor._effect_table_error,"malformed original effect BIN")

    def test_effect_move_cancel_does_not_change_root_or_selection(self):
        actor=SimpleNamespace(confirm_discard=Mock(return_value=False),
                              select_container=Mock(),load_almt=Mock(),
                              status=SimpleNamespace(set=Mock()))
        EditorApp.open_effect_move(actor,0x050001,"chr/ChrArc.aar|chr/abc.aar|abc.amt")
        actor.confirm_discard.assert_called_once()
        actor.select_container.assert_not_called()
        actor.load_almt.assert_not_called()
        actor.status.set.assert_not_called()

    def test_effect_move_navigates_to_source_table_and_selected_move(self):
        events=[]
        target="chr/ChrArc.aar|chr/effect.aar|effect.amt"
        parent=join(*target.split("|")[:-1])
        actor=SimpleNamespace(
            confirm_discard=lambda:events.append("confirm") or True,
            container="old",_char_of=lambda p:"xy_b_01",
            select_container=lambda *args:events.append(("container",args)),
            almt_path="old",almt_combo=SimpleNamespace(set=lambda p:events.append(("combo",p))),
            load_almt=lambda p:events.append(("load",p)),
            almt=SimpleNamespace(moves=[SimpleNamespace(id=0x5001)]),
            move_filter=SimpleNamespace(set=lambda p:events.append(("filter",p))),
            populate_moves=lambda **kw:events.append(("select",kw)),
            status=SimpleNamespace(set=lambda p:events.append(("status",p))))
        EditorApp.open_effect_move(actor,0x5001,target)
        self.assertEqual([e if isinstance(e,str) else e[0] for e in events],
                         ["confirm","container","combo","load","filter","select","status"])
        self.assertEqual(events[1][1],(parent,"xy_b_01"))
        self.assertEqual(events[5][1],{"select":0})

    def test_notetrack_refresh_preserves_source_sound_card_and_prepare_order(self):
        events=[];move=object()
        cue=SimpleNamespace(seq=3)
        solver=SimpleNamespace(cues=lambda *a,**kw:events.append(("cues",a,kw)) or [cue])
        audio=SimpleNamespace(prepare=lambda cues:events.append(("audio",cues)))
        actor=SimpleNamespace(move=move,almt=SimpleNamespace(node_names=["GN01"]),
            container="archive",_motion_params=lambda:"params",
            sound_form=Var("5-cell"),_sound_koma_card=42,_sounds=solver,_audio=audio)
        with patch("app.timeline.presentation_ops.motion.simulate",return_value="motion") as simulate:
            EditorApp._refresh_notetrack_effects(actor)
        self.assertEqual(actor._motion,"motion")
        self.assertEqual(actor._cues,[cue])
        simulate.assert_called_once_with(move,["GN01"],"params")
        self.assertEqual(events[0][0],"cues")
        self.assertEqual(events[0][2],{"form":5,"card_index":42})
        self.assertEqual(events[1],("audio",[cue]))

    def test_motion_changed_no_move_has_no_callbacks(self):
        actor=SimpleNamespace(move=None,_refresh_notetrack_effects=Mock(),
                              refresh_inspector=Mock(),redraw_view=Mock())
        EditorApp._motion_changed(actor)
        actor.refresh_inspector.assert_not_called()
        actor.move=object()
        EditorApp._motion_changed(actor)
        actor._refresh_notetrack_effects.assert_called_once()
        actor.refresh_inspector.assert_called_once()
        actor.redraw_view.assert_called_once()

    def test_physics_and_sound_tooltips_keep_event_source_qualifications(self):
        c=SimpleNamespace(opcode=0x0100,values=lambda:[2,-1])
        f=SimpleNamespace(px=(3.0,4.0),vx=256,vy=-128)
        motion=SimpleNamespace(commands=[(4,"GN01",c)],at=lambda tick:f)
        actor=SimpleNamespace(_motion=motion,_cues=[])
        output=EditorApp._physics_tooltip(actor,4)
        self.assertIn("GN01: 0x0100",output)
        self.assertIn("offset (3.0, 4.0) px",output)
        cue=SimpleNamespace(tick=4,opcode=0x0402,seq=8,label="source cue",ssar=object())
        actor._cues=[cue]
        with patch("app.timeline.presentation_ops.sounds.dedupe_same_frame",
                   return_value=[(cue,False)]):
            sound=EditorApp._sound_tooltip(actor,4)
        self.assertIn("same-frame duplicate: ignored",sound)

    def test_event_tooltip_does_not_add_unverified_combat_messages(self):
        actor=SimpleNamespace(command_text=lambda cmd:"cmd source")
        self.assertEqual(EditorApp._event_tooltip(actor,1,None),"")
        cmd=SimpleNamespace(opcode=0x0F11,info=None)
        result=EditorApp._event_tooltip(actor,6,(None,None,cmd))
        self.assertIn("tick 6",result)
        self.assertIn("cmd source",result)
        self.assertNotIn("runtime hit",result)

    def test_source_field_formatters_keep_fixed_point_hex_and_markers(self):
        actor=SimpleNamespace()
        self.assertEqual(EditorApp._fmt(actor,"TextureID",0x5C100),"0x0005C100")
        self.assertEqual(EditorApp._fmt_short(actor,"GenerateID",0x5C100),"0x05C100")
        self.assertEqual(EditorApp._fmt(actor,"any",None),"—")
        self.assertEqual(EditorApp._fmt(actor,"any",[1,-2]),"(1, -2)")
        self.assertEqual(EditorApp._fmt_short(actor,"other",[1,2]),"1,2")
        self.assertEqual(EditorApp._fmt(actor,"EffectFlags",0xF),"0x000F")

    def test_animation_refresh_preserves_timeline_inspector_redraw_order(self):
        events=[]
        class Timeline:
            def set_data(self,*args):events.append(("data",args))
            def select(self,*args):events.append(("select",args))
            def set_tick(self,t):events.append(("tick",t))
        move=SimpleNamespace(duration=10)
        actor=SimpleNamespace(move=move,tick=13,
            dur_label=SimpleNamespace(configure=lambda **k:events.append(("label",k))),
            tick_var=SimpleNamespace(set=lambda s:events.append(("tick_var",s))),
            timeline=Timeline(),sel_track=(1,2),sel_key=4,
            _timeline_rows=lambda:[{"key":"value"}],
            refresh_inspector=lambda:events.append(("inspector",)),
            redraw_view=lambda:events.append(("redraw",)))
        EditorApp.refresh_animation(actor)
        self.assertEqual(actor.tick,10)
        self.assertEqual([e[0] for e in events],
                         ["label","tick_var","data","select","tick","inspector","redraw"])
        self.assertEqual(events[3][1],(("trk",1,2),4))

    def test_frame_image_missing_sprite_is_negatively_cached(self):
        actor=SimpleNamespace(index=SimpleNamespace(sprite=Mock(return_value=None)),_frame_cache={})
        self.assertIsNone(EditorApp._frame_image(actor,0x10000005,2))
        self.assertIsNone(EditorApp._frame_image(actor,0x10000005,2))
        actor.index.sprite.assert_called_once_with(0x10000005)
        self.assertIn((5,2),actor._frame_cache)

    def test_frame_image_compose_errors_dont_invent_pixels(self):
        src=SimpleNamespace(dsig=SimpleNamespace(palettes=[]))
        d=SimpleNamespace(frames=[SimpleNamespace(pieces=[object()])])
        actor=SimpleNamespace(index=SimpleNamespace(sprite=lambda tid:(d,src)),_frame_cache={})
        with patch("app.renderers.viewport_ops.sprite.compose",side_effect=ValueError("bad DSTX")):
            self.assertIsNone(EditorApp._frame_image(actor,0x501,0))
        self.assertEqual(actor._frame_cache[(0x501,0)],None)

    def test_fit_timeline_clamps_zoom_and_zero_width(self):
        set_zoom=Mock()
        timeline=SimpleNamespace(
            canvas=SimpleNamespace(winfo_width=Mock(return_value=800)),
            HEADER_W=100,xoff=5,set_zoom=set_zoom)
        actor=SimpleNamespace(move=SimpleNamespace(duration=20),timeline=timeline)
        with patch("app.renderers.viewport_ops.T.ui_scale",return_value=1.0):
            EditorApp.fit_timeline(actor)
            self.assertEqual(timeline.xoff,0)
            self.assertGreaterEqual(set_zoom.call_args.args[0],3)
            self.assertLessEqual(set_zoom.call_args.args[0],40)
            set_zoom.reset_mock()
            timeline.canvas.winfo_width.return_value=120
            EditorApp.fit_timeline(actor)
            set_zoom.assert_not_called()

if __name__=="__main__":unittest.main()
