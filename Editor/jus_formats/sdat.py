"""NitroSDK sound archive (SDAT) symbol table reader.

Only the SYMB block is read: sequence names and sequence-archive (SSAR)
names with their per-archive sequence names.  This is what ALMT NoteTrack
sound commands index into (``0x0400``: SSAR 0x7A ``SEQ_BATTLE``; ``0x0401``
/ ``0x0402``: the character's own SSARs).

SDAT header: ``'SDAT' … u32 symb_offset @0x10, u32 symb_size @0x14``.  SYMB:
``'SYMB' u32 size, u32 record_offset[8]`` (SEQ, SEQARC, BANK, WAVEARC,
PLAYER, GROUP, PLAYER2, STRM), offsets relative to the SYMB block.
"""
from __future__ import annotations

from dataclasses import dataclass, field

from .binary import u32

SEQ_BATTLE = 0x7A


@dataclass
class SeqArc:
    index: int
    name: str
    sequences: list[str] = field(default_factory=list)


@dataclass
class SdatSymbols:
    sequences: list[str] = field(default_factory=list)
    seqarcs: list[SeqArc] = field(default_factory=list)

    def sound_name(self, arc_index: int, seq_index: int) -> str | None:
        if 0 <= arc_index < len(self.seqarcs):
            a = self.seqarcs[arc_index]
            if 0 <= seq_index < len(a.sequences):
                return a.sequences[seq_index] or None
        return None


def _str(b: bytes, at: int) -> str:
    end = b.find(b'\0', at)
    return b[at:end].decode('ascii', 'replace') if end >= 0 else ''


def parse_symbols(blob: bytes) -> SdatSymbols:
    if blob[:4] != b'SDAT':
        raise ValueError('Not an SDAT file')
    s = u32(blob, 0x10)
    if not s or blob[s:s + 4] != b'SYMB':
        raise ValueError('SDAT has no symbol block')
    rec = [u32(blob, s + 8 + 4 * i) for i in range(8)]
    out = SdatSymbols()
    n = u32(blob, s + rec[0])
    for i in range(n):
        o = u32(blob, s + rec[0] + 4 + 4 * i)
        out.sequences.append(_str(blob, s + o) if o else '')
    n = u32(blob, s + rec[1])
    for i in range(n):
        name_o = u32(blob, s + rec[1] + 4 + 8 * i)
        sub_o = u32(blob, s + rec[1] + 8 + 8 * i)
        arc = SeqArc(i, _str(blob, s + name_o) if name_o else '')
        if sub_o:
            m = u32(blob, s + sub_o)
            for k in range(m):
                o = u32(blob, s + sub_o + 4 + 4 * k)
                arc.sequences.append(_str(blob, s + o) if o else '')
        out.seqarcs.append(arc)
    return out
