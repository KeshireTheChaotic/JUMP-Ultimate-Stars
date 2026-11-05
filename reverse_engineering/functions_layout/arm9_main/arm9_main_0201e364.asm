0201e364  stmdb sp!,{r3,r4,r5,r6,r7,lr}
0201e368  mov r7,r0
0201e36c  mov r6,r1
0201e370  mov r4,#0x0
0201e374  b 0x0201e3ec
0201e378  ldr r1,[r7,#0x4c]
0201e37c  add r3,r1,r4, lsl #0x4
0201e380  ldr r0,[r3,#0x4]
0201e384  ldr r1,[r1,r4,lsl #0x4]
0201e388  ldr r2,[r0,#0x0]
0201e38c  ldr r5,[r3,#0xc]
0201e390  ldr r2,[r2,#0x68]
0201e394  blx r2
0201e398  mov r0,r0, lsr #0x1
0201e39c  add r3,r0,#0x1
0201e3a0  mov r0,r6, lsl #0x10
0201e3a4  mov r1,r0, lsr #0x10
0201e3a8  b 0x0201e3b0
0201e3ac  sub r5,r5,r3, lsl #0x1
0201e3b0  ldrh r0,[r5,#0x0]
0201e3b4  cmp r1,r0
0201e3b8  bcc 0x0201e3ac
0201e3bc  mov r2,r3, lsl #0x1
0201e3c0  mov r0,r6, lsl #0x10
0201e3c4  b 0x0201e3cc
0201e3c8  add r5,r5,r3, lsl #0x1
0201e3cc  ldrh r1,[r2,r5]
0201e3d0  cmp r1,r0, lsr #0x10
0201e3d4  bls 0x0201e3c8
0201e3d8  ldrh r1,[r5,#0x0]
0201e3dc  cmp r1,r0, lsr #0x10
0201e3e0  moveq r0,#0x1
0201e3e4  ldmiaeq sp!,{r3,r4,r5,r6,r7,pc}
0201e3e8  add r4,r4,#0x1
0201e3ec  ldrh r0,[r7,#0x52]
0201e3f0  cmp r4,r0
0201e3f4  blt 0x0201e378
0201e3f8  mov r0,#0x0
0201e3fc  ldmia sp!,{r3,r4,r5,r6,r7,pc}
