"""Regression tests for R01-R04 editor redundancy audit extractions.

No UI display server, ROM edit, saved deck or game-data mutation required.
"""
from __future__ import annotations

import json
import struct
import unittest
from types import SimpleNamespace
from unittest.mock import Mock, patch

from jus_package.notecommands import iter_note_commands
from jus_package.spritegeometry import sprite_bounds
from app.workspaces.missions import MissionPanel
from app.workspaces.roster import RosterBrowser
from app.workspaces import missions


class V:
    def __init__(self,value): self.value=value
    def get(self): return self.value


class FakeTable:
    def __init__(self,state=None):
        self.state=dict(state or {'stage':0,'environment':False,'rule':0,
                                  'opponents':0,'time':0,'tutorial':-1})

    def build(self):
        return json.dumps(self.state,sort_keys=True).encode('ascii')

    @classmethod
    def parse(cls,raw):
        return cls(json.loads(raw.decode('ascii')))

    def set_stage(self,_i,value): self.state['stage']=value
    def set_environment(self,_i,value): self.state['environment']=value
    def set_battle_parameters(self,_i,*,rule,opponents,time_value):
        self.state.update(rule=rule,opponents=opponents,time=time_value)
    def get(self,_i): return SimpleNamespace(**self.state)
    def set_tutorial_slot(self,_i,value): self.state['tutorial']=value


class FakeTree:
    def __init__(self):
        self.selected=()
        self.focused=''
        self.events=0
        self.seen=[]
        self.callback=None

    def exists(self,iid): return iid in ('card','move')
    def selection(self): return self.selected

    def selection_set(self,iid):
        self.events+=1
        if self.callback:self.callback()
        self.selected=(iid,)

    def focus(self,iid=None):
        if iid is None:return self.focused
        self.focused=iid

    def see(self,iid):self.seen.append(iid)


class TraversalTest(unittest.TestCase):
    def test_missing_malformed_node_order_and_per_key_ordinal(self):
        def command(op):return SimpleNamespace(opcode=op)
        good=SimpleNamespace(keys=[
            SimpleNamespace(tick=4,commands=[command(0x0100),command(0x0300)]),
            SimpleNamespace(tick=2,commands=[command(0x0400)])])
        other=SimpleNamespace(keys=[SimpleNamespace(tick=4,commands=[command(0x0500)])])
        class Track:
            def __init__(self,value):self.value=value
            def encoded(self):return self.value
        class Node:
            def __init__(self,value):self.value=value
            def track(self,name):
                assert name=='NoteTrack'
                return None if self.value is None else Track(self.value)
        move=SimpleNamespace(nodes=[Node(b'good'),None,Node(b'bad'),Node(b'other'),Node(None)])
        def parse(blob):
            if blob==b'bad':raise struct.error('malformed fixture')
            return {b'good':good,b'other':other}[blob]
        with patch('jus_package.notecommands.notetrack.parse',side_effect=parse):
            found=list(iter_note_commands(move,['Goku']))
        self.assertEqual([(x.tick,x.node_index,x.ordinal,x.node,x.command.opcode)
                          for x in found],
                         [(4,0,0,'Goku',0x0100),(4,0,1,'Goku',0x0300),
                          (2,0,0,'Goku',0x0400),(4,3,0,'N3',0x0500)])


class MissionSafetyTest(unittest.TestCase):
    def panel(self,shared=True,battle=False):
        panel=MissionPanel.__new__(MissionPanel)
        nodes=[SimpleNamespace(mission=not battle,definition_id=0)]
        if shared:
            nodes.append(SimpleNamespace(mission=not battle,definition_id=0))
        graph=SimpleNamespace(node_count=len(nodes),get=lambda i:nodes[i])
        initial=FakeTable()
        cat=SimpleNamespace(graph=graph,missions=initial,battles=initial)
        panel.catalog=cat
        panel.node_id=0
        panel.ws=SimpleNamespace(select_mission=Mock())
        panel.checkpoint=Mock()
        panel._edited=Mock()
        panel.stage_var=V('7')
        panel.environment_var=V(True)
        panel.rule_var=V('3')
        panel.opponents_var=V('2')
        panel.time_var=V('99')
        panel.tutorial_slot_var=V('5')
        return panel,initial

    def test_stage_shared_definition_confirmation_commit_once(self):
        panel,before=self.panel()
        with patch.object(missions.DefinitionTable,'parse',side_effect=FakeTable.parse),\
             patch.object(missions.roster,'stage_stem',return_value='st07'),\
             patch.object(missions.messagebox,'askyesno',return_value=True) as ask:
            panel.update_stage()
        self.assertEqual(ask.call_count,1)
        self.assertEqual(panel.checkpoint.call_count,1)
        self.assertEqual(panel._edited.call_count,1)
        self.assertEqual(panel.ws.select_mission.call_args.args,(0,))
        self.assertIsNot(panel.catalog.missions,before)
        self.assertEqual(panel.catalog.missions.state['stage'],7)
        self.assertTrue(panel.catalog.missions.state['environment'])
        self.assertEqual(before.state['stage'],0)

    def test_cancel_does_not_stage_data_or_history(self):
        panel,before=self.panel()
        with patch.object(missions.DefinitionTable,'parse',side_effect=FakeTable.parse),\
             patch.object(missions.roster,'stage_stem',return_value='st07'),\
             patch.object(missions.messagebox,'askyesno',return_value=False) as ask:
            panel.update_stage()
        ask.assert_called_once()
        self.assertIs(panel.catalog.missions,before)
        panel.checkpoint.assert_not_called()
        panel._edited.assert_not_called()
        panel.ws.select_mission.assert_not_called()

    def test_noop_without_prompt_or_history(self):
        panel,before=self.panel()
        panel.stage_var=V('0')
        panel.environment_var=V(False)
        with patch.object(missions.DefinitionTable,'parse',side_effect=FakeTable.parse),\
             patch.object(missions.roster,'stage_stem',return_value='st00'),\
             patch.object(missions.messagebox,'askyesno') as ask:
            panel.update_stage()
        ask.assert_not_called()
        self.assertIs(panel.catalog.missions,before)
        panel.checkpoint.assert_not_called()

    def test_invalid_does_not_checkpoint(self):
        panel,before=self.panel()
        with patch.object(missions.DefinitionTable,'parse',side_effect=FakeTable.parse),\
             patch.object(missions.roster,'stage_stem',return_value=None),\
             patch.object(missions.messagebox,'showerror') as error:
            panel.update_stage()
        self.assertEqual(error.call_count,1)
        self.assertIs(panel.catalog.missions,before)
        panel.checkpoint.assert_not_called()

    def test_battle_tutorial_slot_commit_and_no_shared_prompt(self):
        panel,before=self.panel(shared=False,battle=True)
        with patch.object(missions.DefinitionTable,'parse',side_effect=FakeTable.parse),\
             patch.object(missions.messagebox,'askyesno') as ask:
            panel.update_battle_parameters()
        self.assertEqual(panel.catalog.battles.state['rule'],3)
        self.assertEqual(panel.catalog.battles.state['tutorial'],5)
        self.assertEqual(panel.catalog.battles.state['opponents'],2)
        self.assertIsNot(panel.catalog.battles,before)
        ask.assert_not_called()
        panel.checkpoint.assert_called_once()


class RosterGuardTest(unittest.TestCase):
    def test_move_card_move_no_recursive_navigation(self):
        browser=RosterBrowser.__new__(RosterBrowser)
        tree=FakeTree()
        browser.tree=tree
        browser.actions={'card':('card',77),'move':('move','goku',0x123,'b.amt')}
        browser._selecting=False
        browser._expand_to_action=Mock()
        recursive=[]
        tree.callback=lambda:recursive.append(browser._selecting)
        self.assertTrue(browser.select_card(77))
        self.assertTrue(browser.select_card(77))
        self.assertTrue(browser.select_move('goku',0x123,'b.amt'))
        self.assertTrue(browser.select_card(77))
        self.assertEqual(tree.events,3)
        self.assertEqual(recursive,[True,True,True])
        self.assertFalse(browser._selecting)
        self.assertEqual(browser._expand_to_action.call_count,4)
        self.assertEqual(tree.seen,['card','card','move','card'])
        self.assertFalse(browser.select_move('other',0,'other'))
        self.assertFalse(browser._selecting)


class SpriteGeometryTest(unittest.TestCase):
    def test_bounds_use_original_frame_offsets_and_caller_translation(self):
        states=[
            {'TextureID':0x11,'BoundsIndex':3,'2DPos':[-5,8]},
            {'TextureID':0x12,'BoundsIndex':5,'2DPos':[0,0]},
            {'TextureID':None,'BoundsIndex':1},
            {'TextureID':0x11,'BoundsIndex':0xFFFF},
            {'TextureID':0x11,'BoundsIndex':None},
        ]
        calls=[]
        def image(tid,frame):
            calls.append((tid,frame))
            return (SimpleNamespace(width=7,height=11),-2,-3) if tid==0x11 else None
        self.assertEqual(list(sprite_bounds(states,image,(100,-50))),[(93,-45,100,-34)])
        self.assertEqual(calls,[(0x11,3),(0x12,5)])

    def test_no_world_transform_or_collision_guess(self):
        states=[{'TextureID':0xAA,'BoundsIndex':0,'2DPos':[0,0],
                 'CollisionRect1':[9,9,20,30]}]
        def img(_t,_f):return (SimpleNamespace(width=16,height=8),0,0)
        self.assertEqual(list(sprite_bounds(states,img)),[(0,0,16,8)])


if __name__=='__main__':
    unittest.main()
