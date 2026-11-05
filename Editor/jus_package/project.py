"""Game data tree access with nested-archive editing and rebuild.

A *resource path* addresses a member through any number of archives::

    chr/ChrArc.aar|chr/bb_b_01.aar|bb_b_01_.dtx

The first component is a file relative to the data root; each further
component is a member name inside the previous (possibly DSCP-wrapped)
archive.  :class:`DataRoot` caches parsed archives, records edits and rebuilds
only the archives that changed when :meth:`DataRoot.save` is called.
"""
from __future__ import annotations

import os
import copy
import re
import shutil
import tempfile
from dataclasses import dataclass
from pathlib import Path

from jus_formats import alar

SEP = '|'
CHAR_RE = re.compile(r'^chr/([a-z]{2}_[bsh]_\d{2})\.aar$', re.I)


def split(path: str) -> list[str]:
    return [p for p in path.split(SEP) if p]


def join(*parts: str) -> str:
    return SEP.join(p for p in parts if p)


@dataclass
class _Node:
    archive: alar.Archive
    dirty: bool = False


class DataRoot:
    def __init__(self, root: Path | str):
        self.root = Path(root)
        if not self.root.is_dir():
            raise FileNotFoundError(f'Data root not found: {self.root}')
        self._archives: dict[str, _Node] = {}
        self._files: dict[str, bytes] = {}      # in-session content of edited loose files (bin/koma.bin…)
        self._files_dirty: set[str] = set()     # loose files changed since the last save

    # ----------------------------------------------------------- loose files
    def write_file(self, rel: str, data: bytes) -> None:
        """Stage new bytes for a top-level file that is not an archive (saved by :meth:`save`)."""
        if len(split(rel)) != 1:
            raise ValueError(f'{rel} is an archive member; use write()')
        if data == self.read(rel):
            return
        self._files[rel] = bytes(data)
        self._files_dirty.add(rel)
        if rel.lower().endswith('.aar'):
            self._invalidate_below(rel)

    # ----------------------------------------------------------- archives
    def archive(self, path: str) -> alar.Archive:
        """Parsed archive at a resource path (top-level file or nested member)."""
        if path not in self._archives:
            parts = split(path)
            if len(parts) == 1:
                blob = self.read(parts[0])
                arc = alar.open_nested(blob)
            else:
                arc = alar.open_nested(self.entry(path).data)
            self._archives[path] = _Node(arc)
        return self._archives[path].archive

    def entry(self, path: str) -> alar.Entry:
        parts = split(path)
        if len(parts) < 2:
            raise ValueError(f'{path} is not an archive member')
        return self.archive(join(*parts[:-1])).get(parts[-1])

    def exists(self, path: str) -> bool:
        parts = split(path)
        if not (self.root / parts[0]).is_file():
            return False
        try:
            if len(parts) > 1:
                self.entry(path)
            return True
        except (KeyError, ValueError):
            return False

    def read(self, path: str) -> bytes:
        """Payload bytes (DSCP removed) of a member or a whole file."""
        parts = split(path)
        if len(parts) == 1:
            if parts[0] in self._files:
                return self._files[parts[0]]
            return (self.root / parts[0]).read_bytes()
        return self.entry(path).payload()

    def write(self, path: str, payload: bytes, compress: bool | None = None) -> None:
        e = self.entry(path)
        if e.payload() == payload and compress in (None, e.compressed):
            return
        e.set_payload(payload, compress)
        self._invalidate_below(path)
        self._mark(join(*split(path)[:-1]))

    def add(self, container: str, entry: alar.Entry) -> None:
        self.archive(container).add(entry)
        self._mark(container)

    def remove(self, path: str) -> None:
        parts = split(path)
        container = join(*parts[:-1])
        self.archive(container).remove(parts[-1])
        self._invalidate_below(path)
        self._mark(container)

    def _invalidate_below(self, path: str) -> None:
        for key in [k for k in self._archives if k == path or k.startswith(path + SEP)]:
            del self._archives[key]

    def _mark(self, container: str) -> None:
        node = self._archives.get(container)
        if node is None:
            self.archive(container)
            node = self._archives[container]
        node.dirty = True

    def mark_archive_dirty(self, container: str) -> None:
        """Call after mutating an Archive object returned by :meth:`archive`."""
        self._mark(container)

    def dirty_files(self) -> list[str]:
        return sorted({split(k)[0] for k, n in self._archives.items() if n.dirty} | self._files_dirty)

    # ----------------------------------------------------------- save
    def _flush(self) -> dict[str, bytes]:
        """Propagate nested edits upward; return rebuilt top-level files."""
        keys = sorted((k for k, n in self._archives.items() if n.dirty),
                      key=lambda k: -len(split(k)))
        pending = set(keys)
        out: dict[str, bytes] = {}
        while pending:
            deepest = max(pending, key=lambda k: len(split(k)))
            pending.discard(deepest)
            node = self._archives[deepest]
            built = node.archive.build()
            parts = split(deepest)
            if len(parts) == 1:
                out[deepest] = built
            else:
                parent = join(*parts[:-1])
                self.archive(parent).get(parts[-1]).set_payload(built)
                self._archives[parent].dirty = True
                pending.add(parent)
            node.dirty = False
        return out

    def index_snapshot(self) -> 'DataRoot':
        """Isolate applied (but not yet saved) resources for read-only indexing.

        Deep-copy cached archives before propagating nested changes.  An index
        built from the returned snapshot sees Apply edits, and its background
        worker cannot mutate the editor's working archive cache.
        """
        snap = DataRoot(self.root)
        snap._archives = copy.deepcopy(self._archives)
        snap._files = dict(self._files)
        snap._files_dirty = set(self._files_dirty)
        snap._flush()                 # updates snapshot's cached parent archives only
        return snap

    def save(self, out_root: Path | str | None = None, backup: bool = True) -> list[Path]:
        """Stage writes in destination directories, then atomically replace files.

        On a failed multi-file commit, restore the previously existing files.
        Dirty state is retained on failure; ``.orig`` backups are never
        overwritten.  Filesystems do not provide a single multi-file atomic
        rename, so sudden power loss during a commit remains a limitation.
        """
        original_dirty = {k for k, n in self._archives.items() if n.dirty}
        loose_dirty = set(self._files_dirty)
        try:
            files = self._flush()
            files.update({rel: self._files[rel] for rel in loose_dirty})
            if not files:
                return []
            base = Path(out_root) if out_root is not None else self.root
            staged: dict[Path, Path] = {}
            rollback: dict[Path, Path | None] = {}
            committed: list[Path] = []
            garbage: set[Path] = set()

            def temp_near(path: Path) -> Path:
                fd, name = tempfile.mkstemp(prefix='.' + path.name + '.', suffix='.tmp', dir=path.parent)
                os.close(fd)
                result = Path(name)
                garbage.add(result)
                return result

            try:
                # Prepare *every* replacement and recovery copy before modifying
                # a destination; validate that paths stay inside the chosen root.
                for rel, blob in sorted(files.items()):
                    dst = base / rel
                    if Path(rel).is_absolute() or '..' in Path(rel).parts:
                        raise ValueError(f'Unsafe data-relative save path: {rel}')
                    dst.parent.mkdir(parents=True, exist_ok=True)
                    tmp = temp_near(dst)
                    with tmp.open('wb') as f:
                        f.write(blob)
                        f.flush()
                        os.fsync(f.fileno())
                    if dst.exists():
                        prev = temp_near(dst)
                        shutil.copy2(dst, prev)
                        rollback[dst] = prev
                        if out_root is None and backup:
                            bak = dst.with_name(dst.name + '.orig')
                            if not bak.exists():
                                # Stage and install the original backup without
                                # touching the original destination.
                                bak_tmp = temp_near(dst)
                                shutil.copy2(dst, bak_tmp)
                                os.replace(bak_tmp, bak)
                                garbage.discard(bak_tmp)
                    else:
                        rollback[dst] = None
                    staged[dst] = tmp

                for dst, tmp in staged.items():
                    os.replace(tmp, dst)
                    garbage.discard(tmp)
                    committed.append(dst)
            except Exception:
                failed_restore = []
                for dst in reversed(committed):
                    old = rollback[dst]
                    try:
                        if old is None:
                            dst.unlink(missing_ok=True)
                        else:
                            os.replace(old, dst)
                            garbage.discard(old)
                    except OSError as exc:
                        failed_restore.append(f'{dst}: {exc}')
                if failed_restore:
                    raise OSError('Save failed and rollback was incomplete: ' + '; '.join(failed_restore))
                raise
            finally:
                for tmp in garbage:
                    tmp.unlink(missing_ok=True)

            self._files_dirty.difference_update(loose_dirty)
            return list(staged)
        except Exception:
            # _flush propagated nested payloads into parent archives before
            # the failed write. Re-mark both original edits and changed roots.
            for key in original_dirty:
                if key in self._archives:
                    self._archives[key].dirty = True
            for rel in self.dirty_files() + [k.split(SEP)[0] for k in original_dirty]:
                if rel in self._archives:
                    self._archives[rel].dirty = True
            self._files_dirty.update(loose_dirty)
            raise

    # ----------------------------------------------------------- discovery
    def characters(self) -> list[str]:
        arc = self.archive('chr/ChrArc.aar')
        return sorted({m.group(1).lower() for e in arc.entries if (m := CHAR_RE.match(e.name))})

    def effect_archives(self) -> list[str]:
        out = []
        for f in sorted((self.root / 'efc').glob('*.aar')):
            out.append(f.relative_to(self.root).as_posix())
        return out

    def character_sources(self, char_id: str) -> list[dict]:
        """Archives/members that make up a character's sprite package."""
        cid = char_id.lower()
        found = []
        chrarc = self.archive('chr/ChrArc.aar')
        pat = re.compile(rf'^chr/{re.escape(cid)}(_[0-9a-z]+)?\.aar$', re.I)
        for e in chrarc.entries:
            if pat.match(e.name):
                found.append({'path': join('chr/ChrArc.aar', e.name), 'role': 'animation-archive'})
        for f in sorted((self.root / 'chr').glob(f'{cid}*c.aar')):
            if re.match(rf'^{re.escape(cid)}(_[0-9a-z]+)?c\.aar$', f.name, re.I):
                found.append({'path': f'chr/{f.name}', 'role': 'image-archive'})
        if (self.root / 'chr/ChrBin.aar').is_file():
            binarc = self.archive('chr/ChrBin.aar')
            for e in binarc.entries:
                if re.match(rf'^chr/[a-z]+/{re.escape(cid)}\.bin$', e.name, re.I):
                    found.append({'path': join('chr/ChrBin.aar', e.name), 'role': 'gameplay-table'})
        if (self.root / 'battle/ChrWin.aar').is_file():
            win = self.archive('battle/ChrWin.aar')
            for e in win.entries:
                if re.match(rf'^battle/chr/{re.escape(cid)}(_b)?\.aar$', e.name, re.I):
                    found.append({'path': join('battle/ChrWin.aar', e.name), 'role': 'window-archive'})
        return found
