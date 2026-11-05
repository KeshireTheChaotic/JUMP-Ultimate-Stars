"""Byte-for-byte synthetic ALTM render snapshots (not emulator verification).

The fixture makes flip bits, transparent index zero, palette conversion, and
single-cell painting visually observable. Hashes catch future pixel regressions.
"""
import hashlib
import unittest

from jus_formats import altm, dsig
from jus_formats.sprite import write_tiled4
from jus_package import tilemap


class AltmRenderSnapshots(unittest.TestCase):
    def setUp(self):
        a = [(x + y) % 16 for y in range(8) for x in range(8)]
        b = [1 if x < 4 else 2 for y in range(8) for x in range(8)]
        self.image = dsig.DsigFile(1, dsig.MODE_TILED4, 0, 8, 16,
                                   [list(range(16))], write_tiled4(a, 8, 8) + write_tiled4(b, 8, 8))
        self.map = altm.AltmFile(width=2, height=2, entries=[0, 1, 0x400, 0x801])

    def digest(self):
        result, problems = tilemap.render(self.map, self.image)
        self.assertEqual(problems, [])
        self.assertEqual(result.size, (16, 16))
        return hashlib.sha256(result.tobytes()).hexdigest()

    def test_baseline_with_flips(self):
        self.assertEqual(self.digest(),
                         '467eb436e030fd348ecb8263984de0a8c8083e1e859d9df923bcd9e041bfd00f')

    def test_painted_map_round_trip_and_pixels(self):
        self.map.set(0, 0, 1)
        out = self.map.build()
        parsed = altm.parse(out)
        self.assertEqual(parsed.entries, [1, 1, 0x400, 0x801])
        self.assertEqual(self.digest(),
                         '579dd55ba47ef812f228fa2419268db76940f8e5dd59a5ac31f9f56fc72ffb95')


if __name__ == '__main__':
    unittest.main()
