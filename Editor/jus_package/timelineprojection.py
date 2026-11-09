"""Editor-only pure timeline projections (audit R08).

This module only interprets original authored ALMT tracks. It does not
simulate DS runtime condition branching, actor state, collision, camera,
or modify ROM/archive bytes. Keep renderer/Tk-specific control here absent.

Important: editor_state_at intentionally scans ALL keys. The original
EditorApp held the last authored key whose tick <= playhead even when
keys are out of order; other subsystems (e.g. spawns) assume sorted keys,
so replacing this with a sorted-key fast path would be a behavior change.
"""
from __future__ import annotations
from collections.abc import Iterable, Mapping, Callable
from typing import Any

from jus_formats import almt,eventops,notetrack

BRANCH_TARGET_ARGS={0x000E:(1,3),0x001D:(1,3),0x0012:(1,),
                    0x0017:tuple(range(2,10)),0x0013:(),0x0014:()}


def editor_state_at(move:almt.Move,tick:int)->dict[int,dict]:
    out={}
    for ni,node in enumerate(move.nodes):
        if node is None:continue
        st={}
        for tr in node.tracks:
            if tr.opaque:continue
            if not tr.keyed:
                st[tr.field]=tr.value
            else:
                cur=None
                for k in tr.keys:
                    if k.tick<=tick:
                        cur=k.value
                if cur is not None:
                    st[tr.field]=cur
        out[ni]=st
    return out


def branch_targets(cmd)->list:
    """Authored Marker labels, never a presumed executed branch."""
    if cmd.opcode>>8!=0:return []
    values=cmd.values()
    if not values:return []
    indexes=BRANCH_TARGET_ARGS.get(cmd.opcode,(0,))
    return [values[i] for i in indexes
            if i<len(values) and values[i] not in (-1,255)]


def marker_tick_map(move:almt.Move)->dict[int,int]:
    """First authored Marker tick for each original Marker label."""
    marker_ticks={}
    for node in move.nodes:
        track=node.track('Marker') if node else None
        if track and not track.opaque:
            for k in track.keys if track.keyed else [almt.Key(0,track.value)]:
                marker_ticks.setdefault(k.value,k.tick)
    return marker_ticks


def note_track_view(track,marker_ticks:Mapping,
                    event_colours:Mapping,default_colour)->dict:
    """Code-authored NoteTrack keys, categories and potential jump arcs.

    This deliberately catches only ValueError: the prior GUI also allowed
    distinct IndexError/struct.error conditions to propagate.
    """
    try:
        note=notetrack.parse(track.encoded())
    except ValueError:
        note=None
    keys,flags,arcs=[],{},[]
    if note:
        for ki,key in enumerate(note.keys):
            for ci,cmd in enumerate(key.commands):
                keys.append((key.tick,(ki,ci,cmd)))
                flags.setdefault(key.tick,[]).append(
                    event_colours.get(cmd.opcode>>8,default_colour))
                for label in branch_targets(cmd):
                    if label in marker_ticks:
                        arcs.append((key.tick,marker_ticks[label],'branch'))
    return {'kind':'events','keys':keys,'flags':flags,'arcs':arcs,
            'badge':f'{len(keys)} ev'}


def marker_track_view(track,warn_colour,jump_colour='#C9A0FF')->dict:
    """Authored jump labels/arcs, not guaranteed runtime control flow."""
    labels,arcs=[],[]
    for tick,_label,target in eventops.marker_jump_pairs(track.keys):
        arcs.append((tick,target,'jump' if target is not None else 'missing'))
    for key in track.keys:
        value=key.value
        ev=eventops.marker_event(value)
        caption=(f'→L{ev & 15}' if ev is not None else
                 f'L{value:X}' if value>=0xFF00 else str(value))
        labels.append((key.tick,caption,warn_colour if ev is not None else jump_colour))
    return {'labels':labels,'arcs':arcs}


def shot_events_for_inspector(events:Iterable,tick:int,limit:int=5)->list:
    """Choose native shot-source events with the existing fallback policy."""
    events=list(events)
    found=[ev for ev in events if ev.tick==tick]
    if not found:
        found=[ev for ev in events if ev.tick<=tick]
    if not found:
        found=list(events[:1])
    return found[-limit:]
