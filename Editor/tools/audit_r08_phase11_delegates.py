"""R08 Phase 11 static/runtime delegate target audit (no production edits)."""
from __future__ import annotations
import ast, importlib, json, sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT))
EDITOR=ROOT/"app/editor.py"
OUTPUT=ROOT/"docs/EDITOR_R08_PHASE11_DELEGATE_AUDIT_20261108.json"
def audit():
    s=EDITOR.read_text("utf8")
    t=ast.parse(s)
    cls=next(n for n in t.body if isinstance(n,ast.ClassDef) and n.name=="EditorApp")
    fs=[n for n in cls.body if isinstance(n,ast.FunctionDef)]
    rows=[]
    errors=[]
    for fn in fs:
        body=fn.body
        if body and isinstance(body[0],ast.Expr) and isinstance(body[0].value,ast.Constant) and isinstance(body[0].value.value,str):
            body=body[1:]
        if len(body)!=2 or not isinstance(body[0],ast.ImportFrom) or not isinstance(body[1],ast.Return):
            continue
        stmt,ret=body
        if stmt.module is None or len(stmt.names)!=1 or not isinstance(ret.value,ast.Call):
            continue
        sym=stmt.names[0].name
        alias=stmt.names[0].asname or sym
        caller=ret.value.func
        if isinstance(caller,ast.Name) and caller.id==alias:
            path=sym
        elif isinstance(caller,ast.Attribute) and isinstance(caller.value,ast.Name) and caller.value.id==alias:
            path=sym+"."+caller.attr
        else:
            continue
        full_module=stmt.module
        row={"method":fn.name,"line":fn.lineno,"module":full_module,"symbol":path,"args":len(ret.value.args),"keyword_args":[kw.arg for kw in ret.value.keywords]}
        try:
            obj=importlib.import_module(full_module)
            for i,part in enumerate(path.split(".")):
                if i==0 and not hasattr(obj,part):
                    obj=importlib.import_module(full_module+"."+part)
                else:
                    obj=getattr(obj,part)
            if not callable(obj):
                raise TypeError(f"{path} is not callable")
            row["resolved"]=True
        except Exception as ex:
            row["resolved"]=False
            row["error"]=repr(ex)
            errors.append(row)
        rows.append(row)
    result={"phase":"R08 Phase 11","controller_physical_lines":len(s.splitlines()),
            "total_EditorApp_functions":len(fs),
            "verified_delegate_count":len(rows)-len(errors),
            "failed_delegate_count":len(errors),
            "non_delegates":[{"method":f.name,"line":f.lineno} for f in fs if f.name not in {x["method"] for x in rows}],
            "resolved_delegates":rows}
    assert len(fs)==189,len(fs)
    assert len(errors)==0,errors
    assert len(rows)>165,len(rows)
    if OUTPUT.exists():raise SystemExit("Audit JSON already exists; refusing overwrite.")
    OUTPUT.write_bytes((json.dumps(result,ensure_ascii=False,indent=2)+"\n").encode("utf8"))
    print("EDITOR_METHODS",len(fs),"DELEGATES",len(rows),"RESOLVED",len(rows)-len(errors),
          "NON_DELEGATES",len(result["non_delegates"]),
          "PHYSICAL_LINES",len(s.splitlines()))
    print("NON_DELEGATES",",".join(x["method"] for x in result["non_delegates"]))
    print("AUDIT_JSON",OUTPUT.name)
if __name__=="__main__":audit()
