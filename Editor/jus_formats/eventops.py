"""Typed editing helpers for ALMT NoteTrack commands and Marker values.

The command catalog is the traced battle-overlay dispatch catalog in notetrack.py.
Names are functional labels, not invented in-game names. Raw numeric IDs remain
first-class and unrecognized command arguments can be preserved unchanged.
"""
from __future__ import annotations

from dataclasses import dataclass
import re
from . import notetrack

CATEGORIES = {0: 'Branch / conditional', 1: 'Physics / state', 2: 'Presentation',
              3: 'Character action', 4: 'Audio'}
# Only the character-action subcodes whose roles were confirmed through ov06.
CHARA_ACTION_NAMES = {13: 'Select pursuer animations (effect slots A/B)',
                      14: 'Set pursuer target (x, y, snap)'}


def opcode_label(opcode: int) -> str:
    info = notetrack.op_info(opcode)
    if info is None:
        return f'0x{opcode:04X} — Unknown (raw bytes)'
    return f'0x{opcode:04X} — {info.name}'


def category(opcode: int) -> str:
    return CATEGORIES.get(opcode >> 8, 'Unknown')


def argument_types(opcode: int) -> tuple[str, ...]:
    """Expanded struct-format argument types (e.g. '8B' -> eight 'B')."""
    info = notetrack.op_info(opcode)
    if info is None:
        return ()
    out = []
    for count, kind in re.findall(r'(\d*)([bBhHiIqQ])', info.args):
        out.extend([kind] * (int(count) if count else 1))
    return tuple(out)


def argument_labels(opcode: int) -> tuple[str, ...]:
    names = {
        0x0103: ('velocity x', 'velocity y'),
        0x0104: ('velocity x', 'velocity y', 'duration (frames)', 'reserved'),
        0x0300: ('action subcode', 'arg 1', 'arg 2', 'arg 3', 'arg 4', 'arg 5', 'arg 6'),
        0x0400: ('SEQ_BATTLE index',),
        0x0401: ('character SSAR index',),
        0x0402: ('special SSAR index',),
    }
    kinds = argument_types(opcode)
    labels = names.get(opcode)
    return labels if labels and len(labels) == len(kinds) else tuple(f'arg {i+1} ({k})' for i,k in enumerate(kinds))


def marker_event(value: int) -> int | None:
    """Return callback argument for change-triggered special markers only."""
    if 0xFF80 <= value <= 0xFF8F:
        return 0xFF00 | (value & 0xF)
    return None


def marker_label(value: int) -> str:
    dispatched = marker_event(value)
    if dispatched is not None:
        return f'Auto-jump to label 0x{dispatched:04X} (on change)'
    if 0xFF00 <= value <= 0xFF0F:
        return f'Label 0x{value:04X} (jump destination)'
    return f'Label 0x{value:04X} (branch destination, when referenced)'


@dataclass(frozen=True)
class EventLocation:
    key_index: int
    command_index: int
    tick: int
    command: notetrack.Command


def list_events(track: notetrack.NoteTrack) -> list[EventLocation]:
    return [EventLocation(i, j, key.tick, command)
            for i, key in enumerate(track.keys)
            for j, command in enumerate(key.commands)]


def add_event(track: notetrack.NoteTrack, tick: int, command: notetrack.Command) -> EventLocation:
    if not 0 <= tick <= 0xFFFE:
        raise ValueError('Event tick must be 0–65534')
    for i, key in enumerate(track.keys):
        if key.tick == tick:
            key.commands.append(command)
            return EventLocation(i, len(key.commands) - 1, tick, command)
        if key.tick > tick:
            track.keys.insert(i, notetrack.NoteKey(tick, [command]))
            return EventLocation(i, 0, tick, command)
    track.keys.append(notetrack.NoteKey(tick, [command]))
    return EventLocation(len(track.keys)-1, 0, tick, command)


def remove_event(track: notetrack.NoteTrack, key_index: int, command_index: int) -> None:
    key = track.keys[key_index]
    del key.commands[command_index]
    if not key.commands:
        del track.keys[key_index]


def change_event(track: notetrack.NoteTrack, key_index: int, command_index: int,
                 tick: int, command: notetrack.Command) -> EventLocation:
    """Update an event, preserving order at the same tick and safe relocation."""
    old = track.keys[key_index]
    if tick == old.tick:
        old.commands[command_index] = command
        return EventLocation(key_index, command_index, tick, command)
    remove_event(track, key_index, command_index)
    return add_event(track, tick, command)


def validate_event(track: notetrack.NoteTrack, location: EventLocation, duration: int) -> None:
    if not 0 <= location.tick <= duration:
        raise ValueError(f'Event at tick {location.tick} exceeds move duration {duration}')
    cmd = location.command
    info = cmd.info
    if info is not None and len(cmd.encode()) != info.size:
        raise ValueError(f'{opcode_label(cmd.opcode)} must be {info.size} bytes')


def marker_jump_pairs(keys) -> list[tuple[int, int, int | None]]:
    """Return (trigger_tick, requested_label, target_tick or None).

    Autogoto is only 0xFF80..8F. A normal Marker value is a label that
    the player may seek to through the same vtable+0xF0 routine.
    """
    destinations = {}
    for key in keys:
        destinations.setdefault(key.value, key.tick)
    return [(key.tick, marker_event(key.value), destinations.get(marker_event(key.value)))
            for key in keys if marker_event(key.value) is not None]
