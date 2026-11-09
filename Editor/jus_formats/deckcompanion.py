"""JUS deck/pNNN.bin 64-byte companion record, byte-preserving read/write.

This is NOT the separate 92-byte Koma-slot deck asset. Original ROM ARM9
FUN_02070B5C copies these 0x40 bytes; active runtime records are 0x4C
bytes and gain 12 non-file bytes. Meaning of authored +0x34..+0x3F
metadata is not assumed from variable raw numbers.
"""
from __future__ import annotations

from dataclasses import dataclass
from struct import unpack_from


@dataclass(frozen=True)
class DeckCompanion:
    raw: bytes

    @classmethod
    def parse(cls, data: bytes) -> "DeckCompanion":
        if len(data) != 0x40:
            raise ValueError(f"Expected exactly 64 bytes; got {len(data)}")
        instance=cls(bytes(data))
        # Strictly validate without replacing malformed Japanese/UTF-16.
        _=instance.name
        _=instance.comment
        return instance

    @property
    def name(self) -> str:
        name=self.raw[:20]
        for p in range(0,20,2):
            if name[p:p+2] == b"\0\0":
                name=name[:p]
                break
        return name.decode("utf-16-le","strict")

    @property
    def comment(self) -> str:
        return self.raw[20:52].split(b"\0",1)[0].decode("cp932","strict")

    @property
    def profile_name_index(self) -> int:
        """Byte +0x34: index passed to main 02075788 (bin/pname.bin)."""
        return self.raw[0x34]

    @property
    def location_index(self) -> int:
        """Byte +0x35: index passed to main 02075678 (bin/location.bin)."""
        return self.raw[0x35]

    @property
    def runtime_status_byte(self) -> int:
        """Byte +0x36: mutable via main 0207267C, semantics unclassified."""
        return self.raw[0x36]

    @property
    def metadata_words(self) -> tuple[int,int,int]:
        return tuple(unpack_from("<3I",self.raw,52))

    @property
    def metadata_bytes(self) -> tuple[int,...]:
        return tuple(self.raw[52:64])

    def build(self) -> bytes:
        return self.raw

    def replace_name(self, value: str) -> "DeckCompanion":
        if value == self.name:
            return self  # Preserve noncanonical original padding on no-op edits.
        if "\0" in value:raise ValueError("Embedded NUL not allowed")
        encoded=value.encode("utf-16-le","strict")
        if encoded.decode("utf-16-le","strict") != value or len(encoded)+2>20:
            raise ValueError("Name must fit into 20-byte UTF-16LE field with terminator")
        blob=bytearray(self.raw)
        blob[:20]=(encoded+b"\0\0").ljust(20,b"\0")
        return type(self).parse(bytes(blob))

    def replace_comment(self, value: str) -> "DeckCompanion":
        if value == self.comment:
            return self  # Keep original CP932 suffix bytes without normalization.
        if "\0" in value:raise ValueError("Embedded NUL not allowed")
        encoded=value.encode("cp932","strict")
        if encoded.decode("cp932","strict") != value or len(encoded)+1>32:
            raise ValueError("Comment must fit into 32-byte CP932 field with terminator")
        blob=bytearray(self.raw)
        blob[20:52]=(encoded+b"\0").ljust(32,b"\0")
        return type(self).parse(bytes(blob))

    def replace_metadata_byte(self, offset: int, value: int) -> "DeckCompanion":
        """Raw 12-byte tail field; no inferred user-facing enum/meaning."""
        if not (0x34<=offset<0x40 and 0<=value<=255):
            raise ValueError("Metadata offset 0x34..0x3F and u8 value required")
        blob=bytearray(self.raw)
        blob[offset]=value
        return type(self).parse(bytes(blob))

    def to_dict(self) -> dict:
        return {
            "format":"deck-companion-64",
            "name_utf16le":self.name,
            "comment_cp932":self.comment,
            "profile_name_index":self.profile_name_index,
            "location_index":self.location_index,
            "status_byte_36_unclassified":self.runtime_status_byte,
            "metadata_u32":[f"0x{x:08X}" for x in self.metadata_words],
            "metadata_raw12":self.raw[52:64].hex(),
            "engine_metadata_semantics":"partially traced; keep numeric/raw",
        }


def parse(data: bytes) -> DeckCompanion:
    return DeckCompanion.parse(data)
