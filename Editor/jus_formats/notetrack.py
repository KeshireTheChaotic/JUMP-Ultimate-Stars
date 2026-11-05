"""ALMT ``NoteTrack`` bodies: timed command lists for the battle character.

Traced from ARM9 ``FUN_0201f11c`` (player binds the track), ``FUN_0201e4c8``
(fires keys as playback crosses their tick), ``FUN_0201e468`` (walks a key's
command list) and the battle overlay's ``BattleNoteTrack`` dispatcher
``FUN_02155688`` (ov06), which calls a handler per command from the table at
0x0217200C indexed by the command's high byte, then a per-category table
indexed by the low byte.

Layout (all little endian, ``record`` = address of the key record)::

    keys    {u16 tick, s16 group_word_offset}[n], u16 0xFFFF
            group = record + 2*group_word_offset
    group   s16 count, s16 command_word_offset[count]
            command = group + 2*command_word_offset
    command u16 opcode (category << 8 | sub), fixed-size arguments

Command sizes are fixed per opcode (``OPCODES``).  The shipped files store
the key index, then each key's group followed by its commands; that layout is
rebuilt byte-for-byte (verified on all 1,842 NoteTracks).
"""
from __future__ import annotations

import struct
from dataclasses import dataclass, field

from .binary import p16, pad_to, u16

END = 0xFFFF


@dataclass(frozen=True)
class OpInfo:
    size: int          # bytes including the opcode word
    name: str
    args: str          # struct format of the arguments after the opcode
    meaning: str


# Category 0x00 opcodes arm a pending "branch" slot (FUN_021565A4): when the
# slot's condition holds on a later frame, the character receives
# vtable+0xEC(target) — the same entry Marker 0xFF8x events use.
_B = 'branch'
OPCODES: dict[int, OpInfo] = {
    0x0000: OpInfo(8, 'branch_on_input', 'bbBBB', 'target, gate, input_mask_index, window, min_count: '
                   'branch when the input (mask table 0x02171098) is seen min_count times within window'),
    0x0001: OpInfo(20, 'branch_input_charge', 'BB' + 'H' * 7, 'multi-threshold input/charge branch (cond 1)'),
    0x0002: OpInfo(4, 'branch', 'bb', 'target, gate: branch immediately (gate -1 = always; else every gate+1 calls)'),
    0x0003: OpInfo(4, 'branch_if_grounded', 'bb', 'target (cond 2: state+0x78 bit 1)'),
    0x0004: OpInfo(4, 'branch_if_airborne', 'bb', 'target (cond 4: state+0x78 bit 1 clear)'),
    0x0005: OpInfo(4, 'branch_if_hit_contact', 'bb', 'target (cond 6: state+0x158 & 0xF)'),
    0x0006: OpInfo(4, 'branch_now', 'Bb', 'target (unsigned): branch immediately'),
    0x0007: OpInfo(4, 'branch_if_flag', 'bB', 'target, flag_index (cond 3: FUN_020838C4(obj, flag<<8))'),
    0x0008: OpInfo(4, 'branch_cond8', 'bb', 'target, param (cond 8: contact & state+0x15C/0x164 bit 5)'),
    0x0009: OpInfo(4, 'branch_cond9', 'bb', 'target (cond 9: state+0x40 bit 17)'),
    0x000A: OpInfo(4, 'branch_if_wall', 'bb', 'target (cond 5: state+0x78 bit 2 or 3)'),
    0x000B: OpInfo(8, 'branch_cond11', 'bbh', 'target, param, value (cond 11: owner query 0x40)'),
    0x000C: OpInfo(4, 'branch_cond10', 'bb', 'target (cond 10: state+0x28 != 0)'),
    0x000D: OpInfo(4, 'branch_if_query41', 'bb', 'target: if owner query 0x41'),
    0x000E: OpInfo(8, 'branch_query42', 'bBbB', 'arg1, target1, arg2, target2: owner query 0x42(arg2) → '
                   'branch target2, else query 0x42(arg1) → branch target1'),
    0x000F: OpInfo(4, 'branch_if_query43', 'bb', 'target: if owner query 0x43'),
    0x0010: OpInfo(4, 'branch_if_global', 'bb', 'target: if global battle flag (DAT_020A0DA8) bit 0'),
    0x0011: OpInfo(4, 'branch_cond7', 'bb', 'target (cond 7)'),
    0x0012: OpInfo(8, 'branch_on_input2', 'bbBBB', 'unused, target, input_mask_index, window, min_count'),
    0x0013: OpInfo(4, 'set_pending_label', 'bb', 'label stored for 0x0014'),
    0x0014: OpInfo(4, 'branch_pending_label', 'bb', 'branch to the label stored by 0x0013'),
    0x0015: OpInfo(8, 'branch_cond12', 'bbh', 'target, param, value (cond 12: owner query 0x44)'),
    0x0016: OpInfo(4, 'branch_if_button', 'bB', 'target, input_mask_index (cond 13: held, or grounded)'),
    0x0017: OpInfo(12, 'branch_on_direction', 'bb8B', 'unused, unused, target per stick direction (8, mirrored by facing)'),
    0x0018: OpInfo(4, 'branch_if_query45', 'Bb', 'target, arg: owner query 0x45'),
    0x0019: OpInfo(4, 'branch_cond14', 'bb', 'target, param (cond 14: contact and owner query 0x46)'),
    0x001A: OpInfo(4, 'branch_cond15', 'bb', 'target (cond 15: owner query 0x47)'),
    0x001B: OpInfo(4, 'branch_if_query48', 'bb', 'target: if owner query 0x48'),
    0x001C: OpInfo(4, 'branch_cond16', 'bb', 'target (cond 16: state+0x78 bit 0)'),
    0x001D: OpInfo(8, 'branch_query49', 'bBbB', 'like 0x000E with owner query 0x49'),
    0x0100: OpInfo(4, 'stop_motion', 'h', 'clear velocity (+0x24/+0x26), set physics flag 0x1000'),
    0x0101: OpInfo(4, 'set_physics_bit1', 'h', 'nonzero: set physics +0x34 bit 1 (restored when the track ends)'),
    0x0102: OpInfo(4, 'set_state_flag_26', 'h', 'nonzero: set state+0x78 bit 26 (restored at end)'),
    0x0103: OpInfo(4, 'set_velocity', 'bb', 'vx*32 (mirrored by facing), vy*-126 → physics +0x2C/+0x2E'),
    0x0104: OpInfo(8, 'set_velocity_for', 'bbBB', 'vx, vy, frames, pad: velocity re-applied for N frames'),
    0x0105: OpInfo(4, 'watch_state_bits', 'h', '0 = enable watch of state+0x78 bits 2/3'),
    0x0106: OpInfo(4, 'set_object_flag', 'h', 'FUN_0207D11C(obj, value != 0) (restored at end)'),
    0x0107: OpInfo(4, 'watch_flag_0x400', 'h', '0 = enable watch of FUN_020838C4(obj, 0x400)'),
    0x0200: OpInfo(8, 'screen_effect', 'BBBB', 'FUN_021520DC(a, b, c)'),
    0x0201: OpInfo(4, 'show_model', 'h', 'nonzero: make the animated object visible'),
    0x0300: OpInfo(16, 'chara_action', 'h' * 7, 'sub_code, a1..a6 → battle character callback (FUN_02157A44 switch)'),
    0x0301: OpInfo(4, 'end_track', 'h', 'hide object and stop note processing'),
    0x0302: OpInfo(4, 'set_object_flag_29', 'h', 'nonzero: FUN_0207CE7C (flag 0x20000000), 0 clears it'),
    0x0400: OpInfo(4, 'play_se', 'h', 'sound: SEQ_BATTLE (SSAR 0x7A) sequence index'),
    0x0401: OpInfo(4, 'play_chara_se', 'h', "sound: character's SSAR (chr_b.bin record +0x1E) sequence index"),
    0x0402: OpInfo(4, 'play_special_se', 'h', 'sound: special-move SSAR (record +0x20) sequence index'),
}


def op_info(opcode: int) -> OpInfo | None:
    return OPCODES.get(opcode)


@dataclass
class Command:
    opcode: int
    args: bytes = b''            # bytes after the opcode word

    @property
    def info(self) -> OpInfo | None:
        return OPCODES.get(self.opcode)

    @property
    def name(self) -> str:
        i = self.info
        return i.name if i else f'op_{self.opcode:04X}'

    def values(self) -> list[int] | None:
        i = self.info
        if not i:
            return None
        fmt = '<' + i.args
        need = struct.calcsize(fmt)
        if len(self.args) < need:
            return None
        return list(struct.unpack_from(fmt, self.args))

    def encode(self) -> bytes:
        return p16(self.opcode) + self.args

    @classmethod
    def from_values(cls, opcode: int, values: list[int]) -> 'Command':
        i = OPCODES.get(opcode)
        if not i:
            raise ValueError(f'Unknown NoteTrack opcode {opcode:#06x}; give raw argument bytes')
        body = struct.pack('<' + i.args, *values)
        return cls(opcode, body + bytes(i.size - 2 - len(body)))

    def text(self) -> str:
        v = self.values()
        if v is None:
            return f'{self.name} {self.args.hex(" ")}'
        return f'{self.name}(' + ', '.join(str(x) for x in v) + ')'


@dataclass
class NoteKey:
    tick: int
    commands: list[Command] = field(default_factory=list)


@dataclass
class NoteTrack:
    keys: list[NoteKey] = field(default_factory=list)
    tail: bytes = b''            # trailing padding after the last command

    @classmethod
    def parse(cls, raw: bytes) -> 'NoteTrack':
        recs = []
        p = 0
        while u16(raw, p) != END:
            recs.append(p)
            p += 4
            if p + 2 > len(raw):
                raise ValueError('NoteTrack key index not terminated')
        bounds = set()
        groups = []
        for r in recs:
            off = struct.unpack_from('<h', raw, r + 2)[0]
            g = r + 2 * off
            n = struct.unpack_from('<h', raw, g)[0]
            if not 0 <= g < len(raw) or not 0 <= n <= 64:
                raise ValueError('NoteTrack group out of range')
            cmds = [g + 2 * struct.unpack_from('<h', raw, g + 2 + 2 * i)[0] for i in range(n)]
            groups.append((u16(raw, r), g, cmds))
            bounds.add(g)
            bounds.update(cmds)
        bounds.add(len(raw))
        ordered = sorted(bounds)
        obj = cls()
        last_end = p + 2
        for tick, g, cmds in groups:
            key = NoteKey(tick)
            for c in cmds:
                if not 0 <= c < len(raw):
                    raise ValueError('NoteTrack command out of range')
                op = u16(raw, c)
                info = OPCODES.get(op)
                nxt = ordered[ordered.index(c) + 1]
                size = info.size if info and c + info.size <= nxt else nxt - c
                key.commands.append(Command(op, bytes(raw[c + 2:c + size])))
                last_end = max(last_end, c + size)
            obj.keys.append(key)
        obj.tail = bytes(raw[last_end:])
        return obj

    def build(self) -> bytes:
        out = bytearray()
        n = len(self.keys)
        out += bytes(4 * n) + p16(END)
        for k, key in enumerate(self.keys):
            g = len(out)
            rec = 4 * k
            out[rec:rec + 4] = p16(key.tick) + struct.pack('<h', (g - rec) // 2)
            cnt = len(key.commands)
            out += struct.pack('<h', cnt) + bytes(2 * cnt)
            for i, c in enumerate(key.commands):
                at = len(out)
                out[g + 2 + 2 * i:g + 4 + 2 * i] = struct.pack('<h', (at - g) // 2)
                out += c.encode()
                pad_to(out, 2)
        out += self.tail
        return bytes(out)

    def to_list(self) -> list:
        return [[k.tick, [[f'0x{c.opcode:04X}', c.args.hex()] for c in k.commands]] for k in self.keys]

    @classmethod
    def from_list(cls, data: list, tail: bytes = b'') -> 'NoteTrack':
        return cls([NoteKey(int(t), [Command(int(op, 16), bytes.fromhex(a)) for op, a in cmds])
                    for t, cmds in data], tail)


def parse(raw: bytes) -> NoteTrack:
    return NoteTrack.parse(raw)
