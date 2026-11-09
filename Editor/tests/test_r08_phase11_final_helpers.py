"""Phase 11 exact source locks and residual Tk/NoteTrack behavior safeguards."""
from __future__ import annotations
import ast,hashlib,io,json,tempfile,tokenize,unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import Mock,patch

from app.editor import EditorApp
from jus_formats import notetrack
ROOT=Path(__file__).resolve().parents[1]
SNAP=json.loads((ROOT/"docs/EDITOR_R08_PHASE11_SOURCE_SNAPSHOT_20261108.json").read_text("utf8"))
CONTRACT=json.loads((ROOT/"tests/fixtures/editor_r08_phase11_method_hashes.json").read_text("utf8"))

def sha(s):return hashlib.sha256(s.encode("utf8")).hexdigest()
def rebind(s,static=False):
    if static:return s
    lines=s.splitlines(keepends=True);edits={}
    for tok in tokenize.generate_tokens(io.StringIO(s).readline):
        if tok.type==tokenize.NAME and tok.string=="self":
            edits.setdefault(tok.start[0]-1,[]).append((tok.start[1],tok.end[1]))
    for i,positions in edits.items():
        for a,b in sorted(positions,reverse=True):
            lines[i]=lines[i][:a]+"editor"+lines[i][b:]
    return "".join(lines)
class Phase11Tests(unittest.TestCase):
    def test_six_exact_source_fingerprints_and_static_descriptor_compatibility(self):
        records=CONTRACT["original_method_body_contracts"]
        self.assertEqual(len(records),6)
        src=(ROOT/"app/editor.py").read_text("utf8")
        cls=next(n for n in ast.parse(src).body if isinstance(n,ast.ClassDef) and n.name=="EditorApp")
        curr={n.name:n for n in cls.body if isinstance(n,ast.FunctionDef)}
        for name,rec in records.items():
            with self.subTest(method=name):
                original=SNAP["methods"][name]["original_source"]
                transformed=rebind(original,rec["original_decorator"]=="staticmethod")
                self.assertEqual(sha(original),rec["original_source_sha256"])
                self.assertEqual(sha(transformed),SNAP["methods"][name]["transformed_source_sha256"])
                mod_src=(ROOT/rec["module"]).read_text("utf8")
                target=next(n for n in ast.parse(mod_src).body if isinstance(n,ast.FunctionDef) and n.name==name)
                mod_lines=mod_src.splitlines(keepends=True)
                self.assertEqual("".join(mod_lines[target.lineno-1:target.end_lineno]),transformed)
                import textwrap
                body=textwrap.dedent("".join(mod_lines[target.lineno:target.end_lineno]))
                self.assertEqual(sha(body),rec["transformed_body_sha256"])
                self.assertEqual(ast.dump(ast.parse(original).body[0].args),
                                 ast.dump(curr[name].args))
                self.assertEqual(curr[name].end_lineno-curr[name].lineno+1,3)
                self.assertEqual([d.id for d in curr[name].decorator_list],
                                 ["staticmethod"] if rec["original_decorator"] else [])

    def test_tk_startup_and_destroy_untouched_in_original_controller(self):
        src=(ROOT/"app/editor.py").read_text("utf8")
        cls=next(n for n in ast.parse(src).body if isinstance(n,ast.ClassDef) and n.name=="EditorApp")
        functions={n.name:n for n in cls.body if isinstance(n,ast.FunctionDef)}
        self.assertIsInstance(functions["__init__"],ast.FunctionDef)
        self.assertIsInstance(functions["destroy"],ast.FunctionDef)
        self.assertTrue(any(isinstance(n,ast.Call) and isinstance(n.func,ast.Attribute)
                            and n.func.attr=="destroy" and isinstance(n.func.value,ast.Call)
                            and isinstance(n.func.value.func,ast.Name)
                            and n.func.value.func.id=="super"
                            for n in ast.walk(functions["destroy"])))
        self.assertTrue(any(isinstance(n,ast.Call) and isinstance(n.func,ast.Attribute)
                            and n.func.attr=="after" for n in ast.walk(functions["__init__"])))

    def test_roster_clips_hide_restore_and_missing_clip_is_nonmutating(self):
        actions=[];child=object()
        class Panes:
            def __init__(self):self.visible=["roster",str(child)]
            def panes(self):return list(self.visible)
            def forget(self,target):
                actions.append(("forget",target));self.visible.remove(str(target))
            def insert(self,i,target,**opts):
                actions.append(("insert",i,target,opts));self.visible.insert(i,str(target))
        panes=Panes()
        actor=SimpleNamespace(_animation_clips=child,_upper=panes)
        EditorApp._set_roster_clips(actor)
        self.assertEqual(actions,[("forget",child)])
        EditorApp._set_roster_clips(actor)
        self.assertEqual(len(actions),1)
        EditorApp._set_roster_clips(actor,False)
        self.assertEqual(actions[-1],("insert",0,child,{"weight":0}))
        missing=SimpleNamespace()
        self.assertIsNone(EditorApp._set_roster_clips(missing))

    def test_arrow_animation_and_sprite_control_paths(self):
        events=[]
        actor=SimpleNamespace(workspace="animation",tick=10,
             jump_key=lambda x:events.append(("jump",x)),
             set_tick=lambda x:events.append(("tick",x)),
             piece_i=None)
        EditorApp._arrow(actor,1,2,None)
        EditorApp._arrow(actor,-1,0,None,big=True)
        EditorApp._arrow(actor,0,3,None)
        self.assertEqual(events,[("tick",11),("jump",-1)])
        actor.workspace="sprite";actor.piece_i=3
        actor._piece=lambda:object()
        actor.nudge_piece=lambda x,y:events.append(("nudge",x,y))
        EditorApp._arrow(actor,1,-1,None,big=True)
        self.assertEqual(events[-1],("nudge",8,-8))
        actor.piece_i=None
        actor.sprite_d=SimpleNamespace(frames=[object() for _ in range(3)])
        actor.frame_i=2
        actor.select_frame=lambda idx:events.append(("frame",idx))
        EditorApp._arrow(actor,1,10,None)
        self.assertEqual(events[-1],("frame",2))
        actor.frame_i=0
        EditorApp._arrow(actor,-1,0,None)
        self.assertEqual(events[-1],("frame",0))

    def test_doc_help_preserves_source_path_and_missing_dialog(self):
        with tempfile.TemporaryDirectory() as t:
            p=Path(t);(p/"FORMATS.md").write_text("original docs",encoding="utf8")
            with patch("app.lifecycle.ui_helpers.HERE",p),\
                 patch("app.lifecycle.ui_helpers.sys.platform","win32"),\
                 patch("app.lifecycle.ui_helpers.os.startfile",create=True) as starter,\
                 patch("app.lifecycle.ui_helpers.messagebox.showinfo") as msg:
                EditorApp._open_doc(object(),"FORMATS.md")
                # The original code reads HERE/docs, not HERE itself.
                self.assertEqual(starter.call_count,0)
                msg.assert_called_once()
            (p/"docs").mkdir();(p/"docs"/"FORMATS.md").write_text("docs")
            with patch("app.lifecycle.ui_helpers.HERE",p),\
                 patch("app.lifecycle.ui_helpers.sys.platform","win32"),\
                 patch("app.lifecycle.ui_helpers.os.startfile",create=True) as starter,\
                 patch("app.lifecycle.ui_helpers.messagebox.showinfo") as msg:
                EditorApp._open_doc(object(),"FORMATS.md")
                starter.assert_called_once_with(str(p/"docs"/"FORMATS.md"))
                msg.assert_not_called()

    def test_integer_helper_preserves_base0_and_invalid_fallback(self):
        self.assertEqual(EditorApp._int(" 0x20 ",7),32)
        self.assertEqual(EditorApp._int(" -8 ",7),-8)
        self.assertEqual(EditorApp._int("not-integer",7),7)
        self.assertEqual(EditorApp._int("08",7),7)
        self.assertEqual(EditorApp._int("",7),7)

    def test_notetrack_original_binary_roundtrip_and_edit(self):
        key=notetrack.NoteKey(4,[notetrack.Command.from_values(0x0100,[1])])
        original=notetrack.NoteTrack([key],b"\xAA\xBB").build()
        unchanged=EditorApp.text_to_notes("4 0x0100 1 # original command",original)
        self.assertEqual(unchanged,original)
        changed=EditorApp.text_to_notes("4 0x0100 0",original)
        self.assertNotEqual(changed,original)
        parsed=notetrack.parse(changed)
        self.assertEqual(parsed.keys[0].commands[0].values(),[0])
        # Source parser intentionally drops pre-existing padding for modified text.
        self.assertEqual(parsed.tail,b"")

    def test_notetrack_preserves_unknown_opcode_raw_args(self):
        orig=notetrack.NoteTrack([]).build()
        text="2 0x7F7F hex:ABCD\n3 -\n4 0x0402 3"
        result=EditorApp.text_to_notes(text,orig)
        parsed=notetrack.parse(result)
        self.assertEqual([k.tick for k in parsed.keys],[2,3,4])
        self.assertEqual(parsed.keys[0].commands[0].args,b"\xAB\xCD")
        self.assertEqual(parsed.keys[1].commands,[])
        self.assertEqual(parsed.keys[2].commands[0].opcode,0x0402)

    def test_almt_hint_source_kinds_remain_readable_and_type_exact(self):
        with patch("app.inspectors.value_hint.almt.value_kind",side_effect=
                   ["s16x2","s16x4","u32x3","int"]):
            self.assertEqual(EditorApp._value_hint("first"),"JSON list [x, y]")
            self.assertEqual(EditorApp._value_hint("second"),"JSON list [x0, y0, x1, y1]")
            self.assertEqual(EditorApp._value_hint("third"),"JSON list of 3 u32 values")
            self.assertIn("hex allowed",EditorApp._value_hint("last"))

if __name__=="__main__":unittest.main()
