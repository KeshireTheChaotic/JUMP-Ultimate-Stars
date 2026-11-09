"""Build Phase 9 interactive source audit while preserving findings and reviewer UI."""
from __future__ import annotations
import json
import re
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
SOURCE=ROOT/"docs/JUS_EDITOR_REDUNDANCY_AUDIT_PHASE8_R08_20261108.html"
DEST=ROOT/"docs/JUS_EDITOR_REDUNDANCY_AUDIT_PHASE9_R08_20261108.html"
pattern=r'(<script id="audit-data" type="application/json">)(.*?)(</script>)'
html=SOURCE.read_text("utf8")
match=re.search(pattern,html,re.S)
assert match, "Phase 8 interactive JSON source missing"
data=json.loads(match.group(2))
data["report"]="JUS Editor — Redundancy Audit (R08 Phase 9)"
data["implementation_status_date"]="2026-11-08 (R08 Phase 9 original ALMT, roster and Archive navigation)"
data["implementation_summary"].update({
    "implemented":7, "partial":1, "deferred":0, "preserve":3,
    "unit_tests_run":476,"unit_tests_passed":475,"skipped":1,"gui_smoke_passed":9,
})
r08=next(f for f in data["findings"] if f["id"]=="R08")
r08["implementation"]["summary"]=(
    "R08 Phase 9 extracted 18 original source-backed EditorApp methods into "
    "app/lifecycle/roster_navigation.py (9 methods), app/lifecycle/move_list.py "
    "(5 methods), and app/lifecycle/archive_navigation.py (4 methods). "
    "The unchanged original EditorApp public signatures delegate to these modules, "
    "with hx injected only where the extracted body already used the original formatter. "
    "EditorApp now has 1,190 physical lines, from 1,434 at Phase 8 and approximately "
    "4,350 before the audit. 156 relocated original method bodies across Phases 3–9 "
    "have immutable original-source SHA-256 evidence. R08 remains partial."
)
r08["implementation"]["checks"]=(
    "18/18 original source/relocated function-body fingerprints and public argument "
    "signatures agree. 13 new tests verify original source mapping, move source-form "
    "validation, AIPM cache, discarded navigation, stable card/sound selection, "
    "hidden Tk callback suppression, selection/redo redraw order, ALAR member typing "
    "and read-only rebuild. Full Python suite: 476 run, 475 passed, 1 skipped. "
    "Nine Windows GUI smoke checks passed: eight against source assets and one isolated Koma-shape fixture. Native 46-scene indexes pass. The known older effect-reference GUI check still fails 4 expected versus 1 actual instance; this pre-dates Phase 9 and remains unaltered."
)
r08["evidence"]=[
    ["app/editor.py","1–1190","Thin compatibility controller and original Tk shell"],
    ["app/lifecycle/roster_navigation.py","1–210","9 original BIN/ALMT/Koma source-navigation methods"],
    ["app/lifecycle/move_list.py","1–87","5 original move selection and edit methods"],
    ["app/lifecycle/archive_navigation.py","1–59","4 original ALAR browsing and read-only rebuild methods"],
    ["docs/EDITOR_R08_PHASE9_SOURCE_SNAPSHOT_20261108.json","1","Original source bytes, line locations and pre-refactor hashes"],
    ["tests/test_r08_phase9_navigation.py","1–250","13 new source-locked behavior regressions"],
]
updated=re.sub(pattern,lambda m:m.group(1)+json.dumps(data,ensure_ascii=False,separators=(",",":")).replace("</","<\\/")+m.group(3),html,count=1,flags=re.S)
section_pattern=r'<section class="method" style="margin-top:0;margin-bottom:18px">.*?</section>'
section='''<section class="method" style="margin-top:0;margin-bottom:18px"><h2>Implementation progress · Phase 9 · 8 Nov 2026</h2>
<p><strong>7 implemented</strong> · <strong>1 partial</strong> · <strong>0 deferred</strong> · <strong>3 intentionally preserved</strong>. No original JUS game data, saved-deck graphics, reverse-engineered ROM source, or emulator-reconstructed scene backgrounds were rewritten.</p>
<p><strong>R08 Phase 9:</strong> 18 methods relocated to three source-bound navigation modules, with original EditorApp API names/signatures and callback order kept. EditorApp now has <strong>1,190 physical lines</strong>, down from 1,434 in Phase 8 and approximately 4,350 before the audit. This phase removed 244 physical controller lines, including one import line.</p>
<p><strong>476 Python tests: 475 passed, one skipped.</strong> 18 exact source hash and signature contracts matched. Nine Windows GUI checks passed (eight real-data workflows and one isolated Koma-shape fixture); 46 original scene IDs and source authority indexes still verify. A separate older effect-reference GUI expectation still fails (4 expected instances, 1 actual) and is documented without altering native projection behavior.</p>
<details><summary style="padding-left:0"><strong>Phase 9 relocated workflows and evidence</strong></summary>
<div class="content"><table class="evidence"><thead><tr><th>Source-preserving module</th><th>Responsibilities</th></tr></thead><tbody>
<tr><td><code>app/lifecycle/roster_navigation.py</code> (9 methods)</td><td>Sprite-from-TextureID, original Koma/ALMT source navigation, AIPM selection, MoveLinks cache, source-form and battle-base checks</td></tr>
<tr><td><code>app/lifecycle/move_list.py</code> (5 methods)</td><td>Filtered move list, Tk selection suppression, active timeline selection, duplicate/delete with unchanged checkpoints</td></tr>
<tr><td><code>app/lifecycle/archive_navigation.py</code> (4 methods)</td><td>Original ALAR row decoding/typing, member selection, record presentation and read-only rebuild verification</td></tr>
</tbody></table>
<p>Original method texts and line-number evidence: <code>docs/EDITOR_R08_PHASE9_SOURCE_SNAPSHOT_20261108.json</code>; portable hash contracts: <code>tests/fixtures/editor_r08_phase9_method_hashes.json</code>. Engine-unknown geometry, combat state, native audio synthesis and hardware-specific GX behavior remain unmodeled.</p></div></details></section>'''
updated,n=re.subn(section_pattern,lambda m:section,updated,count=1,flags=re.S)
assert n==1,"Progress section missing"
assert len(data["findings"])==11
assert not DEST.exists(),"Phase 9 report already exists"
DEST.write_bytes(updated.encode("utf8"))
assert json.loads(re.search(pattern,DEST.read_text("utf8"),re.S).group(2))["implementation_summary"]["gui_smoke_passed"]==9
print("BUILT",DEST.name,"BYTES",DEST.stat().st_size,
      "FINDINGS",len(data["findings"]),
      "EDITOR_PHYSICAL_LINES",len((ROOT/"app/editor.py").read_bytes().splitlines()))
