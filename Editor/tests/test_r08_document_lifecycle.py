"""R08 resource/save/undo transaction invariants and source transfer proofs.

These tests use fake roots and spies. No original JUS binary, archive, save,
or extracted file is written. Source method bodies are locked to the
pre-extraction snapshots (receiver renaming only).
"""
from __future__ import annotations
import ast
import hashlib
import json
import textwrap
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import Mock,patch

from app.editor import EditorApp
from app.lifecycle import document_ops, resource_ops

ROOT=Path(__file__).resolve().parents[1]
CONTRACT=json.loads((ROOT/'tests/fixtures/editor_r08_document_method_hashes.json').read_text('utf8'))


def var(value):
    return SimpleNamespace(get=lambda:value)


def fake_save_state():
    staged=SimpleNamespace(
        dirty_files=Mock(return_value=['chr/fixture.aar']),
        save=Mock(return_value=[Path('out/chr/fixture.aar')]))
    return SimpleNamespace(
        root_data=staged,
        confirm_discard=Mock(return_value=True),
        suite={},
        update_dirty=Mock(),
        status=Mock())


class SourceContractTests(unittest.TestCase):
    def test_all_51_original_methods_relocated_without_body_rewrite(self):
        items=CONTRACT['original_method_body_contracts']
        self.assertEqual(len(items),51)
        self.assertEqual(len({m['module'] for m in items.values()}),4)
        tree=ast.parse((ROOT/'app/editor.py').read_text('utf8'))
        cls=next(x for x in tree.body if isinstance(x,ast.ClassDef) and x.name=='EditorApp')
        wrappers={x.name:x for x in cls.body if isinstance(x,ast.FunctionDef)}
        for name,entry in items.items():
            with self.subTest(name=name):
                src=(ROOT/entry['module']).read_text('utf8')
                lines=src.splitlines(keepends=True)
                node=next(x for x in ast.parse(src).body
                          if isinstance(x,ast.FunctionDef) and x.name==entry['callable'])
                body=textwrap.dedent(''.join(lines[node.lineno:node.end_lineno]))
                self.assertEqual(hashlib.sha256(body.encode('utf8')).hexdigest(),
                                 entry['transformed_body_sha256'])
                self.assertIn(name,wrappers)
                self.assertLessEqual(wrappers[name].end_lineno-wrappers[name].lineno+1,3)
        self.assertFalse((ROOT/'jus_package/screen_code_sources.json').exists())


class SaveTransactionTests(unittest.TestCase):
    def test_confirm_discard_cancel_leaves_dirty_and_does_not_apply(self):
        actor=SimpleNamespace(almt_dirty=True,sprite_dirty=True,
                              apply_almt=Mock(),apply_sprite=Mock())
        with patch.object(document_ops.messagebox,'askyesnocancel',return_value=None):
            self.assertFalse(EditorApp.confirm_discard(actor))
        self.assertTrue(actor.almt_dirty)
        self.assertTrue(actor.sprite_dirty)
        actor.apply_almt.assert_not_called()
        actor.apply_sprite.assert_not_called()

    def test_discard_confirmation_preserves_apply_order(self):
        history=[]
        actor=SimpleNamespace(
            almt_dirty=True,sprite_dirty=True,
            apply_almt=lambda:history.append('almt'),
            apply_sprite=lambda:history.append('sprite'))
        with patch.object(document_ops.messagebox,'askyesnocancel',return_value=True):
            self.assertTrue(EditorApp.confirm_discard(actor))
        self.assertEqual(history,['almt','sprite'])

    def test_save_cancel_stops_before_ever_writing_original_data(self):
        actor=fake_save_state()
        with patch.object(document_ops.messagebox,'askyesno',return_value=False),\
             patch.object(document_ops.messagebox,'showinfo') as info:
            EditorApp.save(actor,True)
        actor.root_data.save.assert_not_called()
        actor.update_dirty.assert_not_called()
        info.assert_not_called()

    def test_save_success_requires_confirmation_then_updates_dirty(self):
        actor=fake_save_state()
        calls=[]
        actor.root_data.save.side_effect=lambda out:(calls.append(('save',out)) or [Path('out/a.aar')])
        actor.update_dirty.side_effect=lambda:calls.append(('dirty',))
        actor.status.set.side_effect=lambda msg:calls.append(('status',msg))
        with patch.object(document_ops.messagebox,'askyesno',return_value=True) as ask,\
             patch.object(document_ops.messagebox,'showinfo') as info:
            EditorApp.save(actor,True)
        ask.assert_called_once()
        info.assert_called_once()
        self.assertEqual(calls[0],('save',None))
        self.assertEqual(calls[1],('dirty',))
        self.assertTrue(calls[2][1].startswith('Saved 1 archive'))

    def test_save_failure_does_not_mark_edits_saved(self):
        actor=fake_save_state()
        actor.root_data.save.side_effect=OSError('disk denied')
        with patch.object(document_ops.messagebox,'askyesno',return_value=True),\
             patch.object(document_ops.messagebox,'showerror') as error:
            EditorApp.save(actor,True)
        error.assert_called_once()
        actor.update_dirty.assert_called_once()
        actor.status.set.assert_not_called()

    def test_unapplied_workspace_cancel_is_a_noop(self):
        actor=fake_save_state()
        panel=SimpleNamespace(title='Mission',dirty=True,apply=Mock())
        actor.suite={'missions':panel}
        with patch.object(document_ops.messagebox,'askokcancel',return_value=False):
            EditorApp.save(actor,True)
        panel.apply.assert_not_called()
        actor.root_data.save.assert_not_called()


class HistoryTransactionTests(unittest.TestCase):
    def test_first_clean_checkpoint_retains_baseline_and_pushes_exact_snapshot(self):
        original=(b'original-ALMT',1,0,None)
        actor=SimpleNamespace(
            almt_dirty=False,almt_path='chr/demo.amt',sprite_path=None,
            history=SimpleNamespace(push=Mock()),
            _clean={},
            _almt_snapshot=Mock(return_value=original),
            _update_undo_label=Mock())
        EditorApp.checkpoint(actor,'move key')
        self.assertEqual(actor._clean['almt:chr/demo.amt'],original[0])
        actor.history.push.assert_called_once_with('almt:chr/demo.amt','move key',original)
        actor._update_undo_label.assert_called_once()

    def test_undo_in_workspace_restores_only_its_own_snapshot(self):
        panel=SimpleNamespace(snapshot=lambda:b'current',restore=Mock())
        actor=SimpleNamespace(
            workspace='level',suite={'level':panel},
            _doc=lambda:'level:fixture',status=Mock(),update_dirty=Mock())
        fn=Mock(return_value=('previous edit',b'prior state'))
        EditorApp._history_step(actor,fn,'Undo')
        fn.assert_called_once_with('level:fixture',b'current')
        panel.restore.assert_called_once_with(b'prior state')
        actor.status.set.assert_called_once_with('Undo: previous edit')
        actor.update_dirty.assert_called_once()

    def test_undo_empty_history_does_not_mutate_workspace(self):
        panel=SimpleNamespace(snapshot=lambda:b'current',restore=Mock())
        actor=SimpleNamespace(workspace='level',suite={'level':panel},
                              _doc=lambda:'level:fixture',status=Mock(),update_dirty=Mock())
        EditorApp._history_step(actor,lambda _doc,_snap:None,'Undo')
        panel.restore.assert_not_called()
        actor.update_dirty.assert_not_called()
        actor.status.set.assert_called_once_with('Nothing to undo.')


class ResourceNavigationTests(unittest.TestCase):
    def test_cancel_selection_does_not_change_archive(self):
        actor=SimpleNamespace(
            res_tree=SimpleNamespace(focus=lambda:'arc:chr/example.aar'),
            confirm_discard=Mock(return_value=False),
            select_container=Mock())
        EditorApp.on_resource_select(actor)
        actor.select_container.assert_not_called()

    def test_invalid_root_quiet_mode_preserves_cleanup_without_dialog(self):
        actor=SimpleNamespace(_stop_play=Mock(),_audio=None,status=Mock())
        with patch.object(resource_ops,'DataRoot',side_effect=OSError('fixture failure')),\
             patch.object(resource_ops.messagebox,'showerror') as show:
            EditorApp.open_root(actor,'broken/path',quiet=True)
        actor._stop_play.assert_called_once()
        self.assertIsNone(actor.root_data)
        show.assert_not_called()
        actor.status.set.assert_called_once()
        self.assertIn('No data root loaded',actor.status.set.call_args.args[0])

    def test_invalid_almt_does_not_activate_move_table(self):
        actor=SimpleNamespace(
            container='chr/demo.aar',
            root_data=SimpleNamespace(read=Mock(side_effect=ValueError('invalid authored ALMT'))),
            almt_dirty=True,
            _load_effect_catalog=Mock(),
            populate_moves=Mock(),update_dirty=Mock())
        with patch.object(resource_ops.messagebox,'showerror') as show:
            EditorApp.load_almt(actor,'demo.amt')
        show.assert_called_once()
        self.assertIsNone(actor.almt)
        self.assertFalse(actor.almt_dirty)
        actor.populate_moves.assert_called_once()
        actor.update_dirty.assert_called_once()


if __name__=='__main__':
    unittest.main()
