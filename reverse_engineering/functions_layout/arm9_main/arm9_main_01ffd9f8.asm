01ffd9f8  stmdb sp!,{lr}
01ffd9fc  ldr r4,[r0,#-0x8]
01ffda00  ldr r9,[r0,#0x0]
01ffda04  add r4,r4,r9
01ffda08  ldrb r9,[r4,#-0xff]
01ffda0c  ldrb r10,[r4,#0xeff]
01ffda10  add r9,r9,r10
01ffda14  add r9,r9,#0x1
01ffda18  mov r5,r9, lsr #0x1
01ffda1c  bl 0x01ff9450
01ffda20  add r6,r5,r6, lsl #0x1
01ffda24  strb r6,[r4,#0xf01]
01ffda28  ldrb r7,[r4,#0xeff]
01ffda2c  add r7,r7,r6
01ffda30  mov r7,r7, asr #0x1
01ffda34  strb r7,[r4,#0xf00]
01ffda38  ldrb r8,[r4,#-0xff]
01ffda3c  add r8,r8,r6
01ffda40  mov r8,r8, asr #0x1
01ffda44  strb r8,[r4,#0x701]
01ffda48  ldrb r6,[r4,#0x6ff]
01ffda4c  add r8,r8,r6
01ffda50  mov r6,r8, asr #0x1
01ffda54  strb r6,[r4,#0x700]
01ffda58  ldrb r7,[r4,#-0x100]
01ffda5c  ldrb r8,[r4,#0x700]
01ffda60  add r8,r8,r7
01ffda64  mov r8,r8, asr #0x1
01ffda68  strb r8,[r4,#0x300]
01ffda6c  ldrb r7,[r4,#-0xff]
01ffda70  ldrb r8,[r4,#0x701]
01ffda74  add r8,r8,r7
01ffda78  mov r8,r8, asr #0x1
01ffda7c  strb r8,[r4,#0x301]
01ffda80  ldrb r7,[r4,#-0x100]
01ffda84  ldrb r8,[r4,#0x300]
01ffda88  add r8,r8,r7
01ffda8c  mov r8,r8, asr #0x1
01ffda90  strb r8,[r4,#0x100]
01ffda94  ldrb r7,[r4,#-0xff]
01ffda98  ldrb r8,[r4,#0x301]
01ffda9c  add r8,r8,r7
01ffdaa0  mov r8,r8, asr #0x1
01ffdaa4  strb r8,[r4,#0x101]
01ffdaa8  ldrb r7,[r4,#-0x100]
01ffdaac  ldrb r8,[r4,#0x100]
01ffdab0  add r8,r8,r7
01ffdab4  mov r8,r8, asr #0x1
01ffdab8  strb r8,[r4,#0x0]
01ffdabc  ldrb r7,[r4,#-0xff]
01ffdac0  ldrb r8,[r4,#0x101]
01ffdac4  add r8,r8,r7
01ffdac8  mov r8,r8, asr #0x1
01ffdacc  strb r8,[r4,#0x1]
01ffdad0  ldrb r7,[r4,#0x100]
01ffdad4  ldrb r8,[r4,#0x300]
01ffdad8  add r8,r8,r7
01ffdadc  mov r8,r8, asr #0x1
01ffdae0  strb r8,[r4,#0x200]
01ffdae4  ldrb r7,[r4,#0x101]
01ffdae8  ldrb r8,[r4,#0x301]
01ffdaec  add r8,r8,r7
01ffdaf0  mov r8,r8, asr #0x1
01ffdaf4  strb r8,[r4,#0x201]
01ffdaf8  ldrb r7,[r4,#0x300]
01ffdafc  ldrb r8,[r4,#0x700]
01ffdb00  add r8,r8,r7
01ffdb04  mov r8,r8, asr #0x1
01ffdb08  strb r8,[r4,#0x500]
01ffdb0c  ldrb r7,[r4,#0x301]
01ffdb10  ldrb r8,[r4,#0x701]
01ffdb14  add r8,r8,r7
01ffdb18  mov r8,r8, asr #0x1
01ffdb1c  strb r8,[r4,#0x501]
01ffdb20  ldrb r7,[r4,#0x300]
01ffdb24  ldrb r8,[r4,#0x500]
01ffdb28  add r8,r8,r7
01ffdb2c  mov r8,r8, asr #0x1
01ffdb30  strb r8,[r4,#0x400]
01ffdb34  ldrb r7,[r4,#0x301]
01ffdb38  ldrb r8,[r4,#0x501]
01ffdb3c  add r8,r8,r7
01ffdb40  mov r8,r8, asr #0x1
01ffdb44  strb r8,[r4,#0x401]
01ffdb48  ldrb r7,[r4,#0x500]
01ffdb4c  ldrb r8,[r4,#0x700]
01ffdb50  add r8,r8,r7
01ffdb54  mov r8,r8, asr #0x1
01ffdb58  strb r8,[r4,#0x600]
01ffdb5c  ldrb r7,[r4,#0x501]
01ffdb60  ldrb r8,[r4,#0x701]
01ffdb64  add r8,r8,r7
01ffdb68  mov r8,r8, asr #0x1
01ffdb6c  strb r8,[r4,#0x601]
01ffdb70  ldrb r7,[r4,#0x700]
01ffdb74  ldrb r8,[r4,#0xf00]
01ffdb78  add r8,r8,r7
01ffdb7c  mov r8,r8, asr #0x1
01ffdb80  strb r8,[r4,#0xb00]
01ffdb84  ldrb r7,[r4,#0x701]
01ffdb88  ldrb r8,[r4,#0xf01]
01ffdb8c  add r8,r8,r7
01ffdb90  mov r8,r8, asr #0x1
01ffdb94  strb r8,[r4,#0xb01]
01ffdb98  ldrb r7,[r4,#0x700]
01ffdb9c  ldrb r8,[r4,#0xb00]
01ffdba0  add r8,r8,r7
01ffdba4  mov r8,r8, asr #0x1
01ffdba8  strb r8,[r4,#0x900]
01ffdbac  ldrb r7,[r4,#0x701]
01ffdbb0  ldrb r8,[r4,#0xb01]
01ffdbb4  add r8,r8,r7
01ffdbb8  mov r8,r8, asr #0x1
01ffdbbc  strb r8,[r4,#0x901]
01ffdbc0  ldrb r7,[r4,#0x700]
01ffdbc4  ldrb r8,[r4,#0x900]
01ffdbc8  add r8,r8,r7
01ffdbcc  mov r8,r8, asr #0x1
01ffdbd0  strb r8,[r4,#0x800]
01ffdbd4  ldrb r7,[r4,#0x701]
01ffdbd8  ldrb r8,[r4,#0x901]
01ffdbdc  add r8,r8,r7
01ffdbe0  mov r8,r8, asr #0x1
01ffdbe4  strb r8,[r4,#0x801]
01ffdbe8  ldrb r7,[r4,#0x900]
01ffdbec  ldrb r8,[r4,#0xb00]
01ffdbf0  add r8,r8,r7
01ffdbf4  mov r8,r8, asr #0x1
01ffdbf8  strb r8,[r4,#0xa00]
01ffdbfc  ldrb r7,[r4,#0x901]
01ffdc00  ldrb r8,[r4,#0xb01]
01ffdc04  add r8,r8,r7
01ffdc08  mov r8,r8, asr #0x1
01ffdc0c  strb r8,[r4,#0xa01]
01ffdc10  ldrb r7,[r4,#0xb00]
01ffdc14  ldrb r8,[r4,#0xf00]
01ffdc18  add r8,r8,r7
01ffdc1c  mov r8,r8, asr #0x1
01ffdc20  strb r8,[r4,#0xd00]
01ffdc24  ldrb r7,[r4,#0xb01]
01ffdc28  ldrb r8,[r4,#0xf01]
01ffdc2c  add r8,r8,r7
01ffdc30  mov r8,r8, asr #0x1
01ffdc34  strb r8,[r4,#0xd01]
01ffdc38  ldrb r7,[r4,#0xb00]
01ffdc3c  ldrb r8,[r4,#0xd00]
01ffdc40  add r8,r8,r7
01ffdc44  mov r8,r8, asr #0x1
01ffdc48  strb r8,[r4,#0xc00]
01ffdc4c  ldrb r7,[r4,#0xb01]
01ffdc50  ldrb r8,[r4,#0xd01]
01ffdc54  add r8,r8,r7
01ffdc58  mov r8,r8, asr #0x1
01ffdc5c  strb r8,[r4,#0xc01]
01ffdc60  ldrb r7,[r4,#0xd00]
01ffdc64  ldrb r8,[r4,#0xf00]
01ffdc68  add r8,r8,r7
01ffdc6c  mov r8,r8, asr #0x1
01ffdc70  strb r8,[r4,#0xe00]
01ffdc74  ldrb r7,[r4,#0xd01]
01ffdc78  ldrb r8,[r4,#0xf01]
01ffdc7c  add r8,r8,r7
01ffdc80  mov r8,r8, asr #0x1
01ffdc84  strb r8,[r4,#0xe01]
01ffdc88  ldr r4,[r0,#-0x4]
01ffdc8c  ldr r9,[r0,#0x4]
01ffdc90  add r4,r4,r9
01ffdc94  bl 0x01ffd954
01ffdc98  add r4,r4,#0x1
01ffdc9c  bl 0x01ffd954
01ffdca0  ldmia sp!,{pc}
