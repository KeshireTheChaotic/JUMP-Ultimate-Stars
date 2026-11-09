"""Original JUS tutorial script slots and conditional J-Galaxy battle links.

The 6-entry pointer table is original ov06 ROM at 0x02171C20.
The standalone deckmaking script is selected in ov05 0x02161184.
The normal J-Galaxy battle launch loads record +0x70 and rule +0x76
(main FUN_0207538C); battle rule 3 picks type 0x0C from original
ov06 0x02170D9C, but other scene modes can override that choice.
"""
from __future__ import annotations

from dataclasses import dataclass
from jus_formats.tutorial import TUTORIAL_FILES

BATTLE_FILES=TUTORIAL_FILES[:6]
DECK_FILE=TUTORIAL_FILES[-1]
TUTORIAL_RULE=3
SCRIPT_LIMIT=6


@dataclass(frozen=True)
class TutorialLink:
    node_id:int
    definition_id:int
    definition_name:str
    planet_id:int
    script_slot:int
    source:str
    normal_route:bool


def script_for_definition(definition,*,is_battle:bool=True):
    """Selected on the normal story-battle launch path only.

    Return None for rule !=3, non-battle definitions, or a non-ROM slot.
    A scene launch mode override remains possible and is NOT asserted here.
    """
    if not is_battle or definition.rule!=TUTORIAL_RULE:
        return None
    selector=int.from_bytes(definition.data[0x70:0x74],"little")
    return BATTLE_FILES[selector] if 0<=selector<SCRIPT_LIMIT else None


def slot_for_definition(definition,*,is_battle:bool=True):
    source=script_for_definition(definition,is_battle=is_battle)
    return BATTLE_FILES.index(source) if source is not None else None


def links_for_catalog(catalog):
    links=[]
    for node_id in range(catalog.graph.node_count):
        n=catalog.graph.get(node_id)
        if n.mission:
            continue
        definition=catalog.battles.get(n.definition_id)
        slot=slot_for_definition(definition)
        if slot is None:
            continue
        links.append(TutorialLink(node_id,n.definition_id,definition.name,
                                   n.planet_id,slot,BATTLE_FILES[slot],True))
    return tuple(links)


def consumer_summary(catalog,source):
    """List original J-Galaxy references without assuming a live scene route."""
    return tuple(x for x in links_for_catalog(catalog) if x.source==source)


def binding_for_node(catalog,node_id):
    if catalog is None or not 0<=node_id<catalog.graph.node_count:
        return None
    n=catalog.graph.get(node_id)
    d=catalog.definition(n)
    return script_for_definition(d,is_battle=not n.mission)
