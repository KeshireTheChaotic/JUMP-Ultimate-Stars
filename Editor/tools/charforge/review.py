"""Local, read-only review gallery of actual extracted and authored raster files."""
from __future__ import annotations

import html
import json
from pathlib import Path
from .forge import _rj


def _h(value) -> str:
    return html.escape(str(value), quote=True)


def _images(work: Path, ref: Path, art: Path, labels: list[str]) -> list[str]:
    out = []
    for label in labels:
        r, a = work / ref / label, work / art / label
        if not r.is_file() and not a.is_file():
            continue
        left = f'<img loading="lazy" src="../{_h((ref / label).as_posix())}" alt="Original frame {_h(label)}">' if r.is_file() else '<em>Missing reference</em>'
        right = f'<img loading="lazy" src="../{_h((art / label).as_posix())}" alt="Authored frame {_h(label)}">' if a.is_file() else '<em>Not yet generated</em>'
        out.append(f'<div class="pair"><small>{_h(label)}</small><div class="twos"><figure><figcaption>Original</figcaption>{left}</figure><figure><figcaption>Generated / edited</figcaption>{right}</figure></div></div>')
    return out


def write(work: Path) -> dict:
    work = Path(work)
    brief = _rj(work / 'brief.json')
    out = work / 'review'
    out.mkdir(parents=True, exist_ok=True)
    cards, nframes = [], 0
    for s in brief['sprites']:
        role = s['role']
        if s['shared']:
            continue
        files = ['atlas.png'] if s['atlas'] else [
            f'{fr["index"]:03d}.png' for fr in s['frames'] if not fr.get('empty')]
        refs = Path('reference') / s['key']
        arts = Path('art') / s['key']
        panels = _images(work, refs, arts, files)
        nframes += len(panels)
        used = sorted({u['move'] for u in s.get('used_by_moves', [])})
        cards.append(f'<details class="sheet" data-moves="{_h(" ".join(used).lower())}" open>'
                     f'<summary>{_h(s["key"])} <span>{_h(role)} · {len(files)} image(s) · {len(used)} moves</span></summary>'
                     f'<p class="path">Native archive: {_h(s["archive"])} / {_h(s["dstx"])}, ID {_h(s["resource_id"])}</p>'
                     f'<div class="frames">{"".join(panels)}</div></details>')
    for k in brief.get('komas', []):
        files = [f'{n:03d}.png' for n in range(k['panels'])]
        panels = _images(work, Path('reference/koma') / k['key'],
                         Path('art/koma') / k['key'], files)
        cards.append(f'<details class="sheet" data-moves="koma card" open>'
                     f'<summary>Koma: {_h(k["key"])} <span>{k["panels"]} × 48×48 panels · cards {_h(k["card_ids"])}</span></summary>'
                     f'<p class="path">Native art: {_h(k["path"])}. Original shape/selector preserved.</p>'
                     f'<div class="frames">{"".join(panels)}</div></details>')
        nframes += len(panels)
    template = """<!doctype html><html lang="en"><head><meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>JUS Character Forge — Actual Art Review</title><style>
:root{color-scheme:dark;font:14px system-ui,sans-serif;background:#101217;color:#e6e9ee}
body{margin:0 auto;max-width:1450px;padding:24px}
h1{font-size:26px;margin:0 0 8px}.intro{color:#a5adbb;line-height:1.55;max-width:850px}
#filter{padding:10px 14px;background:#1f2330;border:1px solid #485067;color:#fafafa;
border-radius:8px;width:min(480px,95%);margin:12px 0 22px}
.sheet{border:1px solid #373c4b;border-radius:10px;margin-bottom:14px;background:#171a21}
summary{cursor:pointer;padding:15px 20px;font-weight:700}
summary span{font-weight:400;color:#a6afc0;margin-left:8px}.path{padding:0 20px;color:#b9c0cc}
.frames{display:grid;grid-template-columns:repeat(auto-fit,minmax(260px,1fr));gap:14px;padding:15px}
.pair{border:1px solid #393e4c;border-radius:7px;padding:8px;background:#222630;min-width:0}
.pair small{color:#c2cad8}.twos{display:grid;grid-template-columns:1fr 1fr;gap:6px}
figure{margin:0;min-width:0}figcaption{font-size:11px;color:#b4becf;padding:4px 0}
img{max-width:100%;max-height:250px;object-fit:contain;object-position:left top;
image-rendering:pixelated;background:repeating-conic-gradient(#343744 0% 25%,#252937 0% 50%) 50% / 16px 16px}
.hide{display:none}
</style></head><body>
<h1>JUS Character Forge: original vs authored raster</h1>
<p class="intro">These are the <strong>actual original source images</strong> alongside the
<strong>actual generated or edited PNGs</strong>. They are not game screenshots or
emulator captures. Transparent areas use a checkerboard. The generator is
procedural and keeps source silhouettes; manual pixel-art refinement is expected.</p>
<p><strong>Template:</strong> __TEMPLATE__ · <strong>Target slot:</strong> __SLOT__
· <strong>Review images:</strong> __COUNT__</p>
<label for="filter">Filter by member name, role, move ID, or “koma”</label>
<input id="filter" type="search" placeholder="Example: 0x05C100, effect, db_03, koma"
oninput="for(const e of document.querySelectorAll('.sheet')){const q=this.value.toLowerCase();
e.classList.toggle('hide',q!=='' && !(e.textContent.toLowerCase()+e.dataset.moves).includes(q));}">
__CARDS__
</body></html>"""
    rendered = (template.replace('__TEMPLATE__', _h(brief['template']))
                .replace('__SLOT__', _h(brief['slot']))
                .replace('__COUNT__', str(nframes))
                .replace('__CARDS__', '\n'.join(cards)))
    (out / 'index.html').write_text(rendered, encoding='utf-8')
    return {'path': str(out / 'index.html'), 'review_images': nframes,
            'sprite_sheets': sum(not s['shared'] for s in brief['sprites']),
            'koma_members': len(brief.get('komas', []))}
