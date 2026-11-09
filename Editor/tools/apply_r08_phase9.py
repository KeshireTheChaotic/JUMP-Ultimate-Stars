"""R08 Phase 9: source-locked, guarded extraction of EditorApp navigation."""
from __future__ import annotations

import ast
import hashlib
import io
import json
import re
import textwrap
import tokenize
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
EDITOR = ROOT / "app/editor.py"
SNAPSHOT = ROOT / "docs/EDITOR_R08_PHASE9_SOURCE_SNAPSHOT_20261108.json"
CONTRACT = ROOT / "tests/fixtures/editor_r08_phase9_method_hashes.json"

GROUPS = {
    "app/lifecycle/roster_navigation.py": (
        "show_roster_sprite", "_switch_almt", "_ai_block",
        "_move_xref", "_move_source_form", "_move_control_and_title",
        "open_move_resource", "open_koma_card", "_battle_base_table",
    ),
    "app/lifecycle/move_list.py": (
        "populate_moves", "on_move_select", "_move_row",
        "duplicate_move", "delete_move",
    ),
    "app/lifecycle/archive_navigation.py": (
        "populate_archive", "_selected_member", "_table_details",
        "rebuild_check",
    ),
}
HX = {
    "open_move_resource", "populate_moves", "_move_row",
    "duplicate_move", "delete_move", "populate_archive",
}
IMPORTS = {
    "app/lifecycle/roster_navigation.py": (
        "from jus_formats import battleai, battleinput, roster\n"
        "from jus_package import movelinks\n"
        "from jus_package.project import join, split\n"
    ),
    "app/lifecycle/move_list.py": (
        "from tkinter import messagebox\n"
        "from jus_formats import almt\n"
    ),
    "app/lifecycle/archive_navigation.py": (
        "from tkinter import messagebox\n"
        "from jus_formats import alar\n"
        "from jus_package.project import split\n"
    ),
}

def sha(s):
    return hashlib.sha256(s.encode("utf8")).hexdigest()

def replace_identifier(source, from_name="self", to_name="editor"):
    lines=source.splitlines(keepends=True)
    edits={}
    for token in tokenize.generate_tokens(io.StringIO(source).readline):
        if token.type == tokenize.NAME and token.string == from_name:
            edits.setdefault(token.start[0]-1, []).append((token.start[1],token.end[1]))
    for i, spans in edits.items():
        for lo,hi in sorted(spans, reverse=True):
            lines[i]=lines[i][:lo]+to_name+lines[i][hi:]
    return "".join(lines)

def inject_hx_header(text, needs_hx):
    if not needs_hx:
        return text
    lines=text.splitlines(keepends=True)
    first=lines[0]
    assert first.rstrip().endswith("):"), first
    lines[0]=first[:-3]+", *, hx):\n"
    return "".join(lines)

def main():
    destinations=[ROOT / p for p in GROUPS]
    if SNAPSHOT.exists() or CONTRACT.exists() or any(p.exists() for p in destinations):
        raise SystemExit("Phase 9 source/contracts/destination already exist: refusing overwrite")
    raw=EDITOR.read_bytes()
    if b"\r\n" in raw:
        raise SystemExit("EditorApp must use LF line endings before source fingerprinting")
    source=raw.decode("utf8")
    lines=source.splitlines(keepends=True)
    cls=next(n for n in ast.parse(source).body if isinstance(n,ast.ClassDef) and n.name=="EditorApp")
    methods={n.name:n for n in cls.body if isinstance(n,ast.FunctionDef)}
    gathered={}
    source_snapshot={"phase":"R08 Phase 9", "original_controller_sha256":sha(source),
                     "original_controller_physical_lines":len(source.splitlines()),"methods":{}}
    for rel,names in GROUPS.items():
        for name in names:
            node=methods[name]
            assert not node.decorator_list, (name, "decorators")
            assert len(node.args.kwonlyargs)==0, (name, "kwonly")
            first=lines[node.lineno-1]
            assert first.startswith("    def "+name+"(") and (first.rstrip().endswith("):") or first.rstrip().endswith(") -> bool:")),(name,first)
            original=textwrap.dedent("".join(lines[node.lineno-1:node.end_lineno]))
            transformed=inject_hx_header(replace_identifier(original),name in HX)
            assert bool(re.search(r"\bhx\s*\(",transformed)) == (name in HX), name
            ast.parse(transformed)
            gathered[name]={"source":original,"transformed":transformed,
                            "start":node.lineno,"end":node.end_lineno,
                            "module":rel}
            source_snapshot["methods"][name]={
                "module":rel,"line_start":node.lineno,"line_end":node.end_lineno,
                "original_source":original,"original_source_sha256":sha(original),
                "transformed_source_sha256":sha(transformed),
                "injected_formatter":name in HX,
            }

    modules={}
    contract={"phase":"R08 Phase 9",
              "original_controller_sha256":sha(source),
              "original_method_body_contracts":{}}
    for rel,names in GROUPS.items():
        head=('"""Source-preserving original EditorApp workflows (R08 Phase 9).\n'
              'Actual ALMT/BIN authority and Tk selection behavior are unchanged.\n'
              '"""\nfrom __future__ import annotations\n\n'
              +IMPORTS[rel]+"\n\n")
        module=head+"\n\n\n".join(gathered[n]["transformed"].rstrip("\n") for n in names)+"\n"
        parsed=ast.parse(module)
        module_lines=module.splitlines(keepends=True)
        for name in names:
            node=next(n for n in parsed.body if isinstance(n,ast.FunctionDef) and n.name==name)
            body=textwrap.dedent("".join(module_lines[node.lineno:node.end_lineno]))
            contract["original_method_body_contracts"][name]={
                "module":rel,"callable":name,
                "original_lines":gathered[name]["end"]-gathered[name]["start"]+1,
                "original_source_sha256":sha(gathered[name]["source"]),
                "transformed_body_sha256":sha(body),
                "injected_formatter":name in HX,
            }
        modules[rel]=module

    new_lines=list(lines)
    for name,m in sorted(gathered.items(),key=lambda x:x[1]["start"],reverse=True):
        first=lines[m["start"]-1]
        args=methods[name].args
        params=[a.arg for a in args.posonlyargs + args.args[1:]]
        # Named compatibility delegate preserves original positional/default signature.
        forward="self"+("".join(", "+p for p in params))
        if name in HX:
            forward+=", hx=hx"
        wrapper=(first
                 +f"        from {m['module'][:-3].replace('/', '.')} import {name} as _controller\n"
                 +f"        return _controller({forward})\n")
        new_lines[m["start"]-1:m["end"]]=[wrapper]
    new_controller="".join(new_lines)
    tree=ast.parse(new_controller)
    cls=next(n for n in tree.body if isinstance(n,ast.ClassDef) and n.name=="EditorApp")
    for name in gathered:
        found=[n for n in cls.body if isinstance(n,ast.FunctionDef) and n.name==name]
        assert len(found)==1
        assert found[0].end_lineno-found[0].lineno+1==3,name

    # Publish original text and source hashes before changing any application source.
    SNAPSHOT.write_bytes((json.dumps(source_snapshot,ensure_ascii=False,indent=2)+"\n").encode("utf8"))
    CONTRACT.write_bytes((json.dumps(contract,ensure_ascii=False,indent=2)+"\n").encode("utf8"))
    for rel,module in modules.items():
        (ROOT/rel).write_bytes(module.encode("utf8"))
    EDITOR.write_bytes(new_controller.encode("utf8"))
    print("MOVED_METHODS",len(gathered))
    print("BEFORE_LINES",len(source.splitlines()))
    print("AFTER_LINES",len(new_controller.splitlines()))
    print("REMOVED_LINES",len(source.splitlines())-len(new_controller.splitlines()))
    print("ORIGINAL_CONTROLLER_SHA256",sha(source))
    print("BODY_HASHES",len(contract["original_method_body_contracts"]))
    for rel,names in GROUPS.items():
        print("MODULE",rel,len(names))

if __name__=="__main__":
    main()
