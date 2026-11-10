"""Character gameplay records from ChrBin.aar, with conservative typed views.

+0x00 shot handler and explicitly traced flags are code-backed (ARM9 overlay6).
ALMT CollisionType >= 0x100 addresses a chr/col row by ID-0x100, but
its byte0 class remains a separate namespace.
Unknown bytes, unknown flags and original record data are never overwritten.
AI profiles remain read-only and outside this module.
"""
from __future__ import annotations

from dataclasses import dataclass
import struct

from .binary import u32
from .collisionwork import col_flag_work_contributions, resolve_collision_work

STRIDES = {'col': 20, 'shot': 32, 'effect': 8}

#: chr/shot record byte 0 = shot work handler id → callback (ov06 table 0x02172864,
#: verified 2026-11-06).  Several ids share a callback; keep ids distinct.  Byte 0 of
#: chr/col and ALMT CollisionType are different namespaces.
SHOT_HANDLERS = (
    0x0216EEF4, 0x0216B4F4, 0x0216B514, 0x0216B4F4, 0x0216B4F4, 0x0216B910, 0x0216D88C, 0x0216DF50,
    0x02170044, 0x0216B2C8, 0x0216D99C, 0x0216EF7C, 0x0216D05C, 0x0216FB10, 0x0216B768, 0x0216EEF4,
    0x0216D9DC, 0x02170500, 0x0216D9F8, 0x0217061C, 0x0216D0C8, 0x0216EEF4, 0x0216EEF4, 0x0216B9B0,
    0x02170900, 0x0216B9D8,
)


def shot_handler(handler_id: int) -> str:
    return (f'0x{SHOT_HANDLERS[handler_id]:08X}' if 0 <= handler_id < len(SHOT_HANDLERS)
            else 'outside the 26-entry table')


# Only four flags have validated, handler-independent branches at ov06 0x0216ACC8.
SHOT_FLAG_LABELS: tuple[tuple[int, str], ...] = (
    (0x00000001, 'additional source reference +0x14'),
    (0x00004000, 'signed +0x1D X displacement'),
    (0x00010000, '+0x1D sound selection'),
    (0x00080000, 'signed +0x1D Y displacement'),
)
KNOWN_SHOT_FLAG_MASK = sum(mask for mask, _ in SHOT_FLAG_LABELS)

# Additional per-handler behaviors, not global meanings of the same bit.
# These are observed in the original overlay6 callback branches:
# 0216DF50 (handler 07), 0216FB10 (0D), 0216D1CC (0C/14).
SHOT_HANDLER_SCOPED_FLAGS: dict[int, tuple[tuple[int, str], ...]] = {
    0x07: (
        (0x00000400, 'apply owner-relative position conversion in handler 07'),
        (0x00008000, 'handler 07 switches Y/source collision-result lifetime path'),
    ),
    0x0C: (
        (0x00000100, 'additional collision-work flag 0x10 in arc constructor'),
    ),
    0x0D: (
        (0x00000200, 'probe stage geometry before timeline child positioning'),
        (0x00000400, 'derive initial position from owner before spawning timeline'),
    ),
    0x14: (
        (0x00000100, 'additional collision-work flag 0x10 in arc constructor'),
    ),
}

# Mechanical descriptions only; no canonical move names are inferred.
SHOT_HANDLER_BEHAVIOR: dict[int, str] = {
    0x00: 'spawn collision/work child',
    0x01: 'initializes character/effect work through 0216B514',
    0x05: 'reserves limited work slot and installs update callback',
    0x06: 'spawn work with geometry and effect fields',
    0x07: 'trace, track and terminate position-linked work',
    0x09: 'select actor slot and exclude source/target from collision mask',
    0x0A: 'spawn work through 0216D88C + 0216DD38',
    0x0B: 'target-directed work with two selectable update callbacks',
    0x0C: 'derived arc/trajectory constructor',
    0x0D: 'spawn child with independent BattleNoteTrack timeline',
    0x0F: 'special multi-target dispatch before generic callback',
    0x10: 'spawn work with 0216DE40 mode callback',
    0x11: 'spawn work with 02170600 mode callback',
    0x12: 'spawn work and retain position in 0216DE40',
    0x13: 'spawn work and update relative owner position',
    0x14: 'derived arc/trajectory with directional geometry',
    0x15: 'shared generic spawn callback, distinct source ID',
    0x16: 'shared generic spawn callback, distinct source ID',
    0x17: 'work slot path with alternate state initialization',
    0x19: 'work slot path with 020282F4 update',
}


@dataclass(frozen=True)
class ShotRecord:
    """Original 32-byte shot record; semantically unknown fields remain raw."""
    raw: bytes

    def __post_init__(self):
        if len(self.raw) != 0x20:
            raise ValueError('Shot records must be 0x20 bytes')

    @property
    def handler_id(self) -> int:
        return self.raw[0]

    @property
    def handler_address(self) -> str:
        return shot_handler(self.handler_id)

    @property
    def byte1(self) -> int:
        # FUN_0216ACC8 copies byte+0x01 into temporary work+0x24.
        # Several handlers pass that value to FUN_0216E898 as an angle;
        # it is not safe to impose this meaning on every handler ID.
        return self.raw[1]

    @property
    def spawn_limit(self) -> int:
        # Source +0x02 u16. Original 02158470 checks this limit only
        # when chara_action supplies a non-null active-instance counter.
        return struct.unpack_from('<H', self.raw, 2)[0]

    @property
    def handler_behavior(self) -> str:
        return SHOT_HANDLER_BEHAVIOR.get(self.handler_id, 'no mechanical name traced')

    @property
    def work_param(self) -> int:
        return struct.unpack_from('<H', self.raw, 4)[0]

    @property
    def lifetime(self) -> int:
        return struct.unpack_from('<h', self.raw, 6)[0]

    @property
    def effective_lifetime(self) -> int:
        return self.lifetime if self.lifetime else 30

    @property
    def flags(self) -> int:
        return struct.unpack_from('<I', self.raw, 8)[0]

    @property
    def known_flags(self) -> tuple[str, ...]:
        return tuple(label for mask, label in SHOT_FLAG_LABELS if self.flags & mask)

    @property
    def handler_scoped_flags(self) -> tuple[str, ...]:
        return tuple(label for mask, label in
                     SHOT_HANDLER_SCOPED_FLAGS.get(self.handler_id, ())
                     if self.flags & mask)

    @property
    def unknown_flags(self) -> int:
        scoped = sum(mask for mask, _ in
                     SHOT_HANDLER_SCOPED_FLAGS.get(self.handler_id, ()))
        return self.flags & ~(KNOWN_SHOT_FLAG_MASK | scoped) & 0xFFFFFFFF

    @property
    def sound_route(self) -> str | None:
        if not (self.flags & 0x00010000):
            return None
        key = self.selector_byte
        if key < 200:
            return 'global sound constant 0x7A (selector below 200)'
        if key < 220:
            return f'character sound group +0x24, entry {key-200}'
        return f'character sound group +0x22, entry {key-220}'


    @property
    def reference0(self) -> int:
        return struct.unpack_from('<I', self.raw, 0x0C)[0]

    @property
    def reference1(self) -> int:
        return struct.unpack_from('<I', self.raw, 0x10)[0]

    @property
    def optional_reference(self) -> int:
        return struct.unpack_from('<I', self.raw, 0x14)[0]

    @property
    def raw_reference_word18(self) -> int:
        '''Original +0x18 u32 is handler-dependent, not globally an animation.'''
        return struct.unpack_from('<I', self.raw, 0x18)[0]

    @property
    def handler05_terminal_animation(self) -> int | None:
        '''Original 0216BE0C uses +0x18 for the 12th child of handler05.

        Other handlers may interpret +0x18 differently; do not rename
        the generic 0x20-byte record slot in their absence.
        '''
        return self.raw_reference_word18 if self.handler_id == 5 else None

    @property
    def optional_reference_active(self) -> bool:
        return bool(self.flags & 1)

    @property
    def raw_byte1c(self) -> int:
        """+0x1C per-handler parameter; no universal runtime meaning proved."""
        return self.raw[0x1C]

    @property
    def primary_animation_id(self) -> int:
        """+0x0C: original ALMT source passed to the handler, not a DSTX ID."""
        return self.reference0

    @property
    def beam01_repeat_segment(self) -> int | None:
        """Handler01 uses +0x10 as repeated ALMT child (ov06 0216BA2C)."""
        return self.reference1 if self.handler_id == 1 else None

    @property
    def beam01_spawn_child(self) -> int | None:
        """Handler01 begins with +0x14 and +0x0C (ov06 0216B514)."""
        return (self.optional_reference if self.handler_id == 1 and self.optional_reference_active
                and self.optional_reference else None)

    @property
    def selector_byte(self) -> int:
        return self.raw[0x1D]

    @property
    def selector_signed(self) -> int:
        return struct.unpack_from('<b', self.raw, 0x1D)[0]

    @property
    def handler_parameter_1e(self) -> int:
        return struct.unpack_from('<H', self.raw, 0x1E)[0]

    @property
    def handler_16_nested_shot_index(self) -> int | None:
        """Handler 0x16 on-contact child shot index, original +0x1E s16.

        ov06 FUN_0216F8D8 uses index*0x20 in BattlePrmData's own shot
        table; FUN_0216AB58 then creates that nested shot. Shipped 6/6
        handler-0x16 entries have valid same-table indexes.
        """
        return struct.unpack_from('<h', self.raw, 0x1E)[0] if self.handler_id == 0x16 else None

    @property
    def handler_0b_update(self) -> str | None:
        if self.handler_id != 0x0B:
            return None
        return ('0x0216F398' if self.handler_parameter_1e == 0
                else '0x0216F9D0')



@dataclass(frozen=True)
class EffectRecord:
    """Original 8-byte chr/effect row, sourced from BattlePrmData +0x14.

    The first u32 is passed to FUN_0206C7FC as an animation/effect asset ID.
    The two u16 fields at +4,+6 select a sound-parameter slot and supply
    FUN_0207342C's second argument (ov06 FUN_02153CE8).
    """
    raw: bytes

    def __post_init__(self):
        if len(self.raw) != 8:
            raise ValueError('Effect records must be exactly eight bytes')

    @property
    def animation_id(self) -> int:
        return struct.unpack_from('<I', self.raw, 0)[0]

    @property
    def sound_slot(self) -> int:
        return struct.unpack_from('<H', self.raw, 4)[0]

    @property
    def sound_argument(self) -> int:
        return struct.unpack_from('<H', self.raw, 6)[0]

    @property
    def original_default_sound_value(self) -> int | None:
        """Battle_PrmDataInit initializes four slots: FFFF,007A,FFFF,FFFF.

        This represents the initial state only, not possible runtime changes.
        """
        return (0xFFFF, 0x007A, 0xFFFF, 0xFFFF)[self.sound_slot] if self.sound_slot < 4 else None

    def replace_animation_id(self, new_id: int) -> 'EffectRecord':
        if not 0 <= new_id <= 0xFFFFFFFF:
            raise ValueError('Expected u32 animation ID')
        return type(self)(struct.pack('<I', new_id) + self.raw[4:])

    def replace_sound(self, slot: int, argument: int) -> 'EffectRecord':
        if not (0 <= slot <= 3 and 0 <= argument <= 0xFFFF):
            raise ValueError('Original effect sound slot must be 0..3 and argument u16')
        return type(self)(self.raw[:4] + struct.pack('<HH', slot, argument))


@dataclass(frozen=True)
class EffectSelectorResolution:
    """Native ov06 FUN_02153CE8 routing; not a rendering projection."""
    selector: int
    category: str
    character_record: int | None


def resolve_effect_selector(raw_signed: int, available_records: int | None = None) -> EffectSelectorResolution:
    """-1 disabled; 0..63 built-in; >=64 character effect table row (selector-64).

    If the character table is provided, validate the lookup bounds. Original
    corpus has 101 valid character table references with no invalid joins.
    """
    if not -128 <= raw_signed <= 127:
        raise ValueError('Selector must be original signed byte')
    if raw_signed == -1:
        return EffectSelectorResolution(raw_signed, 'disabled', None)
    if raw_signed < -1:
        # Not found among the 2,837 original col records; preserve semantics unknown.
        return EffectSelectorResolution(raw_signed, 'unclassified negative', None)
    if raw_signed < 0x40:
        return EffectSelectorResolution(raw_signed, 'built-in effect', None)
    index = raw_signed - 0x40
    if available_records is not None and not (0 <= index < available_records):
        raise IndexError(f'Effect selector {raw_signed} -> row {index} out of {available_records}')
    return EffectSelectorResolution(raw_signed, 'character effect', index)


#: Single-byte chr/col fields with a traced reader: name -> (offset, signed, lo, hi).
#: +0x00 main 0207D440 (zero vs nonzero branch; 0207FBD0 precedence compare),
#: +0x01 ov06 0215AF34 (16-entry reaction table), +0x02/+0x03/+0x05/+0x07/+0x0C/+0x0D
#: main 02080F14 (flash priority, signed status lane, contact magnitude,
#: accumulator, knockback x/y).
COL_EDIT_FIELDS = {
    'class': (0x00, False, 0, 255),
    'reaction': (0x01, False, 0, 15),
    'flash_priority': (0x02, False, 0, 255),
    'status': (0x03, True, -128, 127),
    'contact': (0x05, True, -128, 127),
    'accumulator': (0x07, True, -128, 127),
    'knockback_x': (0x0C, True, -128, 127),
    'knockback_y': (0x0D, True, -128, 127),
}
COL_FIELD_LABELS = {
    'class': 'Class code (+0x00)', 'reaction': 'Reaction (+0x01)',
    'flash_priority': 'Flash priority (+0x02)', 'status': 'Status (+0x03)',
    'contact': 'Contact magnitude (+0x05)', 'accumulator': 'Accumulator (+0x07)',
    'knockback_x': 'Knockback X (+0x0C)', 'knockback_y': 'Knockback Y (+0x0D)',
}


@dataclass(frozen=True)
class ColRecord:
    """Raw 20-byte col metadata, separate from ALMT CollisionType IDs."""
    raw: bytes

    def __post_init__(self):
        if len(self.raw) != 0x14:
            raise ValueError('Col records must be 0x14 bytes')

    @property
    def class_byte(self) -> int:
        return self.raw[0]  # enum 0..7 observed; gameplay class NOT established

    @property
    def selector_byte(self) -> int:
        return self.raw[1]

    @property
    def direct_contact_magnitude(self) -> int:
        """+0x05 signed scalar read by main 02080F14's hit calculation.

        This single-byte value is distinct from the overlapping +0x04 s32
        used by ov11's AI threat scorer. It is not final HP loss.
        """
        return struct.unpack_from('<b',self.raw,5)[0]

    def replace_contact_values(self, magnitude: int, status: int, accumulator: int,
                               knockback_x: int, knockback_y: int) -> 'ColRecord':
        """Patch exactly five native signed source bytes, not final damage.

        main 02080F14 reads byte +5 as magnitude, +3 as status channel,
        +7 as accumulated contact term and +0x0C/+0x0D as knockback.
        Other bytes are retained; note the +4 s32 scoring word overlaps
        the edited +5/+7 bytes and will necessarily change too.
        """
        values = (magnitude, status, accumulator, knockback_x, knockback_y)
        if any(not isinstance(v, int) or not -128 <= v <= 127 for v in values):
            raise ValueError('Contact source fields must be signed 8-bit numbers')
        updated = bytearray(self.raw)
        for pos, value in zip((5, 3, 7, 12, 13), values):
            updated[pos] = value & 0xFF
        return type(self)(bytes(updated))

    def field_values(self) -> dict[str, int]:
        """Current value of every field in :data:`COL_EDIT_FIELDS`."""
        out = {}
        for name, (offset, signed, _lo, _hi) in COL_EDIT_FIELDS.items():
            out[name] = struct.unpack_from('<b' if signed else '<B', self.raw, offset)[0]
        return out

    def replace_fields(self, **values: int) -> 'ColRecord':
        """Patch named single-byte fields (see :data:`COL_EDIT_FIELDS`); other bytes are kept.

        The +0x04 s32 word read by ov11's scorer overlaps +0x05/+0x07, so it
        changes when contact or accumulator change.
        """
        updated = bytearray(self.raw)
        for name, value in values.items():
            if name not in COL_EDIT_FIELDS:
                raise ValueError(f'Unknown col field {name!r}')
            offset, signed, lo, hi = COL_EDIT_FIELDS[name]
            if not isinstance(value, int) or not lo <= value <= hi:
                raise ValueError(f'{COL_FIELD_LABELS[name]} must be {lo}..{hi}')
            updated[offset] = value & 0xFF
        return type(self)(bytes(updated))

    @property
    def contact_accumulator_delta(self) -> int:
        """+0x07 s8: main 02080F14 adds to defender work+0x171."""
        return struct.unpack_from('<b',self.raw,7)[0]

    @property
    def uses_selector6_special_scale(self) -> bool:
        """+0x01==6: contact solver reads DAT_0209FB64 and state-dependent scale."""
        return self.raw[1] == 6

    @property
    def impact_flash_priority(self) -> int:
        """+0x02: original contact renderer compares this byte as priority.

        Main FUN_02080F14 chooses the smaller nonzero priority and indexes
        DAT_0209FEE4 for the impact flash asset (not a whole attack type).
        """
        return self.raw[2]

    @property
    def signed_status_selector(self) -> int:
        """+0x03 signed status channel selector; zero disables status lane."""
        return struct.unpack_from('<b', self.raw, 3)[0]

    @property
    def status_id(self) -> int | None:
        value = self.signed_status_selector
        return abs(value) if value else None

    @property
    def signed_knockback(self) -> tuple[int, int]:
        """+0x0C,+0x0D signed coefficients, not final world-space movement.

        Main FUN_02080F14 scales x with 0x80 and y with -0x9E, then
        applies facing, hit outcome and target-state conditionals.
        """
        return struct.unpack_from('<bb', self.raw, 0x0C)

    @property
    def impact_effect_selectors(self) -> tuple[int, int]:
        """+0x0E/+0x0F s8: first and second visual effect source selectors."""
        return struct.unpack_from('<bb', self.raw, 0x0E)

    @property
    def impact_effect_modifier_bytes(self) -> tuple[int, int]:
        """+0x10/+0x11: original visual-effect dispatcher arguments 7/8.

        They select tables DAT_02171E1C/DAT_02171E0C in ov06 02153CE8.
        Specific game-facing enum labels remain unavailable.
        """
        return self.raw[0x10], self.raw[0x11]

    @property
    def impact_effect_resolution(self) -> tuple[EffectSelectorResolution, EffectSelectorResolution]:
        return tuple(resolve_effect_selector(x) for x in self.impact_effect_selectors)

    @property
    def word02(self) -> int:
        return struct.unpack_from('<H', self.raw, 2)[0]

    @property
    def raw_word08(self) -> int:
        return struct.unpack_from('<I', self.raw, 8)[0]

    @property
    def raw_word0c(self) -> int:
        return struct.unpack_from('<I', self.raw, 12)[0]

    @property
    def raw_word10(self) -> int:
        return struct.unpack_from('<I', self.raw, 16)[0]

    @property
    def power(self) -> int:
        # ov11 uses the signed term in its threat comparison.
        return struct.unpack_from('<i', self.raw, 4)[0]

    @property
    def runtime_class_branch(self) -> str:
        # Main 0207D440 distinguishes byte0==0 from any nonzero byte0.
        # No human-facing type name has been established for values 0..7.
        return ('zero-class branch (adds work flag 0x20000000)' if self.class_byte == 0
                else 'nonzero-class branch (adds work flag 0x10000000)')

    @property
    def work_mask_contributions(self) -> tuple[int, int, int]:
        # Runtime 0207D440 OR lookup tables for each bit of col +0x08.
        # These are not final flags: other branches can add/clear bits.
        return col_flag_work_contributions(self.raw_word08)

    @property
    def special_work_flag_100(self) -> bool:
        # 0207D440 separately sets work+0x14 bit 0x100 when source+0x08
        # carries bit23. This is not a gameplay meaning for that bit.
        return bool(self.raw_word08 & 0x00800000)


@dataclass
class RecordTable:
    kind: str
    stride: int
    raw: bytes

    @property
    def count(self) -> int:
        return len(self.raw) // self.stride if self.stride else 0

    def record(self, i: int) -> bytes:
        if not 0 <= i < self.count:
            raise IndexError(i)
        return self.raw[i * self.stride:(i + 1) * self.stride]

    def shot_record(self, i: int) -> ShotRecord:
        if self.kind != 'shot' or self.stride != 32:
            raise ValueError('Not a 0x20-byte chr/shot table')
        return ShotRecord(self.record(i))

    def effect_record(self, i: int) -> EffectRecord:
        if self.kind != 'effect' or self.stride != 8:
            raise ValueError('Not an 8-byte chr/effect table')
        return EffectRecord(self.record(i))

    def col_record(self, i: int) -> ColRecord:
        if self.kind != 'col' or self.stride != 20:
            raise ValueError('Not a 0x14-byte chr/col table')
        return ColRecord(self.record(i))

    def col_work_record(self, work_id: int) -> ColRecord | None:
        """Resolve ALMT CollisionType through original main 0207D440.

        Builtin types below 0x0100 return None, not a fabricated col record.
        Authored work IDs that exceed the source table raise IndexError.
        """
        if self.kind != 'col' or self.stride != 20:
            raise ValueError('Not a 0x14-byte chr/col table')
        location = resolve_collision_work(work_id, self.count)
        return (self.col_record(location.record_index)
                if location.record_index is not None else None)

    def words32(self, i: int) -> tuple[int, ...]:
        r = self.record(i)
        return tuple(u32(r, k) for k in range(0, len(r) - 3, 4))

    def replace_record(self, i: int, raw_record: bytes) -> 'RecordTable':
        """Replace a single record in a staged copy; original archive stays untouched."""
        if not self.stride:
            raise ValueError('Cannot edit an unknown-stride record table')
        if not 0 <= i < self.count:
            raise IndexError(i)
        if len(raw_record) != self.stride:
            raise ValueError(f'Expected exactly {self.stride} record bytes')
        start = self.stride * i
        return RecordTable(self.kind, self.stride,
                           self.raw[:start] + raw_record + self.raw[start + self.stride:])

    def build(self) -> bytes:
        return self.raw


def kind_of(member_name: str) -> str:
    parts = member_name.replace('\\', '/').split('/')
    return parts[-2] if len(parts) >= 2 else ''


def parse(blob: bytes, member_name: str) -> RecordTable:
    kind = kind_of(member_name)
    stride = STRIDES.get(kind, 0)
    if stride and len(blob) % stride:
        stride = 0
    return RecordTable(kind, stride, bytes(blob))
