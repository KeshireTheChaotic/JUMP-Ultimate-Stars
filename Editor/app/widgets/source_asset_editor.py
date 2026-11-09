"""Source asset edit window. Nothing in this window edits ARM9 engine code.

The editor deliberately distinguishes two operations:
- original source asset/text bytes: editable and staged in DataRoot;
- runtime screen placement, renderer, BG priority, callbacks: read-only.
"""
from __future__ import annotations
import tkinter as tk
from tkinter import ttk, filedialog, messagebox
from tkinter.scrolledtext import ScrolledText

from jus_package import sourceassets

MAX_INLINE=65536


class SourceAssetEditor(tk.Toplevel):
    def __init__(self, parent, root, paths: list[str], on_staged=None):
        super().__init__(parent)
        self.root_data=root
        self.on_staged=on_staged
        self.paths=list(dict.fromkeys(p for p in paths if root.exists(p)))
        if not self.paths:
            raise ValueError('No original source asset is available for this selection.')
        self.title('Edit original JUS asset bytes — NOT hard-coded engine layout')
        self.geometry('1000x720')
        self.minsize(680,400)
        self.path=tk.StringVar(value=self.paths[0])
        self.mode=tk.StringVar(value='hex')
        self.unsafe=tk.BooleanVar(value=False)
        bar=ttk.Frame(self,padding=8)
        bar.pack(fill='x')
        ttk.Label(bar,text='Source asset').pack(side='left')
        sel=ttk.Combobox(bar,textvariable=self.path,values=self.paths,state='normal')
        sel.pack(side='left',fill='x',expand=True,padx=8)
        sel.bind('<<ComboboxSelected>>',self._select_path)
        sel.bind('<Return>',self._select_path)
        ttk.Label(bar,text='(or enter any game-relative path)').pack(side='right')
        line=ttk.Frame(self,padding=(8,0))
        line.pack(fill='x')
        ttk.Radiobutton(line,text='Hex bytes (lossless)',variable=self.mode,
                        value='hex',command=self._switch_mode).pack(side='left')
        ttk.Radiobutton(line,text='Plain CP932 (only if reversible)',variable=self.mode,
                        value='cp932',command=self._switch_mode).pack(side='left',padx=10)
        ttk.Checkbutton(line,text='Expert: stage bytes even if format validator fails',
                        variable=self.unsafe).pack(side='right')
        self.notice=ttk.Label(self,wraplength=900)
        self.notice.pack(anchor='w',fill='x',padx=8,pady=(4,6))
        self.text=ScrolledText(self,wrap='none',undo=True,font=('Consolas',10))
        self.text.pack(fill='both',expand=True,padx=8)
        foot=ttk.Frame(self,padding=8)
        foot.pack(fill='x')
        ttk.Button(foot,text='Apply to unsaved game data',command=self._apply).pack(side='left',padx=3)
        ttk.Button(foot,text='Import replacement file…',command=self._import).pack(side='left',padx=3)
        ttk.Button(foot,text='Export original bytes…',command=self._export).pack(side='left',padx=3)
        ttk.Button(foot,text='Reload staged bytes',command=self._load).pack(side='left',padx=3)
        ttk.Button(foot,text='Close',command=self.destroy).pack(side='right',padx=3)
        self._loaded_mode='hex'
        self._buffer=b''
        self._load()

    def _select_path(self,_event=None):
        self.mode.set('hex')
        self._load()

    def _load(self):
        path=self.path.get()
        try:
            sourceassets.validate_asset_path(path)
            if not self.root_data.exists(path):
                raise FileNotFoundError(path)
            self._buffer=self.root_data.read(path)
            self._switch_mode()
        except (KeyError,OSError,ValueError) as exc:
            messagebox.showerror('Read source asset',str(exc),parent=self)

    def _switch_mode(self):
        current=self.mode.get()
        plain=sourceassets.cp932_roundtrip(self._buffer)
        if current=='cp932' and plain is None:
            self.mode.set('hex')
            messagebox.showwarning('Binary game data',
                'This resource cannot be represented losslessly as plain CP932. '
                'Use hex editing or import a replacement file.',parent=self)
            current='hex'
        self.text.delete('1.0','end')
        inline=len(self._buffer)<=MAX_INLINE
        if inline:
            value=plain if current=='cp932' else sourceassets.format_hex(self._buffer)
            self.text.insert('1.0',value)
        self.text.config(state='normal' if inline else 'disabled')
        self._loaded_mode=current
        try: fmt=sourceassets.inspect_asset(self.path.get(),self._buffer)
        except (ValueError,TypeError,IndexError) as exc:fmt='Unknown or invalid format: '+str(exc)
        self.notice.config(text=f'{self.path.get()} | {len(self._buffer):,} original bytes | {fmt}. '
             +('This file is too large for inline editing; use Import replacement file.' if not inline else
               'Edits affect the original asset data only. Engine placement and controls stay hard-coded.'))

    def _current_bytes(self):
        if len(self._buffer)>MAX_INLINE:
            raise ValueError('Import a replacement file to edit this large resource.')
        text=self.text.get('1.0','end-1c')
        if self.mode.get()=='cp932':
            return text.encode('cp932','strict')
        return sourceassets.decode_hex(text)

    def _stage(self,data:bytes):
        path=self.path.get()
        try:
            status=sourceassets.stage_asset(self.root_data,path,data,
                                            accept_invalid=self.unsafe.get())
        except (ValueError,KeyError,IndexError,OverflowError,UnicodeError,OSError) as exc:
            messagebox.showerror('Asset validation',str(exc),parent=self)
            return
        self._buffer=data
        if self.on_staged:self.on_staged(path)
        self.notice.config(text=f'STAGED (not saved): {path} | {len(data):,} bytes | {status}. '
                                'Use the main editor Save command to persist.')
        self.text.edit_modified(False)

    def _apply(self):
        try:data=self._current_bytes()
        except (ValueError,UnicodeError) as exc:
            messagebox.showerror('Invalid source bytes',str(exc),parent=self)
            return
        self._stage(data)

    def _import(self):
        path=filedialog.askopenfilename(parent=self,title='Import replacement asset bytes')
        if path:
            try:
                with open(path,'rb') as f:data=f.read()
                if len(data)>128*1024*1024:
                    raise ValueError('Replacement exceeds 128 MiB.')
            except (OSError,ValueError) as exc:
                messagebox.showerror('Import',str(exc),parent=self)
                return
            self._stage(data)
            self._load()

    def _export(self):
        path=filedialog.asksaveasfilename(parent=self,title='Export original game data')
        if path:
            try:
                with open(path,'wb') as f:f.write(self._buffer)
            except OSError as exc:
                messagebox.showerror('Export',str(exc),parent=self)


class InfoRecordEditor(tk.Toplevel):
    """Edit any 0..145 original CommonInfo record (three CP932 strings).

    This is a DATA browser, not a claim that the currently selected scene
    uses the chosen ID. Only UI callbacks proven in ARM9 bind it to widgets.
    """
    def __init__(self,parent,root,on_staged=None,record=0):
        from jus_formats import infotext
        super().__init__(parent)
        self.root_data=root
        self.on_staged=on_staged
        self.title('Original InfoDeck messages — 146 editable records')
        self.geometry('730x320')
        self.resizable(True,False)
        self.record=tk.IntVar(value=max(0,min(145,record)))
        top=ttk.Frame(self,padding=12)
        top.pack(fill='x')
        ttk.Label(top,text='InfoDeck message ID (0–145):').pack(side='left')
        self.selector=ttk.Spinbox(top,from_=0,to=145,textvariable=self.record,width=7,
                                 command=self.load_record)
        self.selector.pack(side='left',padx=8)
        self.selector.bind('<Return>',lambda _e:self.load_record())
        self.selector.bind('<FocusOut>',lambda _e:self.load_record())
        ttk.Label(self,text='Original game data: bin/InfoDeck.aar | bin/info/*.bin. '
                  'This selector changes editable content, not a scene’s hard-coded message binding.',
                  wraplength=680).pack(fill='x',padx=12,pady=8)
        self.entries=[]
        for i in range(3):
            line=ttk.Frame(self,padding=(12,4))
            line.pack(fill='x')
            ttk.Label(line,text=f'Line {i+1}').pack(side='left')
            v=tk.StringVar()
            ttk.Entry(line,textvariable=v,width=75).pack(side='left',fill='x',expand=True,padx=8)
            self.entries.append(v)
        self.info=ttk.Label(self,text='',wraplength=680)
        self.info.pack(fill='x',padx=12,pady=10)
        actions=ttk.Frame(self,padding=12)
        actions.pack(fill='x')
        ttk.Button(actions,text='Stage edited lines (all 42 series files)',
                   command=self.apply).pack(side='left')
        ttk.Button(actions,text='Close',command=self.destroy).pack(side='right')
        self.load_record()

    def load_record(self):
        from jus_formats import infotext
        try:
            number=int(self.record.get())
            if not 0<=number<infotext.SHARED_RECORD_COUNT:
                raise ValueError('Record must be 0–145')
            lines=infotext.read_shared_explanation(self.root_data,number)
            for var,value in zip(self.entries,lines):
                var.set(value)
            self.info.config(text=f'Original record {number}; literal | is a blank 6px '
                                  'glyph in jskfont.aft. Only modified original text is staged.')
        except (ValueError,IndexError,KeyError,OSError) as exc:
            self.info.config(text=f'Cannot load original message: {exc}')

    def apply(self):
        from jus_formats import infotext
        try:
            number=int(self.record.get())
            n=infotext.stage_shared_explanation(self.root_data,number,
                                                 tuple(v.get() for v in self.entries))
            self.info.config(text=f'Message {number}: {n} series tables staged. '
                                  'Use the main editor Save command to persist.')
            if self.on_staged:self.on_staged(infotext.INFO_ARCHIVE)
        except (ValueError,UnicodeError,KeyError,IndexError,OSError) as exc:
            messagebox.showerror('InfoDeck message',str(exc),parent=self)
