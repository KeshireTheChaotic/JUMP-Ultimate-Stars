"""Read-only views of the global game tables (``bin/*.bin`` and a few archive members).

Layouts are from the 2026-11-06 research (ARM9 readers below) and were re-checked on the shipped
data by ``tests/test_gametables.py``.  Text slots are self-relative u32
offsets (string at slot offset + value, 0 = no string) to NUL-terminated CP932.
Numeric fields keep their raw values; a name is given only where the reading
function in the game shows what it is.

=====================  ======================================================  ==========================
file                   layout                                                  reader (ARM9)
=====================  ======================================================  ==========================
bin/piece.bin          u32 41, 41 × 0x60: 23 text slots, +0x5C/+0x5E u16       ov05 0216D360/3A0/3B4
bin/demo.bin           u32 50, 50 × 0x14: 4 text slots, +0x10/+0x11 u8        ov05 0216D4A4/4E4/4F8
bin/bgm.bin            u32 52, 52 × 0x18: 4 text slots, +0x10/+0x12/+0x14     main 02075878…020758E0
bin/location.bin       u32 91, 91 × 8: 1 text slot, +4/+6 u16                  main 02075678/68C/69C
bin/pname.bin          u32 89, 89 × 4: 1 text slot                             main 02075788
bin/commwin.bin        129 × 0x24: u8 ×4, 8 text slots (no count word)         CommonWindow_Create ov12 021BA49C
bin/jpower.bin         311 × 0x130: u32 + 5 groups × 3 cells × 0x14            ov05 021653AC
bin/secret.bin         11 × 8: u16 ×4 (+4 = unlock bit id)                      main 020759A4 / 02075A0C
jquiz/jquiz.bin        u32 3006, 3006 × 0x28: u8 series, u8 tier, s16 number,  ov04 0214EFB0, 02153B58
                       9 text slots (image, 4 question lines, answer, 3 wrong)
ending/StaffRoll.bin   185 × 0x34: u32 kind + 48-byte CP932 line               ov00 0215E2BC
ending/TitleOrder.bin  42 × 0x58: u32 series id + 3 × 28-byte CP932 lines       ov00 0215B084 / 0215C628
palette scripts        u32 n, n × 8: u8 kind, u8 colours, u16 first colour,    CommonPaletteAnime_Load
                       u32 kind parameters                                     main 0206AFD0 / 0206AD90
=====================  ======================================================  ==========================

The palette scripts are the small counted ``.bin`` members of title/, topmenu/,
opening/, result/ and jgalaxy/ (e.g. ``title/title_effect.bin``); they animate
palette colours, they do not place sprites.
"""
from __future__ import annotations

import struct
from dataclasses import dataclass, field


@dataclass
class Record:
    label: str
    fields: list[tuple[str, str]] = field(default_factory=list)


@dataclass
class TableView:
    title: str
    source: str                       # reading function(s)
    records: list[Record]
    note: str = ''


def _text(blob: bytes, slot: int) -> str:
    delta = struct.unpack_from('<I', blob, slot)[0]
    if delta == 0:
        return ''
    pos = slot + delta
    if not 0 <= pos < len(blob):
        raise ValueError(f'text slot at {slot:#x} points outside the file')
    end = blob.find(b'\0', pos)
    return blob[pos:end if end >= 0 else len(blob)].decode('cp932', 'replace')


def _fixed(raw: bytes) -> str:
    return raw.split(b'\0')[0].decode('cp932', 'replace')


def _u16s(raw: bytes, base: int) -> list[tuple[str, str]]:
    return [(f'+{base + 2 * k:#04x}', str(v)) for k, v in enumerate(struct.unpack(f'<{len(raw) // 2}H', raw))]


# count word, stride, text slots, names of known trailing u16 offsets
COUNTED = {
    'bin/piece.bin': (41, 0x60, 23, 'Series encyclopedia entries', 'ov05 PieceData_Create 0216D284'),
    'bin/demo.bin': (50, 0x14, 4, 'Demo entries', 'ov05 0216D3C8'),
    'bin/bgm.bin': (52, 0x18, 4, 'Music list', 'main 0207579C'),
    'bin/location.bin': (91, 8, 1, 'Locations', 'main 0207559C'),
    'bin/pname.bin': (89, 4, 1, 'Profile names', 'main 020756AC'),
}


def _counted(name, blob):
    n, stride, slots, title, src = COUNTED[name]
    if len(blob) < 4 or struct.unpack_from('<I', blob, 0)[0] != n or 4 + n * stride > len(blob):
        raise ValueError(f'{name}: expected u32 {n} and {n} × {stride:#x}-byte records')
    recs = []
    for i in range(n):
        at = 4 + i * stride
        texts = [_text(blob, at + 4 * j) for j in range(slots)]
        r = Record(f'{i}: {next((t for t in texts if t), "—")}')
        r.fields += [(f'text {j}', t) for j, t in enumerate(texts) if t]
        tail = blob[at + 4 * slots:at + stride]
        r.fields += _u16s(tail[:len(tail) & ~1], 4 * slots)
        recs.append(r)
    return TableView(title, src, recs, 'Numeric fields are shown as raw u16 at their record offset.')


def _commwin(blob):
    n, stride = 129, 0x24
    if len(blob) < n * stride:
        raise ValueError('commwin.bin: expected 129 × 0x24-byte records')
    recs = []
    for i in range(n):
        at = i * stride
        texts = [_text(blob, at + 4 + 4 * j) for j in range(8)]
        r = Record(f'{i}: {next((t for t in texts if t), "—")}',
                   [('header bytes', ' '.join(f'{b:02X}' for b in blob[at:at + 4]))])
        r.fields += [(f'line {j}', t) for j, t in enumerate(texts) if t]
        recs.append(r)
    return TableView('Common window messages', 'ov12 CommonWindow_Create 021BA49C', recs,
                     'Header bytes 0–2 are not traced (byte 3 is always 0).')


def _jpower(blob):
    if len(blob) % 0x130:
        raise ValueError('jpower.bin: size is not a multiple of 0x130')
    recs = []
    for i in range(len(blob) // 0x130):
        at = i * 0x130
        r = Record(f'{i}: header {struct.unpack_from("<I", blob, at)[0]:#010x}')
        for g in range(5):
            for s in range(3):
                cell = blob[at + 4 + g * 0x3C + s * 0x14:][:0x14]
                if any(cell):
                    r.fields.append((f'group {g} cell {s}', ' '.join(str(v) for v in struct.unpack('<10H', cell))))
        recs.append(r)
    return TableView('J Power records', 'ov05 021653AC (record·0x130 + group·0x3C + cell·0x14)', recs,
                     'Cells are shown as ten raw u16; empty cells are omitted.')


def _secret(blob):
    if len(blob) != 88:
        raise ValueError('secret.bin: expected 11 × 8 bytes')
    recs = []
    for i in range(11):
        a, b, c, d = struct.unpack_from('<4H', blob, 8 * i)
        recs.append(Record(f'{i}: unlock bit {c}', [('+0', str(a)), ('+2', str(b)), ('+4 unlock bit', str(c)),
                                                     ('+6', str(d))]))
    return TableView('Secret unlocks', 'main 020759A4 / 02075A0C', recs)


def _jquiz(blob):
    n = struct.unpack_from('<I', blob, 0)[0] if len(blob) >= 4 else 0
    if not n or 4 + n * 0x28 > len(blob):
        raise ValueError('jquiz.bin: bad record count')
    names = ('image', 'question 1', 'question 2', 'question 3', 'question 4',
             'answer', 'wrong 1', 'wrong 2', 'wrong 3')
    recs = []
    for i in range(n):
        at = 4 + i * 0x28
        series, tier, number = struct.unpack_from('<BBh', blob, at)
        texts = [_text(blob, at + 4 + 4 * j) for j in range(9)]
        r = Record(f'{i}: ' + ''.join(texts[1:5])[:40],
                   [('series', 'special' if series == 0xFF else str(series)), ('tier', str(tier)),
                    ('number', str(number))])
        r.fields += [(k, t) for k, t in zip(names, texts) if t]
        recs.append(r)
    return TableView('J Quiz questions', 'ov04 JQuizCommonWork_Create 0214EFB0', recs,
                     'Series = bin/title.bin index + 1; the game shuffles the answer with the three wrong ones.')


def _staffroll(blob):
    if len(blob) % 0x34:
        raise ValueError('StaffRoll.bin: size is not a multiple of 0x34')
    recs = [Record(f'{i}: {_fixed(blob[i * 0x34 + 4:(i + 1) * 0x34]) or "—"}',
                   [('kind', str(struct.unpack_from('<I', blob, i * 0x34)[0]))])
            for i in range(len(blob) // 0x34)]
    return TableView('Staff roll', 'ov00 0215E2BC', recs, 'Row kinds are not traced.')


def _titleorder(blob):
    if len(blob) % 0x58:
        raise ValueError('TitleOrder.bin: size is not a multiple of 0x58')
    recs = []
    for i in range(len(blob) // 0x58):
        at = i * 0x58
        lines = [_fixed(blob[at + 4 + 28 * j:at + 32 + 28 * j]) for j in range(3)]
        recs.append(Record(f'{i}: series {struct.unpack_from("<I", blob, at)[0]}',
                           [(f'line {j + 1}', t) for j, t in enumerate(lines) if t]))
    return TableView('Ending title order', 'ov00 0215B084 / 0215C628', recs,
                     'Series ids run 1–41, then a 0 terminator.')


PALETTE_KINDS = {0: 'rotate', 1: 'rotate', 2: 'rotate', 3: 'ping-pong blend', 5: 'gradient'}
PALETTE_FOLDERS = ('title/', 'topmenu/', 'opening/', 'result/', 'jgalaxy/')
NOT_PALETTE = ('jgalaxy/jgalaxy.bin', 'jgalaxy/mission.bin', 'jgalaxy/battle.bin')


def is_palette_script(name: str, blob: bytes) -> bool:
    if not name.startswith(PALETTE_FOLDERS) or name in NOT_PALETTE or len(blob) < 4:
        return False
    return len(blob) == 4 + 8 * struct.unpack_from('<I', blob, 0)[0]


def _palette(blob):
    n = struct.unpack_from('<I', blob, 0)[0]
    recs = []
    for i in range(n):
        kind, count, start, arg = struct.unpack_from('<BBHI', blob, 4 + 8 * i)
        recs.append(Record(f'{i}: {PALETTE_KINDS.get(kind, f"kind {kind}")} colours {start}–{start + count - 1}',
                           [('kind', str(kind)), ('colours', str(count)), ('first colour', str(start)),
                            ('parameters', f'{arg:#010x}')]))
    return TableView('Palette animation script', 'main CommonPaletteAnime_Load 0206AFD0', recs,
                     'Each row animates a run of palette colours; parameters depend on the kind.')


BY_NAME = {
    'bin/commwin.bin': _commwin, 'bin/jpower.bin': _jpower, 'bin/secret.bin': _secret,
    'jquiz/jquiz.bin': _jquiz, 'ending/StaffRoll.bin': _staffroll, 'ending/TitleOrder.bin': _titleorder,
}
#: loose data files the Project panel offers
LOOSE_TABLES = tuple(COUNTED) + ('bin/commwin.bin', 'bin/jpower.bin', 'bin/secret.bin')


def view(name: str, blob: bytes) -> TableView | None:
    """Typed view of a known table (``name`` = data path or archive member name), else None."""
    if name in COUNTED:
        return _counted(name, blob)
    fn = BY_NAME.get(name)
    if fn:
        return fn(blob)
    if is_palette_script(name, blob):
        return _palette(blob)
    return None
