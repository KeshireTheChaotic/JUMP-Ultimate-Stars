"""R08 method move contracts and presenter behavior.

Methods are checked against SHA-256 of exact original source after only
self -> editor delegate rebinding (captured before code movement). This
protects panel controls, callbacks and original game text from accidental
semantic rewrite during future R08 extraction.
"""
from __future__ import annotations
import ast,hashlib,json,textwrap,unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

from app.editor import EditorApp

ROOT=Path(__file__).resolve().parents[1]
CONTRACT=json.loads((ROOT/'tests/fixtures/editor_r08_method_hashes.json').read_text('utf8'))


class Spy:
    def __init__(self):self.calls=[]
    def _add(self,typ,*args,**kwargs):
        self.calls.append((typ,args,kwargs))
    def clear(self):self._add('clear')
    def section(self,*a,**k):return self._add('section',*a,**k)
    def value(self,*a,**k):return self._add('value',*a,**k)
    def text(self,*a,**k):return self._add('text',*a,**k)
    def buttons(self,*a,**k):return self._add('buttons',*a,**k)
    def entry(self,*a,**k):
        self._add('entry',*a,**k)
        return SimpleNamespace(focus_set=lambda:None,select_range=lambda *_:None)
    def spin(self,*a,**k):return self._add('spin',*a,**k)
    def check(self,*a,**k):return self._add('check',*a,**k)
    def combo(self,*a,**k):return self._add('combo',*a,**k)
    def widget(self,*a,**k):return self._add('widget',*a,**k)

    def has(self,typ,needle):
        return any(t==typ and any(needle in str(x) for x in a)
                   for t,a,k in self.calls)


class Var:
    def __init__(self,value=None):self.value=value
    def get(self):return self.value


class R08ContractTest(unittest.TestCase):
    def test_twenty_four_original_methods_transferred_without_body_rewrites(self):
        methods=CONTRACT['original_method_body_contracts']
        self.assertEqual(set(methods),
                         {'refresh_inspector','refresh_details','_draw_shot_source_sprites',
                          '_build_animation','_build_sprite','_build_archive',
                          '_timeline_rows','_notetrack_effect_rows',
                          '_spawn_rows','_shot_rows',
                          '_draw_node_sprites','_draw_animation','_draw_animation_body',
                          '_draw_motion','_draw_spawns','_draw_pursuer','_draw_sprite',
                          '_build_menu','_build_layout','_build_project',
                          '_init_sashes','_init_sprite_sashes',
                          'show_workspace','_bind_shortcuts'})
        cls=next(n for n in ast.parse((ROOT/'app/editor.py').read_text('utf8')).body
                 if isinstance(n,ast.ClassDef) and n.name=='EditorApp')
        current={x.name:x for x in cls.body if isinstance(x,ast.FunctionDef)}
        for original,entry in methods.items():
            with self.subTest(original=original):
                p=ROOT/entry['module']
                lines=p.read_text('utf8').splitlines(keepends=True)
                tree=ast.parse(''.join(lines))
                fn=next(n for n in tree.body if isinstance(n,ast.FunctionDef)
                        and n.name==entry['callable'])
                body=textwrap.dedent(''.join(lines[fn.lineno:fn.end_lineno]))
                # These panels intentionally evolved after R08: viewport editing,
                # native field controls and removal of AI previews. Their behavior
                # is exercised by test_native_animation_controls and drag tests.
                if original not in {'refresh_inspector', '_build_animation', '_draw_animation_body'}:
                    self.assertEqual(hashlib.sha256(body.encode('utf8')).hexdigest(),
                                     entry['transformed_body_sha256'])
                self.assertLessEqual(current[original].end_lineno-current[original].lineno+1,6)
                self.assertGreaterEqual(entry['original_lines'],8)

    def test_move_presenter_empty_state(self):
        ins=Spy()
        editor=SimpleNamespace(inspector=ins,move=None,almt=None)
        EditorApp.refresh_inspector(editor)
        self.assertTrue(ins.has('section','Move'))
        self.assertTrue(ins.has('text','This archive has no move table'))

    def test_move_presenter_authored_track_control_and_selection(self):
        m=SimpleNamespace(id=0x8412B,duration=64,flags=0,fps=60)
        ins=Spy()
        editor=SimpleNamespace(
            inspector=ins,move=m,
            almt=SimpleNamespace(moves=[m],node_names=['GN01']),
            almt_path='chr/ChrArc.aar|chr/aa_b_01.aar|aa_b_01.amt',
            _move_source_form=lambda:(None,None),
            _battle_base_table=lambda:False,
            sel_virtual=None,_track=lambda:None,
            apply_move_props=lambda:None)
        from app.inspectors import move
        with patch.object(move.tk,'StringVar',side_effect=lambda value=None:Var(value)),\
             patch.object(move.tk,'BooleanVar',side_effect=lambda value=None:Var(value)):
            EditorApp.refresh_inspector(editor)
        self.assertTrue(ins.has('section','Move 0'))
        self.assertTrue(ins.has('section','Selection'))
        self.assertTrue(ins.has('entry','ID'))
        self.assertTrue(ins.has('spin','Length'))
        self.assertTrue(ins.has('check','Loop'))
        self.assertEqual(editor._mv['id'].get(),'0x0008412B')
        self.assertEqual(editor._mv['duration'].get(),'64')

    def test_sprite_presenter_empty_and_source_header(self):
        ins=Spy()
        editor=SimpleNamespace(details=ins,sprite_d=None,sprite_g=None)
        EditorApp.refresh_details(editor)
        self.assertTrue(ins.has('section','Sprite'))
        self.assertTrue(ins.has('text','Select an archive'))
        ins.calls.clear()
        editor.sprite_d=SimpleNamespace(version=2,frames=[None])
        editor.sprite_path='root|sprite.dtx'
        editor.frame_i=None
        editor._piece=lambda:None
        EditorApp.refresh_details(editor)
        self.assertTrue(ins.has('value','DSTX v2, 1 frames'))

    def test_shot_source_preview_no_source_does_not_fabricate_pixels(self):
        editor=SimpleNamespace(show_shot_sources=Var(False),index=None)
        info=[]
        EditorApp._draw_shot_source_sprites(editor,None,0,info)
        self.assertEqual(info,[])
        editor.show_shot_sources=Var(True)
        EditorApp._draw_shot_source_sprites(editor,None,0,info)
        self.assertEqual(info,[])


if __name__=='__main__':
    unittest.main()
