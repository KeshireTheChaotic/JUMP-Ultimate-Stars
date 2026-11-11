"""Source-backed ALMT roster categories for battle-form resource animations.

The original ALMT has no 'movement'/'reaction' string field. Categories
are Editor-only, sourced from ov06's battle-state and reaction callbacks.

D-pad-only does NOT include A-activated jumps or B/Y/X attacks.
Native engine callers may also trigger these state resources; categories
describe source dispatch semantics rather than exclusive human input.
"""
from __future__ import annotations

from dataclasses import dataclass

from .chrbin_semantics import REACTION_RESOURCE_PAIRS


@dataclass(frozen=True)
class AnimationRole:
    category: str
    title: str
    source: str
    note: str = ''


# FUN_0215D2E4 neutral; 0215D6F8 → 0215D760 horizontal;
# 0215DA84 (facing-forward input) → 0215D860 → 0215D91C faster
# state; 0215E9A0 (actor 0x02) → 0215EAEC down/guard.
# 0x00 is the no-input stance, grouped with directional movement.
D_PAD_MOVEMENT: dict[int, AnimationRole] = {
    0x00: AnimationRole('movement', 'Neutral / idle',
                        'ov06 0215D2E4 → 02157450(0)',
                        'No direction is required; default stance'),
    0x01: AnimationRole('movement', 'Horizontal movement',
                        'ov06 0215D6F8 (actor+0x6C & 0x0C) → 0215D760 → 02157450(1)',
                        'State also supports engine-driven movement'),
    0x02: AnimationRole('movement', 'Directional dash / faster movement',
                        'ov06 0215DA84 (facing input 0215A824) → 0215D860 → 0215D91C → 02157450(2)',
                        'Requires native movement-state/threshold predicates'),
    0x03: AnimationRole('movement', 'Down / guard',
                        'ov06 0215E9A0 (actor+0x6C & 0x02) → 0215EAEC → 02157450(3)',
                        'The same state can also be entered by engine flags'),
}

# Defender reaction byte 1 → 16 state table at ov06 ROM 021713E8,
# routed via 0215AF34 and native callbacks at 021721A0.
REACTION_TABLE_OFFSETS = frozenset(
    offset for pair in REACTION_RESOURCE_PAIRS for offset in pair
)
# The source handler for row 6 replaces the table's pair with ALMT 0x13.
REACTION_OVERRIDE_OFFSETS = frozenset({0x13})
# Other hit/recovery paths reference 0x07/0x08; 0x08 can ALSO be
# dispatched on a movement/landing transition. Do not claim exclusivity.
REACTION_RECOVERY_OFFSETS = frozenset({0x07, 0x08})
REACTION_OFFSETS = (REACTION_TABLE_OFFSETS |
                    REACTION_OVERRIDE_OFFSETS |
                    REACTION_RECOVERY_OFFSETS)
assert not (set(D_PAD_MOVEMENT) & REACTION_OFFSETS)


def battle_animation_role(move_id: int) -> AnimationRole:
    """Classify ALMT offset without guessing names for untraced actions.

    A battle form's original resource-table prefix is supplied by its ALMT;
    this routine is only appropriate for base battle-character ALMT IDs.
    """
    offset = move_id & 0xFF
    if offset in D_PAD_MOVEMENT:
        return D_PAD_MOVEMENT[offset]
    if offset in REACTION_TABLE_OFFSETS:
        label = ('Grabbed-victim reaction pose' if 0x33 <= offset <= 0x36
                 else 'Defender reaction')
        return AnimationRole(
            'reaction', label,
            'ov06 0215AF34 → ROM 021713E8 (16 reaction pairs) / '
            '021721A0 (callback table)')
    if offset in REACTION_OVERRIDE_OFFSETS:
        return AnimationRole('reaction', 'Defender reaction (handler override)',
                             'ov06 0215AF34 → reaction row 6 → '
                             '0215BA40 → 02157450(0x13)')
    if offset in REACTION_RECOVERY_OFFSETS:
        return AnimationRole(
            'reaction', 'Impact / recovery state (also used by movement)' if
            offset == 0x08 else 'Impact / recovery state',
            'ov06 0215D2E4 (+0x1E6) → 02157450(7/8); '
            '0215BF70 (7); 0215BD50 (8)',
            'Resource 0x08 is also selected by movement transitions' if
            offset == 0x08 else '')
    return AnimationRole('other', 'Other / scripted',
                         'No source-proven D-pad-only or defender reaction assignment')
