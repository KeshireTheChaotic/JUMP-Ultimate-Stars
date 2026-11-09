"""R06: prove original V2 callgraph regeneration no longer depends on V1.

The historical V1 evidence remains in reverse_engineering/docs; it is not a
runtime or regeneration input. Original ARM9 source and overlay bytes remain
authoritative. Trace output must match the *pre-migration* fixed SHA-256.
"""
from __future__ import annotations

import ast
import hashlib
import json
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

EDITOR=Path(__file__).resolve().parents[1]
REVERSE=EDITOR.parents[2]/'reverse_engineering'
TRACER=REVERSE/'docs/trace_scene_indirect_calls_v2.py'
AUDITOR=REVERSE/'docs/audit_all_scenes_code_assets.py'
LEGACY=EDITOR/'jus_package/screen_code_sources.json'
ARCHIVED_V1=REVERSE/'docs/SCREEN_CODE_ASSET_TRACE_20261108.json'
SOURCE_V2=EDITOR/'jus_package/screen_code_sources_v2.json'
RE_REPORT=REVERSE/'docs/SCREEN_INDIRECT_CALLGRAPH_20261108.json'

# Proven by running the unmodified historical tracer before the migration.
V1_SHA='82a8e419a962d1abf88507ae15a48e7220d04262b41ed9073d00b894297668e1'
V2_SHA='861256fb51e129230a0c2e3e9e097435d066933e4f556eea4a6687c3d747d0ca'


def digest(p:Path)->str:
    return hashlib.sha256(p.read_bytes()).hexdigest()


def invoke(*arguments:str)->subprocess.CompletedProcess:
    return subprocess.run([sys.executable,str(TRACER),*arguments],
                          cwd=EDITOR,stdout=subprocess.PIPE,
                          stderr=subprocess.STDOUT,text=True,timeout=75)


class NativeSourceV1RetirementTest(unittest.TestCase):
    def test_original_legacy_evidence_preserved_and_removed_from_editor(self):
        self.assertFalse(LEGACY.exists(),'V1 must not ship in portable editor')
        self.assertEqual(digest(ARCHIVED_V1),V1_SHA)
        self.assertEqual(digest(SOURCE_V2),V2_SHA)
        self.assertEqual(digest(RE_REPORT),V2_SHA)

    def test_trace_generators_use_original_graph_not_legacy_index(self):
        tracer=TRACER.read_text('utf8')
        historic=AUDITOR.read_text('utf8')
        self.assertNotIn('screen_code_sources.json',tracer)
        self.assertNotIn('screen_code_sources.json',historic)
        self.assertIn('scenebuilder import build_manifest',tracer)
        self.assertIn('SCREEN_NAV_GRAPH.json',tracer)
        self.assertIn('screen_scene_authoring.json',tracer)
        self.assertIn('SCREEN_CODE_ASSET_TRACE_20261108.json',historic)
        self.assertIn('elif args.write:',tracer)
        ast.parse(tracer)
        ast.parse(historic)

    def test_v2_trace_against_original_files_matches_baseline_byte_for_byte(self):
        before=digest(SOURCE_V2)
        run=invoke('--check')
        self.assertEqual(run.returncode,0,run.stdout[-1700:])
        self.assertIn('PASS: original-code V2 byte parity',run.stdout)
        self.assertIn('TOTAL 1617 decompiled functions;',run.stdout)
        self.assertIn('471 file reference sites;',run.stdout)
        self.assertIn('10 binary-resolved pointers',run.stdout)
        self.assertEqual(digest(SOURCE_V2),before)

    def test_clean_stage_deterministic_and_does_not_write_editor(self):
        before=(digest(SOURCE_V2),digest(RE_REPORT),digest(ARCHIVED_V1))
        with tempfile.TemporaryDirectory() as td:
            dest=Path(td)
            run=invoke('--output-dir',str(dest))
            self.assertEqual(run.returncode,0,run.stdout[-2000:])
            generated=dest/'screen_code_sources_v2.json'
            generated_report=dest/'SCREEN_INDIRECT_CALLGRAPH_20261108.json'
            self.assertEqual(generated.read_bytes(),SOURCE_V2.read_bytes())
            self.assertEqual(generated_report.read_bytes(),RE_REPORT.read_bytes())
            decoded=json.loads(generated.read_text('utf8'))
            self.assertEqual([s['id'] for s in decoded['scenes']],list(range(46)))
            self.assertEqual(sum(len(s['constructor_files']) for s in decoded['scenes']),1617)
            self.assertEqual(sum(len(s['asset_references']) for s in decoded['scenes']),471)
            self.assertEqual(sum(sum(bool(x['verified']) for x in s['indirect_pointers'])
                                 for s in decoded['scenes']),10)
            self.assertTrue(all(s['confidence'].startswith('source-reachable') for s in decoded['scenes']))
        self.assertEqual((digest(SOURCE_V2),digest(RE_REPORT),digest(ARCHIVED_V1)),before)


if __name__=='__main__':
    unittest.main()
