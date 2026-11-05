0215f1fc  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0215f200  sub sp,sp,#0x480
0215f204  mov r4,r2
0215f208  mov r6,#0x0
0215f20c  add r2,sp,#0x400
0215f210  mov r5,r6, lsl #0x1
0215f214  ldrh r3,[r0,r5]
0215f218  add r6,r6,#0x1
0215f21c  cmp r6,#0xa
0215f220  strh r3,[r2,r5]
0215f224  blt 0x0215f210
0215f228  ldrb r3,[r0,#0x34]
0215f22c  mov r2,#0x0
0215f230  strb r3,[sp,#0x434]
0215f234  ldrb r3,[r0,#0x35]
0215f238  strb r3,[sp,#0x435]
0215f23c  ldrb r3,[r0,#0x36]
0215f240  strb r3,[sp,#0x436]
0215f244  ldrb r3,[r0,#0x37]
0215f248  strb r3,[sp,#0x437]
0215f24c  ldrh r5,[r0,#0x38]
0215f250  add r3,sp,#0x400
0215f254  strh r5,[r3,#0x38]
0215f258  ldrh r5,[r0,#0x3a]
0215f25c  strh r5,[r3,#0x3a]
0215f260  ldr r3,[r0,#0x3c]
0215f264  add r5,sp,#0x400
0215f268  str r3,[sp,#0x43c]
0215f26c  add r3,r0,r2, lsl #0x1
0215f270  ldrh r6,[r3,#0x14]
0215f274  add r3,r5,r2, lsl #0x1
0215f278  add r2,r2,#0x1
0215f27c  strh r6,[r3,#0x14]
0215f280  cmp r2,#0x10
0215f284  blt 0x0215f26c
0215f288  mov r0,r1
0215f28c  add r1,sp,#0x440
0215f290  mov r2,#0x40
0215f294  bl 0x02051890
0215f298  bl 0x021bdd90
0215f29c  mov r5,r0
0215f2a0  ldr r0,[0x215f3e8]
0215f2a4  add r6,sp,#0x400
0215f2a8  bl 0x02030e88
0215f2ac  mov r7,r0
0215f2b0  mov r8,#0x0
0215f2b4  b 0x0215f2d4
0215f2b8  ldr r0,[r7,#0x4]
0215f2bc  bl 0x02031070
0215f2c0  ldrb r1,[r6,#0x0]
0215f2c4  and r0,r0,#0xff
0215f2c8  add r8,r8,#0x1
0215f2cc  eor r0,r1,r0
0215f2d0  strb r0,[r6],#0x1
0215f2d4  cmp r8,r5
0215f2d8  bcc 0x0215f2b8
0215f2dc  mov r0,r7
0215f2e0  bl 0x02030ebc
0215f2e4  bl 0x021bdd90
0215f2e8  mov r7,r0
0215f2ec  mov r0,#0x0
0215f2f0  mov r3,r0
0215f2f4  add r2,sp,#0x400
0215f2f8  b 0x0215f308
0215f2fc  ldrb r1,[r2],#0x1
0215f300  add r3,r3,#0x1
0215f304  add r0,r0,r1
0215f308  cmp r3,r7
0215f30c  bcc 0x0215f2fc
0215f310  bl 0x02030e88
0215f314  mov r5,r0
0215f318  mov r8,#0x0
0215f31c  add r6,sp,#0x0
0215f320  ldr r0,[r5,#0x4]
0215f324  bl 0x02031070
0215f328  mov r1,r7
0215f32c  bl 0x0200d338
0215f330  str r1,[r6,r8,lsl #0x2]
0215f334  add r8,r8,#0x1
0215f338  cmp r8,#0x100
0215f33c  bcc 0x0215f320
0215f340  add r8,sp,#0x400
0215f344  mov r7,#0x0
0215f348  add r6,sp,#0x0
0215f34c  add r0,r6,r7, lsl #0x2
0215f350  ldr r3,[r6,r7,lsl #0x2]
0215f354  ldr r1,[r0,#0x4]
0215f358  ldrb r2,[r8,r3]
0215f35c  ldrb r0,[r8,r1]
0215f360  add r7,r7,#0x2
0215f364  cmp r7,#0x100
0215f368  strb r0,[r8,r3]
0215f36c  strb r2,[r8,r1]
0215f370  bcc 0x0215f34c
0215f374  mov r0,r5
0215f378  bl 0x02030ebc
0215f37c  bl 0x021bdd90
0215f380  add r2,sp,#0x400
0215f384  mov r3,#0x0
0215f388  ldr r1,[0x215f3ec]
0215f38c  b 0x0215f3d0
0215f390  ldrb r5,[r2,#0x0]
0215f394  add r3,r3,#0x1
0215f398  mov r6,r5, asr #0x4
0215f39c  mov r5,r5, lsl #0x1c
0215f3a0  ldr r6,[r1,r6,lsl #0x2]
0215f3a4  mov r5,r5, lsr #0x1b
0215f3a8  ldrsb r5,[r6,r5]
0215f3ac  strb r5,[r4,#0x0]
0215f3b0  ldrb r7,[r2],#0x1
0215f3b4  mov r5,r7, asr #0x4
0215f3b8  ldr r6,[r1,r5,lsl #0x2]
0215f3bc  mov r5,r7, lsl #0x1c
0215f3c0  add r5,r6,r5, lsr #0x1b
0215f3c4  ldrsb r5,[r5,#0x1]
0215f3c8  strb r5,[r4,#0x1]
0215f3cc  add r4,r4,#0x2
0215f3d0  cmp r3,r0
0215f3d4  bcc 0x0215f390
0215f3d8  mov r0,#0x0
0215f3dc  strb r0,[r4,#0x0]
0215f3e0  add sp,sp,#0x480
0215f3e4  ldmia sp!,{r4,r5,r6,r7,r8,pc}
