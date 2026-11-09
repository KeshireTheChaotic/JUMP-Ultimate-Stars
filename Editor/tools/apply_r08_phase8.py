"""One-time source-locked R08 Phase 8 relocation (no game source/assets touched)."""
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
DEST = ROOT / "app/renderers/projection.py"
SNAPSHOT = ROOT / "docs/EDITOR_R08_PROJECTION_SOURCE_SNAPSHOT_20261108.json"
CONTRACT = ROOT / "tests/fixtures/editor_r08_phase8_projection_hashes.json"

# Public Tk method entrypoints and their unchanged argument forwarding.
SIGNATURES = {
    "frame_view": "",
    "_move_scope_extent": "",
    "_handler00_launch_extents": "",
    "_move_extent": "",
    "_animation_origin": "tick",
    "spawn_projection": "tick",
    "_shot_events_current": "",
    "_visible_spawn_instances": "projection",
}

def replace_name(source, old, new):
    """Replace identifier tokens only, leaving quoted strings/comments and layout untouched."""
    lines = source.splitlines(keepends=True)
    changes = {}
    for tok in tokenize.generate_tokens(io.StringIO(source).readline):
        if tok.type == tokenize.NAME and tok.string == old:
            changes.setdefault(tok.start[0] - 1, []).append((tok.start[1], tok.end[1]))
    for i, spans in changes.items():
        for lo, hi in sorted(spans, reverse=True):
            lines[i] = lines[i][:lo] + new + lines[i][hi:]
    return "".join(lines)

def sha(s):
    return hashlib.sha256(s.encode("utf8")).hexdigest()

def main():
    if DEST.exists() or SNAPSHOT.exists() or CONTRACT.exists():
        raise SystemExit("Phase 8 destination or source snapshot exists; refusing to overwrite.")
    source = EDITOR.read_text(encoding="utf8")
    original_lines = source.splitlines(keepends=True)
    parsed = ast.parse(source)
    cls = next(n for n in parsed.body if isinstance(n, ast.ClassDef) and n.name == "EditorApp")
    methods = {n.name: n for n in cls.body if isinstance(n, ast.FunctionDef)}
    moved = {}
    for name, args in SIGNATURES.items():
        node = methods[name]
        assert not node.decorator_list
        header = original_lines[node.lineno-1]
        assert header.strip().startswith("def " + name + "(") and header.rstrip().endswith(":")
        assert header.count("\n") == 1, (name, "multiline def")
        raw = textwrap.dedent("".join(original_lines[node.lineno-1:node.end_lineno]))
        assert "def " + name + "(self" in raw.splitlines()[0]
        transformed = replace_name(raw, "self", "editor")
        assert transformed.startswith("def " + name + "(editor")
        moved[name] = {
            "name": name, "source": raw, "transformed": transformed,
            "start_line": node.lineno, "end_line": node.end_lineno,
        }

    # Capture original unmodified source and transformed fingerprints BEFORE changing EditorApp.
    snapshot = {
        "phase": "R08 Phase 8",
        "source_file": "app/editor.py",
        "original_editor_sha256": sha(source),
        "methods": {
            name: {
                "original_source": m["source"],
                "original_source_sha256": sha(m["source"]),
                "line_start": m["start_line"],
                "line_end": m["end_line"],
                "transformed_source_sha256": sha(m["transformed"]),
            } for name, m in moved.items()
        },
    }
    imports = (
        '"""Original-source projection/framing adapters extracted from EditorApp (R08 Phase 8).\n'
        'Source shots are launch evidence only, not simulated projectile trajectories.\n'
        '"""\n'
        'from __future__ import annotations\n\n'
        'from jus_formats import chrbin\n'
        'from jus_package import effectlinks, shotvisuals, spawns, spritegeometry\n'
        'from jus_package.project import join\n\n\n'
    )
    module_text = imports + "\n\n\n".join(m["transformed"].rstrip("\n") for m in moved.values()) + "\n"
    module_ast = ast.parse(module_text)
    module_lines = module_text.splitlines(keepends=True)
    contract = {"phase": "R08 Phase 8", "original_controller_sha256": sha(source),
                "original_method_body_contracts": {}}
    for name, item in moved.items():
        node = next(n for n in module_ast.body
                    if isinstance(n, ast.FunctionDef) and n.name == name)
        body = textwrap.dedent("".join(module_lines[node.lineno:node.end_lineno]))
        contract["original_method_body_contracts"][name] = {
            "module": "app/renderers/projection.py",
            "callable": name,
            "original_lines": item["end_line"] - item["start_line"] + 1,
            "original_source_sha256": sha(item["source"]),
            "transformed_body_sha256": sha(body),
        }

    replaced_lines = list(original_lines)
    for name, item in sorted(moved.items(), key=lambda kv: kv[1]["start_line"], reverse=True):
        start = item["start_line"]-1
        end = item["end_line"]
        original_header = original_lines[start]
        args = SIGNATURES[name]
        forwards = "self" + (", " + args if args else "")
        body = (original_header
                + "        from app.renderers import projection as _projection\n"
                + f"        return _projection.{name}({forwards})\n")
        replaced_lines[start:end] = [body]
    new_controller = "".join(replaced_lines)
    ast.parse(new_controller)
    # Ensure every method remains directly available under its original name.
    new_cls = next(n for n in ast.parse(new_controller).body
                   if isinstance(n, ast.ClassDef) and n.name == "EditorApp")
    for name in SIGNATURES:
        assert sum(n.name == name for n in new_cls.body if isinstance(n, ast.FunctionDef)) == 1

    # The test contracts and original source snapshot are written before the controller edit.
    SNAPSHOT.write_text(json.dumps(snapshot, indent=2, ensure_ascii=False) + "\n", encoding="utf8")
    CONTRACT.write_text(json.dumps(contract, indent=2) + "\n", encoding="utf8")
    DEST.write_text(module_text, encoding="utf8")
    EDITOR.write_bytes(new_controller.encode("utf8"))
    print("Moved", len(moved), "original methods to", DEST.relative_to(ROOT))
    print("Original EditorApp lines:", len(original_lines))
    print("New EditorApp physical lines:", len(new_controller.splitlines()))
    print("Original SHA-256:", sha(source))
    print("Projection fingerprints:", len(contract["original_method_body_contracts"]))

if __name__ == "__main__":
    main()
