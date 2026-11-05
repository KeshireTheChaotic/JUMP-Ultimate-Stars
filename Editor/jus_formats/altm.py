"""ALTM tile maps (resource type 0x46): background layers for screens and stages.

Evidence grade: **Inferred from data** (structure checked on every ALTM in the
shipped archives: all rows decode to exactly ``map_w`` entries and every
packed file is consumed with no slack; screens render coherently with their
paired DSIG tiles).  The ARM9 loader has not been traced yet.

Header (24 bytes)::

    +0x00 'ALTM'
    +0x04 u8  b4          (0 in all files)
    +0x05 u8  flags       0x03 raw map, 0x07 packed rows (bit 2)
    +0x06 u8  b6          (2 in all files)
    +0x07 u8  b7          (0)
    +0x08 4 bytes         0C 0A 0B 00 in all files (meaning unknown, kept)
    +0x0C u16 tile_w, u16 tile_h   (8, 8)
    +0x10 u16 map_w, u16 map_h     (in tiles)
    +0x14 u32 reserved    (0)

Raw maps store ``map_w*map_h`` u16 entries row-major.  Packed maps store::

    u16 mode (2 in all files)
    u16 row_offset[map_h]           byte offsets from the start of the data
    rows: repeated  u16 cmd, u16 pattern[(cmd & 0x3F) + 1]
          cmd >> 8   run length in entries (0 = 256)
          cmd & 0x3F pattern length - 1; the pattern repeats cyclically
          cmd & 0x40 sequential: the tile number (bits 0-9) steps by one
                     on every pattern repetition
          cmd & 0x80 with 0x40: the step is -1 (mirrored strips)
          a row ends when map_w entries are emitted.
          Identical rows share one offset.

    Checked on 1,558 ALTM files (1,431 raw, 127 packed): every row decodes
    to exactly map_w entries and no command uses 0x80 without 0x40.

Entries are Nintendo DS text-BG screen entries: bits 0-9 tile number,
10 h-flip, 11 v-flip, 12-15 palette bank (4bpp tiles only).
"""
from __future__ import annotations

import struct
from dataclasses import dataclass, field

from .binary import p16, u16

MAGIC = b'ALTM'
HEADER = 24
FLAG_PACKED = 0x04
CMD_LEN_MASK = 0x3F         # pattern length - 1
CMD_SEQUENTIAL = 0x40       # tile number advances by one per repetition
CMD_DESCENDING = 0x80       # with 0x40: tile number steps down instead (mirrored strips)


def run_entries(pat: list[int], run: int, step: int) -> list[int]:
    plen = len(pat)
    if not step:
        return [pat[i % plen] for i in range(run)]
    return [(pat[i % plen] & ~0x3FF) | ((pat[i % plen] + step * (i // plen)) & 0x3FF) for i in range(run)]


def entry_tile(v: int) -> int:
    return v & 0x3FF


def entry_hflip(v: int) -> bool:
    return bool(v & 0x400)


def entry_vflip(v: int) -> bool:
    return bool(v & 0x800)


def entry_bank(v: int) -> int:
    return v >> 12


@dataclass
class AltmFile:
    flags: int = 0x03
    b4: int = 0
    b6: int = 2
    b7: int = 0
    unk8: bytes = bytes((0x0C, 0x0A, 0x0B, 0x00))
    tile_w: int = 8
    tile_h: int = 8
    width: int = 32           # map width in tiles
    height: int = 32
    reserved: int = 0
    entries: list[int] = field(default_factory=list)    # width*height, row-major
    mode: int = 2             # packed only
    raw: bytes | None = None  # original file (exact rebuild when unedited)
    dirty: bool = False

    @property
    def packed(self) -> bool:
        return bool(self.flags & FLAG_PACKED)

    @property
    def pixel_size(self) -> tuple[int, int]:
        return self.width * self.tile_w, self.height * self.tile_h

    def get(self, x: int, y: int) -> int:
        return self.entries[y * self.width + x]

    def set(self, x: int, y: int, v: int) -> None:
        self.entries[y * self.width + x] = v & 0xFFFF
        self.dirty = True

    def used_tiles(self) -> set[int]:
        return {entry_tile(v) for v in self.entries}

    def used_banks(self) -> set[int]:
        return {entry_bank(v) for v in self.entries}

    # ------------------------------------------------------------- io
    @classmethod
    def parse(cls, blob: bytes) -> 'AltmFile':
        if blob[:4] != MAGIC or len(blob) < HEADER:
            raise ValueError('Not an ALTM tile map')
        tw, th, w, h = struct.unpack_from('<HHHH', blob, 0x0C)
        obj = cls(blob[5], blob[4], blob[6], blob[7], bytes(blob[8:12]), tw, th, w, h,
                  struct.unpack_from('<I', blob, 0x14)[0], raw=bytes(blob))
        data = blob[HEADER:]
        if not obj.packed:
            if len(data) < 2 * w * h:
                raise ValueError('Truncated raw ALTM map')
            obj.entries = list(struct.unpack_from(f'<{w * h}H', data))
            return obj
        obj.mode = u16(data, 0)
        entries: list[int] = []
        for y in range(h):
            off = u16(data, 2 + 2 * y)
            row: list[int] = []
            while len(row) < w:
                if off + 2 > len(data):
                    raise ValueError(f'ALTM row {y} runs past the data')
                cmd = u16(data, off)
                run, plen = (cmd >> 8) or 256, (cmd & CMD_LEN_MASK) + 1
                kind = cmd & (CMD_SEQUENTIAL | CMD_DESCENDING)
                if kind == CMD_DESCENDING:
                    raise ValueError(f'ALTM row {y}: unknown command 0x{cmd:04X} (0x80 without 0x40)')
                seq = 0 if not kind else (-1 if kind & CMD_DESCENDING else 1)
                pat = list(struct.unpack_from(f'<{plen}H', data, off + 2))
                row.extend(run_entries(pat, run, seq))
                off += 2 + 2 * plen
            if len(row) != w:
                raise ValueError(f'ALTM row {y} decodes to {len(row)} entries, expected {w}')
            entries.extend(row)
        obj.entries = entries
        return obj

    def build(self) -> bytes:
        if self.raw is not None and not self.dirty:
            return self.raw
        out = bytearray(MAGIC + bytes((self.b4, self.flags, self.b6, self.b7)) + self.unk8)
        out += struct.pack('<HHHHI', self.tile_w, self.tile_h, self.width, self.height, self.reserved)
        if not self.packed:
            out += struct.pack(f'<{len(self.entries)}H', *self.entries)
            return bytes(out)
        body = bytearray(p16(self.mode) + bytes(2 * self.height))
        cache: dict[tuple, int] = {}
        for y in range(self.height):
            row = tuple(self.entries[y * self.width:(y + 1) * self.width])
            if row not in cache:          # identical rows share one encoding, as in the files
                cache[row] = len(body)
                body += encode_row(list(row))
            body[2 + 2 * y:4 + 2 * y] = p16(cache[row])
        if len(body) > 0xFFFF:
            raise ValueError('Packed ALTM exceeds 16-bit row offsets')
        return bytes(out + body)


def encode_row(row: list[int]) -> bytes:
    """Greedy packer: shortest repeating pattern per run (valid, not byte-identical)."""
    out = bytearray()
    i = 0
    n = len(row)
    while i < n:
        best = (1, 1, 0)         # (run, pattern length, step)
        for step in (1, -1):     # single-entry sequential runs
            run = 1
            while (i + run < n and run < 256 and
                   row[i + run] == run_entries([row[i]], run + 1, step)[-1]):
                run += 1
            if run - 1 > best[0] - best[1]:
                best = (run, 1, step)
        for plen in range(1, min(CMD_LEN_MASK + 1, n - i) + 1):
            pat = row[i:i + plen]
            run = plen
            while i + run < n and run < 256 and row[i + run] == pat[run % plen]:
                run += 1
            if run - plen > best[0] - best[1]:
                best = (run, plen, 0)
        run, plen, step = best
        flags = 0 if not step else (CMD_SEQUENTIAL | (CMD_DESCENDING if step < 0 else 0))
        out += p16(((run & 0xFF) << 8) | flags | (plen - 1))
        for v in row[i:i + plen]:
            out += p16(v)
        i += run
    return bytes(out)


def parse(blob: bytes) -> AltmFile:
    return AltmFile.parse(blob)
