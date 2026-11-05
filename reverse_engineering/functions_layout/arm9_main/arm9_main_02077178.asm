02077178  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0207717c  sub sp,sp,#0x8
02077180  ldrb r3,[r1,#0x40]
02077184  cmp r3,#0x0
02077188  movne r0,#0x0
0207718c  bne 0x020772d4
02077190  mov r4,#0x0
02077194  str r4,[r2,#0x8]
02077198  str r4,[r2,#0x4]
0207719c  str r4,[r2,#0x0]
020771a0  ldr r3,[0x20772dc]
020771a4  ldrb r6,[r1,#0x41]
020771a8  ldr r5,[r3,#0x0]
020771ac  mov r3,#0x3c
020771b0  ldr r5,[r5,#0x40]
020771b4  ldr lr,[r1,#0x38]
020771b8  mla r3,r6,r3,r5
020771bc  ldrh r6,[r3,#0x8]
020771c0  ldrh r5,[r3,#0xa]
020771c4  ldrh r3,[r3,#0xc]
020771c8  mov r8,r4
020771cc  strh r6,[sp,#0x0]
020771d0  strh r5,[sp,#0x2]
020771d4  strh r3,[sp,#0x4]
020771d8  add r3,r8,r8, lsl #0x2
020771dc  add r9,lr,r3
020771e0  mov r7,#0x0
020771e4  ldrsb r3,[r9,r7]
020771e8  cmp r3,#0x0
020771ec  beq 0x020772b8
020771f0  mov r5,#0x0
020771f4  ldrb r12,[r1,#0xe]
020771f8  ldr r3,[0x20772e0]
020771fc  mov r6,r5, lsl #0x1
02077200  ldrsb r3,[r3,r6]
02077204  and r6,r12,#0xf
02077208  add r6,r7,r6
0207720c  adds r3,r6,r3
02077210  and r6,r12,#0xf0
02077214  mov r6,r6, asr #0x4
02077218  and r6,r6,#0xff
0207721c  add r10,r8,r6
02077220  ldr r6,[0x20772e0]
02077224  add r6,r6,r5, lsl #0x1
02077228  ldrsb r6,[r6,#0x1]
0207722c  add r10,r10,r6
02077230  bmi 0x020772ac
02077234  cmp r3,#0x5
02077238  bge 0x020772ac
0207723c  cmp r10,#0x0
02077240  blt 0x020772ac
02077244  cmp r10,#0x4
02077248  bge 0x020772ac
0207724c  mov r6,#0x14
02077250  mla r6,r10,r6,r0
02077254  add r3,r6,r3, lsl #0x2
02077258  ldr r12,[r3,#0x8]
0207725c  cmp r12,#0x0
02077260  cmpne r12,r1
02077264  beq 0x020772ac
02077268  mov r6,#0x0
0207726c  ldr r3,[r2,r6,lsl #0x2]
02077270  cmp r3,#0x0
02077274  bne 0x020772a0
02077278  ldr r3,[r12,#0x34]
0207727c  mov r11,r6, lsl #0x1
02077280  add r10,sp,#0x0
02077284  ldrh r3,[r3,#0x2]
02077288  ldrh r10,[r10,r11]
0207728c  cmp r3,r10
02077290  addeq r3,r4,#0x1
02077294  moveq r3,r3, lsl #0x10
02077298  streq r12,[r2,r6,lsl #0x2]
0207729c  moveq r4,r3, lsr #0x10
020772a0  add r6,r6,#0x1
020772a4  cmp r6,#0x3
020772a8  blt 0x0207726c
020772ac  add r5,r5,#0x1
020772b0  cmp r5,#0x4
020772b4  blt 0x020771f4
020772b8  add r7,r7,#0x1
020772bc  cmp r7,#0x5
020772c0  blt 0x020771e4
020772c4  add r8,r8,#0x1
020772c8  cmp r8,#0x4
020772cc  blt 0x020771d8
020772d0  mov r0,r4
020772d4  add sp,sp,#0x8
020772d8  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
