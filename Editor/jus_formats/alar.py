"""ALAR resource archives (versions 2 and 3): read, edit and rebuild.

ALAR2 layout (little endian)::

    +0x00 'ALAR'  +0x04 u8 version=2  +0x05 u8 flags  +0x06 u16 count
    +0x08 u32 id_low   lowest 24-bit resource id in the archive
    +0x0C u32 id_high  highest id covered (id + span - 1, see Entry.span)
    +0x10 entry[count] : u32 id, u32 data_offset, u32 size, u32 attributes
    per member, 4-byte aligned:  u16 reserved(0), char name[32], u16 rotl_hash(stem)
                                 then the member bytes at data_offset

ALAR3 layout::

    +0x00 'ALAR'  +0x04 u8 version=3  +0x05 u8 flags (bit 0x40: resource_hash)
    +0x06 u16 count  +0x08 u32 reserved(0)  +0x0C u32 count-1
    +0x10 u16 data_start  +0x12 u16 descriptor_offset[count]
    descriptor (4-byte aligned): u32 id, u32 offset, u32 size, u32 attributes,
                                 u16 name_hash, char name[] NUL, pad to 4
    member data, each 4-byte aligned, from data_start

Member payloads may be wrapped in DSCP (LZ10); :class:`Entry` keeps the
stored bytes and exposes the unwrapped payload through :meth:`Entry.payload`.
"""
from __future__ import annotations

from dataclasses import dataclass, field

from .binary import (align, checked_slice, cstring, dscp_unwrap, dscp_wrap,
                     is_dscp, p16, p32, pad_to, u16, u32)
from .hashes import resource_hash, rotl_hash, strip_extension

MAGIC = b'ALAR'

# Resource type byte (id >> 24) by member extension, observed in the data.
TYPE_BY_EXT = {'.dtx': 0x40, '.amt': 0x41, '.dig': 0x42, '.aod': 0x43,
               '.atm': 0x46, '.aar': 0x47}


@dataclass
class Entry:
    name: str
    data: bytes                 # bytes exactly as stored (possibly DSCP)
    id: int = 0
    attributes: int = 0x80000001
    name_hash: int | None = None    # None -> computed on build
    reserved: int = 0               # ALAR2 preamble u16
    index: int | None = None        # ALAR3 descriptor u16 index (low half of id)

    @property
    def compressed(self) -> bool:
        return is_dscp(self.data)

    def payload(self) -> bytes:
        """Member bytes with any DSCP wrapper removed."""
        return dscp_unwrap(self.data) if is_dscp(self.data) else self.data

    def set_payload(self, payload: bytes, compress: bool | None = None) -> None:
        """Replace the member; keeps the previous compression unless told otherwise."""
        if compress is None:
            compress = self.compressed
        self.data = dscp_wrap(payload) if compress else bytes(payload)

    @property
    def resource_id(self) -> int:
        return self.id & 0xFFFFFF

    @property
    def type_byte(self) -> int:
        return (self.id >> 24) & 0xFF

    @property
    def span(self) -> int:
        """Number of consecutive resource ids owned (attributes low 16 bits)."""
        return self.attributes & 0xFFFF

    @property
    def ext(self) -> str:
        dot = self.name.rfind('.')
        return self.name[dot:].lower() if dot >= 0 else ''


@dataclass
class Archive:
    version: int = 2
    flags: int = 1
    entries: list[Entry] = field(default_factory=list)
    id_low: int | None = None       # ALAR2 header; None -> computed
    id_high: int | None = None
    reserved08: int = 0             # ALAR3 header
    data_alignment: int = 4

    # ------------------------------------------------------------------ query
    def names(self) -> list[str]:
        return [e.name for e in self.entries]

    def find(self, name: str) -> Entry | None:
        low = name.lower()
        for e in self.entries:
            if e.name.lower() == low:
                return e
        return None

    def get(self, name: str) -> Entry:
        e = self.find(name)
        if e is None:
            raise KeyError(name)
        return e

    def by_resource_id(self, rid: int) -> list[Entry]:
        return [e for e in self.entries if e.resource_id == rid & 0xFFFFFF]

    def uses_resource_hash(self) -> bool:
        return self.version == 3 and bool(self.flags & 0x40)

    def expected_hash(self, entry: Entry) -> int:
        stem = strip_extension(entry.name)
        return resource_hash(stem) if self.uses_resource_hash() else rotl_hash(stem)

    # ------------------------------------------------------------------ edit
    def add(self, entry: Entry) -> Entry:
        if self.find(entry.name):
            raise ValueError(f'Duplicate member {entry.name}')
        if self.version == 3 and entry.index is None:
            entry.index = max([e.index or 0 for e in self.entries] + [-1]) + 1
            if not entry.id:
                entry.id = (TYPE_BY_EXT.get(entry.ext, 0) << 24) | entry.index
        self.entries.append(entry)
        return entry

    def remove(self, name: str) -> None:
        self.entries.remove(self.get(name))

    def computed_id_range(self) -> tuple[int, int]:
        """ALAR2 header id range derived from member ids and spans."""
        if not self.entries:
            return 0, 0
        lows = [e.resource_id for e in self.entries]
        highs = [e.resource_id + max(e.span, 1) - 1 if e.attributes & 0x40000000
                 else e.resource_id for e in self.entries]
        return min(lows), max(highs)

    # ------------------------------------------------------------------ io
    @classmethod
    def parse(cls, blob: bytes) -> 'Archive':
        if blob[:4] != MAGIC or len(blob) < 0x12:
            raise ValueError('Not an ALAR archive')
        version, flags, count = blob[4], blob[5], u16(blob, 6)
        if count > 16384:
            raise ValueError('Unreasonable ALAR entry count')
        if version == 2:
            return cls._parse2(blob, flags, count)
        if version == 3:
            return cls._parse3(blob, flags, count)
        raise ValueError(f'Unsupported ALAR version {version}')

    @classmethod
    def _parse2(cls, blob, flags, count):
        arc = cls(2, flags, [], u32(blob, 8), u32(blob, 12))
        checked_slice(blob, 0x10, 16 * count)
        for i in range(count):
            p = 0x10 + 16 * i
            rid, off, size, attrs = u32(blob, p), u32(blob, p + 4), u32(blob, p + 8), u32(blob, p + 12)
            if off < 0x24:
                raise ValueError('ALAR2 member before its preamble')
            pre = checked_slice(blob, off - 0x24, 0x24)
            name = pre[2:34].split(b'\0')[0].decode('ascii', 'replace')
            arc.entries.append(Entry(name, checked_slice(blob, off, size), rid, attrs,
                                     u16(pre, 34), u16(pre, 0)))
        return arc

    @classmethod
    def _parse3(cls, blob, flags, count):
        arc = cls(3, flags, [], reserved08=u32(blob, 8))
        checked_slice(blob, 0x12, 2 * count)
        for i in range(count):
            p = u16(blob, 0x12 + 2 * i)
            checked_slice(blob, p, 19)
            rid, off, size, attrs = u32(blob, p), u32(blob, p + 4), u32(blob, p + 8), u32(blob, p + 12)
            name = cstring(blob, p + 18).replace('\\', '/')
            arc.entries.append(Entry(name, checked_slice(blob, off, size), rid, attrs,
                                     u16(blob, p + 16), index=rid & 0xFFFF))
        return arc

    def build(self) -> bytes:
        if self.version == 2:
            return self._build2()
        if self.version == 3:
            return self._build3()
        raise ValueError(f'Unsupported ALAR version {self.version}')

    def _hash(self, e: Entry) -> int:
        return self.expected_hash(e) if e.name_hash is None else e.name_hash

    def _build2(self) -> bytes:
        n = len(self.entries)
        lo, hi = self.computed_id_range()
        out = bytearray(MAGIC + bytes((2, self.flags & 0xFF)) + p16(n))
        out += p32(lo if self.id_low is None else self.id_low)
        out += p32(hi if self.id_high is None else self.id_high)
        table_at = len(out)
        out += bytes(16 * n)
        for i, e in enumerate(self.entries):
            pad_to(out, self.data_alignment)
            name = e.name.encode('ascii')
            if len(name) > 31:
                raise ValueError(f'ALAR2 member name too long: {e.name}')
            out += p16(e.reserved) + name.ljust(32, b'\0') + p16(self._hash(e))
            off = len(out)
            out += e.data
            p = table_at + 16 * i
            out[p:p + 16] = p32(e.id) + p32(off) + p32(len(e.data)) + p32(e.attributes)
        return bytes(out)

    def _build3(self) -> bytes:
        n = len(self.entries)
        out = bytearray(MAGIC + bytes((3, self.flags & 0xFF)) + p16(n))
        out += p32(self.reserved08) + p32(max(n - 1, 0)) + p16(0) + bytes(2 * n)
        pad_to(out, 4)
        desc_at = []
        for i, e in enumerate(self.entries):
            desc_at.append(len(out))
            out[0x12 + 2 * i:0x14 + 2 * i] = p16(len(out))
            out += bytes(16) + p16(self._hash(e)) + e.name.encode('ascii') + b'\0'
            pad_to(out, 4)
        data_start = align(len(out), self.data_alignment)
        if data_start > 0xFFFF:
            raise ValueError('ALAR3 descriptor area exceeds 64 KiB')
        out[0x10:0x12] = p16(data_start)
        for i, e in enumerate(self.entries):
            pad_to(out, self.data_alignment)
            off = len(out)
            out += e.data
            p = desc_at[i]
            out[p:p + 16] = p32(e.id) + p32(off) + p32(len(e.data)) + p32(e.attributes)
        return bytes(out)


def parse(blob: bytes) -> Archive:
    return Archive.parse(blob)


def is_alar(blob: bytes) -> bool:
    return blob[:4] == MAGIC


def open_nested(blob: bytes) -> Archive:
    """Parse an archive that may itself be DSCP-wrapped."""
    return Archive.parse(dscp_unwrap(blob) if is_dscp(blob) else blob)
