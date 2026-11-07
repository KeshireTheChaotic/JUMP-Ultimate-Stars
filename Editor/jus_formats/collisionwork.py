"""Original ARM9 collision work-ID lookup and original flag contributions.

In arm9_main_0207d440.c: IDs below 0x100 use builtin ROM 0x0209FC2C
(id*20), while IDs at least 0x100 use the active actor's chr/col
table content base+(id-0x100)*20. This does not equate the work ID with
byte0 of the referenced record. Output is strictly read-only.

The 32-bit lookup masks below are verified against source ARM9
SHA256 6464c6e726cd536756476392bf21996ae7289d16e269863cd0b88c1703d09287;
the code ORs them into runtime work +0x14,+0x18,+0x1C for set bits
of record +0x08. Subsequent branches still modify runtime flags.
"""
from __future__ import annotations
from dataclasses import dataclass

AUTHORED_WORK_BASE = 0x100
COL_RECORD_STRIDE = 0x14
BUILTIN_RECORDS_BASE_ADDRESS = 0x0209FC2C
MASK_LUT_ADDRESSES = (0x0209FD44, 0x0209FDC4, 0x0209FE44)

COL_FLAG_WORK_MASKS = (
    (
        0x04000000, 0x08000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x01000000, 0x00000000, 0x02000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
    ),
    (
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000001, 0x00000008, 0x00000010,
        0x00000002, 0x00000004, 0x00000040, 0x00000080,
        0x00000000, 0x00000200, 0x00000000, 0x00000000,
        0x00000000, 0x00000400, 0x00001000, 0x00002000,
        0x00010000, 0x00020000, 0x00040000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
    ),
    (
        0x00000000, 0x689CFF00, 0x10000000, 0x20000000,
        0x30000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000700,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
    ),

)

@dataclass(frozen=True)
class CollisionWorkAddress:
    work_id: int
    source: str                # "builtin" or "chr/col"
    address_or_offset: int     # ROM addr or chr/col-relative byte offset
    record_index: int | None  # present only for authored records


def resolve_collision_work(work_id: int, col_record_count: int) -> CollisionWorkAddress:
    """Original table addressing. Raise on an unbacked authored work ID."""
    if not 0 <= work_id <= 0xFFFF:
        raise ValueError(f"Collision work ID outside unsigned 16-bit range: {work_id}")
    if col_record_count < 0:
        raise ValueError("Negative collision record count")
    if work_id < AUTHORED_WORK_BASE:
        return CollisionWorkAddress(
            work_id, "builtin",
            BUILTIN_RECORDS_BASE_ADDRESS + work_id * COL_RECORD_STRIDE,
            None)
    index = work_id - AUTHORED_WORK_BASE
    if index >= col_record_count:
        raise IndexError(f"CollisionType 0x{work_id:04X} addresses chr/col "
                         f"index {index}, but the source has {col_record_count} records")
    return CollisionWorkAddress(work_id, "chr/col",
                                index * COL_RECORD_STRIDE, index)


def col_flag_work_contributions(col_flags08: int) -> tuple[int, int, int]:
    """OR contributions of original col+0x08 bits to runtime work words."""
    if not 0 <= col_flags08 <= 0xFFFFFFFF:
        raise ValueError("chr/col +0x08 must be u32")
    words = [0, 0, 0]
    for bit in range(32):
        if (col_flags08 >> bit) & 1:
            for word_index in range(3):
                words[word_index] |= COL_FLAG_WORK_MASKS[word_index][bit]
    return tuple(words)


@dataclass(frozen=True)
class RuntimeHitRect:
    center_x: int
    center_y: int
    half_width: int
    half_height: int


def collision_rect_runtime(rect: tuple[int, int, int, int], *,
                           hflip: bool = False, vflip: bool = False) -> RuntimeHitRect:
    """ARM9 02079E40 four-s16 collision bounds to stored center/half-extents.

    Input tuple is original ALMT CollisionRectN (x0,y0,x1,y1).
    Runtime converts endpoints with C signed /2 (truncation toward zero);
    flips affect center coordinates, not the half-extents. This is a
    *local* rectangle conversion, not final global physics collision.
    """
    if len(rect) != 4 or any(not -32768 <= v <= 32767 for v in rect):
        raise ValueError('CollisionRect must have four signed 16-bit endpoints')
    x0,y0,x1,y1 = rect
    def half(n: int) -> int:
        return n // 2 if n >= 0 else -((-n) // 2)
    return RuntimeHitRect(
        -half(x0+x1) if hflip else half(x0+x1),
        -half(y0+y1) if vflip else half(y0+y1),
        half(x1-x0), half(y1-y0))
