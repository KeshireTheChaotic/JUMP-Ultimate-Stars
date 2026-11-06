"""Bounded little-endian primitives, Nintendo LZ10 codec and the DSCP wrapper.

No application, GUI or imaging dependencies.  Every function works on
``bytes``/``bytearray`` and raises ``ValueError`` on malformed input.
"""
from __future__ import annotations

import struct

MAX_UNPACK = 64 * 1024 * 1024


def u8(buf: bytes, offset: int) -> int:
    return buf[offset]


def u16(buf: bytes, offset: int) -> int:
    return struct.unpack_from('<H', buf, offset)[0]


def s16(buf: bytes, offset: int) -> int:
    return struct.unpack_from('<h', buf, offset)[0]


def u32(buf: bytes, offset: int) -> int:
    return struct.unpack_from('<I', buf, offset)[0]


def p16(value: int) -> bytes:
    return struct.pack('<H', value & 0xFFFF)


def p32(value: int) -> bytes:
    return struct.pack('<I', value & 0xFFFFFFFF)


def align(value: int, boundary: int) -> int:
    return (value + boundary - 1) // boundary * boundary


def pad_to(buf: bytearray, boundary: int, fill: int = 0) -> None:
    """Append ``fill`` bytes until ``len(buf)`` is a multiple of ``boundary``."""
    while len(buf) % boundary:
        buf.append(fill)


def checked_slice(buf: bytes, offset: int, length: int) -> bytes:
    if offset < 0 or length < 0 or offset + length > len(buf):
        raise ValueError(f'Out-of-range slice +0x{offset:X} ({length} bytes)')
    return bytes(buf[offset:offset + length])


def cstring(buf: bytes, offset: int, limit: int = 512) -> str:
    end = buf.find(b'\0', offset, min(len(buf), offset + limit))
    if end < 0:
        raise ValueError(f'Unterminated string at +0x{offset:X}')
    return buf[offset:end].decode('ascii', 'replace')


# ---------------------------------------------------------------------------
# LZ10 (GBA/DS BIOS LZ77, type 0x10)
# ---------------------------------------------------------------------------

def lz10_decompress(buf: bytes, limit: int = MAX_UNPACK) -> bytes:
    """Decode an LZ10 stream (header byte 0x10 + 24-bit size)."""
    data, _ = lz10_decompress_ex(buf, limit)
    return data


def lz10_decompress_ex(buf: bytes, limit: int = MAX_UNPACK) -> tuple[bytes, int]:
    """Decode an LZ10 stream and return ``(data, bytes_consumed)``."""
    if len(buf) < 4 or buf[0] != 0x10:
        raise ValueError('Not an LZ10 stream')
    size = buf[1] | (buf[2] << 8) | (buf[3] << 16)
    if size > limit:
        raise ValueError('LZ10 output exceeds safety limit')
    out = bytearray()
    p = 4
    n = len(buf)
    while len(out) < size:
        if p >= n:
            raise ValueError('Truncated LZ10 flag byte')
        flags = buf[p]
        p += 1
        for bit in range(7, -1, -1):
            if len(out) >= size:
                break
            if flags & (1 << bit):
                if p + 2 > n:
                    raise ValueError('Truncated LZ10 back-reference')
                a, b = buf[p], buf[p + 1]
                p += 2
                length = (a >> 4) + 3
                distance = (((a & 15) << 8) | b) + 1
                if distance > len(out):
                    raise ValueError('LZ10 back-reference before start of output')
                start = len(out) - distance
                for k in range(min(length, size - len(out))):
                    out.append(out[start + k])
            else:
                if p >= n:
                    raise ValueError('Truncated LZ10 literal')
                out.append(buf[p])
                p += 1
    return bytes(out), p


def lz10_compress(data: bytes, *, min_distance: int = 2, max_chain: int = 96,
                  pad: bool = True) -> bytes:
    """Encode ``data`` as LZ10.

    ``min_distance=2`` keeps the stream safe for 16-bit VRAM-destination
    decompression (the DS BIOS "VRAM" variant cannot copy from distance 1).
    The encoder is greedy with one-step lazy matching over 3-byte hash
    chains; it is compatible with any conforming decoder.  The output is
    zero-padded to a 4-byte multiple when ``pad`` is true, matching the
    convention of the original files.
    """
    data = bytes(data)
    size = len(data)
    if size > 0xFFFFFF:
        raise ValueError('LZ10 input exceeds 16 MiB')
    out = bytearray((0x10, size & 0xFF, (size >> 8) & 0xFF, (size >> 16) & 0xFF))
    head: dict[int, int] = {}
    prev = [-1] * size

    def insert(pos: int) -> None:
        if pos + 2 < size:
            key = data[pos] | (data[pos + 1] << 8) | (data[pos + 2] << 16)
            prev[pos] = head.get(key, -1)
            head[key] = pos

    def find(pos: int) -> tuple[int, int]:
        if pos + 2 >= size:
            return 0, 0
        key = data[pos] | (data[pos + 1] << 8) | (data[pos + 2] << 16)
        cand = head.get(key, -1)
        best_len = 0
        best_dist = 0
        max_len = min(18, size - pos)
        chain = 0
        while cand >= 0 and chain < max_chain:
            dist = pos - cand
            if dist > 4096:
                break
            if dist >= min_distance:
                length = 3
                while length < max_len and data[cand + length] == data[pos + length]:
                    length += 1
                if length > best_len:
                    best_len, best_dist = length, dist
                    if length == max_len:
                        break
            cand = prev[cand]
            chain += 1
        return best_len, best_dist

    pos = 0
    while pos < size:
        flag_at = len(out)
        out.append(0)
        flags = 0
        for bit in range(7, -1, -1):
            if pos >= size:
                break
            length, dist = find(pos)
            if length >= 3 and pos + 1 < size:
                insert(pos)
                nlen, _ = find(pos + 1)
                if nlen > length + 1:
                    out.append(data[pos])
                    pos += 1
                    continue
                # match already inserted for pos
                flags |= 1 << bit
                out.append(((length - 3) << 4) | ((dist - 1) >> 8))
                out.append((dist - 1) & 0xFF)
                for k in range(1, length):
                    insert(pos + k)
                pos += length
                continue
            if length >= 3:
                flags |= 1 << bit
                out.append(((length - 3) << 4) | ((dist - 1) >> 8))
                out.append((dist - 1) & 0xFF)
                for k in range(length):
                    insert(pos + k)
                pos += length
            else:
                insert(pos)
                out.append(data[pos])
                pos += 1
        out[flag_at] = flags
    if pad:
        pad_to(out, 4)
    return bytes(out)


# ---------------------------------------------------------------------------
# DSCP wrapper ("DSCP" + LZ10 stream)
# ---------------------------------------------------------------------------

DSCP_MAGIC = b'DSCP'


def is_dscp(blob: bytes) -> bool:
    return blob[:4] == DSCP_MAGIC


def dscp_unwrap(blob: bytes) -> bytes:
    if not is_dscp(blob):
        raise ValueError('Not a DSCP container')
    return lz10_decompress(blob[4:])


def dscp_wrap(data: bytes) -> bytes:
    return DSCP_MAGIC + lz10_compress(data)
