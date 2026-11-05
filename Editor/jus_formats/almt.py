"""ALMT v2 animation/move tables: parse, edit and rebuild.

Layout::

    +0x00 'ALMT' u8 version(2) u8 flags u8 node_count u8 move_count
    +0x08 u8 field_count, 3 reserved bytes
    +0x0C char node_name[node_count][4]
          u32 move_offset[move_count]
          u16 field_name_offset[field_count]   -> NUL string, preceded by
                                                  u16 resource_hash(name)
          (strings packed back to back, then zero padding to 4)
    move (4-byte aligned, contiguous):
          u32 id, u16 duration, u8 fps, u8 flags,
          u16 first_chunk + 0x20, u16 chunk_delta[node_count-1] (0 = no chunk)
          node chunk: u8 static_count, u8 keyed_count, u8 field_ref[n], pad to 2,
                      u16 body_offset[n] (relative to chunk), bodies
          static body: value (width bytes, padded to 2)
          keyed body:  {u16 tick, value (padded to 2)}* u16 0xFFFF

Value widths come from the ARM9 field handlers (see ``FIELD_WIDTHS``).
Fields of unknown width and ``NoteTrack`` bodies are carried as opaque raw
bytes.  Every track keeps the exact bytes it was read from so unedited data
rebuilds byte-identically; edited tracks are re-encoded canonically.
"""
from __future__ import annotations

import re
import struct
from dataclasses import dataclass, field

from .binary import p16, p32, pad_to, u16, u32
from .hashes import resource_hash

MAGIC = b'ALMT'

FIELD_WIDTHS = {
    'BoundsIndex': 2, 'ParentLink': 1, 'TextureID': 4, 'GenerateID': 4,
    'Marker': 2, '2DPos': 4, 'DrawPrio': 4, 'Alpha': 4, 'EffectFlags': 2,
    'Position': 12, 'Scale': 12, '2DRot': 2, 'LifeType': 2,
    'PatternNo': 2, 'HFlip': 1, 'VFlip': 1, 'Disp': 1,
    'ZWriteEnable': 1, 'ZTestEnable': 1, 'BlendMode': 1, 'Color': 16,
}
COLLISION_RE = re.compile(r'^Collision(Type|Enable|Rect)(\d+)$')
OPAQUE_FIELDS = {'NoteTrack'}
END = 0xFFFF

# Runtime semantics traced in the ARM9 animation player (FUN_0201F11C,
# FUN_0201BDEC, FUN_0201E1E4, FUN_0201F7EC, FUN_02016220):
MOVE_FLAG_LOOP = 0x01          # move flags bit 0: wrap at duration, else end + next queued move
FPS_UNUSED_NOTE = 'fps byte is not read by the player (60 in every shipped move)'
FIXED_20_12 = {'DrawPrio', 'Alpha'}      # 0x1000 = 1.0
FIELD_NOTES = {
    'BoundsIndex': 'DSTX frame index of the node (0xFFFF = none)',
    'TextureID': '24-bit resource id of the DSTX sprite',
    'GenerateID': 'spawns move <id> when playback lands exactly on the key tick (0 = nothing); '
                  'high word 0x01-0x1A character tables, 0x21/0x22/0x23 efc/comm_a/b/c',
    'Marker': 'marker values are labels usable by the seek dispatcher; 0xFF80-0xFF8F auto-jump to label 0xFF00|n on change',
    'ParentLink': 'boolean (stored as object+0x78 != 0)',
    '2DPos': 'x, y offset in pixels',
    'DrawPrio': '20.12 fixed point',
    'Alpha': '20.12 fixed point (0x1000 = opaque)',
    'NoteTrack': 'timed battle commands (see jus_formats.notetrack)',
}
# Keyed values hold until the next key (step); a field reference with bit 0x80
# would select an interpolator but none of the shipped files use it.


def field_width(name: str) -> int | None:
    if name in OPAQUE_FIELDS:
        return None
    if name in FIELD_WIDTHS:
        return FIELD_WIDTHS[name]
    m = COLLISION_RE.match(name)
    if m:
        return 8 if m.group(1) == 'Rect' else 2
    return None


def value_kind(name: str) -> str:
    """'int', 's16x2', 's16x4' or 'u32xN' — how values are represented."""
    if name == '2DPos':
        return 's16x2'
    if name.startswith('CollisionRect'):
        return 's16x4'
    if name in ('Position', 'Scale', 'Color'):
        return f'u32x{FIELD_WIDTHS[name] // 4}'
    return 'int'


def decode_value(name: str, raw: bytes):
    kind = value_kind(name)
    if kind == 's16x2':
        return list(struct.unpack('<hh', raw))
    if kind == 's16x4':
        return list(struct.unpack('<hhhh', raw))
    if kind.startswith('u32x'):
        return list(struct.unpack('<' + 'I' * (len(raw) // 4), raw))
    return int.from_bytes(raw, 'little')


def encode_value(name: str, value) -> bytes:
    width = field_width(name)
    kind = value_kind(name)
    if kind == 's16x2':
        return struct.pack('<hh', *value)
    if kind == 's16x4':
        return struct.pack('<hhhh', *value)
    if kind.startswith('u32x'):
        return struct.pack('<' + 'I' * (width // 4), *[v & 0xFFFFFFFF for v in value])
    return (int(value) & ((1 << (8 * width)) - 1)).to_bytes(width, 'little')


def _even(n: int) -> int:
    return n + (n & 1)


@dataclass
class Key:
    tick: int
    value: object


@dataclass
class Track:
    """One field of one node: a static value or a keyed (tick, value) list."""
    field: str
    keyed: bool
    value: object = None            # static value
    keys: list[Key] = field(default_factory=list)
    raw: bytes | None = None        # exact original body (incl. trailing pad)
    opaque: bool = False            # body cannot be decoded/re-encoded
    dirty: bool = False             # set when value/keys were edited

    def canonical(self) -> bytes:
        if self.opaque:
            if self.raw is None:
                raise ValueError(f'Opaque track {self.field} has no raw bytes')
            return self.raw
        width = field_width(self.field)
        if not self.keyed:
            body = encode_value(self.field, self.value)
            return body + bytes(_even(width) - width)
        out = bytearray()
        for k in self.keys:
            body = encode_value(self.field, k.value)
            out += p16(k.tick) + body + bytes(_even(width) - width)
        out += p16(END)
        return bytes(out)

    def encoded(self) -> bytes:
        if self.raw is not None and not self.dirty:
            return self.raw
        return self.canonical()

    def touch(self) -> None:
        self.dirty = True


@dataclass
class NodeAnim:
    tracks: list[Track] = field(default_factory=list)   # statics first, then keyed

    @property
    def static_tracks(self):
        return [t for t in self.tracks if not t.keyed]

    @property
    def keyed_tracks(self):
        return [t for t in self.tracks if t.keyed]

    def track(self, name: str) -> Track | None:
        return next((t for t in self.tracks if t.field == name), None)


@dataclass
class Move:
    id: int
    duration: int
    fps: int = 60
    flags: int = 0
    nodes: list[NodeAnim | None] = field(default_factory=list)
    raw: bytes | None = None       # original record (incl. pad) for unedited moves
    dirty: bool = False

    def touch(self) -> None:
        self.dirty = True


@dataclass
class AlmtFile:
    version: int = 2
    flags: int = 0
    node_names: list[str] = field(default_factory=list)
    field_names: list[str] = field(default_factory=list)
    field_hashes: list[int] = field(default_factory=list)
    moves: list[Move] = field(default_factory=list)
    strings_raw: bytes | None = None     # original string area (exactness)

    # ----------------------------------------------------------- helpers
    def field_index(self, name: str, create: bool = True) -> int:
        if name in self.field_names:
            return self.field_names.index(name)
        if not create:
            raise KeyError(name)
        if len(self.field_names) >= 255:
            raise ValueError('ALMT field table is full')
        self.field_names.append(name)
        self.field_hashes.append(resource_hash(name))
        self.strings_raw = None
        return len(self.field_names) - 1

    def move_by_id(self, move_id: int) -> Move | None:
        return next((m for m in self.moves if m.id == move_id), None)

    # ----------------------------------------------------------- parse
    @classmethod
    def parse(cls, blob: bytes) -> 'AlmtFile':
        if blob[:4] != MAGIC or len(blob) < 12:
            raise ValueError('Not an ALMT file')
        version, flags = blob[4], blob[5]
        if version != 2:
            raise ValueError(f'Unsupported ALMT version {version}')
        n_nodes, n_moves, n_fields = blob[6], blob[7], blob[8]
        p = 12
        nodes = [blob[p + 4 * i:p + 4 * i + 4].decode('ascii', 'replace') for i in range(n_nodes)]
        p += 4 * n_nodes
        offsets = [u32(blob, p + 4 * i) for i in range(n_moves)]
        p += 4 * n_moves
        name_offs = [u16(blob, p + 2 * i) for i in range(n_fields)]
        p += 2 * n_fields
        names, hashes = [], []
        for off in name_offs:
            end = blob.find(b'\0', off)
            if end < 0:
                raise ValueError('Unterminated ALMT field name')
            names.append(blob[off:end].decode('ascii'))
            hashes.append(u16(blob, off - 2))
        first_move = offsets[0] if offsets else len(blob)
        obj = cls(version, flags, nodes, names, hashes, [], bytes(blob[p:first_move]))
        if offsets != sorted(offsets):
            raise ValueError('ALMT move offsets are not ascending')
        for i, off in enumerate(offsets):
            end = offsets[i + 1] if i + 1 < len(offsets) else len(blob)
            obj.moves.append(obj._parse_move(blob[off:end]))
        return obj

    def _parse_move(self, rec: bytes) -> Move:
        n_nodes = len(self.node_names)
        move = Move(u32(rec, 0), u16(rec, 4), rec[6], rec[7], [], bytes(rec))
        first = u16(rec, 8) - 0x20
        starts: list[int | None] = [first]
        cursor = first
        for k in range(n_nodes - 1):
            d = u16(rec, 10 + 2 * k)
            if d:
                cursor += d
                starts.append(cursor)
            else:
                starts.append(None)
        valid = sorted(s for s in starts if s is not None)
        for s in starts:
            if s is None:
                move.nodes.append(None)
                continue
            limit = next((v for v in valid if v > s), len(rec))
            move.nodes.append(self._parse_chunk(rec, s, limit))
        return move

    def _parse_chunk(self, rec: bytes, at: int, limit: int) -> NodeAnim:
        c1, c2 = rec[at], rec[at + 1]
        n = c1 + c2
        refs = rec[at + 2:at + 2 + n]
        offs_at = at + 2 + _even(n)
        offs = [u16(rec, offs_at + 2 * k) for k in range(n)]
        node = NodeAnim()
        for k, (ref, rel) in enumerate(zip(refs, offs)):
            start = at + rel
            later = [at + o for o in offs if o > rel]
            stop = min(later) if later else limit
            body = bytes(rec[start:stop])
            name = self.field_names[ref]
            node.tracks.append(self._decode_track(name, k >= c1, body))
        return node

    @staticmethod
    def _decode_track(name: str, keyed: bool, body: bytes) -> Track:
        tr = Track(name, keyed, raw=body)
        width = field_width(name)
        if width is None:
            tr.opaque = True
            return tr
        step = _even(width)
        try:
            if not keyed:
                tr.value = decode_value(name, body[:width])
            else:
                p = 0
                while True:
                    tick = u16(body, p)
                    if tick == END:
                        break
                    tr.keys.append(Key(tick, decode_value(name, body[p + 2:p + 2 + width])))
                    p += 2 + step
        except (struct.error, IndexError, ValueError):
            tr.opaque = True
            return tr
        canon = tr.canonical()
        # exact = canonical bytes followed only by zero padding
        if body[:len(canon)] != canon or any(body[len(canon):]):
            tr.opaque = True
        return tr

    # ----------------------------------------------------------- build
    def build(self) -> bytes:
        n_nodes, n_moves, n_fields = len(self.node_names), len(self.moves), len(self.field_names)
        if max(n_nodes, n_moves, n_fields) > 255:
            raise ValueError('ALMT counts are limited to 255')
        out = bytearray(MAGIC + bytes((self.version, self.flags, n_nodes, n_moves, n_fields, 0, 0, 0)))
        for name in self.node_names:
            out += name.encode('ascii')[:4].ljust(4, b' ')
        moves_at = len(out)
        out += bytes(4 * n_moves)
        names_at = len(out)
        out += bytes(2 * n_fields)
        strings_at = len(out)
        if self.strings_raw is not None:
            out += self.strings_raw
            # recover name offsets from the preserved string block
            p = strings_at
            for i in range(n_fields):
                p += 2
                out[names_at + 2 * i:names_at + 2 * i + 2] = p16(p)
                p = out.index(b'\0', p) + 1
        else:
            for i, name in enumerate(self.field_names):
                h = self.field_hashes[i] if i < len(self.field_hashes) else resource_hash(name)
                out += p16(h)
                out[names_at + 2 * i:names_at + 2 * i + 2] = p16(len(out))
                out += name.encode('ascii') + b'\0'
            pad_to(out, 4)
        for i, move in enumerate(self.moves):
            pad_to(out, 4)
            out[moves_at + 4 * i:moves_at + 4 * i + 4] = p32(len(out))
            out += self._build_move(move)
        return bytes(out)

    def _move_is_dirty(self, move: Move) -> bool:
        if move.dirty or move.raw is None:
            return True
        return any(t.dirty for n in move.nodes if n for t in n.tracks)

    def _build_move(self, move: Move) -> bytes:
        if not self._move_is_dirty(move):
            return move.raw
        n_nodes = len(self.node_names)
        if len(move.nodes) != n_nodes:
            raise ValueError(f'Move {move.id:#x}: {len(move.nodes)} node slots, ALMT has {n_nodes}')
        if move.nodes and move.nodes[0] is None:
            raise ValueError(f'Move {move.id:#x}: the first node must have a chunk')
        head = 10 + 2 * (n_nodes - 1)
        rec = bytearray(p32(move.id) + p16(move.duration) + bytes((move.fps & 0xFF, move.flags & 0xFF)))
        rec += bytes(head - len(rec))
        prev = None
        for k, node in enumerate(move.nodes):
            if node is None:
                continue
            at = len(rec)
            if k == 0:
                rec[8:10] = p16(at + 0x20)
            else:
                rec[10 + 2 * (k - 1):12 + 2 * (k - 1)] = p16(at - prev)
            prev = at
            rec += self._build_chunk(node)
        pad_to(rec, 4)
        return bytes(rec)

    def _build_chunk(self, node: NodeAnim) -> bytes:
        statics = [t for t in node.tracks if not t.keyed]
        keyed = [t for t in node.tracks if t.keyed]
        if node.tracks != statics + keyed:
            node.tracks = statics + keyed
        ordered = statics + keyed
        n = len(ordered)
        if len(statics) > 255 or len(keyed) > 255:
            raise ValueError('Too many tracks on one node')
        chunk = bytearray((len(statics), len(keyed)))
        chunk += bytes(self.field_index(t.field) for t in ordered)
        pad_to(chunk, 2)
        offs_at = len(chunk)
        chunk += bytes(2 * n)
        for k, t in enumerate(ordered):
            body = t.encoded()
            chunk[offs_at + 2 * k:offs_at + 2 * k + 2] = p16(len(chunk))
            chunk += body
            pad_to(chunk, 2)
        return bytes(chunk)


def parse(blob: bytes) -> AlmtFile:
    return AlmtFile.parse(blob)


# --------------------------------------------------------------------------
# JSON-friendly conversion (used by packages and the editor)
# --------------------------------------------------------------------------

def track_to_dict(t: Track) -> dict:
    d = {'field': t.field, 'keyed': t.keyed}
    if t.opaque and t.field == 'NoteTrack':
        from .notetrack import NoteTrack
        try:
            nt = NoteTrack.parse(t.encoded())
            if nt.build() == t.encoded():
                d['notes'] = nt.to_list()
                if nt.tail:
                    d['tail'] = nt.tail.hex()
                return d
        except (ValueError, struct.error, IndexError):
            pass
    if t.opaque:
        d['raw'] = t.encoded().hex()
        return d
    if t.keyed:
        d['keys'] = [[k.tick, k.value] for k in t.keys]
    else:
        d['value'] = t.value
    pad = len(t.raw) - len(t.canonical()) if t.raw is not None and not t.dirty else 0
    if pad:
        d['pad'] = pad
    return d


def track_from_dict(d: dict) -> Track:
    t = Track(d['field'], bool(d['keyed']))
    if 'notes' in d:
        from .notetrack import NoteTrack
        t.opaque = True
        t.raw = NoteTrack.from_list(d['notes'], bytes.fromhex(d.get('tail', ''))).build()
        return t
    if 'raw' in d:
        t.opaque = True
        t.raw = bytes.fromhex(d['raw'])
        return t
    if t.keyed:
        t.keys = [Key(int(k[0]), k[1]) for k in d.get('keys', [])]
    else:
        t.value = d.get('value', 0)
    t.raw = t.canonical() + bytes(int(d.get('pad', 0)))
    return t


def move_to_dict(m: Move, node_names: list[str]) -> dict:
    return {'id': f'0x{m.id:08X}', 'duration': m.duration, 'fps': m.fps, 'flags': m.flags,
            'nodes': {node_names[i]: [track_to_dict(t) for t in n.tracks]
                      for i, n in enumerate(m.nodes) if n is not None}}


def move_from_dict(d: dict, node_names: list[str]) -> Move:
    m = Move(int(str(d['id']), 0), int(d['duration']), int(d.get('fps', 60)), int(d.get('flags', 0)))
    nodes = d.get('nodes', {})
    unknown = set(nodes) - set(node_names)
    if unknown:
        raise ValueError(f'Move {d["id"]}: unknown nodes {sorted(unknown)}')
    m.nodes = [NodeAnim([track_from_dict(t) for t in nodes[name]]) if name in nodes else None
               for name in node_names]
    m.dirty = True
    return m


def to_dict(f: AlmtFile) -> dict:
    return {'format': 'ALMT', 'version': f.version, 'flags': f.flags,
            'nodes': f.node_names, 'fields': f.field_names,
            'field_hashes': [f'0x{h:04X}' for h in f.field_hashes],
            'moves': [move_to_dict(m, f.node_names) for m in f.moves]}


def from_dict(d: dict) -> AlmtFile:
    f = AlmtFile(int(d.get('version', 2)), int(d.get('flags', 0)), list(d['nodes']),
                 list(d['fields']), [int(h, 0) for h in d.get('field_hashes', [])])
    if len(f.field_hashes) != len(f.field_names):
        f.field_hashes = [resource_hash(n) for n in f.field_names]
    f.moves = [move_from_dict(m, f.node_names) for m in d['moves']]
    for m in f.moves:   # make sure any new field names are registered
        for n in m.nodes:
            for t in (n.tracks if n else []):
                f.field_index(t.field)
    return f
