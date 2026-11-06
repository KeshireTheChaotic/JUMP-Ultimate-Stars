"""Character rosters: record order of ``bin/chr_b.bin`` / ``bin/chr_s.bin`` ↔ ids.

**Direct (ARM9 tables):** the game names each character archive from a
predefined table indexed by the character record — battle
``{char *id, u32 res_base}[74]`` at ``0x020924B0`` (``FUN_02074728`` builds
``chr/<id><suffix>.aar``), support ``[193]`` at ``0x02092700``
(``FUN_02074CF4``); the suffix table ``0x0209F198`` is
``'', _2, _3, _4, _5, _6, _7, _8`` indexed by koma size.  The tables below
are copied from the supported ROM (``arm9.bin`` SHA256 in AGENTS.md).

The records are **not** in sorted id order: battle record 0 is ``db_b_01``
(Goku), record 47 ``bb_b_01``.  ``bin/chr_b_t.bin`` (self-relative ``s32``
string table, 53 Shift-JIS strings per record, string 0 = display name)
agrees: :func:`battle_roster` re-derives the battle order from the name
blocks and is kept as a consistency check.

``KOMA_SERIES_PREFIXES`` (``0x0209E840``, indexed by ``koma.bin`` byte +4) is
the art prefix of ``koma/<prefix>_<NN>.dtx`` (``FUN_020790F0``).
"""
from __future__ import annotations

import struct

BATTLE_IDS = (
    'db_b_01', 'db_b_02', 'db_b_03', 'db_b_04', 'db_b_05', 'db_b_06', 'db_b_07', 'db_b_08',
    'db_b_09', 'db_b_10', 'db_b_11', 'db_b_12', 'op_b_01', 'op_b_02', 'op_b_03', 'op_b_04',
    'op_b_05', 'op_b_06', 'op_b_07', 'op_b_08', 'na_b_01', 'na_b_02', 'na_b_03', 'na_b_04',
    'na_b_05', 'sk_b_01', 'sk_b_02', 'sk_b_03', 'jj_b_01', 'jj_b_02', 'hh_b_01', 'hh_b_02',
    'yh_b_01', 'yh_b_02', 'yh_b_03', 'yo_b_01', 'rk_b_01', 'bc_b_01', 'bc_b_02', 'bl_b_01',
    'bl_b_02', 'bl_b_03', 'bl_b_04', 'bl_b_05', 'bu_b_01', 'dg_b_01', 'dg_b_02', 'bb_b_01',
    'bb_b_02', 'bb_b_03', 'bb_b_04', 'kk_b_01', 'gt_b_01', 'gt_b_02', 'tr_b_01', 'pj_b_01',
    'ds_b_01', 'ds_b_02', 'ds_b_03', 'mr_b_01', 'nn_b_01', 'hk_b_01', 'hk_b_02', 'ss_b_01',
    'ss_b_02', 'kn_b_01', 'oj_b_01', 'oj_b_02', 'hs_b_01', 'nk_b_01', 'dt_b_01', 'dt_b_02',
    'dt_b_03', 'dt_b_04',
)
SUPPORT_IDS = (
    'db_s_01', 'db_s_03', 'db_s_05', 'db_s_07', 'db_s_09', 'db_s_10', 'db_s_11', 'db_s_21',
    'db_s_22', 'op_s_01', 'op_s_02', 'op_s_03', 'op_s_04', 'op_s_05', 'op_s_06', 'op_s_21',
    'op_s_22', 'na_s_01', 'na_s_02', 'na_s_03', 'na_s_04', 'na_s_21', 'sk_s_01', 'sk_s_03',
    'sk_s_21', 'jj_s_01', 'jj_s_02', 'jj_s_21', 'jj_s_22', 'jj_s_23', 'jj_s_24', 'jj_s_25',
    'jj_s_26', 'hh_s_01', 'hh_s_02', 'hh_s_21', 'hh_s_22', 'hh_s_23', 'yh_s_01', 'yh_s_02',
    'yh_s_03', 'yh_s_21', 'yo_s_01', 'yo_s_21', 'rk_s_01', 'rk_s_21', 'rk_s_22', 'rk_s_23',
    'rk_s_24', 'bc_s_01', 'bc_s_02', 'bc_s_21', 'bl_s_01', 'bl_s_03', 'bl_s_04', 'bl_s_05',
    'bl_s_21', 'bl_s_22', 'bl_s_23', 'bl_s_24', 'bl_s_25', 'bl_s_26', 'bl_s_27', 'bu_s_01',
    'dg_s_01', 'dg_s_02', 'dg_s_21', 'dg_s_22', 'dg_s_23', 'bb_s_01', 'bb_s_02', 'bb_s_21',
    'bb_s_22', 'bb_s_23', 'bb_s_24', 'kk_s_01', 'kk_s_21', 'kk_s_22', 'kk_s_23', 'kk_s_24',
    'kk_s_25', 'kk_s_26', 'kk_s_27', 'kk_s_28', 'gt_s_01', 'gt_s_02', 'gt_s_21', 'gt_s_22',
    'gt_s_23', 'gt_s_24', 'gt_s_25', 'gt_s_26', 'tr_s_01', 'tr_s_21', 'tr_s_22', 'tr_s_23',
    'tr_s_24', 'tr_s_25', 'tr_s_26', 'pj_s_01', 'pj_s_21', 'pj_s_22', 'pj_s_23', 'ds_s_01',
    'ds_s_02', 'ds_s_03', 'ds_s_21', 'ds_s_22', 'to_s_21', 'to_s_22', 'to_s_23', 'to_s_24',
    'to_s_25', 'to_s_26', 'to_s_27', 'to_s_28', 'to_s_29', 'es_s_21', 'es_s_22', 'es_s_23',
    'es_s_24', 'es_s_25', 'es_s_26', 'es_s_27', 'es_s_28', 'es_s_29', 'sd_s_21', 'sd_s_22',
    'sd_s_23', 'sd_s_24', 'sd_s_25', 'dn_s_21', 'dn_s_22', 'dn_s_23', 'dn_s_24', 'dn_s_25',
    'ig_s_21', 'ig_s_22', 'ig_s_23', 'ig_s_24', 'mr_s_01', 'mr_s_21', 'mr_s_22', 'mr_s_23',
    'mr_s_24', 'nn_s_01', 'hk_s_01', 'hk_s_02', 'hk_s_21', 'hk_s_22', 'ss_s_01', 'ss_s_21',
    'ss_s_22', 'ss_s_23', 'ss_s_24', 'kn_s_01', 'kn_s_21', 'kn_s_22', 'kn_s_23', 'kn_s_24',
    'kn_s_25', 'kn_s_26', 'kn_s_27', 'oj_s_01', 'oj_s_02', 'oj_s_21', 'oj_s_22', 'oj_s_23',
    'oj_s_24', 'ct_s_21', 'ct_s_22', 'ct_s_23', 'hs_s_01', 'hs_s_21', 'rb_s_21', 'tc_s_21',
    'mo_s_21', 'mo_s_22', 'is_s_21', 'is_s_22', 'nb_s_21', 'nb_s_22', 'cb_s_21', 'cb_s_22',
    'cb_s_23', 'tz_s_21', 'tz_s_22', 'nk_s_01', 'tl_s_21', 'tl_s_22', 'dt_s_01', 'dt_s_02',
    'dt_s_03',
)
KOMA_SERIES_PREFIXES = (
    '', 'es', 'is', 'ig', 'tr', 'ct', 'gt', 'kn', 'kk', 'cb', 'oj', 'nb', 'sk', 'tc', 'jj',
    'sd', 'ss', 'tz', 'to', 'dg', 'dn', 'ds', 'tl', 'db', 'na', 'nk', 'hh', 'pj', 'bu',
    'bc', 'bl', 'hs', 'hk', 'bb', 'nn', 'mo', 'mr', 'yo', 'yh', 'rk', 'rb', 'op', 'dt',
)
#: chr/<id><suffix>.aar suffix by koma size (0x0209F198)
SIZE_SUFFIX = ('', '_2', '_3', '_4', '_5', '_6', '_7', '_8')

#: Battle stage table at 0x02092D08: ``{char *stem, s16 a, s16 b}`` per stage index.
#: The index is battle object +0x160 (= mission/battle definition +0x75, FUN_0207538C);
#: archive names are built from the stem (FUN_02083FCC / FUN_02085704, ov06 FUN_02163188),
#: and ov06 passes the two s16 words to FUN_020734E0 / FUN_0207361C (likely music; not verified).
STAGES = (
    ('bg_es', 0x19, 0x19), ('bg_gt', 0x18, 0x18), ('bg_kn', 0x1C, 0x1C), ('bg_kk', 0x1E, 0x1E),
    ('bg_oj', 0x1D, 0x1D), ('bg_ss', 0x1B, 0x1B), ('bg_db', 0x12, 0x12), ('bg_na', 0x14, 0x14),
    ('bg_hh', 0x15, 0x15), ('bg_bl', 0x16, 0x16), ('bg_hk', 0x1A, 0x1A), ('bg_bb', 0x17, 0x17),
    ('bg_op', 0x13, 0x13), ('bg_cs', 0x1F, 0x1F), ('bg_cm', 0x20, 0x20), ('bg_cg', 0x21, 0x21),
    ('bg_cu', 0x23, 0x23), ('bg_ch', 0x22, 0x22), ('bg_cj', 0x24, 0x24), ('bg_old_ig', 0x2A, 0x2A),
    ('bg_old_tr', 0x27, 0x27), ('bg_old_sk', 0x2B, 0x2B), ('bg_old_jj', 0x29, 0x29), ('bg_old_sd', 0x28, 0x28),
    ('bg_old_dg', 0x2B, 0x2B), ('bg_old_dn', 0x2B, 0x2B), ('bg_old_to', 0x28, 0x28), ('bg_old_ds', 0x27, 0x27),
    ('bg_old_pj', 0x27, 0x27), ('bg_old_bu', 0x2B, 0x2B), ('bg_old_bc', 0x2B, 0x2B), ('bg_old_yo', 0x2B, 0x2B),
    ('bg_old_yh', 0x29, 0x29), ('bg_old_rk', 0x2D, 0x2D), ('bg_old_cs', 0x2C, 0x2C), ('bg_old_ch', 0x2E, 0x2E),
)


def stage_stem(index: int) -> str | None:
    return STAGES[index][0] if 0 <= index < len(STAGES) else None


def stage_index(stem: str) -> int | None:
    return next((i for i, (s, _, _) in enumerate(STAGES) if s == stem), None)

STRINGS_PER_RECORD = 53
RECORD_SIZE = 60

#: (id prefix, display name of the block's first record) in chr_b.bin order
SERIES_ORDER = (
    ('db', 'Goku'), ('op', 'Luffy'), ('na', 'Naruto'), ('sk', 'Yoh'), ('jj', 'Jotaro'),
    ('hh', 'Gon'), ('yh', 'Yusuke'), ('yo', 'Yugi'), ('rk', 'Kenshin'), ('bc', 'Eve'),
    ('bl', 'Ichigo'), ('bu', 'Kazuki'), ('dg', 'Allen|Walker'), ('bb', 'Bo-bobo'), ('kk', 'Ryotsu'),
    ('gt', 'Gintoki'), ('tr', 'Tsuna/Reborn'), ('pj', 'Jaguar'), ('ds', 'Arale'), ('mr', 'Muhyo'),
    ('nn', 'Neuro|/|Yako'), ('hk', 'Kenshiro'), ('ss', 'Seiya'), ('kn', 'Muscle|Man.'),
    ('oj', 'Edajima'), ('hs', 'Taikoubou'), ('nk', 'Fuusuke'), ('dt', 'Red|Koma'),
)


def record_names(text_blob: bytes) -> list[str]:
    """Display name (string 0) of every chr_b record from chr_b_t.bin."""
    if len(text_blob) < 4:
        raise ValueError('chr_b_t.bin is too short')
    first = struct.unpack_from('<i', text_blob, 0)[0]
    entries = first // 4
    if first <= 0 or first % 4 or entries % STRINGS_PER_RECORD:
        raise ValueError('chr_b_t.bin: unexpected string table size')

    def string(i: int) -> str:
        o = 4 * i + struct.unpack_from('<i', text_blob, 4 * i)[0]
        if not 0 <= o < len(text_blob):
            raise ValueError(f'chr_b_t.bin: string {i} points outside the file')
        end = text_blob.find(b'\0', o)
        return text_blob[o:end if end >= 0 else len(text_blob)].decode('shift_jis', 'replace')

    return [string(r * STRINGS_PER_RECORD) for r in range(entries // STRINGS_PER_RECORD)]


def battle_roster(battle_ids: list[str], names: list[str]) -> list[str]:
    """Character id of each chr_b record, in record order.

    Raises ``ValueError`` when the series blocks do not line up with the ids
    (different game revision or modified data) so callers never mis-assign.
    """
    by_prefix: dict[str, list[str]] = {}
    for cid in sorted(battle_ids):
        by_prefix.setdefault(cid[:2], []).append(cid)
    out: list[str] = []
    for prefix, first_name in SERIES_ORDER:
        ids = by_prefix.pop(prefix, [])
        if not ids:
            raise ValueError(f'no {prefix}_b_* characters for the roster block "{first_name}"')
        start = len(out)
        if start >= len(names) or names[start] != first_name:
            got = names[start] if start < len(names) else 'end of table'
            raise ValueError(f'roster block {prefix}: expected "{first_name}" at record {start}, found "{got}"')
        out.extend(ids)
    if by_prefix:
        raise ValueError('ids outside the known roster: ' + ', '.join(sorted(by_prefix)))
    if len(out) != len(names):
        raise ValueError(f'roster covers {len(out)} ids but chr_b_t.bin has {len(names)} records')
    return out
