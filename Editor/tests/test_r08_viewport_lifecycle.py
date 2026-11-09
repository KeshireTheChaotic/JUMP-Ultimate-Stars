"""R08 viewport, menu lifecycle and session-bootstrap contracts.

Independent of a display server. All original game bytes and graphics are
untouched; GUI smoke covers actual Tk geometry and callback execution.
"""
from __future__ import annotations
import ast,hashlib,json,textwrap,unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import Mock
from app.editor import EditorApp

ROOT=Path(__file__).resolve().parents[1]
SESSION=json.loads((ROOT/'tests/fixtures/editor_r08_session_hash.json').read_text('utf8'))


class FakeHud:
    def __init__(self):self.text=''
    def configure(self,**kwargs):self.text=kwargs.get('text',self.text)


class FakePanel:
    def __init__(self,label,events):
        self.label,self.events=label,events
    def pack_forget(self):self.events.append(f'hide:{self.label}')
    def pack(self,**kwargs):self.events.append(f'show:{self.label}')
    def configure(self,**kwargs):self.events.append(f'configure:{self.label}')


class R08LifecycleRegression(unittest.TestCase):
    def test_original_session_assignment_order_is_sha_locked(self):
        p=ROOT/SESSION['module']
        src=p.read_text('utf8')
        lines=src.splitlines(keepends=True)
        fn=next(x for x in ast.parse(src).body if isinstance(x,ast.FunctionDef)
                and x.name==SESSION['callable'])
        body=textwrap.dedent(''.join(lines[fn.lineno:fn.end_lineno]))
        self.assertEqual(hashlib.sha256(body.encode()).hexdigest(),
                         SESSION['transformed_body_sha256'])
        self.assertGreaterEqual(SESSION['original_lines'],70)
        tree=ast.parse((ROOT/'app/editor.py').read_text('utf8'))
        editor=next(c for c in tree.body if isinstance(c,ast.ClassDef) and c.name=='EditorApp')
        init=next(f for f in editor.body if isinstance(f,ast.FunctionDef) and f.name=='__init__')
        body=ast.unparse(init)
        positions=[
            body.index('T.apply_styles(self)'),
            body.index('initialize_editor_state(self)'),
            body.index('self._build_menu()'),
            body.index('self._build_layout()'),
            body.index('self._bind_shortcuts()'),
            body.index('self.after(60,')]
        self.assertEqual(positions,sorted(positions))

    def test_animation_and_sprite_empty_source_guards(self):
        vp=SimpleNamespace(hud=FakeHud())
        EditorApp._draw_animation(SimpleNamespace(move=None,almt=None),vp)
        self.assertEqual(vp.hud.text,'No move selected')
        EditorApp._draw_sprite(SimpleNamespace(sprite_d=None,frame_i=None,
                                                sprite_g=None),vp)
        self.assertEqual(vp.hud.text,'No sprite loaded')

    def test_unknown_workspace_does_not_stop_playback(self):
        stop=Mock()
        actor=SimpleNamespace(ws={'animation':object()},_stop_play=stop,
                              workspace='animation')
        EditorApp.show_workspace(actor,'nonexistent')
        stop.assert_not_called()
        self.assertEqual(actor.workspace,'animation')

    def test_workspace_switch_stops_playback_before_reparenting(self):
        events=[]
        frames={k:FakePanel(k,events) for k in
                ('animation','sprite','koma','screen','level','archive')}
        buttons={k:FakePanel('tab:'+k,events) for k in
                 ('roster','level','screen','archive')}
        s=SimpleNamespace(browser=FakePanel('level-browser',events),
                          browser_title='Level workspace',
                          on_show=lambda:events.append('on_show:level'))
        project=SimpleNamespace(set_title=lambda title:events.append('title:'+title))
        actor=SimpleNamespace(
            ws=frames,workspace='animation',
            _stop_play=lambda:events.append('stop_play'),
            _stop_flipbook=lambda:events.append('stop_flipbook'),
            _last_roster_view='animation',
            _set_roster_clips=lambda hidden:events.append(f'roster_clips:{hidden}'),
            _tab_buttons=buttons,
            _roster_modes=FakePanel('roster_modes',events),
            _roster_mode_buttons={},
            suite={'level':s},
            _movelab_browser=FakePanel('movelab',events),
            roster_browser=SimpleNamespace(frame=FakePanel('roster',events)),
            _project_panel=project,
            after=lambda millis,callback:events.append(f'after:{millis}'),
            redraw_view=lambda:None,redraw_sprite=lambda:None)
        EditorApp.show_workspace(actor,'level')
        self.assertEqual(actor.workspace,'level')
        self.assertLess(events.index('stop_play'),events.index('hide:animation'))
        self.assertIn('show:level',events)
        self.assertIn('show:level-browser',events)
        self.assertIn('title:Level workspace',events)
        self.assertIn('on_show:level',events)
        self.assertIn('after:30',events)
        self.assertNotIn('stop_flipbook',events)

    def test_keyboard_bindings_keep_original_redirect_targets(self):
        callbacks={}
        calls=[]
        actor=SimpleNamespace(
            bind_all=lambda key,fn:callbacks.__setitem__(key,fn),
            focus_get=lambda:None,
            undo=lambda:calls.append('undo'),
            redo=lambda:calls.append('redo'),
            show_workspace=lambda name:calls.append('workspace:'+name),
            show_roster_sprite=lambda:calls.append('sprite'),
            show_shortcuts=lambda:calls.append('shortcuts'))
        EditorApp._bind_shortcuts(actor)
        self.assertIn('<Control-z>',callbacks)
        self.assertIn('<Control-Key-6>',callbacks)
        self.assertIn('<F1>',callbacks)
        self.assertIn('<KeyPress-f>',callbacks)
        self.assertEqual(callbacks['<Control-z>'](None),'break')
        self.assertEqual(callbacks['<Control-Key-6>'](None),'break')
        self.assertEqual(callbacks['<F1>'](None),'break')
        self.assertEqual(calls,['undo','workspace:screen','shortcuts'])


if __name__=='__main__':
    unittest.main()
