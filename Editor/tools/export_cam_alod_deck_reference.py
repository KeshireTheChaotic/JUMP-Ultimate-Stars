"""Export source-validated CAM/ALOD/deck reference catalogs without editing game data.

    py -3 tools/export_cam_alod_deck_reference.py
    py -3 tools/export_cam_alod_deck_reference.py --data PATH --out PATH

Each CSV is a source catalog, not an emulator-confirmed behavior table.
Refuses to overwrite existing output files.
"""
from __future__ import annotations

import argparse
import collections
import csv
import hashlib
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_formats import alar, alod, deckcompanion, gametables, stagecamera

def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()

def write_csv(path: Path, rows: list[dict]) -> None:
    assert rows
    with path.open("x", encoding="utf-8-sig", newline="") as f:
        writer = csv.DictWriter(f, list(rows[0]))
        writer.writeheader()
        writer.writerows(rows)

def export(data_root: Path, out: Path) -> dict:
    cam_archive = alar.open_nested((data_root / "stage/stage.aar").read_bytes())
    deck_archive = alar.open_nested((data_root / "deck/Deck.aar").read_bytes())
    pname = gametables.view("bin/pname.bin", (data_root / "bin/pname.bin").read_bytes())
    location = gametables.view("bin/location.bin", (data_root / "bin/location.bin").read_bytes())
    assert pname and location and len(pname.records) == 89 and len(location.records) == 91

    cam_rows = []
    for e in cam_archive.entries:
        if not e.name.endswith(".cam"):
            continue
        blob = e.payload()
        cam = stagecamera.parse(blob)
        assert cam.build() == blob and cam.has_rectangular_outline
        assert cam.vertices[0] == cam.header_pairs[0]
        lo_x, lo_y, hi_x, hi_y = cam.raw_point_bounds
        cam_rows.append({
            "source_member": "stage/stage.aar|" + e.name,
            "raw_header_pair_0": str(cam.header_pairs[0]),
            "raw_header_pair_1": str(cam.header_pairs[1]),
            "raw_header_pair_2": str(cam.header_pairs[2]),
            "mode_unclassified": cam.mode,
            "point_count": len(cam.vertices),
            "raw_min_x": lo_x, "raw_min_y": lo_y,
            "raw_max_x": hi_x, "raw_max_y": hi_y,
            "raw_rect_width": hi_x - lo_x,
            "raw_rect_height": hi_y - lo_y,
            "fifth_point_closes": len(cam.vertices) == 5 and cam.vertices[0] == cam.vertices[-1],
            "runtime_camera_use": "UNVERIFIED",
            "source_sha256": sha256(blob),
        })
    assert len(cam_rows) == 36
    assert collections.Counter(r["point_count"] for r in cam_rows) == {4: 35, 5: 1}

    deck_rows = []
    for e in deck_archive.entries:
        if not e.name.endswith(".bin") or not e.name.rsplit("/", 1)[-1].startswith("p"):
            continue
        blob = e.payload()
        companion = deckcompanion.parse(blob)
        assert companion.build() == blob
        assert deck_archive.find(e.name.replace("/p", "/")) is not None
        p = companion.profile_name_index
        l = companion.location_index
        assert 0 <= p < 89 and 0 <= l < 91
        deck_rows.append({
            "source_member": "deck/Deck.aar|" + e.name,
            "paired_92_byte_member": e.name.replace("/p", "/"),
            "utf16le_name": companion.name,
            "cp932_comment": companion.comment,
            "pname_index_0x34": p,
            "pname_text": pname.records[p].label.partition(": ")[2],
            "location_index_0x35": l,
            "location_text": location.records[l].label.partition(": ")[2],
            "unclassified_status_byte_0x36": companion.raw[0x36],
            "unclassified_byte_0x37": companion.raw[0x37],
            "unclassified_word_0x38": f"0x{companion.metadata_words[1]:08X}",
            "runtime_identity_word_0x3c": f"0x{companion.metadata_words[2]:08X}",
            "source_sha256": sha256(blob),
        })
    assert len(deck_rows) == 75
    assert all(r["unclassified_status_byte_0x36"] == 1 and r["unclassified_byte_0x37"] == 0
               and r["unclassified_word_0x38"] == "0x00000000"
               and r["runtime_identity_word_0x3c"] == "0x00000000" for r in deck_rows)

    aod_rows = []
    flag_counts = collections.Counter()
    edge_count = 0
    nodes = collections.Counter()
    seen = set()
    def visit(blob: bytes, member: str, depth: int) -> None:
        nonlocal edge_count
        assert depth < 5
        archive = alar.open_nested(blob)
        for e in archive.entries:
            full = member + "|" + e.name
            if e.name.lower().endswith(".aar"):
                visit(e.data, full, depth + 1)
            elif e.name.lower().endswith(".aod"):
                raw = e.payload()
                record = alod.parse(raw)
                assert record.build() == raw
                assert not record.nonstandard_parent_links()
                edge_count += sum(n.parent is not None for n in record.nodes)
                for n in record.nodes:
                    nodes[n.kind] += 1
                    for desc, value in n.properties:
                        assert desc == 0x10 and len(value) == 4
                flag_counts[record.flags] += 1
                if full in seen:
                    raise ValueError("Duplicate ALOD member " + full)
                seen.add(full)
                aod_rows.append({
                    "source_member": full,
                    "byte_length": len(raw),
                    "flags_u8": f"0x{record.flags:02X}",
                    "node_count": len(record.nodes),
                    "gn_count": sum(n.kind == "GN  " for n in record.nodes),
                    "sp_count": sum(n.kind == "SP  " for n in record.nodes),
                    "parent_links_gn_to_sp": sum(n.parent is not None for n in record.nodes),
                    "field_names": "; ".join(record.field_names),
                    "parent_link_edges": "; ".join(n.name + "->" + n.parent for n in record.nodes if n.parent),
                    "source_sha256": sha256(raw),
                })
    for archive_path in data_root.rglob("*.aar"):
        visit(archive_path.read_bytes(), str(archive_path.relative_to(data_root)).replace("\\", "/"), 0)
    assert len(aod_rows) == 1247
    assert nodes == {"SP  ": 1248, "GN  ": 1078}
    assert edge_count == 1078
    assert flag_counts == {0: 446, 64: 793, 66: 8}

    outputs = {
        "CAM_36_SOURCE_RECTANGLES_20261108.csv": cam_rows,
        "ALOD_1247_SOURCE_HIERARCHIES_20261108.csv": aod_rows,
        "DECK_75_PROFILE_LOCATION_SOURCE_20261108.csv": deck_rows,
    }
    manifest = {
        "date": "2026-11-08",
        "source_data_root": str(data_root),
        "camera_records": len(cam_rows),
        "camera_4_point": 35,
        "camera_5_point": 1,
        "camera_runtime_loader_verified": False,
        "alod_records": len(aod_rows),
        "alod_flag_counts": {f"0x{x:02X}": n for x, n in sorted(flag_counts.items())},
        "alod_nodes": dict(nodes),
        "alod_gn_to_sp_edges": edge_count,
        "alod_unobserved_descriptor_types": 0,
        "deck_companion_records": len(deck_rows),
        "pname_catalog_size": len(pname.records),
        "location_catalog_size": len(location.records),
        "deck_profile_and_location_refs_valid": True,
        "deck_status_byte_36_semantics_verified": False,
        "outputs": list(outputs),
        "caveat": "Source corpus and Ghidra only; not an emulator-exact runtime feature claim.",
    }
    out.mkdir(parents=True, exist_ok=True)
    names = list(outputs) + ["CAM_ALOD_DECK_REFERENCE_VALIDATION_20261108.json"]
    existing = [n for n in names if (out / n).exists()]
    if existing:
        raise FileExistsError("Refusing overwrite: " + ", ".join(existing))
    for name, rows in outputs.items():
        write_csv(out / name, rows)
    with (out / names[-1]).open("x", encoding="utf8") as f:
        json.dump(manifest, f, ensure_ascii=False, indent=2)
        f.write("\n")
    return manifest

def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--data", type=Path,
                        default=Path(r"D:\Library\Development\JUS\Data"))
    parser.add_argument("--out", type=Path,
                        default=Path(r"D:\Library\Development\JUS\docs\Research"))
    opts = parser.parse_args()
    report = export(opts.data, opts.out)
    print("PASS: sources validated, outputs generated", report)

if __name__ == "__main__":
    main()
