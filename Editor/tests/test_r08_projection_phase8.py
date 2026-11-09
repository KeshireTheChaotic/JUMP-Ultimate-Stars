"""R08 Phase 8: original-source framing/projection behavior and fingerprints."""
from __future__ import annotations

import ast
import hashlib
import io
import json
import textwrap
import tokenize
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import Mock, patch

from app.editor import EditorApp

ROOT = Path(__file__).resolve().parents[1]
SNAPSHOT = json.loads((ROOT / "docs/EDITOR_R08_PROJECTION_SOURCE_SNAPSHOT_20261108.json").read_text("utf8"))
CONTRACT = json.loads((ROOT / "tests/fixtures/editor_r08_phase8_projection_hashes.json").read_text("utf8"))


class Var:
    def __init__(self, value):
        self.value = value
    def get(self):
        return self.value


def rebind_identifier(source):
    """Reconstruct identifier-only receiver rebinding from recorded original source."""
    lines = source.splitlines(keepends=True)
    changes = {}
    for tok in tokenize.generate_tokens(io.StringIO(source).readline):
        if tok.type == tokenize.NAME and tok.string == "self":
            changes.setdefault(tok.start[0] - 1, []).append((tok.start[1], tok.end[1]))
    for i, spans in changes.items():
        for a, b in sorted(spans, reverse=True):
            lines[i] = lines[i][:a] + "editor" + lines[i][b:]
    return "".join(lines)


class Phase8ProjectionTests(unittest.TestCase):
    def test_eight_preserved_source_bodies_and_unchanged_entrypoints(self):
        self.assertEqual(len(CONTRACT["original_method_body_contracts"]), 8)
        src = (ROOT / "app/editor.py").read_text("utf8")
        cls = next(x for x in ast.parse(src).body if isinstance(x, ast.ClassDef)
                   and x.name == "EditorApp")
        delegates = {n.name: n for n in cls.body if isinstance(n, ast.FunctionDef)}
        for name, record in CONTRACT["original_method_body_contracts"].items():
            with self.subTest(method=name):
                origin = SNAPSHOT["methods"][name]["original_source"]
                self.assertEqual(
                    hashlib.sha256(origin.encode("utf8")).hexdigest(),
                    record["original_source_sha256"])
                self.assertEqual(
                    hashlib.sha256(rebind_identifier(origin).encode("utf8")).hexdigest(),
                    SNAPSHOT["methods"][name]["transformed_source_sha256"])
                module_source = (ROOT / record["module"]).read_text("utf8")
                node = next(n for n in ast.parse(module_source).body
                            if isinstance(n, ast.FunctionDef) and n.name == name)
                body = textwrap.dedent("".join(
                    module_source.splitlines(keepends=True)[node.lineno:node.end_lineno]))
                self.assertEqual(
                    hashlib.sha256(body.encode("utf8")).hexdigest(),
                    record["transformed_body_sha256"])
                self.assertEqual(
                    rebind_identifier(origin).splitlines(),
                    "".join(module_source.splitlines(keepends=True)[
                        node.lineno - 1:node.end_lineno]).splitlines())
                self.assertLessEqual(delegates[name].end_lineno - delegates[name].lineno + 1, 3)

    def test_frame_view_uses_composed_bounds_and_fallback(self):
        view = SimpleNamespace(frame_rect=Mock(), frame_origin=Mock())
        actor = SimpleNamespace(view=view, _move_scope_extent=Mock(
            side_effect=[(1, 2, 9, 10), None]))
        EditorApp.frame_view(actor)
        EditorApp.frame_view(actor)
        view.frame_rect.assert_called_once_with((1, 2, 9, 10))
        view.frame_origin.assert_called_once()

    def test_animation_origin_only_applies_existing_root_motion(self):
        motion = SimpleNamespace(commands=[object()], at=lambda tick:
                                 SimpleNamespace(px=(tick * 2, -3)))
        actor = SimpleNamespace(root_motion=Var(True), _motion=motion)
        self.assertEqual(EditorApp._animation_origin(actor, 7), (14, -3))
        actor.root_motion = Var(False)
        self.assertEqual(EditorApp._animation_origin(actor, 7), (0.0, 0.0))
        actor.root_motion = Var(True)
        motion.at = lambda tick: None
        self.assertEqual(EditorApp._animation_origin(actor, 7), (0.0, 0.0))

    def test_spawn_projection_uses_selected_tick_and_original_runtime_switches(self):
        m = object()
        rows = object()
        actor = SimpleNamespace(
            move=m, almt=SimpleNamespace(node_names=["GN01"]),
            tick=2, _effect_moves={9: rows},
            parent_link_preview=Var(True), effect_teardown=Var(False),
            _animation_origin=lambda tick: (0, 0))
        with patch("app.renderers.projection.spawns.project", return_value="projected") as fn:
            self.assertEqual(EditorApp.spawn_projection(actor, 8), "projected")
            self.assertEqual(EditorApp.spawn_projection(actor), "projected")
        a, kw = fn.call_args
        self.assertEqual(a[:3], (m, ["GN01"], 2))
        self.assertIs(a[3], actor._effect_moves)
        self.assertIs(kw["origin_at"], actor._animation_origin)
        self.assertTrue(kw["follow_parent"])
        self.assertFalse(kw["apply_teardown"])

    def test_spawn_projection_empty_selection_does_not_invent_instances(self):
        actor = SimpleNamespace(move=None, almt=None)
        p = EditorApp.spawn_projection(actor)
        self.assertEqual(p.instances, [])
        self.assertEqual(p.unresolved, []) if hasattr(p, "unresolved") else None

    def test_selected_spawn_filter_retains_original_identity(self):
        chosen = object()
        a, b, c = (SimpleNamespace(spawn=key) for key in (chosen, object(), chosen))
        proj = SimpleNamespace(instances=[a, b, c])
        actor = SimpleNamespace(
            isolate_selected_spawn=Var(False), sel_virtual={"spawn": chosen})
        self.assertIs(EditorApp._visible_spawn_instances(actor, proj), proj.instances)
        actor.isolate_selected_spawn = Var(True)
        self.assertEqual(EditorApp._visible_spawn_instances(actor, proj), [a, c])
        actor.sel_virtual = None
        self.assertEqual(EditorApp._visible_spawn_instances(actor, proj), [])

    def test_original_shot_source_reads_chr_bin_not_runtime_extrapolation(self):
        root = SimpleNamespace(exists=Mock(return_value=True), read=Mock(return_value=b"BIN"))
        actor = SimpleNamespace(
            move=object(), almt=SimpleNamespace(node_names=["GN01"]),
            root_data=root, _battle_base_table=lambda: True,
            _move_source_form=lambda: ("goku", "ignored"),
            _shot_source_error=None)
        with patch("app.renderers.projection.chrbin.parse", return_value="table") as parse, \
             patch("app.renderers.projection.shotvisuals.source_shots", return_value=("shot",)) as fn:
            self.assertEqual(EditorApp._shot_events_current(actor), ("shot",))
            self.assertEqual(parse.call_args.args[1], "chr/shot/goku.bin")
            fn.assert_called_once_with(actor.move, ["GN01"], "table")
        root.exists.assert_called_once_with("chr/ChrBin.aar|chr/shot/goku.bin")
        root.read.assert_called_once_with("chr/ChrBin.aar|chr/shot/goku.bin")

    def test_source_parse_failure_is_qualified_without_fabricating_events(self):
        actor = SimpleNamespace(
            move=object(), almt=SimpleNamespace(node_names=[]),
            root_data=SimpleNamespace(exists=lambda p: True, read=lambda p: b"bad"),
            _battle_base_table=lambda: True,
            _move_source_form=lambda: ("goku", "unused"),
            _shot_source_error=None)
        with patch("app.renderers.projection.chrbin.parse", side_effect=ValueError("unreadable original BIN")):
            self.assertEqual(EditorApp._shot_events_current(actor), ())
        self.assertEqual(actor._shot_source_error, "unreadable original BIN")

    def test_scope_uses_fallback_without_source_index(self):
        m = SimpleNamespace(nodes=[], duration=9)
        actor = SimpleNamespace(move=m, tick=3, show_spawns=Var(False),
                                index=None, _move_extent=Mock(return_value=(1, 2, 3, 4)))
        self.assertEqual(EditorApp._move_scope_extent(actor), (1, 2, 3, 4))
        actor._move_extent.assert_called_once_with()
        self.assertEqual(actor.tick, 3)

    def test_scope_restores_playhead_after_projection_error(self):
        actor = SimpleNamespace(
            move=SimpleNamespace(nodes=[], duration=12),
            show_spawns=Var(True), index=object(), tick=7,
            almt=SimpleNamespace(node_names=[]), _effect_moves={},
            _move_extent=Mock(side_effect=ValueError("source frame unavailable")),
            _handler00_launch_extents=Mock())
        with patch("app.renderers.projection.spawns.keyed_spawns", return_value=[]):
            with self.assertRaisesRegex(ValueError, "source frame unavailable"):
                EditorApp._move_scope_extent(actor)
        self.assertEqual(actor.tick, 7)
        actor._handler00_launch_extents.assert_not_called()

    def test_launch_extents_reject_non_native_launch_handlers(self):
        ev = SimpleNamespace(handler=3)
        actor = SimpleNamespace(show_shot_sources=Var(True), index=object(),
                                _shot_events_current=lambda: [ev])
        self.assertEqual(EditorApp._handler00_launch_extents(actor), [])
        actor.show_shot_sources = Var(False)
        self.assertEqual(EditorApp._handler00_launch_extents(actor), [])

    def test_frame_extent_uses_authored_collision_rect_with_original_padding(self):
        move = object()
        actor = SimpleNamespace(
            move=move, tick=4,
            _state=lambda m, t: {"GN01": {
                "2DPos": [10, 20], "CollisionRect0": [1, 2, 11, 22]}},
            _frame_image=lambda *_: None,
            show_spawns=Var(False), index=None,
            _animation_origin=lambda t: (3, 4),
            show_motion=Var(False), _motion=None)
        with patch("app.renderers.projection.spritegeometry.sprite_bounds", return_value=[]):
            self.assertEqual(EditorApp._move_extent(actor), (6, 18, 32, 54))


if __name__ == "__main__":
    unittest.main()
