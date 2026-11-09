"""Build Phase 8 interactive audit from the preserved Phase 7 findings."""
from __future__ import annotations

import html
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "docs/JUS_EDITOR_REDUNDANCY_AUDIT_PHASE7_R08_20261108.html"
DEST = ROOT / "docs/JUS_EDITOR_REDUNDANCY_AUDIT_PHASE8_R08_20261108.html"
text = SOURCE.read_text("utf8")
pattern = r'(<script id="audit-data" type="application/json">)(.*?)(</script>)'
matched = re.search(pattern, text, flags=re.S)
if not matched:
    raise SystemExit("Phase 7 embedded audit data missing")
data = json.loads(matched.group(2))
data["report"] = "JUS Editor — Redundancy Audit (R08 Phase 8)"
data["implementation_status_date"] = "2026-11-08 (R08 Phase 8 source-backed projection / viewport framing)"
data["implementation_summary"].update({
    "implemented": 7, "partial": 1, "deferred": 0,
    "preserve": 3, "unit_tests_run": 463,
    "unit_tests_passed": 462, "skipped": 1, "gui_smoke_passed": 7,
})
r08 = next(f for f in data["findings"] if f["id"] == "R08")
r08["implementation"]["summary"] = (
    "Phase 8 moved eight further source-backed geometry/projection methods "
    "into app/renderers/projection.py: frame_view, _move_scope_extent, "
    "_handler00_launch_extents, _move_extent, _animation_origin, "
    "spawn_projection, _shot_events_current, _visible_spawn_instances. "
    "The original EditorApp method entrypoints remain delegates. "
    "EditorApp fell from 1,570 to 1,434 physical lines this phase "
    "(approximately 4,350 before the audit). "
    "138 extracted original methods across Phases 3–8 now have source-body "
    "fingerprint contracts. R08 remains partial: high-level Tk lifecycle, "
    "Koma/source selection, archive pane and resource/navigation coordination remain."
)
r08["implementation"]["checks"] = (
    "8/8 source SHA-256 method fingerprints preserved; 12 new projection "
    "tests cover authored collision bounds, root-motion origin, stable spawn "
    "selection, playhead restoration and original BIN shot parsing failure. "
    "463 full Python tests run: 462 passed, 1 skipped. "
    "Seven Windows GUI regressions passed. "
    "46 native scene IDs, 94 transitions, 28 confirmed BG scenes, "
    "48 variants and source callback families preserved."
)
r08["evidence"] = [
    ["app/editor.py", "1–1434", "Original named method entrypoints remain; projection moved"],
    ["app/renderers/projection.py", "1–184", "Eight original source-backed projection methods"],
    ["tests/test_r08_projection_phase8.py", "1–199", "Twelve source/behavior regressions"],
    ["docs/EDITOR_R08_PROJECTION_SOURCE_SNAPSHOT_20261108.json", "1", "Original full source method text and pre-extraction hashes"],
    ["tests/fixtures/editor_r08_phase8_projection_hashes.json", "1", "Portable exact-body SHA-256 contracts"],
]
text = re.sub(pattern, lambda m: m.group(1) + json.dumps(data, ensure_ascii=False, separators=(",", ":")).replace("</", "<\\/") + m.group(3), text, count=1, flags=re.S)
section_pattern = r'<section class="method" style="margin-top:0;margin-bottom:18px">.*?</section>'
section = '''<section class="method" style="margin-top:0;margin-bottom:18px"><h2>Implementation progress · Phase 8 · 8 Nov 2026</h2>
<p><strong>7 implemented</strong> · <strong>1 partial</strong> · <strong>0 deferred</strong> · <strong>3 intentionally preserved</strong>. The original JUS game assets, saved decks, ROM and Ghidra code remain untouched.</p>
<p>R08 Phase 8 extracts <strong>eight</strong> additional original-source geometry and shot-projection methods. <code>EditorApp</code> is now <strong>1,434 lines</strong>, from <strong>1,570</strong> at Phase 7 and approximately <strong>4,350</strong> at the original audit. Public method signatures remain available.</p>
<p><strong>463 Python tests: 462 passed, one skipped.</strong> Eight original method fingerprints match. Seven actual Windows GUI smoke checks passed, including native source shots, 46 scenes, spawn filtering and Archive inspectors.</p>
<details><summary style="padding-left:0"><strong>Phase 8 method map and source evidence</strong></summary>
<div class="content"><table class="evidence"><thead><tr><th>Source-backed boundary</th><th>Relocated methods</th></tr></thead><tbody>
<tr><td>Viewport framing</td><td><code>frame_view</code>, <code>_move_scope_extent</code>, <code>_move_extent</code></td></tr>
<tr><td>Original shot birth sprite extents</td><td><code>_handler00_launch_extents</code>, <code>_shot_events_current</code></td></tr>
<tr><td>Spawn projection and selected-instance filtering</td><td><code>spawn_projection</code>, <code>_visible_spawn_instances</code></td></tr>
<tr><td>Authored root-motion origin</td><td><code>_animation_origin</code></td></tr>
</tbody></table>
<p>Source contracts: <code>docs/EDITOR_R08_PROJECTION_SOURCE_SNAPSHOT_20261108.json</code> and <code>tests/fixtures/editor_r08_phase8_projection_hashes.json</code>. Native shot movement beyond source-confirmed launch frames, conditional contact/teardown and unknown engine branches remain unmodeled.</p></div></details></section>'''
updated, count = re.subn(section_pattern, section, text, count=1, flags=re.S)
if count != 1:
    raise SystemExit("Phase 7 progress section absent")
text = updated
DEST.write_bytes(text.encode("utf8"))
print("Built", DEST.relative_to(ROOT), "size", DEST.stat().st_size)
print("R08:", r08["implementation"]["status"])
print("Findings:", len(data["findings"]), "GUI passed:", data["implementation_summary"]["gui_smoke_passed"])
