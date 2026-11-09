"""R08 Phase 11 — one-time source-locked extraction of final six UI helpers.

Keep EditorApp.__init__ and destroy in the original Tk subclass. Never edit
original game source data, ROM assets, RE outputs, or existing Phase 1–10 modules.
"""
from __future__ import annotations

import ast
import hashlib
import io
import json
import textwrap
import tokenize
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
EDITOR=ROOT/"app/editor.py"
SNAP=ROOT/"docs/EDITOR_R08_PHASE11_SOURCE_SNAPSHOT_20261108.json"
CONTRACT=ROOT/"tests/fixtures/editor_r08_phase11_method_hashes.json"
GROUPS={
    "app/lifecycle/ui_helpers.py":("_set_roster_clips","_arrow","_open_doc"),
    "app/parsing.py":("_int",),
    "app/timeline/note_text.py":("text_to_notes",),
    "app/inspectors/value_hint.py":("_value_hint",),
}
STATIC={"_int","text_to_notes","_value_hint"}
HEADER={
    "app/lifecycle/ui_helpers.py":(
        '"""Source-preserving Tk navigation and documentation helpers (R08 Phase 11)."""\n'
        "from __future__ import annotations\n\n"
        "import os\nimport sys\nfrom pathlib import Path\n"
        "from tkinter import messagebox\n\n"
        "HERE=Path(__file__).resolve().parents[2]\n\n"
    ),
    "app/timeline/note_text.py":(
        '"""Original ALMT NoteTrack text input round-trip parser (R08 Phase 11)."""\n'
        "from __future__ import annotations\n\nfrom jus_formats import notetrack\n\n"
    ),
    "app/inspectors/value_hint.py":(
        '"""Original type-based ALMT Inspector value hints (R08 Phase 11)."""\n'
        "from __future__ import annotations\n\nfrom jus_formats import almt\n\n"
    ),
}

def hashtext(text):return hashlib.sha256(text.encode("utf8")).hexdigest()

def rename_receiver(text):
    lines=text.splitlines(keepends=True);spans={}
    for tok in tokenize.generate_tokens(io.StringIO(text).readline):
        if tok.type==tokenize.NAME and tok.string=="self":
            spans.setdefault(tok.start[0]-1,[]).append((tok.start[1],tok.end[1]))
    for i,positions in spans.items():
        for a,b in sorted(positions,reverse=True):
            lines[i]=lines[i][:a]+"editor"+lines[i][b:]
    return "".join(lines)

def run():
    fresh=[ROOT/p for p in GROUPS if p!="app/parsing.py"]
    if SNAP.exists() or CONTRACT.exists() or any(p.exists() for p in fresh):
        raise SystemExit("R08 Phase 11 already applied; refuse overwrite")
    raw=EDITOR.read_bytes()
    assert b"\r\n" not in raw,"controller must be LF text"
    source=raw.decode("utf8")
    lines=source.splitlines(keepends=True)
    cls=next(n for n in ast.parse(source).body if isinstance(n,ast.ClassDef) and n.name=="EditorApp")
    methods={n.name:n for n in cls.body if isinstance(n,ast.FunctionDef)}
    snap={
        "phase":"R08 Phase 11",
        "original_controller_sha256":hashtext(source),
        "original_controller_physical_lines":len(source.splitlines()),
        "methods":{},
    }
    results={}
    for module,names in GROUPS.items():
        for name in names:
            n=methods[name];is_static=name in STATIC
            assert bool(n.decorator_list)==is_static,(name,"unexpected decorators")
            if is_static:assert len(n.decorator_list)==1 and isinstance(n.decorator_list[0],ast.Name) and n.decorator_list[0].id=="staticmethod"
            assert n.args.vararg is None and n.args.kwarg is None and not n.args.kwonlyargs and not n.args.posonlyargs,name
            first=lines[n.lineno-1]
            assert first.startswith("    def "+name+"(") and (first.rstrip().endswith("):") or first.rstrip().endswith(") -> bytes:")),(name,first)
            orig=textwrap.dedent("".join(lines[n.lineno-1:n.end_lineno]))
            transformed=orig if is_static else rename_receiver(orig)
            ast.parse(transformed)
            results[name]={"start":n.lineno,"end":n.end_lineno,"module":module,
                           "original":orig,"transformed":transformed,"static":is_static}
            snap["methods"][name]={
                "module":module,"original_line_start":n.lineno,"original_line_end":n.end_lineno,
                "original_decorator":("staticmethod" if is_static else None),
                "original_source":orig,"original_source_sha256":hashtext(orig),
                "transformed_source_sha256":hashtext(transformed),
            }
    contract={"phase":"R08 Phase 11","original_controller_sha256":hashtext(source),
              "original_method_body_contracts":{}}
    src_modules={}
    for module,names in GROUPS.items():
        if module=="app/parsing.py":
            src=(ROOT/module).read_text("utf8")
            assert "def _int(" not in src
            content=src.rstrip("\n")+"\n\n\n"+results["_int"]["transformed"].rstrip("\n")+"\n"
        else:
            content=HEADER[module]+"\n\n".join(results[x]["transformed"].rstrip("\n") for x in names)+"\n"
        tree=ast.parse(content)
        module_lines=content.splitlines(keepends=True)
        for name in names:
            n=next(n for n in tree.body if isinstance(n,ast.FunctionDef) and n.name==name)
            func="".join(module_lines[n.lineno-1:n.end_lineno])
            body=textwrap.dedent("".join(module_lines[n.lineno:n.end_lineno]))
            assert func==results[name]["transformed"],(name,"body changed")
            contract["original_method_body_contracts"][name]={
                "module":module,"callable":name,
                "original_source_sha256":hashtext(results[name]["original"]),
                "transformed_body_sha256":hashtext(body),
                "original_decorator":snap["methods"][name]["original_decorator"],
                "original_lines":results[name]["end"]-results[name]["start"]+1,
            }
        src_modules[module]=content
    updated=list(lines)
    for name,r in sorted(results.items(),key=lambda x:x[1]["start"],reverse=True):
        n=methods[name]
        args=[a.arg for a in n.args.args]
        if not r["static"]:
            assert args[0]=="self";forward=["self"]+args[1:]
        else:forward=args
        wrapper=(lines[r["start"]-1]
                 +f"        from {r['module'][:-3].replace('/','.')} import {name} as _helper\n"
                 +f"        return _helper({', '.join(forward)})\n")
        updated[r["start"]-1:r["end"]]=[wrapper]
    controller="".join(updated)
    tree=ast.parse(controller)
    cls=next(n for n in tree.body if isinstance(n,ast.ClassDef) and n.name=="EditorApp")
    for name in results:
        n=next(x for x in cls.body if isinstance(x,ast.FunctionDef) and x.name==name)
        assert ast.dump(n.args)==ast.dump(methods[name].args),name
        assert len(n.decorator_list)==len(methods[name].decorator_list),name
        assert n.end_lineno-n.lineno+1==3,name
    for name in ("__init__","destroy"):
        before=methods[name]
        after=next(x for x in cls.body if isinstance(x,ast.FunctionDef) and x.name==name)
        assert ast.dump(before,include_attributes=False)==ast.dump(after,include_attributes=False),name
    # Publish complete original function texts before changing any code.
    SNAP.write_bytes((json.dumps(snap,ensure_ascii=False,indent=2)+"\n").encode("utf8"))
    CONTRACT.write_bytes((json.dumps(contract,ensure_ascii=False,indent=2)+"\n").encode("utf8"))
    for path,content in src_modules.items(): (ROOT/path).write_bytes(content.encode("utf8"))
    EDITOR.write_bytes(controller.encode("utf8"))
    print("R08_PHASE11_MOVED",len(results),"EDITOR_LINES",len(source.splitlines()),"TO",len(controller.splitlines()))
    print("ORIGINAL_EDITOR_SHA256",hashtext(source))
    for p,ns in GROUPS.items():print("MODULE",p,"COUNT",len(ns))

if __name__=="__main__":run()
