r"""Read-only mission / Koma acquisition evidence collector for JUS.

This is a first-pass raw evidence collector. Confirmed mission reward offsets
are documented in docs/MISSION_REWARD_TRACE.md and tools/trace_jgalaxy.py. It locates
candidate files, ARM9 strings, and pointer-literal occurrences for follow-up
Ghidra dataflow analysis. It never writes back to ROM or extracted assets.

    py -3 tools/trace_progression.py --data D:\Library\Development\JUS\data \
        --rom D:\Library\Development\JUS\JUS.nds --out progression_evidence.json

Or specify --arm9 path/to/arm9.bin instead of --rom.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import re
import struct
from pathlib import Path

ARM9_BASE = 0x02000000
NAME = re.compile(rb'[\x20-\x7e]{5,112}')
INTEREST = ('koma', 'kshape', 'mission', 'stage', 'quest', 'event', 'jpower',
            'piece', 'reward', 'evolve', 'evolution', 'unlock', 'clear', 'chr_',
            'route', 'galaxy', 'star')


def executable(arm9: Path | None, rom: Path | None) -> tuple[bytes, dict]:
    if arm9:
        data = arm9.read_bytes()
        return data, {'source': str(arm9), 'load_address': f'0x{ARM9_BASE:08X}', 'format': 'ARM9 raw'}
    if not rom:
        return b'', {'status': 'Not provided'}
    data = rom.read_bytes()
    if len(data) < 0x40:
        raise ValueError('NDS ROM too short')
    off, load, size = struct.unpack_from('<III', data, 0x20)
    if size <= 0 or off + size > len(data):
        raise ValueError('NDS ARM9 header range is invalid')
    return data[off:off + size], {'source': str(rom), 'format': 'NDS ARM9 region',
                                   'file_offset': f'0x{off:X}', 'size': size,
                                   'load_address': f'0x{load:08X}'}


def arm9_strings(code: bytes, base: int = ARM9_BASE, limit: int = 150) -> list[dict]:
    """ASCII paths, substrings, and aligned u32 pointer-literal *candidates*."""
    interesting = []
    for match in NAME.finditer(code):
        value = match.group().decode('ascii')
        if not any(term in value.lower() for term in INTEREST):
            continue
        interesting.append((match.start(), value))
    # Index candidate 32-bit immediates, not verified code xrefs; Ghidra must
    # distinguish literal pools, data words, and unrelated instructions.
    pool: dict[int, list[int]] = {}
    for at in range(0, len(code) - 3, 4):
        word = struct.unpack_from('<I', code, at)[0]
        if base <= word < base + len(code):
            pool.setdefault(word - base, []).append(at)
    results = []
    for at, value in interesting[:limit]:
        candidates = pool.get(at, [])
        results.append({'offset': f'0x{at:06X}', 'virtual_address': f'0x{base + at:08X}',
                        'text': value, 'pointer_word_sites': [f'0x{base + o:08X}' for o in candidates[:64]],
                        'pointer_sites_truncated': max(0, len(candidates) - 64)})
    return results


def inventory(data: Path) -> dict:
    bin_dir = data / 'bin'
    if not bin_dir.is_dir():
        raise FileNotFoundError(f'No extracted bin folder: {bin_dir}')
    output = {}
    for path in sorted(bin_dir.rglob('*')):
        if not path.is_file() or path.is_symlink():
            continue
        rel = path.relative_to(data).as_posix()
        blob = path.read_bytes()
        important = any(term in rel.lower() for term in INTEREST)
        output[rel] = {'size_bytes': len(blob), 'sha256': hashlib.sha256(blob).hexdigest(),
                       'candidate_for_followup': important}
        if important:
            output[rel]['first_96_bytes_hex'] = blob[:96].hex(' ')
            output[rel]['possible_fixed_record_strides_NOT_VERIFIED'] = [
                n for n in (4, 6, 8, 10, 12, 16, 20, 24, 28, 32, 36, 40, 48, 64, 80, 96)
                if len(blob) >= 2 * n and len(blob) % n == 0]
    # Stage-specific candidates may not live under bin/. Enumerate names only.
    stage_dir = data / 'stage'
    stage_files = sorted(path.relative_to(data).as_posix() for path in stage_dir.rglob('*')
                         if path.is_file()) if stage_dir.is_dir() else []
    return {'bin_files': output, 'stage_paths': stage_files[:250],
            'stage_paths_omitted': max(0, len(stage_files) - 250)}


def collect(data: Path | None, arm9: Path | None, rom: Path | None) -> dict:
    code, source = executable(arm9, rom)
    base = int(source.get('load_address', f'0x{ARM9_BASE:08X}'), 16)
    out = {'status': 'UNVERIFIED raw pointer candidates; use trace_jgalaxy.py for verified mission rewards',
           'goals': ['mission completion → reward record → Koma identifier',
                     'starting/help Koma availability → evolution tree nodes → gem costs',
                     'Koma record count/capacity and runtime lookup by index'],
           'arm9': {**source, 'sha256': hashlib.sha256(code).hexdigest() if code else None,
                    'strings': arm9_strings(code, base) if code else []}}
    out['data'] = inventory(data) if data else {'status': 'No extracted data supplied'}
    return out


def main(argv=None):
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--data', type=Path, help='Extracted data/ directory')
    ex = p.add_mutually_exclusive_group()
    ex.add_argument('--arm9', type=Path, help='Raw ARM9 executable')
    ex.add_argument('--rom', type=Path, help='NDS ROM (extracts ARM9 from header)')
    p.add_argument('--out', type=Path, default=Path('progression_evidence.json'))
    a = p.parse_args(argv)
    if not (a.data or a.arm9 or a.rom):
        p.error('Provide --data and/or --arm9 / --rom')
    result = collect(a.data, a.arm9, a.rom)
    a.out.parent.mkdir(parents=True, exist_ok=True)
    a.out.write_text(json.dumps(result, indent=2, ensure_ascii=False) + '\n', encoding='utf-8')
    print(f'Wrote {a.out}; pointer candidates still require xref verification')


if __name__ == '__main__':
    main()
