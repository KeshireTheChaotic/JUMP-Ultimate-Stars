0215906c  stmdb sp!,{r3,r4,r5,lr}
02159070  mov r5,r0
02159074  ldrb r12,[r5,#0x4]
02159078  ldr r3,[0x21591b0]
0215907c  ldr r0,[0x21591b4]
02159080  ldrsb r3,[r3,r12]
02159084  add r1,r1,#0x20
02159088  smlabb r4,r2,r0,r1
0215908c  cmp r3,#0x0
02159090  beq 0x02159180
02159094  add r0,r4,r12, lsl #0x2
02159098  ldr r0,[r0,#0x1c0]
0215909c  mov r1,#0x0
021590a0  ldr r0,[r0,#0x4]
021590a4  ldr r2,[r0,#0x0]
021590a8  ldr r2,[r2,#0xd8]
021590ac  blx r2
021590b0  ldrb r0,[r5,#0x4]
021590b4  add r0,r4,r0, lsl #0x2
021590b8  ldr r0,[r0,#0x1c0]
021590bc  ldr r1,[r0,#0x0]
021590c0  ldr r1,[r1,#0x8]
021590c4  blx r1
021590c8  ldrb r1,[r5,#0x4]
021590cc  mov r3,#0x0
021590d0  mov r0,#0x1c
021590d4  add r1,r4,r1, lsl #0x2
021590d8  str r3,[r1,#0x1c0]
021590dc  ldrb r1,[r5,#0x4]
021590e0  add r2,r4,#0x4
021590e4  smulbb r1,r1,r0
021590e8  ldr r0,[r2,r1]
021590ec  cmp r0,#0x0
021590f0  strne r3,[r2,r1]
021590f4  ldrb r1,[r5,#0x4]
021590f8  mov r0,#0xc
021590fc  add r2,r4,#0x18c
02159100  smulbb r1,r1,r0
02159104  ldr r0,[r2,r1]
02159108  cmp r0,#0x0
0215910c  movne r0,#0x0
02159110  strne r0,[r2,r1]
02159114  ldrb r2,[r5,#0x4]
02159118  mov r0,#0x3000
0215911c  add r1,sp,#0x0
02159120  add r2,r4,r2, lsl #0x2
02159124  ldr r2,[r2,#0x2f8]
02159128  str r0,[sp,#0x0]
0215912c  ldr r0,[r2,#0x4]
02159130  ldr r2,[r0,#0x0]
02159134  ldr r2,[r2,#0x10]
02159138  blx r2
0215913c  ldrb r0,[r5,#0x4]
02159140  mov r1,#0x0
02159144  mov r2,#0x1
02159148  add r0,r4,r0, lsl #0x2
0215914c  str r1,[r0,#0x2f8]
02159150  ldrb r0,[r5,#0x4]
02159154  ldrb r3,[r4,#0x4d3]
02159158  sub r1,r2,#0x2
0215915c  add r0,r4,r0
02159160  add r0,r0,#0x300
02159164  ldrsb r0,[r0,#0x50]
02159168  orr r0,r3,r2, lsl r0
0215916c  strb r0,[r4,#0x4d3]
02159170  ldrb r0,[r5,#0x4]
02159174  add r0,r4,r0
02159178  strb r1,[r0,#0x350]
0215917c  b 0x021591a8
02159180  sub r0,r12,#0x4
02159184  and r5,r0,#0xff
02159188  add r0,r4,r5, lsl #0x2
0215918c  ldr r0,[r0,#0x1d0]
02159190  ldr r1,[r0,#0x0]
02159194  ldr r1,[r1,#0x8]
02159198  blx r1
0215919c  add r0,r4,r5, lsl #0x2
021591a0  mov r1,#0x0
021591a4  str r1,[r0,#0x1d0]
021591a8  mov r0,#0x0
021591ac  ldmia sp!,{r3,r4,r5,pc}
