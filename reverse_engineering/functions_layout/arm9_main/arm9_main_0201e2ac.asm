0201e2ac  stmdb sp!,{r4,r5,r6,lr}
0201e2b0  cmp r3,#0x0
0201e2b4  mov r5,r2
0201e2b8  ldreq r3,[r0,#0x1c]
0201e2bc  ldrh r6,[r0,#0x52]
0201e2c0  mov lr,#0x0
0201e2c4  b 0x0201e354
0201e2c8  ldr r12,[r0,#0x4c]
0201e2cc  add r4,r12,lr, lsl #0x4
0201e2d0  ldr r2,[r4,#0x4]
0201e2d4  cmp r2,r1
0201e2d8  ldreq r2,[r12,lr,lsl #0x4]
0201e2dc  cmpeq r2,r3
0201e2e0  bne 0x0201e350
0201e2e4  mov r0,r1
0201e2e8  ldr r2,[r0,#0x0]
0201e2ec  mov r1,r3
0201e2f0  ldr r2,[r2,#0x68]
0201e2f4  ldr r4,[r4,#0xc]
0201e2f8  blx r2
0201e2fc  mov r0,r0, lsr #0x1
0201e300  add r3,r0,#0x1
0201e304  mov r0,r5, lsl #0x10
0201e308  mov r1,r0, lsr #0x10
0201e30c  b 0x0201e314
0201e310  sub r4,r4,r3, lsl #0x1
0201e314  ldrh r0,[r4,#0x0]
0201e318  cmp r1,r0
0201e31c  bcc 0x0201e310
0201e320  mov r2,r3, lsl #0x1
0201e324  mov r0,r5, lsl #0x10
0201e328  b 0x0201e330
0201e32c  add r4,r4,r3, lsl #0x1
0201e330  ldrh r1,[r2,r4]
0201e334  cmp r1,r0, lsr #0x10
0201e338  bls 0x0201e32c
0201e33c  ldrh r1,[r4,#0x0]
0201e340  cmp r1,r0, lsr #0x10
0201e344  moveq r0,#0x1
0201e348  movne r0,#0x0
0201e34c  ldmia sp!,{r4,r5,r6,pc}
0201e350  add lr,lr,#0x1
0201e354  cmp lr,r6
0201e358  blt 0x0201e2c8
0201e35c  mov r0,#0x0
0201e360  ldmia sp!,{r4,r5,r6,pc}
