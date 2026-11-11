import copy
import struct
import tkinter as tk
import unittest
from types import SimpleNamespace
from unittest.mock import Mock, patch
from PIL import Image

from app.inspectors.track_controls import ValueControls, commit_value, default_value, validate_value
from app import ui_copy
from app.widgets.inspector import Inspector
from app.widgets.resource_picker import resource_choices, resource_image, thumbnail, ResourcePicker
from app.widgets.shot_editor import update_record
from jus_formats import almt, chrbin


class NativeValueTests(unittest.TestCase):
    def test_key_creation_roundtrip_neighbors_and_undo_bytes(self):
        for field in list(almt.FIELD_WIDTHS) + ['CollisionRect3', 'CollisionEnable3', 'CollisionType3']:
            with self.subTest(field=field):
                value = default_value(field)
                tr = almt.Track(field, True, keys=[almt.Key(0, value), almt.Key(10, value)])
                move = almt.Move(1, 20, nodes=[almt.NodeAnim([tr])])
                doc = almt.AlmtFile(node_names=['GN0'], moves=[move])
                doc.field_index(field)
                before = doc.build()
                snapshots = []
                e = SimpleNamespace(tick=5, checkpoint=lambda _: snapshots.append(doc.build()),
                                    _track_done=move.touch, sel_key=None)
                updated = [v + 1 for v in value] if isinstance(value, list) else value + 1
                commit_value(e, tr, updated)
                again = almt.parse(doc.build()).moves[0].nodes[0].tracks[0]
                self.assertEqual([(k.tick,k.value) for k in again.keys], [(0,value),(5,updated),(10,value)])
                self.assertEqual(snapshots, [before])
                commit_value(e, tr, updated)
                self.assertEqual(snapshots, [before])
                self.assertEqual(almt.parse(snapshots[0]).moves[0].nodes[0].tracks[0].keys[0].value, value)

    def test_invalid_edit_never_mutates_or_checkpoints(self):
        tr = almt.Track('HFlip', False, value=1)
        e = SimpleNamespace(checkpoint=Mock())
        with self.assertRaises(ValueError):
            commit_value(e, tr, 256)
        e.checkpoint.assert_not_called()
        self.assertEqual(tr.value, 1)
        for field, value in [('2DPos', [32768,0]), ('Color',[0,0,0]), ('Alpha', -1)]:
            with self.assertRaises(ValueError): validate_value(field, value)

    def test_shot_edit_preserves_neighbor_records_and_unknown_bytes(self):
        raw = bytes(range(64))
        table = chrbin.parse(raw, 'chr/shot/test.bin')
        changed = update_record(table.record(0), {6:-1, 12:0x123456})
        expected = bytearray(raw)
        struct.pack_into('<h', expected, 6, -1)
        struct.pack_into('<I', expected, 12, 0x123456)
        self.assertEqual(table.replace_record(0, changed).build(), bytes(expected))
        self.assertEqual(table.build(), raw)
        with self.assertRaises(ValueError): update_record(raw[:32], {0:256})


class NativeControlsTkTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.root = tk.Tk()
        cls.root.withdraw()

    @classmethod
    def tearDownClass(cls):
        cls.root.destroy()

    def setUp(self):
        self.ins = Inspector(self.root)
        self.editor = SimpleNamespace(index=None, move=None, sel_track=None, tick=0, _effect_moves={})

    def tearDown(self):
        self.ins.destroy()

    def test_plain_english_inspector_and_clickable_original_evidence(self):
        self.assertEqual(ui_copy.field_label('BoundsIndex'), 'Sprite frame')
        self.assertEqual(ui_copy.field_label('CollisionRect2'), 'Hitbox area 3')
        self.assertEqual(ui_copy.field_label('GenerateID'), 'Spawn effect')
        self.assertEqual(ui_copy.evidence_status('Direct'), 'Verified')
        self.assertEqual(ui_copy.evidence_status('Unknown'), 'Not confirmed')
        self.ins.section('Original move text', note='FUN_02012345 uses ROM data')
        evidence = self.ins.evidence('Original input to ALMT', 'Direct',
                                     'FUN_02012345 actor+0x6C')
        self.assertEqual(evidence.cget('text'), 'Verified · Details')
        self.assertEqual(evidence._technical_note, 'FUN_02012345 actor+0x6C')
        self.assertIn('Details', evidence.cget('text'))
        labels = [w.cget('text') for w in self.ins.inner.winfo_children()
                  if isinstance(w, __import__('tkinter').ttk.Label)]
        self.assertIn('MOVE DETAILS', labels)
        self.assertNotIn('FUN_02012345 uses ROM data', '\n'.join(labels))
        with patch('app.widgets.inspector.messagebox.showinfo') as popup:
            evidence.event_generate('<Button-1>')
            popup.assert_called_once()
            self.assertIn('FUN_02012345', str(popup.call_args))

    def test_all_fields_have_native_controls_and_preserve_values(self):
        for field in list(almt.FIELD_WIDTHS) + ['CollisionEnable0','CollisionType0','CollisionRect0']:
            with self.subTest(field=field):
                self.ins.clear(); self.ins.section(field)
                value = default_value(field)
                apply = Mock()
                controls = ValueControls(self.editor, self.ins, field, value, apply)
                self.assertEqual(controls.reader(), value)
                controls.apply()
                apply.assert_called_once_with(value)

    def test_unknown_flags_noncanonical_boolean_and_signed_priority_preserved(self):
        for field,value in [('EffectFlags',0x8005),('HFlip',7),('DrawPrio',0xFFFFE800),
                            ('Position',[0xFFFFFFFF,0x80000000,0x7FFFFFFF]),('Color',[1,2,3,4])]:
            with self.subTest(field=field):
                self.ins.clear(); self.ins.section(field)
                controls = ValueControls(self.editor,self.ins,field,value,Mock())
                self.assertEqual(controls.reader(), value)

    def test_native_components_and_opacity_convert_to_saved_values(self):
        self.ins.section('Position')
        callback=Mock()
        controls=ValueControls(self.editor,self.ins,'2DPos',[0,0],callback)
        controls.variables[0].set('-12'); controls.variables[1].set('25')
        controls.apply(); callback.assert_called_once_with([-12,25])
        self.ins.clear(); self.ins.section('Alpha')
        controls=ValueControls(self.editor,self.ins,'Alpha',4096,callback)
        controls.variables[0].set('0.5'); controls.apply()
        callback.assert_called_with(2048)

    def test_thumbnails_resolve_actual_frame_and_effect_pixels(self):
        image=Image.new('RGBA',(8,8),(255,0,0,255))
        move=almt.Move(1,20,nodes=[almt.NodeAnim([
            almt.Track('TextureID',False,value=7),almt.Track('BoundsIndex',False,value=1)])])
        self.editor.move=move
        self.editor.index=SimpleNamespace(by_rid={7:{0x40:'actual.dtx'}},sprite=lambda _: (SimpleNamespace(frames=[1,2]),None))
        self.editor._frame_image=lambda tid,frame: (image,0,0) if (tid,frame)==(7,1) else None
        self.editor._effect_moves={1:(move,['GN0'],'actual.amt')}
        self.assertEqual(resource_choices(self.editor,'TextureID'),[(7,'0x000007 · actual.dtx')])
        for field,value in [('TextureID',7),('BoundsIndex',1),('PatternNo',1),('GenerateID',1)]:
            self.assertEqual(resource_image(self.editor,field,value).getpixel((0,0)),(255,0,0,255))
        self.assertIsNone(resource_image(self.editor,'GenerateID',99))
        self.assertEqual(thumbnail(image).size,(96,80))
        chosen=Mock()
        picker=ResourcePicker(self.root,self.editor,'BoundsIndex',chosen)
        picker.update_idletasks()
        self.assertEqual(len(picker.photos),3)
        picker.query.set('Frame 1'); picker.update_idletasks()
        self.assertEqual(len(picker.photos),1)
        picker.choose(1)
        chosen.assert_called_once_with(1)


class NativeEditorIntegrationTests(unittest.TestCase):
    def setUp(self):
        from app.editor import EditorApp
        self.app = EditorApp()
        self.app.withdraw()
        for job in self.app.tk.splitlist(self.app.tk.call('after', 'info')):
            self.app.after_cancel(job)
        tracks = [almt.Track('2DPos', False, value=[0, 0]),
                  almt.Track('Alpha', True, keys=[almt.Key(0,4096)])]
        doc = almt.AlmtFile(node_names=['GN0'], moves=[almt.Move(1,20,nodes=[almt.NodeAnim(tracks)])])
        for tr in tracks: doc.field_index(tr.field)
        self.app.almt, self.app.move, self.app.almt_path = doc, doc.moves[0], 'native-controls-test.almt'
        self.app.tick = 5
        self.app._ai_block = Mock(side_effect=AssertionError('AI preview must not be loaded'))
        self.app._battle_base_table = lambda: True

    def tearDown(self):
        self.app.destroy()

    def test_inspector_creates_key_and_records_undo_without_ai_preview(self):
        self.app.sel_track = (0,1)
        self.app.sel_key = None
        before = self.app.almt.build()
        self.app.refresh_animation()
        controls = self.app.inspector._value_controls
        controls.variables[0].set('0.5')
        controls.apply()
        self.assertEqual(self.app.move.nodes[0].tracks[1].keys[-1].value,2048)
        self.assertEqual(self.app.sel_key,5)
        self.assertTrue(self.app.almt_dirty)
        result=self.app.history.undo('almt:native-controls-test.almt',self.app._almt_snapshot())
        self.assertEqual(result[1][0],before)
        self.app._ai_block.assert_not_called()

    def test_add_native_track_and_cancel(self):
        from app.widgets.add_track import AddTrackDialog
        before=self.app.almt.build()
        dialog=AddTrackDialog(self.app)
        dialog.destroy()
        self.assertEqual(self.app.almt.build(),before)
        dialog=AddTrackDialog(self.app)
        self.assertEqual(dialog._field_by_label['Sprite frame'], 'BoundsIndex')
        self.assertEqual(dialog._field_by_label['Hitbox area 3'], 'CollisionRect2')
        dialog.field.set('Hitbox area 3'); dialog.rebuild()
        for var,value in zip(dialog.controls.variables,[-10,-20,30,40]): var.set(str(value))
        dialog.controls.apply()
        tr=self.app.move.nodes[0].track('CollisionRect2')
        self.assertEqual([(k.tick,k.value) for k in tr.keys],[(5,[-10,-20,30,40])])
        self.assertEqual(almt.parse(self.app.almt.build()).moves[0].nodes[0].track('CollisionRect2').keys[0].value,
                         [-10,-20,30,40])

    def test_shot_editor_stage_and_cancel_are_isolated(self):
        from app.widgets.shot_editor import ShotEditor
        path='chr/ChrBin.aar|chr/shot/test.bin'
        blobs={path:bytes(64)}
        self.app.root_data=SimpleNamespace(read=lambda p:blobs[p],exists=lambda p:p in blobs,
                                          write=lambda p,b:blobs.__setitem__(p,b))
        self.app.update_dirty=Mock(); self.app.refresh_animation=Mock()
        dialog=ShotEditor(self.app,path)
        dialog.vars[6].set('17'); dialog.apply_record(); dialog.destroy()
        self.assertEqual(blobs[path],bytes(64))
        dialog=ShotEditor(self.app,path)
        dialog.vars[6].set('17'); dialog.apply_record()
        dialog.undo()
        self.assertEqual(dialog.table.build(),bytes(64))
        dialog.vars[6].set('18'); dialog.stage()
        self.assertEqual(struct.unpack_from('<h',blobs[path],6)[0],18)
        self.assertEqual(blobs[path][32:],bytes(32))
        self.app.update_dirty.assert_called_once()


if __name__ == '__main__': unittest.main()
