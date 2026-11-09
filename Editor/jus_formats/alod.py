"""ALOD node-description tables (read view + byte-exact pass-through).

Layout as far as established from the shipped files::

    +0x00 'ALOD' u8 version(2) u8 flags u8 node_count u8 field_count
    +0x08 8 reserved bytes
    +0x10 u16 offset[node_count + field_count (+1 when flags & 0x40)]
    node record: char name[4], char class[4], u32 property_count,
                 property_count * (u32 descriptor, 4-byte value)
    field names: NUL-terminated strings (e.g. "ParentNodeID")

The baseline Move Lab read ``u16 @ record+8`` as a parent index; that word
is the property count.  The ParentNodeID property value is a 4-character
node name.  Property descriptors are kept opaque.  Because the semantics are
partial, :meth:`AlodFile.build` always reproduces the stored bytes, and the
package layer carries ALOD files unmodified.
"""
from __future__ import annotations

from dataclasses import dataclass, field

from .binary import u16, u32

MAGIC = b'ALOD'


@dataclass
class AlodNode:
    name: str
    kind: str
    properties: list[tuple[int, bytes]] = field(default_factory=list)

    @property
    def parent(self) -> str | None:
        for desc, value in self.properties:
            text = value.decode('ascii', 'replace')
            if desc == 0x10 and text.strip('\0'):
                return text
        return None


@dataclass
class AlodFile:
    raw: bytes
    version: int = 2
    flags: int = 0
    nodes: list[AlodNode] = field(default_factory=list)
    field_names: list[str] = field(default_factory=list)

    @classmethod
    def parse(cls, blob: bytes) -> 'AlodFile':
        if blob[:4] != MAGIC or len(blob) < 0x10:
            raise ValueError('Not an ALOD file')
        obj = cls(bytes(blob), blob[4], blob[5])
        n_nodes, n_fields = blob[6], blob[7]
        offs = [u16(blob, 0x10 + 2 * i) for i in range(n_nodes + n_fields)]
        for off in offs[:n_nodes]:
            if off + 12 > len(blob):
                continue
            count = u32(blob, off + 8)
            props = []
            p = off + 12
            for _ in range(min(count, 64)):
                if p + 8 > len(blob):
                    break
                props.append((u32(blob, p), bytes(blob[p + 4:p + 8])))
                p += 8
            obj.nodes.append(AlodNode(blob[off:off + 4].decode('ascii', 'replace'),
                                      blob[off + 4:off + 8].decode('ascii', 'replace'), props))
        for off in offs[n_nodes:]:
            end = blob.find(b'\0', off)
            if end > off:
                obj.field_names.append(blob[off:end].decode('ascii', 'replace'))
        return obj

    def build(self) -> bytes:
        return self.raw

    def nonstandard_parent_links(self) -> list[tuple[str, str, str]]:
        """Detect hierarchy edges absent from all 1,247 shipped ALOD files.

        The shipped corpus contains 1,078 GN -> SP edges, no other parent
        class pairs. A warning here is NOT proof the runtime rejects an edge.
        """
        kinds = {node.name: node.kind for node in self.nodes}
        result = []
        for node in self.nodes:
            if node.parent and (node.kind, kinds.get(node.parent)) != ('GN  ', 'SP  '):
                result.append((node.name, node.parent, kinds.get(node.parent, 'missing')))
        return result

    def replace_parent(self, node_name: str, parent_name: str) -> 'AlodFile':
        """Patch only a proven ParentNodeID 4-byte value in its original location.

        All 1,247 original ALOD files were surveyed: 1,078 properties have
        descriptor 0x10 and ASCII four-character parent node names. The
        runtime legality of arbitrary reparenting is NOT verified; this method
        preserves all other record bytes and refuses missing nodes.
        """
        if 'ParentNodeID' not in self.field_names:
            raise ValueError('ALOD has no declared ParentNodeID field')
        names = [n.name for n in self.nodes]
        if node_name not in names or parent_name not in names or node_name == parent_name:
            raise ValueError('Both node and a distinct parent must exist in this ALOD')
        index = names.index(node_name)
        offset = u16(self.raw, 0x10 + 2 * index)
        count = u32(self.raw, offset + 8)
        if count > 64 or offset + 12 + 8 * count > len(self.raw):
            raise ValueError('Invalid ALOD property table')
        try:
            encoded = parent_name.encode('ascii', 'strict')
        except UnicodeError as exc:
            raise ValueError('ALOD node names must be ASCII') from exc
        if len(encoded) != 4:
            raise ValueError('ALOD parent node names must be exactly four bytes')
        for i in range(count):
            p = offset + 12 + 8 * i
            if u32(self.raw, p) == 0x10:
                patched = bytearray(self.raw)
                patched[p + 4:p + 8] = encoded
                return type(self).parse(bytes(patched))
        raise ValueError(f'Node {node_name} has no ParentNodeID property')

    def to_dict(self) -> dict:
        return {'format': 'ALOD', 'version': self.version, 'flags': self.flags,
                'fields': self.field_names,
                'nodes': [{'name': n.name, 'class': n.kind, 'parent': n.parent,
                           'properties': [[f'0x{d:08X}', v.hex()] for d, v in n.properties]}
                          for n in self.nodes]}


def parse(blob: bytes) -> AlodFile:
    return AlodFile.parse(blob)
