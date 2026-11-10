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
# chara_action subcodes 0x00–0x21 from the ov06 switch FUN_02157A44 (verified case by
# case 2026-11-06).  Labels describe what the case does in code, not an in-game name;
# "no-op" cases exist in shipped data and must be kept.  Cases 0x41–0x48 of the same
# switch are branch-condition queries, not authored subcodes.
CHARA_ACTION_NAMES = {
    0x00: 'No-op (case only breaks)',
    0x01: 'Arm grounded follow-up (actor +0xF3 = 1)',
    0x02: 'Spawn attack work object (attack slot a1, offset a2/a3; FUN_02158470)',
    0x03: 'Request removal of active attack objects (+0x26 |= 1; FUN_0215857C)',
    0x04: 'Tear down all live GN effects (FUN_0206C650)',
    0x05: 'Tear down oldest live GN effect (FUN_0206C760)',
    0x06: 'Turn around (set opposite facing)',
    0x07: 'Set blink/lock timer (actor +0xCE = a1)',
    0x08: 'Signal battle outcome transition (FUN_0214E22C)',
    0x09: 'Arm delayed hit effect (selector a1; FUN_0215C034)',
    0x0A: 'Status work: a1 → status id (table 0x0217215C) → handler (0x02171168)',
    0x0B: 'Spawn battle item: a1 → item type (table 0x0217214C) → ALMT 0x300000+type',
    0x0C: 'Add a1 to both side counters (FUN_02157FB0/FD8)',
    0x0D: 'Select pursuer animations (effect slots A/B)',
    0x0E: 'Set pursuer target (x, y, snap)',
    0x0F: 'No-op (case only breaks)',
    0x10: 'No-op (case only breaks)',
    0x11: 'Set actor +0xE2 = a2 (only when a1 = 0)',
    0x12: 'Conditional blink/lock timer (FUN_02078660 check)',
    0x13: 'Actor resource call FUN_02078618',
    0x14: 'Item feedback: a1 → table 0x021710E4 (FUN_0216650C)',
    0x15: 'Arm airborne follow-up (actor +0xF4 = 1)',
    0x16: 'Set follow-up override (+0xCC = a1, +0xF6 = a2==0, +0xF7 = a3==0)',
    0x17: 'Actor resource call FUN_020783CC(a1)',
    0x18: 'Adjust actor meter accumulator by a1 (+0x5C8; FUN_020781E4)',
    0x19: 'Target object call FUN_0216FA9C',
    0x1A: 'Target object call FUN_0216FB04',
    0x1B: 'No-op (case only breaks)',
    0x1C: 'No-op (case only breaks)',
    0x1D: 'Clear actor action flag (+0xC8 = 0)',
    0x1E: 'No-op (case only breaks)',
    0x1F: 'No-op (case only breaks)',
    0x20: 'Adjust linked object counters by a1 (FUN_020783DC)',
    0x21: 'Seek target animation to Marker a1 (vtable +0xEC)',
}

#: ov06 0x0217214C: chara_action 0x0B a1 → item type (object ALMT 0x300000 + type)
ITEM_SELECTOR = (0x0A, 0x0E, 0x08, 0x10, 0x12, 0x08, 0x14, 0x1C, 0x1A, 0x18, 0x3D, 0x20, 0x26)
#: ov06 0x0217215C: chara_action 0x0A a1 → status id (42-record table 0x02171168)
STATUS_SELECTOR = (0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D,
                   0x0E, 0x0F, 0x10, 0x11, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x18, 0x21)


def chara_action_text(values) -> str:
    """Label for a chara_action command's values (subcode first), with selector lookups."""
    if not values:
        return ''
    sub = values[0]
    name = CHARA_ACTION_NAMES.get(sub, 'unlabeled subcode')
    a1 = values[1] if len(values) > 1 else None
    if sub == 0x0B and a1 is not None:
        name += (f' — item 0x{ITEM_SELECTOR[a1]:02X} (ALMT 0x{0x300000 + ITEM_SELECTOR[a1]:06X})'
                 if 0 <= a1 < len(ITEM_SELECTOR) else f' — a1 {a1} outside the 13-entry table')
    elif sub == 0x0A and a1 is not None:
        name += (f' — status 0x{STATUS_SELECTOR[a1]:02X}' if 0 <= a1 < len(STATUS_SELECTOR)
                 else f' — a1 {a1} outside the 26-entry table')
    return name


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


def branch_target_args(opcode: int) -> tuple[int, ...]:
    """Argument indices that hold a branch target (or a stored label) for a 0x00xx op.

    ov06 FUN_02155688 sign-extends the target byte and passes it to vtable
    +0xEC → FUN_0201F93C, which seeks to the Marker key whose value equals it;
    -1 means "no branch". So a target n jumps to Marker label n of the move.
    Read from each op's argument description: 'target', 'target1/2',
    'target per stick direction (8)', and 0x0013's stored label.
    """
    info = notetrack.op_info(opcode)
    if info is None or opcode >> 8 != 0:
        return ()
    if opcode == 0x0013:
        return (0,)
    if opcode == 0x001D:          # 'like 0x000E': arg1, target1, arg2, target2
        return (1, 3)
    names = [n.strip() for n in re.split(r'[:(]', info.meaning, maxsplit=1)[0].split(',')]
    out = []
    for i, n in enumerate(names):
        if n.startswith('target per'):
            out.extend(range(i, i + 8))
        elif re.fullmatch(r'target\d?', n):
            out.append(i)
    if not out and info.meaning.startswith('target'):
        out = [0]
    return tuple(out)


def argument_choices(opcode: int, index: int, values) -> dict[str, int] | None:
    """Dropdown entries for an argument with a traced enumeration, else None."""
    if opcode == 0x0300 and index == 0:
        return {f'0x{n:02X} — {name}': n for n, name in CHARA_ACTION_NAMES.items()}
    if opcode == 0x0300 and index == 1 and values:
        if values[0] == 0x0A:
            return {f'{i} — status 0x{s:02X} (table 0x02171168)': i for i, s in enumerate(STATUS_SELECTOR)}
        if values[0] == 0x0B:
            return {f'{i} — item 0x{t:02X} (ALMT 0x{0x300000 + t:06X})': i for i, t in enumerate(ITEM_SELECTOR)}
    return None


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
