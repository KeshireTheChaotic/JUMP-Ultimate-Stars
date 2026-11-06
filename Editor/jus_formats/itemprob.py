"""Battle item outcome weights from item/itemprob.ipf and stage .mob settings.

Direct overlay-6 evidence:
  BattleMapLoadItem (0x021644C4) reads 4 x 6 s16 global weights and blends
  each row with .mob's six signed stage weights, then optionally adds six
  J-Power outcomes. FUN_02165944 uses a 0..999999 roll and a 12-outcome
  cumulative table selected by combat state. The mapping from combat state
  to one of the four rows and the resulting item IDs need further tracing.

No source asset is modified; this parser/weight builder is strictly diagnostic.
"""
from __future__ import annotations

import struct
from dataclasses import dataclass


@dataclass(frozen=True)
class ItemProb:
    raw: bytes
    global_weights: tuple[tuple[int, ...], ...]

    @classmethod
    def parse(cls, data: bytes) -> 'ItemProb':
        if len(data) < 48:
            raise ValueError('itemprob.ipf is shorter than its four-by-six weight table')
        values = struct.unpack_from('<24h', data)
        return cls(bytes(data), tuple(tuple(values[row*6:row*6+6]) for row in range(4)))

    def build(self) -> bytes:
        return self.raw

    def combined(self, config, *, jpower_enabled=False, battle_rule=0) -> tuple[tuple[int, ...], ...]:
        """Return the four 12-outcome integer-weight vectors (scale 1,000,000).

        Runtime uses signed stage configuration and 32-bit integer arithmetic.
        Normal shipped values fit standard Python integers without overflow.
        Unknown combat condition/row selection is *not* invented here.
        """
        stage_pct = int(config.stage_weight)
        if not 0 <= stage_pct <= 100:
            raise ValueError(f'Unsupported stage-weight percentage {stage_pct}')
        jp_pct = int(config.jpower_factor)
        if not 0 <= jp_pct <= 100:
            raise ValueError(f'Unsupported J-Power percentage {jp_pct}')
        base = tuple(int(v) for v in config.weights)
        jp = tuple(int(v) for v in config.jpower_weights)
        if len(base) != 6 or len(jp) != 6:
            raise ValueError('Item configuration requires six normal and six J-Power weights')
        rows = []
        for global_row in self.global_weights:
            normal = tuple(stage_pct * base[i] + (100-stage_pct) * global_row[i]
                           for i in range(6))
            if not jpower_enabled or battle_rule == 3:
                row = tuple(v*100 for v in normal) + (0,)*6
            else:
                row = tuple(v*(100-jp_pct) for v in normal) + tuple(
                    jp_pct*jp[i]*100 for i in range(6))
            rows.append(row)
        return tuple(rows)

    @staticmethod
    def select_bucket(weights: tuple[int, ...], roll: int) -> int:
        """Trace-equivalent 12-entry subtraction with last-bucket fallback.

        The *roll* is supplied by the caller. This does not reproduce DS RNG.
        """
        if len(weights) != 12 or any(x < 0 for x in weights):
            raise ValueError('Expected 12 nonnegative item weight entries')
        if not isinstance(roll, int) or not 0 <= roll < 1000000:
            raise ValueError('Item roll must be in 0..999999')
        remaining = roll
        for i, weight in enumerate(weights):
            if remaining < weight:
                return i
            remaining -= weight
        return 11
