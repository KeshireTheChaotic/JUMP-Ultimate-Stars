"""JUS NCCL (.ncl) Nitro-derived 16-colour-bank palette containers.

Original shipped files use 'NCCL'/'PALT'/'CMNT' (not NCLR/RLCN).
A common Nitro 16-byte header is followed by tagged sections:
NCCL +0x00 magic, +0x04 BOM, +0x06 version, +0x08 filesize,
+0x0C header size, +0x0E section count.
PALT +0x00 tag, +0x04 section length, +0x08 colour count per bank
(16 or 256 in originals), +0x0C number of banks (16 or 1).
Actual RGB555 banks begin at PALT+0x10.
CMNT +0x00 tag, +0x04 section length, +0x08 reserved 4 bytes.

The parser stores unknown fields and exact source bytes; it neither
interprets CMNT as placement nor modifies graphics/BG slot state.
"""
from __future__ import annotations

from dataclasses import dataclass
import struct

from .dsig import rgb555_to_rgb


@dataclass(frozen=True)
class NclPalette:
    source: bytes
    byteorder: int
    version: int
    bank_size: int
    banks: tuple[tuple[int, ...], ...]
    section_tags: tuple[str, ...]
    comments: tuple[bytes, ...]

    def bank_rgba(self, index: int) -> tuple[tuple[int, int, int, int], ...]:
        return tuple(rgb555_to_rgb(c) + ((0,) if i == 0 else (255,))
                     for i, c in enumerate(self.banks[index]))

    def build(self) -> bytes:
        """Exact round trip (palette mutation is deliberately out of scope)."""
        return self.source


def parse(blob: bytes) -> NclPalette:
    if len(blob) < 16 or blob[:4] != b'NCCL':
        raise ValueError('Not a JUS NCCL palette')
    bom, version, total, hdrsize, count = struct.unpack_from('<HHIHH', blob, 4)
    if bom != 0xFEFF:
        raise ValueError(f'NCCL unsupported byte order: 0x{bom:04X}')
    if hdrsize != 16 or total != len(blob) or not 1 <= count <= 16:
        raise ValueError('NCCL invalid header size, length or section count')
    cursor, tags, comments, banks, bank_size = hdrsize, [], [], None, None
    for _ in range(count):
        if cursor + 8 > len(blob):
            raise ValueError('Truncated NCCL section header')
        tag = bytes(blob[cursor:cursor+4])
        size = struct.unpack_from('<I', blob, cursor+4)[0]
        if size < 8 or cursor + size > len(blob):
            raise ValueError('NCCL section exceeds file')
        tags.append(tag.decode('ascii', errors='replace'))
        if tag == b'PALT':
            if banks is not None or size < 16:
                raise ValueError('Duplicate or malformed NCCL PALT section')
            bank_size, bank_count = struct.unpack_from('<II', blob, cursor+8)
            if bank_size not in (16, 256) or not 1 <= bank_count <= 256:
                raise ValueError('NCCL unsupported palette bank size/count')
            data_len = size - 16
            if data_len != bank_size * bank_count * 2:
                raise ValueError('NCCL palette data does not match header bank count')
            words = struct.unpack_from('<' + 'H' * (data_len // 2), blob, cursor+16)
            banks = tuple(tuple(words[i:i+bank_size]) for i in range(0, len(words), bank_size))
            if any(c & 0x8000 for c in words):
                raise ValueError('NCCL contains invalid high-bit RGB555 colours')
        elif tag == b'CMNT':
            comments.append(bytes(blob[cursor+8:cursor+size]))
        else:
            comments.append(bytes(blob[cursor+8:cursor+size]))
        cursor += size
    if cursor != len(blob) or banks is None:
        raise ValueError('NCCL trailing bytes or missing palette section')
    return NclPalette(bytes(blob), bom, version, bank_size, banks, tuple(tags), tuple(comments))
