"""Original JUS stage camera (.cam) binary records.

Structural interpretation only. The 36 shipped files all encode a fixed
16-byte header plus 4 bytes per indexed point. The underlying runtime
camera origin/clamp/scroll semantics are NOT established here.

stage/stage.aar contains the 36 raw camera entries directly (not nested).
"""
from __future__ import annotations

from dataclasses import dataclass
from struct import error as StructError, pack, unpack_from


@dataclass(frozen=True)
class StageCamera:
    """Byte-exact camera record. Coordinates remain raw signed 16-bit words."""

    header_pairs: tuple[tuple[int, int], tuple[int, int], tuple[int, int]]
    mode: int
    vertices: tuple[tuple[int, int], ...]
    reserved: int = 0

    @classmethod
    def parse(cls, data: bytes) -> "StageCamera":
        if len(data) < 16:
            raise ValueError("Camera record shorter than 16-byte header")
        words = unpack_from("<6h", data, 0)
        mode, count, reserved = unpack_from("<BBH", data, 12)
        if count > 64 or len(data) != 16 + 4 * count:
            raise ValueError(
                f"Camera vertex data length/count mismatch: count={count}, bytes={len(data)}"
            )
        pairs = tuple((int(words[i]), int(words[i + 1])) for i in (0, 2, 4))
        coords = tuple(tuple(unpack_from("<hh", data, 16 + i * 4))
                       for i in range(count))
        return cls(pairs, mode, coords, reserved)

    def build(self) -> bytes:
        if len(self.header_pairs) != 3 or len(self.vertices) > 64:
            raise ValueError("Camera requires three header pairs and at most 64 vertices")
        if not (0 <= self.mode <= 255 and 0 <= self.reserved <= 65535):
            raise ValueError("Camera mode or reserved field is out of range")
        flat = [value for xy in self.header_pairs for value in xy]
        vertices = [value for xy in self.vertices for value in xy]
        try:
            return (pack("<6hBBH", *flat, self.mode, len(self.vertices), self.reserved)
                    + pack("<" + "h" * len(vertices), *vertices))
        except (OverflowError, ValueError, StructError) as exc:
            raise ValueError("Camera coordinate outside signed 16-bit range") from exc

    @property
    def raw_point_bounds(self) -> tuple[int, int, int, int]:
        """Bounding rectangle of stored raw coordinates, NOT a proven camera clamp."""
        if not self.vertices:
            raise ValueError('Camera record has no coordinate points')
        xs = [point[0] for point in self.vertices]
        ys = [point[1] for point in self.vertices]
        return min(xs), min(ys), max(xs), max(ys)

    @property
    def has_rectangular_outline(self) -> bool:
        """True for the exact corner sequence seen in 36/36 original files."""
        if len(self.vertices) not in (4, 5):
            return False
        a, b, c, d = self.vertices[:4]
        rectangle = a[0] == b[0] and b[1] == c[1] and c[0] == d[0] and d[1] == a[1]
        return rectangle and (len(self.vertices) == 4 or self.vertices[4] == a)

    def replace_vertex(self, index: int, x: int, y: int) -> "StageCamera":
        """Patch only the selected 4-byte point; do not invent polygon semantics."""
        if not 0 <= index < len(self.vertices):
            raise IndexError(index)
        vertices = list(self.vertices)
        vertices[index] = (x, y)
        return type(self)(self.header_pairs, self.mode, tuple(vertices), self.reserved)

    def replace_header_pair(self, index: int, x: int, y: int) -> 'StageCamera':
        """Patch a header signed pair only. Runtime camera meaning stays unknown."""
        if not 0 <= index < 3:
            raise IndexError('Camera header-pair index must be 0..2')
        pairs = list(self.header_pairs)
        pairs[index] = (x, y)
        updated = type(self)(tuple(pairs), self.mode, self.vertices, self.reserved)
        updated.build()  # validate signed-16 bounds before returning
        return updated

    def to_dict(self) -> dict:
        return {
            "format": "stage-camera",
            "byte_length": len(self.build()),
            "header_s16_pairs": [list(x) for x in self.header_pairs],
            "mode_u8": self.mode,
            "vertex_count_u8": len(self.vertices),
            "reserved_u16": self.reserved,
            "vertex_s16_pairs": [list(x) for x in self.vertices],
            "raw_point_bounds": list(self.raw_point_bounds) if self.vertices else None,
            "original_rectangular_outline": self.has_rectangular_outline,
            "semantics": "structural only: raw signed pairs, no runtime camera model",
        }


def parse(data: bytes) -> StageCamera:
    return StageCamera.parse(data)
