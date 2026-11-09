"""R05 consistency tests for derived original ARM9 scene evidence indexes."""
import unittest
from unittest.mock import patch
from pathlib import Path

from jus_package import nativescenes,screencomposition,screenintegrity,screenvariants


class SceneIndexIntegrityTest(unittest.TestCase):
    def test_all_canonical_ids_and_engine_bindings(self):
        self.assertEqual(screenintegrity.validate_indexes(),[])
        self.assertEqual(len(screencomposition.load_manifest()['scenes']),46)
        self.assertEqual(nativescenes.catalog()['composition_scene_count'],28)
        self.assertEqual(sum(len(x) for x in screenvariants.SCENE_VARIANTS.values()),48)

    def test_stale_variant_is_detected_without_modifying_snapshot(self):
        original=screenvariants.variants_for_scene
        def stale(sid):
            variants=original(sid)
            if sid!=3:return variants
            outdated=[dict(v) for v in variants]
            outdated[0]['condition']='stale audit fixture; not original code'
            return outdated
        with patch.object(screenintegrity.screenvariants,'variants_for_scene',side_effect=stale):
            problems=screenintegrity.validate_indexes()
        self.assertTrue(any('03: variant condition differs' in x for x in problems),problems[:10])
        self.assertEqual(screenintegrity.validate_indexes(),[])

    def test_legacy_v1_evidence_is_archived_not_a_runtime_dependency(self):
        root=Path(__file__).resolve().parents[1]
        self.assertFalse((root/'jus_package/screen_code_sources.json').exists())
        archive=root.parents[2]/'reverse_engineering/docs/SCREEN_CODE_ASSET_TRACE_20261108.json'
        self.assertTrue(archive.exists())
        self.assertGreater(archive.stat().st_size,100_000)

if __name__=='__main__':unittest.main()
