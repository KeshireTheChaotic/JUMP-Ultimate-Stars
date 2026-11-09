"""R05 canonical generation + R08 pure timeline projection regression suite."""
from __future__ import annotations
import copy,hashlib,json,subprocess,sys,tempfile,unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

from jus_formats import almt,eventops
from jus_package import (nativescenes,scenebuilder,screencomposition,
                         timelineprojection,sourceauthority,screenvariants)

ROOT=Path(__file__).resolve().parents[1]
JUS=ROOT.parents[2]
REVERSE=JUS/'reverse_engineering'
SOURCE_PATH=ROOT/'jus_package'


def _key(tick,value):
    return SimpleNamespace(tick=tick,value=value)


class FakeTrack:
    def __init__(self,field,keys=None,value=None,keyed=True,opaque=False,raw=b'note'):
        self.field,self.keys,self.value=field,list(keys or []),value
        self.keyed,self.opaque,self.raw=keyed,opaque,raw
    def encoded(self):return self.raw


class FakeNode:
    def __init__(self,tracks):
        self.tracks=tracks
    def track(self,field):
        return next((track for track in self.tracks if track.field==field),None)


class CanonicalMetadataTest(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.nav=json.loads((REVERSE/'docs/SCREEN_NAV_GRAPH.json').read_text('utf8'))
        cls.author=json.loads((SOURCE_PATH/'screen_scene_authoring.json').read_text('utf8'))
        cls.source=json.loads((SOURCE_PATH/'screen_code_sources_v2.json').read_text('utf8'))
        cls.callbacks=json.loads((SOURCE_PATH/'screen_runtime_dispatch.json').read_text('utf8'))

    def test_canonical_scenes_edges_variants_and_provenance(self):
        m=scenebuilder.build_manifest(self.nav,self.author)
        n=scenebuilder.build_native_registry(m,self.author,self.source,self.callbacks)
        self.assertEqual(m,json.loads((SOURCE_PATH/'screen_metadata.json').read_text('utf8')))
        self.assertEqual(n,json.loads((SOURCE_PATH/'screen_native_registry.json').read_text('utf8')))
        self.assertEqual([s['id'] for s in m['scenes']],list(range(46)))
        self.assertEqual(len(m['edges']),94)
        self.assertEqual(n['composition_scene_count'],28)
        self.assertEqual(sum(x['background_variant_count'] for x in n['scenes']),48)
        self.assertEqual(len(self.callbacks['families']),6)
        self.assertIsNone(m['scenes'][0]['archive'])
        self.assertEqual(len(m['scenes'][3]['widgets']),8)
        self.assertEqual(m['scenes'][3]['display_routing']['swap_bit15_at_entry'],0)
        self.assertFalse(m['scenes'][3]['widgets'][0]['allow_layout_edit'])

    def test_rejects_stale_source_identity_without_mutation(self):
        a=copy.deepcopy(self.source)
        a['scenes'][3]['overlay']=99
        m=scenebuilder.build_manifest(self.nav,self.author)
        with self.assertRaisesRegex(ValueError,'callgraph mismatch'):
            scenebuilder.build_native_registry(m,self.author,a,self.callbacks)

    def test_rejects_mutable_native_widget(self):
        a=copy.deepcopy(self.author)
        a['scene_overrides']['3']['widgets'][0]['allow_layout_edit']=True
        with self.assertRaisesRegex(ValueError,'mutable or unsourced'):
            scenebuilder.build_manifest(self.nav,a)

    def test_hash_locked_rebuild_allows_evidence_updates_not_manual_drift(self):
        from importlib.util import module_from_spec,spec_from_file_location
        spec=spec_from_file_location('audit_scene_lock',ROOT/'tools/rebuild_scene_catalog.py')
        mod=module_from_spec(spec);spec.loader.exec_module(mod)
        manifest=scenebuilder.build_manifest(self.nav,self.author)
        registry=scenebuilder.build_native_registry(
            manifest,self.author,self.source,self.callbacks)
        outputs={'screen_metadata.json':manifest,'screen_native_registry.json':registry}
        previous=mod.build_lock(REVERSE,outputs)
        with tempfile.TemporaryDirectory() as td:
            root=Path(td)
            for name,model in outputs.items():
                (root/name).write_bytes(mod.canonical_bytes(model))
            updated=copy.deepcopy(outputs)
            updated['screen_metadata.json']=copy.deepcopy(manifest)
            updated['screen_metadata.json']['notes'].append(
                'New original-source evidence, not a manually edited derived file')
            # --write permits a reviewed canonical input change while the
            # existing derived outputs match their previous generation lock.
            mod.guard_existing(root,updated,previous,'write')
            with self.assertRaisesRegex(ValueError,'stale relative'):
                mod.guard_existing(root,updated,previous,'check')
            # Any untracked direct edit to a generated file must be rejected.
            (root/'screen_metadata.json').write_text('{"edited":true}',encoding='utf8')
            with self.assertRaisesRegex(ValueError,'manually changed'):
                mod.guard_existing(root,updated,previous,'write')

    def test_rejects_invalid_source_overlay_pointer(self):
        # No binary touched: corrupt one in-memory cached table entry.
        from importlib.util import module_from_spec,spec_from_file_location
        spec=spec_from_file_location('audit_canonical_build',
            ROOT/'tools/rebuild_scene_catalog.py')
        mod=module_from_spec(spec);spec.loader.exec_module(mod)
        c=copy.deepcopy(self.callbacks)
        c['families'][0]['table_entries'][0]['raw_target']='0xFFFFFFFF'
        with self.assertRaisesRegex(ValueError,'ROM pointer mismatch'):
            mod.original_rom_validate(REVERSE,self.nav,c,self.author)

    def test_clean_build_is_deterministic_without_legacy_v1(self):
        # R06: V1 now survives only as the original, archived RE audit report.
        self.assertFalse((SOURCE_PATH/'screen_code_sources.json').exists())
        self.assertTrue((REVERSE/'docs/SCREEN_CODE_ASSET_TRACE_20261108.json').exists())
        source=(SOURCE_PATH/'screen_code_sources_v2.json').read_bytes()
        tool=ROOT/'tools/rebuild_scene_catalog.py'
        with tempfile.TemporaryDirectory() as td:
            one=Path(td)/'one';two=Path(td)/'two'
            for directory in (one,two):
                run=subprocess.run(
                    [sys.executable,str(tool),'--output-dir',str(directory)],
                    cwd=ROOT,stdout=subprocess.PIPE,stderr=subprocess.PIPE,
                    text=True,timeout=40)
                self.assertEqual(run.returncode,0,run.stdout+'\\n'+run.stderr)
            for name in ('screen_metadata.json','screen_native_registry.json',
                         'screen_scene_build.lock.json'):
                self.assertEqual((one/name).read_bytes(),(two/name).read_bytes())
                self.assertEqual(json.loads((one/name).read_text('utf8')),
                                 json.loads((SOURCE_PATH/name).read_text('utf8')))
        self.assertFalse((SOURCE_PATH/'screen_code_sources.json').exists())
        self.assertEqual((SOURCE_PATH/'screen_code_sources_v2.json').read_bytes(),source)


class TimelineProjectionTest(unittest.TestCase):
    def test_unsorted_editor_state_and_opacity_are_preserved(self):
        # Original editor uses the last AUTHOR-ORDERED value, not latest tick.
        node=FakeNode([
            FakeTrack('2DPos',[_key(10,[10,10]),_key(3,[3,3]),_key(8,[8,8])]),
            FakeTrack('BoundsIndex',value=4,keyed=False),
            FakeTrack('NoteTrack',[_key(1,'raw')],opaque=True),
            FakeTrack('Gravity',[_key(15,1)])])
        move=SimpleNamespace(nodes=[node,None])
        self.assertEqual(timelineprojection.editor_state_at(move,11),
                         {0:{'2DPos':[8,8],'BoundsIndex':4}})
        self.assertEqual(timelineprojection.editor_state_at(move,1),
                         {0:{'BoundsIndex':4}})
        self.assertEqual(timelineprojection.editor_state_at(move,20),
                         {0:{'2DPos':[8,8],'BoundsIndex':4,'Gravity':1}})

    def test_first_marker_tick_and_branch_filters(self):
        markers=[
            FakeNode([FakeTrack('Marker',[_key(5,22),_key(8,22)])]),
            FakeNode([FakeTrack('Marker',value=9,keyed=False)])]
        self.assertEqual(timelineprojection.marker_tick_map(
            SimpleNamespace(nodes=markers)),{22:5,9:0})
        def command(opcode,values):
            return SimpleNamespace(opcode=opcode,values=lambda:values)
        self.assertEqual(timelineprojection.branch_targets(command(0x000E,[1,9,5,22])),[9,22])
        self.assertEqual(timelineprojection.branch_targets(command(0x0300,[0,9])),[])
        self.assertEqual(timelineprojection.branch_targets(command(0x000E,[1,-1,5,255])),[])
        self.assertEqual(timelineprojection.branch_targets(command(0x0013,[9])),[])
        self.assertEqual(timelineprojection.branch_targets(command(0x0001,[9])),[9])

    def test_note_events_original_key_order_and_malformed(self):
        def cmd(opcode,values):
            return SimpleNamespace(opcode=opcode,values=lambda:values)
        good=SimpleNamespace(keys=[
            SimpleNamespace(tick=7,commands=[cmd(0x000E,[1,9,5,22]),
                                             cmd(0x0400,[20])]),
            SimpleNamespace(tick=2,commands=[cmd(0x0300,[2])])])
        track=FakeTrack('NoteTrack',opaque=True)
        with patch.object(timelineprojection.notetrack,'parse',return_value=good):
            view=timelineprojection.note_track_view(track,{22:5,9:0},{0:'A',4:'B'},'U')
        self.assertEqual([t for t,_ in view['keys']],[7,7,2])
        self.assertEqual([c for t,c in view['keys']],[(0,0,good.keys[0].commands[0]),
                                                       (0,1,good.keys[0].commands[1]),
                                                       (1,0,good.keys[1].commands[0])])
        self.assertEqual(view['arcs'],[(7,0,'branch'),(7,5,'branch')])
        self.assertEqual(view['flags'],{7:['A','B'],2:['U']})
        self.assertEqual(view['badge'],'3 ev')
        with patch.object(timelineprojection.notetrack,'parse',side_effect=ValueError):
            empty=timelineprojection.note_track_view(track,{},{} ,'default')
        self.assertEqual(empty['keys'],[])
        with patch.object(timelineprojection.notetrack,'parse',side_effect=IndexError):
            with self.assertRaises(IndexError):
                timelineprojection.note_track_view(track,{},{} ,'default')

    def test_marker_visualization_matches_original_event_helpers(self):
        track=FakeTrack('Marker',[_key(1,0xFF00),_key(8,0xFEED)])
        result=timelineprojection.marker_track_view(track,'warning')
        expected_arcs=[(t,v,'jump' if v is not None else 'missing')
                       for t,_l,v in eventops.marker_jump_pairs(track.keys)]
        self.assertEqual(result['arcs'],expected_arcs)
        self.assertEqual(len(result['labels']),len(track.keys))

    def test_shot_inspector_tick_fallback_and_five_limit(self):
        events=[SimpleNamespace(tick=t) for t in [1,2,3,5,6,7,8,9,10]]
        result=timelineprojection.shot_events_for_inspector(events,8)
        self.assertEqual([e.tick for e in result],[8])
        self.assertEqual([e.tick for e in timelineprojection.shot_events_for_inspector(events,4)],
                         [1,2,3])
        self.assertEqual([e.tick for e in timelineprojection.shot_events_for_inspector(events,20)],
                         [6,7,8,9,10])
        self.assertEqual([e.tick for e in timelineprojection.shot_events_for_inspector(events,0)],
                         [1])
        self.assertEqual(timelineprojection.shot_events_for_inspector([],20),[])


if __name__=='__main__':unittest.main()
