"""Native JUS CommonTutorial VM script layout, source-preserving edit codec.

Verified from original ARM9 FUN_0206BC98, FUN_0206BD8C, and
FUN_0206C068; battle ov06 FUN_02150FA0, deckmake ov05 FUN_02161184.
The 4-byte header is the relative start offset for a string pool;
each preceding instruction is a three-u32, 12-byte record.
"""
from __future__ import annotations
import struct
from dataclasses import dataclass

TUTORIAL_FILES=tuple([f"battle/tutorial{i}.bin" for i in range(6)] + ["deckmake/tutorial.bin"])
OPCODE_NAMES={
    0:"Input override", 1:"Set input bits", 2:"Clear input bits",
    3:"Message/panel mode 3", 4:"Message/panel mode 4",
    5:"Clear panel flag", 6:"Panel transition 6", 7:"Panel wait/transition 7",
    8:"Panel timer", 9:"Display text", 10:"Delay", 11:"Application action / wait",
    12:"Set wait field", 13:"End script / cleanup"
}
OPCODE_COUNT=14


def signed16(word):
    return struct.unpack("<h",struct.pack("<H",word & 0xffff))[0]


@dataclass(frozen=True)
class Instruction:
    opcode: int
    arg1: int = 0
    arg2: int = 0

    @property
    def action_id(self):
        return signed16(self.arg1)

    @property
    def action_parameter(self):
        return signed16(self.arg1 >> 16)

    def build(self):
        if (not 0 <= self.opcode < OPCODE_COUNT or
                not 0 <= self.arg1 <= 0xffffffff or
                not 0 <= self.arg2 <= 0xffffffff):
            raise ValueError("Instruction must use known opcode and two unsigned u32 arguments")
        return struct.pack("<III",self.opcode,self.arg1,self.arg2)


@dataclass(frozen=True)
class Script:
    commands: tuple[Instruction, ...]
    pool: bytes

    @classmethod
    def parse(cls,blob:bytes)->"Script":
        if len(blob)<16:
            raise ValueError("Truncated tutorial script")
        at=struct.unpack_from("<I",blob)[0]
        if not 4<=at<=len(blob) or (at-4)%12:
            raise ValueError("Bad tutorial command/string-pool split offset")
        commands=tuple(Instruction(*struct.unpack_from("<III",blob,i))
                       for i in range(4,at,12))
        script=cls(commands,blob[at:])
        script.validate()
        return script

    def validate(self):
        if not self.commands or self.commands[-1].opcode!=13:
            raise ValueError("Tutorial must end with opcode 13 (native VM cleanup)")
        # The terminal opcode must remain last: otherwise a script could
        # silently skip every later command. Move/edit the commands explicitly.
        if any(c.opcode==13 for c in self.commands[:-1]):
            raise ValueError("Opcode 13 must be the final instruction")
        for c in self.commands:
            c.build()
            if c.opcode==9:
                self.message_bytes(c.arg1)

    def build(self):
        self.validate()
        start=4+12*len(self.commands)
        return struct.pack("<I",start)+b"".join(c.build() for c in self.commands)+self.pool

    def message_bytes(self,offset):
        if not 0<=offset<len(self.pool):
            raise ValueError(f"Message byte offset {offset} is outside pool")
        end=self.pool.find(b"\0",offset)
        if end<0:
            raise ValueError(f"Unterminated message at offset {offset}")
        return self.pool[offset:end]

    def message(self,offset):
        return self.message_bytes(offset).decode("cp932","strict")

    def edit(self,index,command):
        if not 0<=index<len(self.commands):
            raise IndexError(index)
        new=list(self.commands)
        new[index]=command
        result=Script(tuple(new),self.pool)
        result.validate()
        return result

    def insert(self,index,command):
        # Insert before final cleanup even if the user selected the last row.
        if not 0<=index<len(self.commands):
            raise IndexError(index)
        new=list(self.commands)
        new.insert(index,command)
        result=Script(tuple(new),self.pool)
        result.validate()
        return result

    def delete(self,index):
        if not 0<=index<len(self.commands)-1:
            raise ValueError("Cannot delete final script cleanup opcode")
        new=list(self.commands)
        del new[index]
        result=Script(tuple(new),self.pool)
        result.validate()
        return result

    def edit_message(self,index,text:str):
        if not 0<=index<len(self.commands) or self.commands[index].opcode!=9:
            raise ValueError("Selected command is not a text message")
        if not text or "\0" in text:
            raise ValueError("Tutorial message must be nonempty and contain no NUL")
        encoded=text.encode("cp932","strict")
        if encoded.decode("cp932","strict")!=text:
            raise ValueError("Tutorial message did not round-trip through CP932")
        # Copy-on-write: append new text instead of repacking all original
        # pointers. Other instructions and their source text bytes are intact.
        offset=len(self.pool)
        if offset>0xffffffff or offset+len(encoded)+1>0xffffffff:
            raise ValueError("String pool too large")
        cmd=self.commands[index]
        updated=list(self.commands)
        updated[index]=Instruction(cmd.opcode,offset,cmd.arg2)
        result=Script(tuple(updated),self.pool+encoded+b"\0")
        result.validate()
        return result


def instruction_label(script:Script,index:int):
    cmd=script.commands[index]
    op=OPCODE_NAMES[cmd.opcode]
    if cmd.opcode==9:
        return script.message(cmd.arg1).replace("\n"," / ")[:100]
    if cmd.opcode==11:
        return f"app action {cmd.action_id} · parameter {cmd.action_parameter}"
    if cmd.opcode==10:
        return f"wait {signed16(cmd.arg1)} (native clock unit not assumed)"
    return op
