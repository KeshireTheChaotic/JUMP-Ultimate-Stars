"""Fast, data-independent tests for jus_formats."""
from __future__ import annotations

import os
import random
import struct
import sys
import unittest
from pathlib import Path

HERE = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(HERE))

from jus_formats import alar, almt, dsig, dstx, sprite  # noqa: E402
from jus_formats.binary import dscp_unwrap, dscp_wrap, lz10_compress, lz10_decompress  # noqa: E402
from jus_formats.hashes import resource_hash, rotl_hash  # noqa: E402


class Lz10(unittest.TestCase):
    def test_roundtrip(self):
        rnd = random.Random(1)
        for n in (0, 1, 2, 3, 17, 4096, 20000):
            data = bytes(rnd.choice(b'\0\0\0\x11\x22ABC') for _ in range(n))
            packed = lz10_compress(data)
            self.assertEqual(lz10_decompress(packed), data)
            self.assertEqual(len(packed) % 4, 0)

    def test_vram_safe_distance(self):
        data = b'\x55' * 300
        packed = lz10_compress(data)
        p, out = 4, 0
        while out < len(data):
            flags = packed[p]
            p += 1
            for bit in range(7, -1, -1):
                if out >= len(data):
                    break
                if flags & (1 << bit):
                    a, b = packed[p], packed[p + 1]
                    self.assertGreaterEqual((((a & 15) << 8) | b) + 1, 2)
                    out += (a >> 4) + 3
                    p += 2
                else:
                    out += 1
                    p += 1
        self.assertEqual(dscp_unwrap(dscp_wrap(data)), data)


class Hashes(unittest.TestCase):
    def test_known_values(self):
        self.assertEqual(resource_hash('BoundsIndex'), 0xE1D5)
        self.assertEqual(resource_hash('chr/bb_b_01'), 0xE113)
        self.assertEqual(rotl_hash('bb_b_01'), 0x130D)
        self.assertEqual(rotl_hash('jyocyu_efe_a'), 0x2709)


class Archives(unittest.TestCase):
    def test_alar2_build_parse(self):
        arc = alar.Archive(2, 3)
        arc.add(alar.Entry('x.dtx', b'DSTX' + bytes(7), 0x40123400))
        arc.add(alar.Entry('x.amt', b'ALMT', 0x41123400, 0xC0000003))
        blob = arc.build()
        again = alar.Archive.parse(blob)
        self.assertEqual(again.names(), ['x.dtx', 'x.amt'])
        self.assertEqual((again.id_low, again.id_high), (0x123400, 0x123402))
        self.assertEqual(again.entries[0].name_hash, rotl_hash('x'))
        self.assertEqual(again.build(), blob)

    def test_alar3_resource_hash(self):
        arc = alar.Archive(3, 0x45)
        arc.add(alar.Entry('chr/zz_b_01.aar', dscp_wrap(b'payload')))
        again = alar.Archive.parse(arc.build())
        e = again.entries[0]
        self.assertEqual(e.name_hash, resource_hash('chr/zz_b_01'))
        self.assertEqual(e.payload(), b'payload')
        self.assertEqual(e.id, 0x47000000)


def _sample_almt() -> almt.AlmtFile:
    f = almt.AlmtFile(node_names=['SP01', 'GN01'])
    for name in ('BoundsIndex', 'TextureID', '2DPos', 'CollisionRect0', 'ParentLink'):
        f.field_index(name)
    m = almt.Move(0x084100, 30, 60, 1, [
        almt.NodeAnim([almt.Track('TextureID', False, 0x084100),
                       almt.Track('BoundsIndex', True, keys=[almt.Key(0, 1), almt.Key(10, 2)]),
                       almt.Track('CollisionRect0', True, keys=[almt.Key(0, [-1, -2, 3, 4])])]),
        almt.NodeAnim([almt.Track('ParentLink', False, 0), almt.Track('2DPos', True, keys=[almt.Key(5, [3, -4])])])])
    f.moves.append(m)
    return f


class Almt(unittest.TestCase):
    def test_build_parse_edit(self):
        blob = _sample_almt().build()
        f = almt.parse(blob)
        self.assertEqual(f.build(), blob)
        m = f.moves[0]
        self.assertEqual(m.nodes[0].track('BoundsIndex').keys[1].value, 2)
        self.assertEqual(m.nodes[1].track('2DPos').keys[0].value, [3, -4])
        tr = m.nodes[0].track('BoundsIndex')
        tr.keys.append(almt.Key(20, 7))
        tr.touch()
        f2 = almt.parse(f.build())
        self.assertEqual([k.value for k in f2.moves[0].nodes[0].track('BoundsIndex').keys], [1, 2, 7])
        self.assertEqual(f2.field_hashes[0], resource_hash('BoundsIndex'))

    def test_json_roundtrip(self):
        f = almt.parse(_sample_almt().build())
        g = almt.from_dict(almt.to_dict(f))
        self.assertEqual(g.build(), f.build())


class NoteTracks(unittest.TestCase):
    def test_build_parse(self):
        from jus_formats import notetrack
        nt = notetrack.NoteTrack([
            notetrack.NoteKey(0, [notetrack.Command.from_values(0x0400, [52]),
                                  notetrack.Command.from_values(0x0103, [10, -2])]),
            notetrack.NoteKey(12, [notetrack.Command.from_values(0x0300, [2, 1, 0, 0, 0, 0, 0])])])
        raw = nt.build()
        back = notetrack.parse(raw)
        self.assertEqual(back.build(), raw)
        self.assertEqual([k.tick for k in back.keys], [0, 12])
        self.assertEqual(back.keys[0].commands[0].values(), [52])
        self.assertEqual(back.keys[0].commands[1].values(), [10, -2])
        self.assertEqual(back.keys[1].commands[0].name, 'chara_action')
        self.assertEqual(len(back.keys[1].commands[0].encode()), notetrack.OPCODES[0x0300].size)

    def test_almt_json_carries_notes(self):
        from jus_formats import notetrack
        f = _sample_almt()
        nt = notetrack.NoteTrack([notetrack.NoteKey(3, [notetrack.Command.from_values(0x0400, [7])])])
        f.field_index('NoteTrack')
        f.moves[0].nodes[0].tracks.append(almt.Track('NoteTrack', True, raw=nt.build(), opaque=True))
        blob = f.build()
        d = almt.to_dict(almt.parse(blob))
        tr = next(t for t in d['moves'][0]['nodes']['SP01'] if t['field'] == 'NoteTrack')
        self.assertEqual(tr['notes'], [[3, [['0x0400', '0700']]]])
        self.assertEqual(almt.from_dict(d).build(), blob)


class Sprites(unittest.TestCase):
    def _img(self):
        img = sprite.IndexedImage(40, 24, -20, -24)
        for y in range(3, 21):
            for x in range(5, 33):
                img.pixels[y * 40 + x] = 0x10 | (1 + (x + y) % 15)
        return img

    def test_auto_layout_covers(self):
        img = self._img()
        pieces = sprite.auto_layout(img)
        self.assertTrue(sprite.covered(img, pieces))
        self.assertTrue(all(p.bank == 1 for p in pieces))

    def test_charstream_roundtrip(self):
        img = self._img()
        g = dsig.DsigFile(2, 0x40, 4, palettes=[[i * 0x421 for i in range(16)] for _ in range(2)])
        g.frames.append(b'')
        fr, data = sprite.build_charstream_frame(img, dstx.Frame(), 0, g.palettes)
        g.set_frame_data(0, data)
        g2 = dsig.parse(g.build())
        out = sprite.compose(fr, sprite.SpriteSource(g2), canvas=(img.left, img.top, img.left + 40, img.top + 24))
        self.assertEqual(out.pixels, img.pixels)
        d = dstx.DstxFile(1, 0x83, [fr], tail=b'\0\0\0\0')
        self.assertEqual(dstx.parse(d.build()).frames[0].pieces, fr.pieces)

    def test_tile_pool_dedup(self):
        img = self._img()
        frames, pool = sprite.build_tile_frames([img, img], [dstx.Frame(), dstx.Frame()],
                                                [[i * 0x421 for i in range(16)] for _ in range(2)])
        self.assertEqual([p.index for p in frames[0].pieces], [p.index for p in frames[1].pieces])
        g = dsig.DsigFile(1, 0x10, 0, 256, sprite.tiled_sheet_height(len(pool) // 32),
                          [[0] * 16, [0] * 16], pool)
        out = sprite.compose(frames[1], sprite.SpriteSource(g), canvas=(img.left, img.top, img.left + 40, img.top + 24))
        self.assertEqual(out.pixels, img.pixels)

    def test_auto_layout_replaces_full_palette_byte(self):
        img = sprite.IndexedImage(8, 8)
        img.put(0, 0, 0x21)       # bank 2, colour 1
        pieces = sprite.auto_layout(img, attr_template=0x1140)
        self.assertEqual(len(pieces), 1)
        self.assertEqual(pieces[0].bank, 2)
        self.assertTrue(pieces[0].two_bpp)

    def test_high_palette_bank_compose_and_png_roundtrip(self):
        """Banks 16+ must survive both rendering and a package PNG roundtrip."""
        from jus_package import images
        from tempfile import TemporaryDirectory
        palettes = [[0] + [((b + i) & 31) | (i << 5) for i in range(1, 16)]
                    for b in range(18)]
        # Include a repeated colour in bank 0 to test metadata identity.
        palettes[0][1] = palettes[17][1]
        g = dsig.DsigFile(1, 0x20, 0, 16, 8, palettes, bytes([0x11] * 64))
        piece = dstx.Piece(0, 0, 0, 0x1100)  # bank 17, 8x8
        self.assertEqual(piece.bank, 17)
        img = sprite.compose(dstx.Frame([piece]), sprite.SpriteSource(g))
        self.assertEqual(img.get(0, 0), 17 * 16 + 1)
        self.assertEqual(img.to_rgba(palettes)[3], 255)
        with TemporaryDirectory() as tmp:
            path = Path(tmp) / 'frame.png'
            images.save_png(img, palettes, path)
            edited = images.load_png(path, palettes, 0, 0)
            self.assertEqual(list(img.pixels), list(edited.pixels))

    def test_high_palette_bank_quantise(self):
        from jus_package import images
        from PIL import Image
        palettes = [[0] * 16 for _ in range(18)]
        palettes[17][4] = 0x7FFF
        rgba = Image.new('RGBA', (1, 1), (255, 255, 255, 255))
        result = images._quantise(rgba, palettes)
        self.assertEqual(result[0], 17 * 16 + 4)

    def test_code0_is_8x8_with_64_byte_slot(self):
        fr = dstx.Frame([dstx.Piece(0, 0, 0, 0x0000), dstx.Piece(0, 8, 0, 0x0000)])
        self.assertEqual(sprite.charstream_slots(fr), [0, 64])
        self.assertEqual(dstx.SHAPES[0], (8, 8))


class NativeRoundtripRouting(unittest.TestCase):
    def test_dispatch_keeps_sprite_koma_and_panel_layouts_distinct(self):
        from tests.roundtrip_scan import decode_dstx
        from tests.test_suite_formats import make_koma
        from tests.test_dstx_layout_0506 import LayoutTables

        samples = [
            (dstx.DstxFile(1, 0x03, [dstx.Frame()], embedded=b'DSIG' + bytes(12)).build(),
             'sprite'),
            (dstx.DstxFile(1, 0x83, [dstx.Frame()], tail=bytes(4)).build(),
             'sprite'),
            (make_koma(), 'koma'),
            (LayoutTables().make(5), 'panel-layout'),
            (LayoutTables().make(6), 'panel-layout'),
        ]
        for blob, expected in samples:
            with self.subTest(flag=blob[5]):
                parsed, family = decode_dstx(blob)
                self.assertEqual(family, expected)
                self.assertEqual(parsed.build(), blob)


# Native ALMT binder and DSTX/DSIG port reconciliation (ARM9-backed).
def interpolated_motion() -> almt.AlmtFile:
    f = almt.AlmtFile(node_names=['SP01'])
    for name in ('TextureID', 'Alpha', 'BoundsIndex'):
        f.field_index(name)
    f.moves.append(almt.Move(0x500000, 20, 60, 0, [
        almt.NodeAnim([
            almt.Track('TextureID', False, value=0x500000),
            almt.Track('Alpha', True, keys=[
                almt.Key(0, 0x1000), almt.Key(10, 0x0800)],
                interpolator=0x494C, offset_low_bit=1),
            almt.Track('BoundsIndex', True, keys=[
                almt.Key(0, 0), almt.Key(4, 2)]),
        ])
    ]))
    return f


class NativeAlmtInterpolator(unittest.TestCase):
    def test_on_disk_reference_and_selector_before_keys(self):
        raw = interpolated_motion().build()
        motion = struct.unpack_from('<I', raw, 0x10)[0]
        chunk = motion - 0x20 + struct.unpack_from('<H', raw, motion + 8)[0]
        self.assertEqual((raw[chunk], raw[chunk + 1]), (1, 2))
        self.assertEqual(raw[chunk + 2:chunk + 5], bytes((0, 0x81, 2)))
        offsets_at = chunk + 2 + 4
        rel = struct.unpack_from('<H', raw, offsets_at + 2)[0]
        self.assertEqual(rel & 1, 1)
        key_ptr = chunk + (rel & ~1)
        self.assertEqual(struct.unpack_from('<H', raw, key_ptr - 2)[0], 0x494C)
        self.assertEqual(struct.unpack_from('<H', raw, key_ptr)[0], 0)

    def test_parse_build_edit_and_json_preserve_explicit_selector(self):
        original = interpolated_motion().build()
        parsed = almt.parse(original)
        self.assertEqual(parsed.build(), original)
        tr = parsed.moves[0].nodes[0].track('Alpha')
        self.assertEqual(tr.interpolator, 0x494C)
        self.assertEqual(tr.offset_low_bit, 1)
        self.assertFalse(tr.opaque)
        self.assertEqual([(k.tick, k.value) for k in tr.keys],
                         [(0, 0x1000), (10, 0x0800)])
        self.assertEqual(almt.from_dict(almt.to_dict(parsed)).build(), original)
        tr.keys[1].value = 0x0400
        tr.touch()
        modified = parsed.build()
        parsed_again = almt.parse(modified)
        changed = parsed_again.moves[0].nodes[0].track('Alpha')
        self.assertEqual(changed.interpolator, 0x494C)
        self.assertEqual(changed.offset_low_bit, 1)
        self.assertEqual(changed.keys[1].value, 0x0400)
        self.assertEqual(parsed_again.moves[0].nodes[0].track('BoundsIndex').keys[1].value, 2)
        self.assertEqual(almt.from_dict(almt.to_dict(parsed_again)).build(), modified)

    def test_static_field_index_128_does_not_imply_interpolator(self):
        f = almt.AlmtFile(node_names=['SP01'])
        for i in range(128):
            f.field_index(f'Unused{i:03d}')
        f.field_index('TextureID')
        f.moves.append(almt.Move(0x500000, 3, 60, 0, [
            almt.NodeAnim([almt.Track('TextureID', False, value=0x123456)])
        ]))
        raw = f.build()
        parsed = almt.parse(raw)
        self.assertEqual(parsed.moves[0].nodes[0].tracks[0].value, 0x123456)
        self.assertIsNone(parsed.moves[0].nodes[0].tracks[0].interpolator)
        self.assertEqual(almt.from_dict(almt.to_dict(parsed)).build(), raw)

    def test_reject_invalid_explicit_interpolator_metadata(self):
        f = interpolated_motion()
        tr = f.moves[0].nodes[0].track('Alpha')
        tr.interpolator = 0x10000
        with self.assertRaisesRegex(ValueError, 'u16'):
            f.build()
        tr.interpolator = 0x494C
        tr.offset_low_bit = 2
        with self.assertRaisesRegex(ValueError, 'offset low bit'):
            f.build()
        f.moves[0].nodes[0].track('TextureID').interpolator = 0
        with self.assertRaisesRegex(ValueError, 'requires a keyed'):
            f.build()

    def test_reject_keyed_property_index_above_native_limit(self):
        f = almt.AlmtFile(node_names=['SP01'])
        for i in range(128):
            f.field_index(f'Unused{i:03d}')
        f.field_index('Alpha')
        f.moves.append(almt.Move(1, 4, 60, 0,
                                 [almt.NodeAnim([almt.Track('Alpha', True,
                                   keys=[almt.Key(0, 0x1000)])])]))
        with self.assertRaisesRegex(ValueError, '7-bit'):
            f.build()


class NativeSpriteReferences(unittest.TestCase):
    def test_dstx_83_external_texture_id_preserves_native_tail(self):
        sprite = dstx.DstxFile(2, 0x83, [
            dstx.Frame([dstx.Piece(0, -4, -8, 0x0000)])
        ], tail=struct.pack('<I', 0x084100))
        original = sprite.build()
        parsed = dstx.parse(original)
        self.assertEqual(parsed.external_texture_id, 0x084100)
        self.assertEqual(parsed.to_dict()['external_texture_id'], '0x00084100')
        self.assertEqual(parsed.to_dict()['tail'], '00410800')
        self.assertEqual(parsed.build(), original)

    def test_embedded_sprite_does_not_expose_external_reference(self):
        sprite = dstx.DstxFile(1, 0x03, [dstx.Frame()], embedded=b'DSIG' + bytes(12))
        parsed = dstx.parse(sprite.build())
        self.assertIsNone(parsed.external_texture_id)
        self.assertNotIn('external_texture_id', parsed.to_dict())

    def test_dsig_native_character_stream_has_u16_count_and_reserved_word(self):
        img = dsig.DsigFile(2, 0x40, 4, palettes=[[0] * 16])
        img.frames.append(b'')
        img.set_frame_data(0, bytes(64))
        raw = img.build()
        table = 12 + 32 + 4
        self.assertEqual(struct.unpack_from('<HH', raw, table), (1, 0))
        self.assertEqual(dsig.parse(raw).build(), raw)
        self.assertEqual(dsig.parse(raw).frame_data(0), bytes(64))

    def test_dsig_frame_table_reserved_halfword_does_not_change_count(self):
        img = dsig.DsigFile(2, 0x40, 4, palettes=[[0] * 16])
        img.frames.append(b'')
        img.set_frame_data(0, bytes([1] * 64))
        img.frame_table_reserved = 0xBEEF
        raw = img.build()
        self.assertEqual(struct.unpack_from('<HH', raw, 12 + 32 + 4),
                         (1, 0xBEEF))
        parsed = dsig.parse(raw)
        self.assertEqual(len(parsed.frames), 1)
        self.assertEqual(parsed.frame_table_reserved, 0xBEEF)
        self.assertEqual(parsed.frame_data(0), bytes([1] * 64))
        self.assertEqual(parsed.to_dict()['frame_table_reserved'], '0xBEEF')
        self.assertEqual(parsed.build(), raw)


if __name__ == '__main__':
    unittest.main()
