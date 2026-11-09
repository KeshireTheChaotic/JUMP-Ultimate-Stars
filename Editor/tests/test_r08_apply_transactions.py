"""Focused R08 ALMT/sprite/archive apply failure-path and commit-order contracts.

The original decoded game-data parser is mocked only at serialization
boundary. No game file, save, archive or ROM is modified by this suite.
"""
from pathlib import Path
from types import SimpleNamespace
from unittest import TestCase,main
from unittest.mock import Mock,patch

from app.editor import EditorApp
from app.lifecycle import apply_ops


class ApplyTransactionTests(TestCase):
    def test_unserializable_almt_retains_dirty_and_never_writes(self):
        root=SimpleNamespace(write=Mock(),mark_archive_dirty=Mock())
        actor=SimpleNamespace(almt=SimpleNamespace(build=Mock(side_effect=ValueError('invalid ALMT'))),
                              almt_path='chr/demo.aar|demo.amt',
                              root_data=root,almt_dirty=True)
        with patch.object(apply_ops.messagebox,'showerror') as error:
            EditorApp.apply_almt(actor)
        error.assert_called_once()
        root.write.assert_not_called()
        root.mark_archive_dirty.assert_not_called()
        self.assertTrue(actor.almt_dirty)

    def test_almt_apply_preserves_binary_validation_and_archive_spans(self):
        event=[]
        arc=SimpleNamespace(version=2,id_low=4,id_high=17)
        root=SimpleNamespace(
            write=Mock(side_effect=lambda path,data:event.append(('write',path,data))),
            archive=Mock(return_value=arc),
            mark_archive_dirty=Mock(side_effect=lambda path:event.append(('mark',path))))
        actor=SimpleNamespace(
            almt=SimpleNamespace(build=Mock(return_value=b'valid ALMT')),
            almt_path='chr/demo.aar|demo.amt',root_data=root,almt_dirty=True,
            _load_effect_catalog=Mock(),_refresh_pursuer_links=Mock(),
            update_dirty=Mock(),populate_archive=Mock(),status=Mock())
        with patch.object(apply_ops.almt,'parse',return_value=object()) as parse,\
             patch.object(apply_ops.package,'_sync_spans') as spans:
            EditorApp.apply_almt(actor)
        parse.assert_called_once_with(b'valid ALMT')
        spans.assert_called_once()
        self.assertEqual(event[0],('write','chr/demo.aar|demo.amt',b'valid ALMT'))
        self.assertEqual(event[1],('mark','chr/demo.aar'))
        self.assertIsNone(arc.id_low)
        self.assertIsNone(arc.id_high)
        self.assertFalse(actor.almt_dirty)
        actor._load_effect_catalog.assert_called_once()
        actor._refresh_pursuer_links.assert_called_once()
        actor.update_dirty.assert_called_once()
        actor.populate_archive.assert_called_once()

    def test_sprite_build_failure_keeps_unapplied_flag_and_frame_cache(self):
        frames={'cached':True}
        root=SimpleNamespace(write=Mock())
        actor=SimpleNamespace(sprite_d=SimpleNamespace(embedded=None,
                                        build=Mock(side_effect=ValueError('cannot build DSTX'))),
                              sprite_g=None,sprite_dirty=True,sprite_g_path=None,
                              sprite_path='chr/demo.aar|demo.dtx',
                              root_data=root,index=None,_frame_cache=frames,
                              update_dirty=Mock(),populate_archive=Mock(),status=Mock())
        with patch.object(apply_ops.messagebox,'showerror') as error:
            EditorApp.apply_sprite(actor)
        error.assert_called_once()
        root.write.assert_not_called()
        self.assertTrue(actor.sprite_dirty)
        self.assertEqual(frames,{'cached':True})
        actor.update_dirty.assert_not_called()

    def test_embedded_sprite_apply_persists_original_source_order(self):
        events=[]
        d=SimpleNamespace(embedded=b'old DSIG',build=Mock(return_value=b'new DSTX'))
        g=SimpleNamespace(build=Mock(return_value=b'new DSIG'))
        root=SimpleNamespace(write=Mock(side_effect=lambda path,raw:events.append((path,raw))))
        actor=SimpleNamespace(sprite_d=d,sprite_g=g,sprite_dirty=True,
                              sprite_g_path=None,sprite_path='chr/demo.aar|demo.dtx',
                              root_data=root,index=SimpleNamespace(invalidate=Mock()),
                              _frame_cache={'key':'value'},
                              update_dirty=Mock(),populate_archive=Mock(),status=Mock())
        EditorApp.apply_sprite(actor)
        self.assertEqual(d.embedded,b'new DSIG')
        self.assertEqual(events,[('chr/demo.aar|demo.dtx',b'new DSTX')])
        self.assertFalse(actor.sprite_dirty)
        self.assertEqual(actor._frame_cache,{})
        actor.index.invalidate.assert_called_once()
        actor.update_dirty.assert_called_once()
        actor.populate_archive.assert_called_once()

    def test_palette_invalid_edit_does_not_checkpoint_or_touch_palettes(self):
        bank=[1]*16
        actor=SimpleNamespace(sprite_g=SimpleNamespace(palettes=[bank[:]]),
                              checkpoint=Mock(),mark_sprite=Mock(),redraw_sprite=Mock())
        with patch.object(apply_ops.messagebox,'showerror') as show:
            result=EditorApp._palette_done(actor,'01 02')
        self.assertFalse(result)
        show.assert_called_once()
        actor.checkpoint.assert_not_called()
        self.assertEqual(actor.sprite_g.palettes,[bank])
        actor.redraw_sprite.assert_not_called()

    def test_palette_valid_edit_checkpoints_before_marking_dirty(self):
        events=[]
        actor=SimpleNamespace(sprite_g=SimpleNamespace(palettes=[[0]*16]),
                              checkpoint=lambda label,**kw:events.append(('checkpoint',label)),
                              mark_sprite=lambda:events.append(('mark',)),
                              redraw_sprite=lambda **kw:events.append(('redraw',kw)))
        value=' '.join(f'{i:04X}' for i in range(16))
        result=EditorApp._palette_done(actor,value)
        self.assertTrue(result)
        self.assertEqual(actor.sprite_g.palettes,[list(range(16))])
        self.assertEqual(events[0],('checkpoint','edit palette'))
        self.assertEqual(events[1],('mark',))
        self.assertEqual(events[2],('redraw',{'thumbs':True}))

    def test_import_invalid_json_does_not_checkpoint(self):
        actor=SimpleNamespace(almt=object(),checkpoint=Mock(),
                              mark_almt=Mock(),populate_moves=Mock())
        with patch.object(apply_ops.filedialog,'askopenfilename',return_value='missing file.json'),\
             patch.object(apply_ops,'Path') as path,\
             patch.object(apply_ops.messagebox,'showerror') as error:
            path.return_value.read_text.side_effect=ValueError('invalid JSON')
            EditorApp.import_almt_json(actor)
        error.assert_called_once()
        actor.checkpoint.assert_not_called()
        actor.mark_almt.assert_not_called()

    def test_remove_archive_member_requires_explicit_confirmation(self):
        entry=SimpleNamespace(name='src.dig')
        actor=SimpleNamespace(_selected_member=lambda:entry,
                              root_data=SimpleNamespace(remove=Mock()),
                              container='chr/demo.aar',after_archive_edit=Mock())
        with patch.object(apply_ops.messagebox,'askyesno',return_value=False):
            EditorApp.remove_member(actor)
        actor.root_data.remove.assert_not_called()
        actor.after_archive_edit.assert_not_called()

    def test_archive_membership_edit_reindexes_then_refreshes(self):
        order=[]
        actor=SimpleNamespace(
            index=SimpleNamespace(rebuild=lambda:order.append('index')),
            update_dirty=lambda:order.append('dirty'),
            container='chr/demo.aar',scope=['chr/demo.aar'],
            select_container=lambda path,cid:order.append(('select',path,cid)))
        EditorApp.after_archive_edit(actor)
        self.assertEqual(order,['index','dirty',('select','chr/demo.aar',None)])


if __name__=='__main__':
    main()
