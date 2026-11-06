"""Roster slots: what the game loads for a battle character (ARM9-traced, read-only).

The roster is hard-coded.  ARM9 ``FUN_02074728`` builds every battle
character from its record in the table at 0x020924B0
(``{char *id, u32 res_base}[74]``, copied to ``jus_formats.roster.BATTLE_IDS``):

* archives ``chr/<id>.aar`` (inside ``chr/ChrArc.aar``) and ``chr/<id>c.aar``
  (top-level images), plus one form pair ``chr/<id><sfx>.aar`` /
  ``chr/<id><sfx>c.aar`` per koma size, ``sfx`` from 0x0209F198
  (``'', _2 … _8``);
* resources by id inside the slot's block ``B = res_base & 0xFFFF00``:
  ``B + size_char`` (0x0209249C), ``B``, ``B+0x40``, ``B+0x41…0x50``,
  motions from ``B+0x38`` (0x28 of them; 0x2F for 0x7C100 / 0xA4500),
  per form ``B + size*0x20 + 0…7`` and motions from ``B + size*0x20``;
* the battle window ``battle/ChrWin.aar|battle/chr/<id>[_b].aar`` with
  resource ids ``0x5F1000 + record`` / ``0x5F2000 + record``;
* gameplay tables ``chr/ChrBin.aar|chr/{ai,col,shot,effect}/<id>.bin``
  (``shot`` embeds move ids of the block).

A new file name therefore needs a ROM (ARM9) patch.  Character Forge does not
patch the ROM: a new character **replaces** a slot and keeps that slot's
file names and id block.  ``slot_report`` lists exactly what that means.
"""
from __future__ import annotations

import re
import struct
from dataclasses import dataclass, field
from pathlib import Path

from jus_formats import roster
from jus_package.project import DataRoot, join, split

# res_base per battle record, ARM9 0x020924B4 (verified against arm9.bin by tests)
RES_BASE = (
    0x5C100, 0x5C200, 0x5C300, 0x5C400, 0x5C500, 0x5C600, 0x5C700, 0x5C800, 0x5C900, 0x5CA00,
    0x5CB00, 0x5CC00, 0xA4100, 0xA4200, 0xA4301, 0xA4400, 0xA4500, 0xA4600, 0xA4700, 0xA4800,
    0x60100, 0x60200, 0x60300, 0x60401, 0x60500, 0x30100, 0x30200, 0x30300, 0x38100, 0x38200,
    0x68100, 0x68200, 0x98100, 0x98200, 0x98300, 0x94100, 0x9C101, 0x74100, 0x74200, 0x78100,
    0x78200, 0x78300, 0x78400, 0x78500, 0x70100, 0x4C101, 0x4C200, 0x84100, 0x84200, 0x84300,
    0x84400, 0x20100, 0x18100, 0x18200, 0x10100, 0x6C100, 0x54100, 0x54200, 0x54300, 0x90100,
    0x88100, 0x80100, 0x80200, 0x40100, 0x40200, 0x1C100, 0x28100, 0x28200, 0x7C100, 0x64100,
    0xA8100, 0xA8200, 0xA8300, 0xA8400,
)
WINDOW_BASE = 0x5F1000
WINDOW_B_BASE = 0x5F2000
TABLE_KINDS = ('ai', 'col', 'shot', 'effect')
ARM9_TABLE = 0x020924B0


def block(cid: str) -> int:
    return RES_BASE[record(cid)] & 0xFFFF00


def record(cid: str) -> int:
    try:
        return roster.BATTLE_IDS.index(cid)
    except ValueError:
        raise ValueError(f'{cid!r} is not a battle roster id (the roster is hard-coded in ARM9 '
                         f'0x{ARM9_TABLE:08X}; pick an existing slot to replace)') from None


def in_block(value: int, base: int) -> bool:
    return isinstance(value, int) and base <= (value & 0xFFFFFF) < base + 0x100


@dataclass
class SlotFiles:
    cid: str
    record: int
    base: int
    flag: int                                   # res_base bit 0 (+0x8E)
    animation: list[str] = field(default_factory=list)   # chr/ChrArc.aar|chr/<id><sfx>.aar
    images: list[str] = field(default_factory=list)      # chr/<id><sfx>c.aar
    forms: list[str] = field(default_factory=list)       # suffixes present ('' = base)
    windows: list[str] = field(default_factory=list)
    tables: dict[str, str] = field(default_factory=dict)  # kind -> path
    resource_ids: set[int] = field(default_factory=set)  # every entry id in the slot's archives
    move_ids: set[int] = field(default_factory=set)      # every ALMT move id in them

    @property
    def window_ids(self) -> dict[str, int]:
        return {'': WINDOW_BASE + self.record, '_b': WINDOW_B_BASE + self.record}


def slot_files(root: DataRoot, cid: str) -> SlotFiles:
    """Everything the shipped data provides for slot ``cid`` (the replacement contract)."""
    from jus_formats import almt
    rec = record(cid)
    s = SlotFiles(cid, rec, RES_BASE[rec] & 0xFFFF00, RES_BASE[rec] & 1)
    for src in root.character_sources(cid):
        p, role = src['path'], src['role']
        name = split(p)[-1]
        if role == 'animation-archive':
            s.animation.append(p)
            s.forms.append(re.sub(rf'^chr/{cid}', '', name)[:-4])
        elif role == 'image-archive':
            s.images.append(p)
        elif role == 'window-archive':
            s.windows.append(p)
        elif role == 'gameplay-table':
            s.tables[name.split('/')[1]] = p
    for p in s.animation + s.images:
        for e in root.archive(p).entries:
            s.resource_ids.add(e.resource_id)
            if e.ext == '.amt':
                try:
                    s.move_ids.update(m.id & 0xFFFFFF for m in almt.parse(e.payload()).moves)
                except ValueError:
                    pass
    return s


def form_suffix(cid: str, archive_path: str) -> str:
    name = split(archive_path)[-1].rsplit('/', 1)[-1]
    m = re.match(rf'^{re.escape(cid)}(_\d)?(c)?\.aar$', name)
    return (m.group(1) or '') if m else ''


def loader_names(cid: str, forms: list[str]) -> dict[str, list[str]]:
    """File names exactly as FUN_02074728 builds them for the given forms."""
    return {'animation': [join('chr/ChrArc.aar', f'chr/{cid}{f}.aar') for f in forms],
            'images': [f'chr/{cid}{f}c.aar' for f in forms]}


def slot_report(root: DataRoot, cid: str) -> dict:
    """What a replacement for ``cid`` must provide (JSON-serialisable)."""
    s = slot_files(root, cid)
    rec = s.record
    names_ok = None
    try:
        names = roster.record_names(root.read('bin/chr_b_t.bin'))
        ids = roster.battle_roster(list(roster.BATTLE_IDS), names)
        names_ok = names[ids.index(cid)]
    except (ValueError, KeyError, OSError):
        pass
    return {
        'slot': cid, 'record': rec, 'display_name': names_ok,
        'roster_note': ('The battle roster is hard-coded in ARM9 0x020924B0 ({char *id, u32 res_base}[74]). '
                        'A character with a NEW file name cannot be loaded without patching the ROM, which '
                        'Character Forge does not do. The new character REPLACES this slot: it keeps the file '
                        'names, resource-id block and window ids below. Only the extracted data is edited.'),
        'resource_block': f'0x{s.base:05X}-0x{s.base + 0xFF:05X}', 'res_base_flag': s.flag,
        'files': {'animation': s.animation, 'images': s.images, 'windows': s.windows,
                  'tables': s.tables},
        'forms': s.forms,
        'window_ids': {k: f'0x{v:06X}' for k, v in s.window_ids.items()},
        'required_resource_ids': sorted(f'0x{v:06X}' for v in s.resource_ids),
        'required_move_ids': sorted(f'0x{v:06X}' for v in s.move_ids),
        'loader_rules': [
            'chr/<id>.aar in chr/ChrArc.aar and chr/<id>c.aar (top level); form archives per koma size '
            'with suffix "", _2 … _8 (ARM9 0x0209F198)',
            'resource ids B+size_char, B, B+0x40, B+0x41..B+0x50; motions from B+0x38; '
            'form f: B+f*0x20+0..7, motions from B+f*0x20 (FUN_02074728)',
            'window archives battle/chr/<id>[_b].aar with ids 0x5F1000/0x5F2000 + record',
            'chr/shot/<id>.bin holds move ids of the block',
        ],
        'name_table': 'bin/chr_b_t.bin record string 0 is the display name (53 Shift-JIS strings per record)',
    }


def verify_res_base(arm9: bytes) -> list[str]:
    """Mismatches between RES_BASE / BATTLE_IDS and an arm9.bin (base 0x02000000)."""
    out = []
    for i, cid in enumerate(roster.BATTLE_IDS):
        ptr, res = struct.unpack_from('<II', arm9, ARM9_TABLE - 0x02000000 + 8 * i)
        o = ptr - 0x02000000
        name = arm9[o:arm9.index(b'\0', o)].decode('ascii')
        if name != cid or res != RES_BASE[i]:
            out.append(f'record {i}: table has {name} 0x{res:X}, expected {cid} 0x{RES_BASE[i]:X}')
    return out
