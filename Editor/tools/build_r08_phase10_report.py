"""Build verified interactive and engineering reports for R08 Phase 10."""
from __future__ import annotations
import json,re
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
LOG=ROOT/"docs/_r08_phase10_full_unit_log.txt"
GUI=ROOT/"docs/_r08_phase10_gui_log.txt"
SOURCE=ROOT/"docs/JUS_EDITOR_REDUNDANCY_AUDIT_PHASE9_R08_20261108.html"
DEST=ROOT/"docs/JUS_EDITOR_REDUNDANCY_AUDIT_PHASE10_R08_20261108.html"
MARKDOWN=ROOT/"docs/EDITOR_AUDIT_R08_PHASE10_20261108.md"
SNAP=ROOT/"docs/EDITOR_R08_PHASE10_SOURCE_SNAPSHOT_20261108.json"
CONTRACT=ROOT/"tests/fixtures/editor_r08_phase10_method_hashes.json"
u=LOG.read_text("utf8");g=GUI.read_text("utf8")
m=re.search(r"Ran (\d+) tests",u)
assert m and int(m.group(1))==491 and "OK (skipped=1)" in u
gui_markers=[
    "PASS no unexpected dialogs","OK: Koma battle/support",
    "OK: Bo-bobo native source","OK: 46/46 original scene IDs",
    "OK: source-backed scene editor","OK: db_b_01 tick 30",
    "OK: GUI Archive shot/col typed inspectors",
    "OK: original normal-action","OK: 5×4 shape variant dialog",
]
assert all(s in g for s in gui_markers) and "Traceback" not in g
s=json.loads(SNAP.read_text("utf8"))
c=json.loads(CONTRACT.read_text("utf8"))
assert len(s["methods"])==len(c["original_method_body_contracts"])==14
editor_lines=len((ROOT/"app/editor.py").read_bytes().splitlines())
assert editor_lines==1070 and s["original_controller_physical_lines"]==1190
html=SOURCE.read_text("utf8")
pattern=r'(<script id="audit-data" type="application/json">)(.*?)(</script>)'
mat=re.search(pattern,html,re.S)
assert mat,"Previous interactive audit lacks embedded data"
data=json.loads(mat.group(2))
data["report"]="JUS Editor — Redundancy Audit (R08 Phase 10)"
data["implementation_status_date"]="2026-11-08 (R08 Phase 10 source-backed effects, timeline, viewport)"
data["implementation_summary"].update({
    "implemented":7,"partial":1,"deferred":0,"preserve":3,
    "unit_tests_run":491,"unit_tests_passed":490,"skipped":1,
    "gui_smoke_passed":9})
r08=next(x for x in data["findings"] if x["id"]=="R08")
r08["implementation"]["summary"]=(
    "R08 Phase 10 moved 14 original source-backed EditorApp methods into "
    "app/lifecycle/effect_sources.py (4), app/timeline/presentation_ops.py (7) "
    "and app/renderers/viewport_ops.py (3). Source bodies are unchanged except "
    "receiver rebinding and original hx formatter injection for three methods. "
    "Original EditorApp public method names/signatures, callback and source lookup "
    "semantics persist. Controller size: 1190 to 1070 physical lines, approximately "
    "4350 before the original audit. There are now 170 source-locked original method "
    "bodies across Phases 3–10. R08 remains partial."
)
r08["implementation"]["checks"]=(
    "14 of 14 original source text / SHA-256 fingerprints and public signatures agree; "
    "15 new behavior and fingerprint tests pass. Full suite 491 run, 490 passed, one skipped. "
    "Nine Windows GUI smoke checks pass, including one isolated synthetic Koma-shape fixture. "
    "Original 46-scene index integrity passes. Older independent effect-reference GUI "
    "expectation of four instances vs one remains unresolved and is not claimed as passing."
)
r08["evidence"]=[
    ["app/editor.py","1–1070","Public EditorApp delegates and original Tk lifecycle"],
    ["app/lifecycle/effect_sources.py","1–72","Four original source-effect methods"],
    ["app/timeline/presentation_ops.py","1–90","Seven original NoteTrack presentation methods"],
    ["app/renderers/viewport_ops.py","1–51","Three original viewport/image/zoom methods"],
    ["docs/EDITOR_R08_PHASE10_SOURCE_SNAPSHOT_20261108.json","1","Fourteen original method sources, locations and SHA-256 fingerprints"],
    ["tests/fixtures/editor_r08_phase10_method_hashes.json","1","Portable relocated method SHA-256 contract"],
    ["tests/test_r08_phase10_coordination.py","1–245","Fifteen source-body and behavior regressions"],
]
html=re.sub(pattern,lambda m:m.group(1)+json.dumps(data,separators=(",",":"),ensure_ascii=False).replace("</","<\\/")+m.group(3),html,count=1,flags=re.S)
section_pattern=r'<section class="method" style="margin-top:0;margin-bottom:18px">.*?</section>'
section='''<section class="method" style="margin-top:0;margin-bottom:18px"><h2>Implementation progress · Phase 10 · 8 Nov 2026</h2>
<p><strong>7 implemented</strong> · <strong>1 partial</strong> · <strong>0 deferred</strong> · <strong>3 intentionally preserved</strong>. No original JUS ROM or overlay, extracted game data, saved-deck graphics or Ghidra source was modified.</p>
<p><strong>R08 Phase 10:</strong> 14 additional source-preserved methods extracted into effect discovery (4), NoteTrack diagnostics (7) and viewport/image coordination (3). <code>EditorApp</code> is now <strong>1,070 physical lines</strong> (120 removed this phase), from approximately 4,350 before the original audit. Across phases, <strong>170 methods</strong> have original source SHA-256 contracts.</p>
<p><strong>491 Python tests run: 490 passed, one skipped.</strong> Fourteen original-body hashes and all 15 new regression tests passed. Nine standard Windows GUI smoke checks passed. The older separate effect-reference smoke test still expects 4 instances versus 1 actual and was not counted as passing.</p>
<details><summary style="padding-left:0"><strong>Phase 10 source-preserving responsibility split</strong></summary><div class="content">
<table class="evidence"><thead><tr><th>Module</th><th>Original behavior retained</th></tr></thead><tbody>
<tr><td><code>app/lifecycle/effect_sources.py</code> · 4 methods</td><td>Source AMT tables, effect catalog and original BIN pursuer links, effect navigation</td></tr>
<tr><td><code>app/timeline/presentation_ops.py</code> · 7 methods</td><td>Original NoteTrack sound/physics diagnostics, explicit evidence tooltips and value formats</td></tr>
<tr><td><code>app/renderers/viewport_ops.py</code> · 3 methods</td><td>Refresh order, source-backed sprite image cache, timeline fitting</td></tr>
</tbody></table>
<p>Original evidence: <code>docs/EDITOR_R08_PHASE10_SOURCE_SNAPSHOT_20261108.json</code>. Portable source-body checks: <code>tests/fixtures/editor_r08_phase10_method_hashes.json</code>. Native runtime-only effects remain unmodeled.</p></div></details></section>'''
html,n=re.subn(section_pattern,lambda m:section,html,count=1,flags=re.S)
assert n==1 and len(data["findings"])==11 and not DEST.exists() and not MARKDOWN.exists()
DEST.write_bytes(html.encode("utf8"))
Q=chr(96)
md=(
    "# JUS Editor redundancy audit — R08 Phase 10\n\n"
    "Date: 2026-11-08\n\nStatus: Phase 10 implemented; R08 remains partial.\n\n"
    "Project: D:\\Library\\Development\\JUS\\publish\\JUMP-Ultimate-Stars\\Editor\n\n"
    "Original reverse engineering: D:\\Library\\Development\\JUS\\reverse_engineering\n\n"
    "## Scope\n\n"
    "14 original EditorApp methods moved with identifier-token-only self-to-editor "
    "rebinding; three methods explicitly receive the unchanged hx formatter. "
    "All original EditorApp public method signatures remain delegates. "
    "No ROM, overlays, extracted source assets, player saves, Ghidra C, source-based "
    "screen pipeline or undocumented game behavior was altered. "
    "Source evidence is authoritative over emulator observations.\n\n"
    "## Extracted responsibilities\n\n"
    "| New module | Methods | Behavior |\n|---|---:|---|\n"
    "| app/lifecycle/effect_sources.py | 4 | Original AMT scanning, effect catalog, pursuer BIN, effect jump |\n"
    "| app/timeline/presentation_ops.py | 7 | Original NoteTrack physics/sound, event tooltips and field formatting |\n"
    "| app/renderers/viewport_ops.py | 3 | Original viewport refresh, sprite cache and zoom |\n\n"
    "**Controller size:** 1,190 to 1,070 physical lines, 120 lines removed. "
    "Pre-audit approximately 4,350. 170 relocated methods have original source-body "
    "SHA-256 coverage across Phases 3–10. Startup and super().destroy() remain within Tk controller.\n\n"
    "## Source evidence and regression coverage\n\n"
    "- Original Phase 10 controller SHA-256: "+s["original_controller_sha256"]+"\n"
    "- docs/EDITOR_R08_PHASE10_SOURCE_SNAPSHOT_20261108.json: original source text, method line "
    "ranges, original and transformed fingerprints.\n"
    "- tests/fixtures/editor_r08_phase10_method_hashes.json: portable SHA-256 fingerprints.\n"
    "- tests/test_r08_phase10_coordination.py: 15 new tests verifying original source/sig parity, "
    "live AMT priority, BIN parse failures, navigation cancellation, audio sequence/card selection, "
    "tooltip evidence, ALMT formatting, refresh order, sprite negative cache and zoom clamping.\n"
    "- tools/apply_r08_phase10.py: one-time guarded extraction; do not re-run on existing output.\n"
    "- tools/build_r08_phase10_report.py: validates the unit and GUI logs, and creates both reports.\n"
    "- docs/JUS_EDITOR_REDUNDANCY_AUDIT_PHASE10_R08_20261108.html: interactive updated findings.\n\n"
    "## Verification\n\n"
    "- All 14 original moved body hash and public signature checks passed.\n"
    "- 15 new source/behavior tests passed.\n"
    "- Full post-cleanup suite: 491 run; 490 passed; 1 skipped. "
    "Log: docs/_r08_phase10_full_unit_log.txt.\n"
    "- Nine GUI checks passed: editor retime/undo, original Koma/ALMT navigation, native "
    "shot preview, 46 original scene IDs, original scene source edit/staging, spawn "
    "lifecycle, shot/collision Archive Inspector, source input bitmasks and isolated "
    "Koma-shape Apply/Save/reload fixture. Log: docs/_r08_phase10_gui_log.txt.\n"
    "- Original 46 native scene ID, overlay/variant/visibility/ROM callback index check passed.\n"
    "- Pre-existing nonfatal Tk after-teardown messages and resource-handle warning may appear.\n\n"
    "## Outstanding independent issue\n\n"
    "The pre-existing gui_effect_reference_actions_smoke.py fixture expects 4 "
    "projected instances but currently finds 1. This mismatch predates Phase 10 "
    "and is NOT included in the nine passing GUI checks. No runtime "
    "effect inference, synthetic sprite preview or assertion rewriting was introduced.\n\n"
    "## Remaining R08\n\n"
    "Only 8 non-delegated EditorApp methods remain: __init__, _set_roster_clips, _arrow, "
    "_open_doc, _int, text_to_notes, destroy and _value_hint. Lifecycle ownership, "
    "compatibility and original binary round trips should remain protected. "
    "R05 and R06 remain implemented. All work local and uncommitted.\n"
)
MARKDOWN.write_bytes(md.encode("utf8"))
print("PHASE10_REPORTS_CREATED",DEST.name,MARKDOWN.name,
      "HTML_BYTES",DEST.stat().st_size,"MD_BYTES",MARKDOWN.stat().st_size)
print("VERIFIED_TESTS",491,"GUI_CHECKS",len(gui_markers),"FINDINGS",len(data["findings"]))
