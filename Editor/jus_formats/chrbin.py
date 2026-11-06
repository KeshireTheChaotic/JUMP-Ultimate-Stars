"""Character gameplay tables from ChrBin.aar (``chr/<kind>/<character>.bin``).

Only record strides are established; field meanings are not.  Tables are
exposed as fixed-size records of little-endian words and always rebuild to
the stored bytes.

* ``chr/col``    20-byte records; ALMT ``CollisionType`` values 0x100+n select
                 record n.
* ``chr/shot``   32-byte records; the u32 at +0x0C often equals an ALMT move id.
* ``chr/effect`` 8-byte records; the u32 at +0x00 often equals an ALMT move id.
* ``chr/ai``     DSCP-wrapped; payload begins with ``AIPM``/``AIMV`` (opaque).
"""
from __future__ import annotations

from dataclasses import dataclass

from .binary import u16, u32

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

    def words16(self, i: int) -> tuple[int, ...]:
        r = self.record(i)
        return tuple(u16(r, k) for k in range(0, len(r) - 1, 2))

    def words32(self, i: int) -> tuple[int, ...]:
        r = self.record(i)
        return tuple(u32(r, k) for k in range(0, len(r) - 3, 4))

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


def signature(blob: bytes) -> str:
    return blob[:4].decode('ascii') if blob[:4] in (b'AIPM', b'AIMV') else 'opaque-binary'
