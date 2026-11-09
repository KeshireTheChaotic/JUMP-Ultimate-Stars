"""One-time source-locked R08 Phase 10 extraction; no game data writes."""
from __future__ import annotations
import ast, hashlib, io, json, re, textwrap, tokenize
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
EDITOR=ROOT/"app/editor.py"
SNAPSHOT=ROOT/"docs/EDITOR_R08_PHASE10_SOURCE_SNAPSHOT_20261108.json"
CONTRACT=ROOT/"tests/fixtures/editor_r08_phase10_method_hashes.json"
GROUPS={
    "app/lifecycle/effect_sources.py":(
        "_amt_tables","_load_effect_catalog","_refresh_pursuer_links","open_effect_move"),
    "app/timeline/presentation_ops.py":(
        "_refresh_notetrack_effects","_motion_changed","_physics_tooltip",
        "_sound_tooltip","_event_tooltip","_fmt","_fmt_short"),
    "app/renderers/viewport_ops.py":(
        "refresh_animation","_frame_image","fit_timeline"),
}
HEADERS={
    "app/lifecycle/effect_sources.py":(
        "from jus_formats import almt\n"
        "from jus_package import effectlinks,spawns\n"
        "from jus_package.project import join,split\n"
    ),
    "app/timeline/presentation_ops.py":(
        "from jus_formats import almt,eventops\n"
        "from jus_package import motion,sounds\n"
    ),
    "app/renderers/viewport_ops.py":(
        "from jus_formats import sprite\n"
        "from jus_package import images\n"
        "from app import theme as T\n"
    ),
}
HX={"open_effect_move","_fmt","_fmt_short"}

def sha(s):return hashlib.sha256(s.encode("utf8")).hexdigest()
def rename_receiver(src):
    lines=src.splitlines(keepends=True);changes={}
    for t in tokenize.generate_tokens(io.StringIO(src).readline):
        if t.type==tokenize.NAME and t.string=="self":
            changes.setdefault(t.start[0]-1,[]).append((t.start[1],t.end[1]))
    for i,spans in changes.items():
        for a,b in sorted(spans,reverse=True):
            lines[i]=lines[i][:a]+"editor"+lines[i][b:]
    return "".join(lines)
def insert_formatter(s):
    lines=s.splitlines(keepends=True)
    assert lines[0].endswith("):\n"),lines[0]
    lines[0]=lines[0][:-3]+", *, hx):\n"
    return "".join(lines)

def main():
    if any((ROOT/p).exists() for p in GROUPS) or SNAPSHOT.exists() or CONTRACT.exists():
        raise SystemExit("Phase 10 output already exists; refusing overwrite.")
    source_bytes=EDITOR.read_bytes()
    assert b"\r\n" not in source_bytes,"EditorApp source must remain LF-normalized"
    source=source_bytes.decode("utf8")
    src_lines=source.splitlines(keepends=True)
    cls=next(n for n in ast.parse(source).body if isinstance(n,ast.ClassDef) and n.name=="EditorApp")
    methods={n.name:n for n in cls.body if isinstance(n,ast.FunctionDef)}
    entries={}
    snap={"phase":"R08 Phase 10","original_controller_sha256":sha(source),
          "original_controller_physical_lines":len(source.splitlines()),"methods":{}}
    for rel,names in GROUPS.items():
        for name in names:
            node=methods[name]
            assert not node.decorator_list,(name,"has a decorator")
            assert not node.args.posonlyargs and not node.args.kwonlyargs,(name,"special args")
            first=src_lines[node.lineno-1]
            assert first.startswith("    def "+name+"(") and first.endswith("):\n"),(name,first)
            orig=textwrap.dedent("".join(src_lines[node.lineno-1:node.end_lineno]))
            transformed=rename_receiver(orig)
            if name in HX:transformed=insert_formatter(transformed)
            assert bool(re.search(r"\bhx\s*\(",transformed))==(name in HX),name
            ast.parse(transformed)
            entries[name]={"start":node.lineno,"end":node.end_lineno,"module":rel,
                           "original":orig,"transformed":transformed}
            snap["methods"][name]={
                "module":rel, "start_line":node.lineno,"end_line":node.end_lineno,
                "original_source":orig,"original_source_sha256":sha(orig),
                "transformed_source_sha256":sha(transformed),
                "injected_formatter":name in HX}
    module_sources={}
    contract={"phase":"R08 Phase 10","original_controller_sha256":sha(source),
              "original_method_body_contracts":{}}
    for rel,names in GROUPS.items():
        mod=('"""Original-source UI coordination extracted from EditorApp — R08 Phase 10.\n'
             'Source/engine unknowns remain unknown; do not infer native runtime physics.\n'
             '"""\nfrom __future__ import annotations\n\n'+HEADERS[rel]+"\n\n")
        mod+="\n\n\n".join(entries[n]["transformed"].rstrip("\n") for n in names)+"\n"
        ast.parse(mod)
        module_lines=mod.splitlines(keepends=True)
        module_ast=ast.parse(mod)
        for name in names:
            n=next(x for x in module_ast.body if isinstance(x,ast.FunctionDef) and x.name==name)
            body=textwrap.dedent("".join(module_lines[n.lineno:n.end_lineno]))
            contract["original_method_body_contracts"][name]={
                "module":rel,"callable":name,
                "original_source_sha256":sha(entries[name]["original"]),
                "transformed_body_sha256":sha(body),
                "original_lines":entries[name]["end"]-entries[name]["start"]+1,
                "injected_formatter":name in HX}
        module_sources[rel]=mod
    final=list(src_lines)
    for name,item in sorted(entries.items(),key=lambda p:p[1]["start"],reverse=True):
        node=methods[name]
        params=[a.arg for a in node.args.args[1:]]
        assert node.args.args[0].arg=="self"
        assert node.args.vararg is None and node.args.kwarg is None
        forwarding="self"+''.join(", "+x for x in params)
        if name in HX:forwarding+=", hx=hx"
        wrapper=(src_lines[item["start"]-1]
                 +f"        from {item['module'][:-3].replace('/','.')} import {name} as _operation\n"
                 +f"        return _operation({forwarding})\n")
        final[item["start"]-1:item["end"]]=[wrapper]
    result="".join(final)
    new_class=next(n for n in ast.parse(result).body if isinstance(n,ast.ClassDef) and n.name=="EditorApp")
    for name in entries:
        n=next(x for x in new_class.body if isinstance(x,ast.FunctionDef) and x.name==name)
        assert n.end_lineno-n.lineno+1==3,name
        assert ast.dump(methods[name].args)==ast.dump(n.args),name

    # Save original evidence before editing controller; all paths checked absent.
    SNAPSHOT.write_bytes((json.dumps(snap,ensure_ascii=False,indent=2)+"\n").encode("utf8"))
    CONTRACT.write_bytes((json.dumps(contract,ensure_ascii=False,indent=2)+"\n").encode("utf8"))
    for rel,mod in module_sources.items():
        (ROOT/rel).write_bytes(mod.encode("utf8"))
    EDITOR.write_bytes(result.encode("utf8"))
    print("PHASE10_MOVED",len(entries),"BEFORE_LINES",len(source.splitlines()),
          "AFTER_LINES",len(result.splitlines()),
          "REDUCTION",len(source.splitlines())-len(result.splitlines()))
    print("ORIGINAL_SHA256",sha(source))
    for rel,names in GROUPS.items():print("MODULE",rel,len(names))

if __name__=="__main__":main()
