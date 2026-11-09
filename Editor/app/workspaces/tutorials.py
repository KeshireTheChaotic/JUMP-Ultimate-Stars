"""Original tutorial VM command/text editor in the Level workspace bottom ribbon.

No automatic bypass controls: the user edits individual source instructions.
Only six battle script slots and one separately launched deck script exist.
"""
from __future__ import annotations

import tkinter as tk
from tkinter import ttk,messagebox

from jus_formats import tutorial
from jus_package import tutorials as bindings
from .. import theme as T


def read_u32(s):
    value=int(s.strip(),0)
    if not 0<=value<=0xffffffff:
        raise ValueError("u32 argument must be 0..0xFFFFFFFF")
    return value


class TutorialPanel:
    def __init__(self,workspace,parent):
        self.ws=workspace
        self.app=workspace.app
        self.scripts={}
        self.originals={}
        self.current=tutorial.TUTORIAL_FILES[0]
        self.node_id=None
        self.selected_index=None
        self._busy=False
        self.source_var=tk.StringVar(value=self.current)
        self.op_var=tk.StringVar(value="9")
        self.arg1_var=tk.StringVar(value="0")
        self.arg2_var=tk.StringVar(value="0")
        self.info_var=tk.StringVar(value="No original game Data loaded.")
        self.context_var=tk.StringVar(value="")
        self.frame=self._build(parent)

    def _build(self,parent):
        body=ttk.Frame(parent)
        body.pack(fill="both",expand=True)
        head=ttk.Frame(body)
        head.pack(fill="x",padx=8,pady=4)
        ttk.Label(head,text="Tutorial script:").pack(side="left")
        source=ttk.Combobox(head,textvariable=self.source_var,
                            values=tutorial.TUTORIAL_FILES,
                            width=30,state="readonly")
        source.pack(side="left",padx=6)
        source.bind("<<ComboboxSelected>>",lambda _e:self.choose(self.source_var.get()))
        ttk.Label(head,text="Seven original scripts · shared slots · no automatic bypass",
                  style="Toolbar.TLabel").pack(side="left",padx=8)
        ttk.Label(body,textvariable=self.info_var,wraplength=850,
                  justify="left").pack(fill="x",padx=8)
        ttk.Label(body,textvariable=self.context_var,wraplength=850,
                  justify="left",style="Toolbar.TLabel").pack(fill="x",padx=8,pady=(2,5))

        middle=ttk.PanedWindow(body,orient="horizontal")
        middle.pack(fill="both",expand=True,padx=6,pady=3)
        lf=ttk.Frame(middle)
        middle.add(lf,weight=3)
        self.table=ttk.Treeview(lf,columns=("opcode","arg1","arg2","meaning"),
                                show="tree headings",selectmode="browse",height=8)
        self.table.heading("#0",text="#")
        self.table.column("#0",width=46,stretch=False)
        for c,label,width in (("opcode","Opcode",106),("arg1","Arg1 (u32)",116),
                              ("arg2","Arg2 (u32)",114),("meaning","Decoded command / text",390)):
            self.table.heading(c,text=label)
            self.table.column(c,width=width,stretch=c=="meaning")
        self.table.pack(side="left",fill="both",expand=True)
        scroll=ttk.Scrollbar(lf,orient="vertical",command=self.table.yview)
        scroll.pack(side="right",fill="y")
        self.table.configure(yscrollcommand=scroll.set)
        self.table.bind("<<TreeviewSelect>>",self.select_instruction)

        rf=ttk.Frame(middle)
        middle.add(rf,weight=2)
        ttk.Label(rf,text="Selected original instruction").grid(row=0,column=0,columnspan=2,sticky="w",pady=(0,3))
        for i,(label,var) in enumerate((("Opcode (0–13)",self.op_var),
                                         ("Argument 1 (u32)",self.arg1_var),
                                         ("Argument 2 (u32)",self.arg2_var)),start=1):
            ttk.Label(rf,text=label).grid(row=i,column=0,sticky="w",pady=2)
            ttk.Entry(rf,textvariable=var,width=16).grid(row=i,column=1,sticky="ew",padx=4)
        self.help=tk.Label(rf,text="",wraplength=350,justify="left",
                           fg=T.MUTED,bg=T.PANEL)
        self.help.grid(row=3,column=0,columnspan=2,sticky="ew",pady=4)
        ttk.Button(rf,text="Update selected command",command=self.update_command).grid(
            row=4,column=0,columnspan=2,sticky="ew",pady=2)
        ttk.Button(rf,text="Insert command before selection",command=self.insert_command).grid(
            row=5,column=0,columnspan=2,sticky="ew",pady=2)
        ttk.Button(rf,text="Delete selected command",command=self.delete_command).grid(
            row=6,column=0,columnspan=2,sticky="ew",pady=2)
        ttk.Label(rf,text="Display text (opcode 9, original CP932)").grid(
            row=7,column=0,columnspan=2,sticky="w",pady=(8,2))
        self.text=tk.Text(rf,height=5,width=33,undo=True,wrap="word")
        self.text.grid(row=8,column=0,columnspan=2,sticky="nsew")
        ttk.Button(rf,text="Update selected text",command=self.update_message).grid(
            row=9,column=0,columnspan=2,sticky="ew",pady=3)
        ttk.Label(rf,text="Edits are staged. Level Apply → Save writes the loose .bin files. "
                          "The last opcode 13 is retained for native cleanup.",
                  wraplength=350,justify="left",style="Toolbar.TLabel").grid(
            row=10,column=0,columnspan=2,sticky="ew",pady=4)
        rf.columnconfigure(1,weight=1)
        rf.rowconfigure(8,weight=1)
        return body

    def on_root(self):
        self.scripts={}
        self.originals={}
        root=self.app.root_data
        if root is not None:
            try:
                for name in tutorial.TUTORIAL_FILES:
                    data=root.read(name)
                    s=tutorial.Script.parse(data)
                    if s.build()!=data:
                        raise ValueError(f"{name} is not byte-exact after decoding")
                    self.scripts[name]=s
                    self.originals[name]=data
            except (OSError,ValueError,KeyError,UnicodeError) as exc:
                self.scripts.clear()
                self.originals.clear()
                self.info_var.set(f"Tutorial decoding failed: {exc}")
        self.current=tutorial.TUTORIAL_FILES[0]
        self.choose(self.current)
        self.select_node(self.node_id)

    def select_node(self,node_id):
        self.node_id=node_id
        c=self.ws.missions.catalog
        if c is None or node_id is None or not 0<=node_id<c.graph.node_count:
            self._set_context()
            return
        name=bindings.binding_for_node(c,node_id)
        if name is not None and name in self.scripts:
            self.choose(name)
        self._set_context()

    def _set_context(self):
        catalog=self.ws.missions.catalog
        if catalog is None:
            self.context_var.set("No J-Galaxy progression definitions loaded.")
            return
        if self.current==bindings.DECK_FILE:
            self.context_var.set("Deckmaking tutorial: loaded separately by overlay5 "
                  "FUN_02161184, not a J-Galaxy battle or mission definition.")
            return
        links=bindings.consumer_summary(catalog,self.current)
        nodes=", ".join(f"#{x.node_id} ({x.definition_name}, def #{x.definition_id})"
                        for x in links[:18])
        desc=f"Normal battle path: rule 3 → battle type 0x0C → script slot " \
             f"{bindings.BATTLE_FILES.index(self.current)}. Linked nodes: {nodes or 'none'}."
        if self.node_id is not None:
            n=catalog.graph.get(self.node_id)
            definition=catalog.definition(n)
            selected=bindings.binding_for_node(catalog,self.node_id)
            desc+=f" Selected node #{self.node_id}: "
            desc+=(f"USES this tutorial slot on normal battle launch"
                   if selected==self.current else
                   f"{'mission' if n.mission else 'battle'} definition #{n.definition_id}"
                   f" does not select this slot on the normal battle path")
            desc+="."
        desc+=" Scene modes may override native battle type; script file is shared by all listed nodes."
        self.context_var.set(desc)

    def choose(self,name):
        if name not in tutorial.TUTORIAL_FILES:
            return
        self.current=name
        self.source_var.set(name)
        self.refresh()

    def refresh(self,select=0):
        self.table.delete(*self.table.get_children())
        self.selected_index=None
        s=self.scripts.get(self.current)
        if s is None:
            self.info_var.set(f"{self.current} unavailable")
            self._set_context()
            return
        for i,cmd in enumerate(s.commands):
            self.table.insert("","end",iid=str(i),text=str(i),
                values=(f"{cmd.opcode}: {tutorial.OPCODE_NAMES[cmd.opcode]}",
                        f"0x{cmd.arg1:08X}",f"0x{cmd.arg2:08X}",
                        tutorial.instruction_label(s,i)))
        self.info_var.set(f"{self.current} · {len(s.commands)} original 12-byte commands · "
             f"{sum(x.opcode==9 for x in s.commands)} messages · "
             f"{len(s.pool)} original/staged string-pool bytes"
             +(" · MODIFIED" if s.build()!=self.originals[self.current] else " · source unchanged"))
        if s.commands:
            self.table.selection_set(str(min(max(0,select),len(s.commands)-1)))
            self.select_instruction()
        self._set_context()

    def select_instruction(self,_event=None):
        selected=self.table.selection()
        if not selected:
            return
        i=int(selected[0])
        s=self.scripts.get(self.current)
        if s is None or not 0<=i<len(s.commands):
            return
        cmd=s.commands[i]
        self.selected_index=i
        self.op_var.set(str(cmd.opcode))
        self.arg1_var.set(f"0x{cmd.arg1:08X}")
        self.arg2_var.set(f"0x{cmd.arg2:08X}")
        self.help.configure(text=(
            f"Native opcode {cmd.opcode}: {tutorial.OPCODE_NAMES[cmd.opcode]}"
            + (f" · nested action ID {cmd.action_id}, signed parameter {cmd.action_parameter}"
               if cmd.opcode==11 else "")
            + f" · original command offset 0x{4+12*i:04X}."))
        self.text.delete("1.0","end")
        if cmd.opcode==9:
            self.text.insert("1.0",s.message(cmd.arg1))

    def _change(self,script,label,select):
        self.ws.focus="tutorial"
        self.app.history.push("level-tutorial",label,self.snapshot())
        self.scripts[self.current]=script
        self.refresh(select)
        self.app._update_undo_label()
        self.app.update_dirty()
        self.app.status.set(f"Tutorial: {label} in {self.current}. Level Apply then Save.")
        
    def _run(self,transform,label,select):
        try:
            if self.current not in self.scripts or self.selected_index is None:
                raise ValueError("Select a tutorial instruction")
            script=transform()
        except (ValueError,IndexError,UnicodeError,OverflowError) as exc:
            messagebox.showerror("Tutorial command",str(exc))
            return
        if script.build()!=self.scripts[self.current].build():
            self._change(script,label,select)

    def _values(self):
        op=read_u32(self.op_var.get())
        if op not in tutorial.OPCODE_NAMES:
            raise ValueError("Opcode must be 0–13")
        return tutorial.Instruction(op,read_u32(self.arg1_var.get()),
                                    read_u32(self.arg2_var.get()))

    def update_command(self):
        i=self.selected_index
        self._run(lambda:self.scripts[self.current].edit(i,self._values()),
                  "update tutorial command",i or 0)

    def insert_command(self):
        i=self.selected_index
        self._run(lambda:self.scripts[self.current].insert(i,self._values()),
                  "insert tutorial command",i or 0)

    def delete_command(self):
        i=self.selected_index
        self._run(lambda:self.scripts[self.current].delete(i),
                  "delete tutorial command",max(0,(i or 0)-1))

    def update_message(self):
        i=self.selected_index
        text=self.text.get("1.0","end-1c")
        self._run(lambda:self.scripts[self.current].edit_message(i,text),
                  "update tutorial CP932 text",i or 0)

    def snapshot(self):
        return {n:s.build() for n,s in self.scripts.items()}

    def restore(self,blobs):
        for path,blob in blobs.items():
            if path in tutorial.TUTORIAL_FILES:
                self.scripts[path]=tutorial.Script.parse(blob)
        self.refresh(self.selected_index or 0)
        self.app.update_dirty()

    @property
    def dirty(self):
        return any(s.build()!=self.originals.get(n) for n,s in self.scripts.items())

    def apply(self):
        if not self.dirty:
            return []
        changed=[]
        try:
            for name,s in self.scripts.items():
                blob=s.build()
                if blob!=self.originals[name]:
                    if tutorial.Script.parse(blob).build()!=blob:
                        raise ValueError(f"{name}: source command round-trip error")
                    changed.append((name,blob))
        except (ValueError,UnicodeError) as exc:
            messagebox.showerror("Tutorial validation",str(exc))
            return None
        for name,blob in changed:
            self.app.root_data.write_file(name,blob)
            self.originals[name]=blob
        self.refresh(self.selected_index or 0)
        return [name for name,_ in changed]
