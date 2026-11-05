r"""Check PL4R/LCP4 addressing against the uploaded chr.zip corpus.

Usage: py -3 tests/validate_chr_textures.py --chr C:\path\to\chr.zip \
           --report C:\path\to\report.json

Requires no image library. Out-of-range sprites are reported individually.
This does not require a ROM, Ghidra, or extracted on-disk game assets.
"""
from __future__ import annotations
import argparse
from collections import Counter
from io import BytesIO
import json
from pathlib import Path
import sys
from zipfile import ZipFile

sys.path.insert(0,str(Path(__file__).resolve().parent.parent))
from jus_formats.alar import Archive
from jus_formats.dsig import DsigFile
from jus_formats.dstx import DstxFile
from jus_formats.sprite import texture_dimensions, texture_piece_origin


def scan_archive(archive: Archive, root: str) -> dict:
    counts = Counter()
    anomalies = []
    for nest in archive.entries:
        if nest.ext != '.aar':
            continue
        inner = Archive.parse(nest.payload())
        for entry in inner.entries:
            if entry.ext != '.dtx':
                continue
            try:
                dst = DstxFile.parse(entry.payload())
            except ValueError:
                continue   # non-sprite tables
            if dst.embedded:
                dig = DsigFile.parse(dst.embedded)
            else:
                match = inner.find(entry.name[:-4] + '.dig')
                if not match:
                    continue
                dig = DsigFile.parse(match.payload())
            if dig.mode not in (0x20,0x50) or dig.version != 1:
                continue
            counts[f'mode_{dig.mode:02X}_sprite_files'] += 1
            counts[f'mode_{dig.mode:02X}_frame_count'] += len(dst.frames)
            counts[f'mode_{dig.mode:02X}_image_bytes'] += len(dig.pixels())
            if len(dig.pixels()) != dig.width*dig.height//2:
                anomalies.append({'archive':root, 'nested':nest.name,'dstx':entry.name,
                                  'type':'DSIG_payload_size', 'size':len(dig.pixels()),
                                  'expected':dig.width*dig.height//2})
            for fi,frame in enumerate(dst.frames):
                for pi,p in enumerate(frame.pieces):
                    counts['pieces'] += 1
                    counts[f'mode_{dig.mode:02X}_pieces'] += 1
                    counts['2bpp_pieces' if p.two_bpp else '4bpp_pieces'] += 1
                    w,h=p.size
                    oldx=(p.index*16)%dig.width
                    oldy=(p.index*16)//dig.width
                    old_overflow=oldx+w>dig.width or oldy+h>dig.height
                    if old_overflow:counts['legacy_address_overflow']+=1
                    texw,texh=texture_dimensions(dig,p.two_bpp)
                    u,v=texture_piece_origin(p)
                    if u+w>texw or v+h>texh:
                        counts['gpu_address_overflow']+=1
                        anomalies.append({'archive':root,'nested':nest.name,'dstx':entry.name,
                                          'frame':fi,'piece':pi,'type':'GPU_UV_overflow',
                                          'index':p.index,'attribute':f'0x{p.attr:04X}',
                                          'xy':[u,v], 'size':[w,h], 'texture':[texw,texh]})
                    if p.bank >= dig.banks:
                        counts['palette_overflow']+=1
                        anomalies.append({'archive':root,'nested':nest.name,'dstx':entry.name,
                                          'frame':fi,'piece':pi,'type':'Palette_bank_overflow',
                                          'palette_bank':p.bank, 'banks':dig.banks})
    return {'counts':dict(sorted(counts.items())), 'anomalies':anomalies}


def run(chr_zip: Path) -> dict:
    reports = {}
    with ZipFile(chr_zip) as source:
        for name in ('ChrArc.aar','ChrWin.aar'):
            reports[name]=scan_archive(Archive.parse(source.read(name)),name)
    return {'source':chr_zip.name, 'reports':reports}


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--chr',type=Path,required=True)
    parser.add_argument('--report',type=Path)
    args=parser.parse_args()
    result=run(args.chr)
    for name,record in result['reports'].items():
        print(name,record['counts'],'anomalies=',len(record['anomalies']))
    if args.report:
        args.report.parent.mkdir(parents=True,exist_ok=True)
        args.report.write_text(json.dumps(result,indent=2), encoding='utf-8')
        print('Report:',args.report)

if __name__=='__main__':main()
