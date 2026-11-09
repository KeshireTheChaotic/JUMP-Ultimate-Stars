"""Source-preserving refactor R01: common ALMT NoteTrack event traversal.

Use only JUS game-format authoring data, without combining semantics of
different high-byte command opcode families.
"""
from __future__ import annotations
from typing import Iterator, NamedTuple
import struct
from jus_formats import almt, notetrack


class NoteCommand(NamedTuple):
    """One original ALMT NoteTrack command in authored node/key order."""
    tick: int
    node_index: int
    ordinal: int
    node: str
    command: notetrack.Command


def iter_note_commands(move: almt.Move, node_names: list[str]) -> Iterator[NoteCommand]:
    """Iterate commands without sorting, filtering opcodes, or modifying tracks.

    Missing/malformed tracks have the same skip semantics as the existing
    physics/sound/effect/child-reference readers. In particular, ordinal
    resets for each original NoteTrack key, and the iterator DOES NOT
    impose an inferred cross-node game runtime callback order.
    """
    for node_index, node in enumerate(move.nodes):
        if node is None:
            continue
        track = node.track('NoteTrack')
        if track is None:
            continue
        try:
            note = notetrack.parse(track.encoded())
        except (ValueError, IndexError, struct.error):
            continue
        label = node_names[node_index] if node_index < len(node_names) else f'N{node_index}'
        for key in note.keys:
            for ordinal, command in enumerate(key.commands):
                yield NoteCommand(key.tick, node_index, ordinal, label, command)
