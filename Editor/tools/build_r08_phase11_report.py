"""Phase 11 final R08 interactive report with immutable verification gates."""
from __future__ import annotations
import json,re
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
D=ROOT/"docs"
SOURCE=D/"JUS_EDITOR_REDUNDANCY_AUDIT_PHASE10_R08_20261108.html"
DEST=D/"JUS_EDITOR_REDUNDANCY_AUDIT_PHASE11_R08_20261108.html"
MD=D/"EDITOR_AUDIT_R08_PHASE11_20261108.md"
UNIT=D/"_r08_phase11_full_unit_log.txt"
GUI=D/"_r08_phase11_gui_log.txt"
SNAP=D/"EDITOR_R08_PHASE11_SOURCE_SNAPSHOT_20261108.json"
CONTRACT=ROOT/"tests/fixtures/editor_r08_phase11_method_hashes.json"
MANIFEST=D/"EDITOR_R08_PHASE11_DELEGATE_AUDIT_20261108.json"
B=chr(96)
def q(s):return B+s+B

def main():
    if DEST.exists() or MD.exists():raise SystemExit("Phase 11 reports already exist; refusing overwrite")
    unit=UNIT.read_text("utf8")
    gui=GUI.read_text("utf8")
    matches=re.search(r"Ran (\d+) tests in",unit)
    assert matches and int(matches.group(1))==500 and "OK (skipped=1)" in unit, "Full suite not verified"
    checks=(
        "PASS no unexpected dialogs","OK: Koma battle/support",
        "OK: Bo-bobo native source","OK: 46/46 original scene IDs",
        "OK: source-backed scene editor","OK: db_b_01 tick 30",
        "OK: GUI Archive shot/col typed inspectors",
        "OK: original normal-action","OK: 5×4 shape variant dialog",
    )
    assert all(x in gui for x in checks) and "Traceback" not in gui,"GUI suite not verified"
    snap=json.loads(SNAP.read_text("utf8"))
    contract=json.loads(CONTRACT.read_text("utf8"))
    audit=json.loads(MANIFEST.read_text("utf8"))
    assert len(snap["methods"])==len(contract["original_method_body_contracts"])==6
    assert snap["original_controller_physical_lines"]==1070
    assert audit["total_EditorApp_functions"]==189
    assert audit["verified_delegate_count"]==178 and audit["failed_delegate_count"]==0
    assert len(audit["non_delegates"])==11 and audit["controller_physical_lines"]==1021
    assert len((ROOT/"app/editor.py").read_bytes().splitlines())==1021
    assert {x["method"] for x in audit["non_delegates"]}=={
        "__init__","destroy","show_roster_animation","show_shortcuts",
        "_short","_char_of","_motion_params","_branch_targets","_state",
        "redraw_view","frame_view_if_needed"}
    prior=SOURCE.read_text("utf8")
    pattern=r'(<script id="audit-data" type="application/json">)(.*?)(</script>)'
    found=re.search(pattern,prior,re.S); assert found
    data=json.loads(found.group(2))
    assert len(data["findings"])==11
    data["report"]="JUS Editor — Redundancy Audit (R08 Phase 11 final extraction)"
    data["implementation_status_date"]="2026-11-08 (R08 Phase 11 exact-source residual helper extraction)"
    data["implementation_summary"].update({
        "implemented":8,"partial":0,"deferred":0,"preserve":3,
        "unit_tests_run":500,"unit_tests_passed":499,"skipped":1,"gui_smoke_passed":9})
    r08=next(f for f in data["findings"] if f["id"]=="R08")
    r08["implementation"].update({
        "status":"Implemented",
        "summary":(
            "R08 controller responsibility extraction complete. Six remaining "
            "non-lifecycle methods moved to app/lifecycle/ui_helpers.py (3), "
            "app/parsing.py (1), app/timeline/note_text.py (1) and "
            "app/inspectors/value_hint.py (1) with exact original behavior, "
            "public method signatures and staticmethod decorators preserved. "
            "Startup __init__ and Tk destroy remain in their original subclass. "
            "Controller size is now 1,021 physical lines (1,070 before Phase 11, "
            "approximately 4,350 before the audit). Across phases, 176 moved "
            "original method bodies have original-source SHA-256 contracts."
        ),
        "checks":(
            "6 of 6 original sources and transformed bodies match fingerprints "
            "and external method signatures. Nine new behavioral/source tests pass, "
            "including original NoteTrack byte preservation and unknown command "
            "round trips. All 178 import-and-forward delegates resolve to callable "
            "module targets with zero unresolved; 189 total methods include "
            "11 non-delegates (two lifecycle methods and nine small UI adapters). "
            "Full unit suite: 500 run, 499 passed, 1 skipped. Nine Windows GUI "
            "smokes passed (eight game-data workflows plus one isolated synthetic "
            "Koma shape fixture). 46 native scene IDs and ROM callback indexes verify. "
            "The older separate effect-reference smoke mismatch (4 expected vs "
            "1 actual) remains an engine/projection tracing issue, not concealed."
        )
    })
    r08["evidence"]=[
        ["app/editor.py","1–1021","Original Tk lifecycle plus 178 verified compatibility delegates"],
        ["app/lifecycle/ui_helpers.py","1","Three original roster/keyboard/document helpers"],
        ["app/parsing.py","1","Original integer fallback"],
        ["app/timeline/note_text.py","1","Original ALMT NoteTrack text import"],
        ["app/inspectors/value_hint.py","1","Original ALMT field value hints"],
        ["docs/EDITOR_R08_PHASE11_SOURCE_SNAPSHOT_20261108.json","1","Six original method texts, line positions and SHA-256"],
        ["docs/EDITOR_R08_PHASE11_DELEGATE_AUDIT_20261108.json","1","178 resolved delegated symbols"],
        ["tests/test_r08_phase11_final_helpers.py","1","Nine behavior and source-lock tests"]
    ]
    patched=re.sub(pattern,lambda m:m.group(1)+json.dumps(data,ensure_ascii=False,separators=(",",":")).replace("</","<\\/")+m.group(3),prior,count=1,flags=re.S)
    section=r'<section class="method" style="margin-top:0;margin-bottom:18px">.*?</section>'
    progress="""<section class="method" style="margin-top:0;margin-bottom:18px"><h2>Implementation progress · R08 Phase 11 · 8 Nov 2026</h2>
<p><strong>8 implemented</strong> · <strong>0 partial</strong> · <strong>0 deferred</strong> · <strong>3 intentionally preserved</strong>. The R08 EditorApp responsibility extraction is complete with no changes to game assets, Ghidra reverse-engineered source, ROM or overlay bytes or saved decks.</p>
<p><strong>EditorApp: 1,021 physical lines</strong> (approximately 4,350 before audit). <strong>176 original method bodies</strong> source-locked. <strong>178 of 178</strong> import-and-forward delegates resolved. Original Tk startup and teardown remain inside EditorApp.</p>
<p><strong>500 Python tests run: 499 passed, one skipped.</strong> All nine Windows GUI smoke checks passed, including one isolated synthetic Koma shape. 46 original scene IDs still verify. An independent older effect-reference GUI check remains unresolved (4 expected instances, 1 actual) and is not counted among passing checks.</p>
<details><summary style="padding-left:0"><strong>Phase 11 extraction and delegate evidence</strong></summary><div class="content">
<table class="evidence"><thead><tr><th>Module</th><th>Preserved responsibility</th></tr></thead><tbody>
<tr><td><code>app/lifecycle/ui_helpers.py</code></td><td>Roster panes, keyboard arrow dispatch and source document links (3 methods)</td></tr>
<tr><td><code>app/parsing.py</code></td><td>Original numeric fallback</td></tr>
<tr><td><code>app/timeline/note_text.py</code></td><td>Original NoteTrack byte-identical no-op textual conversion and raw opcode support</td></tr>
<tr><td><code>app/inspectors/value_hint.py</code></td><td>Original source ALMT field type hints</td></tr>
</tbody></table><p>Source snapshots: <code>docs/EDITOR_R08_PHASE11_SOURCE_SNAPSHOT_20261108.json</code>; delegate manifest: <code>docs/EDITOR_R08_PHASE11_DELEGATE_AUDIT_20261108.json</code>; fingerprints: <code>tests/fixtures/editor_r08_phase11_method_hashes.json</code>.</p></div></details></section>"""
    patched,n=re.subn(section,lambda _:progress,patched,count=1,flags=re.S)
    assert n==1
    DEST.write_bytes(patched.encode("utf8"))
    report=[
        "# JUS Editor redundancy audit — R08 Phase 11",
        "",
        "**Status:** R08 EditorApp responsibility extraction implemented; eight audit findings implemented, three intentionally preserved.",
        "",
        "Date: 2026-11-08. Project: D:\\Library\\Development\\JUS\\publish\\JUMP-Ultimate-Stars\\Editor",
        "",
        "## Implemented",
        "",
        "Six original helpers were source-preservingly relocated: _set_roster_clips, _arrow and _open_doc to "+
        q("app/lifecycle/ui_helpers.py")+"; static _int to "+q("app/parsing.py")+"; "
        "static text_to_notes to "+q("app/timeline/note_text.py")+"; and static _value_hint to "+
        q("app/inspectors/value_hint.py")+". Original "+q("EditorApp")+" public signatures and "
        "staticmethod descriptors remain. The Tk subclass still owns __init__ and destroy, "
        "including safe super().destroy() teardown.",
        "",
        "Controller physical LOC: **1,070 → 1,021** (49 lines removed, including imports), "
        "approximately 4,350 before the audit (76.5% reduction). "
        "**176 source-locked moved methods** across Phases 3–11. "
        "Original controller SHA-256: "+q(snap["original_controller_sha256"])+".",
        "",
        "## Proof and tests",
        "",
        "- Regression corrected: an unused-import pass initially removed app.editor.messagebox, "
        "but the existing unified-roster Save test dynamically patches that path. "
        "The compatibility alias was restored; all 12 unified-roster tests passed afterward. "
        "This alias is intentionally retained despite appearing unused in EditorApp AST.",
        "- 6/6 original method source texts, relocated SHA-256 bodies and original signatures/staticmethod contracts matched.",
        "- Nine Phase 11 source and behavior tests passed: original NoteTrack unchanged byte round-trip, "
        "unknown opcode raw args, Tk roster panes, keyboard arrow movement, documentation paths, "
        "integer fallback, ALMT inspector hints, and lifecycle preservation.",
        "- 178/178 original import-and-forward compatibility method targets resolved to callable modules, zero missing. "
        "189 EditorApp methods total; 11 non-delegates, including 2 lifecycle and 9 tiny UI/public adapters.",
        "- Full regression suite: **500 tests run, 499 passed, one skipped**. Log: "+q("docs/_r08_phase11_full_unit_log.txt")+".",
        "- Nine Windows GUI smoke checks passed: main animation/undo/Apply/Save, original Koma/BIN/ALMT links, "
        "native shot source preview, 46 original scenes, scene source editing/staging, spawn lifecycle, "
        "shot/collision Archive inspectors, source input bitmasks, and isolated synthetic Koma-shape edit/save/reload. "
        "Log: "+q("docs/_r08_phase11_gui_log.txt")+".",
        "- Original 46-scene ROM-backed IDs, overlays and callback catalog indexes still verify.",
        "",
        "## Artifacts",
        "",
        "- "+q("docs/EDITOR_R08_PHASE11_SOURCE_SNAPSHOT_20261108.json")+" — six original source snapshots and positions.",
        "- "+q("tests/fixtures/editor_r08_phase11_method_hashes.json")+" — portable SHA-256 function contracts.",
        "- "+q("docs/EDITOR_R08_PHASE11_DELEGATE_AUDIT_20261108.json")+" — 178 verified target symbols.",
        "- "+q("tests/test_r08_phase11_final_helpers.py")+" — nine new regression tests.",
        "- "+q("tools/apply_r08_phase11.py")+" — one-time source extraction; intentionally refuses reapplication.",
        "- "+q("tools/audit_r08_phase11_delegates.py")+" — repeatable target-resolution audit (refuses duplicate output).",
        "- "+q("tools/build_r08_phase11_report.py")+" — output guarded by actual regression evidence.",
        "- "+q("docs/JUS_EDITOR_REDUNDANCY_AUDIT_PHASE11_R08_20261108.html")+" — interactive findings/review/export.",
        "",
        "## Preserved uncertainties",
        "",
        "Original ROM/overlay and Ghidra reverse-engineered sources, unpacked JUS assets, saved decks, "
        "and gameplay state are unchanged. The older standalone effect-reference smoke fixture still "
        "expects four projected instances but sees one. This pre-existing discrepancy is not counted "
        "among the nine GUI successes; resolve only by original-source tracing, not fabricated effects.",
        "Existing nonfatal Tk after-teardown warnings remain possible. Local work remains uncommitted.",
        "",
        "**R08 responsibility extraction is complete**, not a claim that all native gameplay unknowns are solved."
    ]
    MD.write_bytes(("\n".join(report)+"\n").encode("utf8"))
    verified=json.loads(re.search(pattern,DEST.read_text("utf8"),re.S).group(2))
    assert next(x for x in verified["findings"] if x["id"]=="R08")["implementation"]["status"]=="Implemented"
    print("PHASE11_REPORTS_BUILT",DEST.name,DEST.stat().st_size,MD.name,MD.stat().st_size)
    print("TESTS",500,"GUI",len(checks),"DELEGATES",audit["verified_delegate_count"])
if __name__=="__main__":main()
