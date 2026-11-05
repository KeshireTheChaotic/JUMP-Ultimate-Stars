0207a658  stmdb sp!,{r4,r5,r6,lr}
0207a65c  mov r6,r0
0207a660  mov r0,r1
0207a664  ldr r1,[r0,#0x0]
0207a668  mov r5,r2
0207a66c  ldr r1,[r1,#0xa0]
0207a670  mov r4,r3
0207a674  blx r1
0207a678  ldr r2,[r0,#0x0]
0207a67c  ldr r3,[r6,#0x10]
0207a680  ldr r1,[r5,#0x14]
0207a684  ldr r0,[r4,#0x0]
0207a688  add r1,r3,r1, lsl #0x4
0207a68c  b 0x0207a69c
0207a690  ldr r3,[r4,#0x0]
0207a694  sub r3,r3,#0xa
0207a698  str r3,[r4,#0x0]
0207a69c  ldr r3,[r4,#0x0]
0207a6a0  ldrh r3,[r3,#0x0]
0207a6a4  cmp r2,r3, lsl #0xc
0207a6a8  blt 0x0207a690
0207a6ac  b 0x0207a6bc
0207a6b0  ldr r3,[r4,#0x0]
0207a6b4  add r3,r3,#0xa
0207a6b8  str r3,[r4,#0x0]
0207a6bc  ldr r3,[r4,#0x0]
0207a6c0  ldrh r12,[r3,#0xa]
0207a6c4  cmp r2,r12, lsl #0xc
0207a6c8  bge 0x0207a6b0
0207a6cc  cmp r0,r3
0207a6d0  bne 0x0207a6e4
0207a6d4  ldrb r0,[r1,#0xf]
0207a6d8  mov r0,r0, lsl #0x19
0207a6dc  movs r0,r0, lsr #0x1f
0207a6e0  ldmiane sp!,{r4,r5,r6,pc}
0207a6e4  ldrb r0,[r1,#0xf]
0207a6e8  mov r0,r0, lsl #0x19
0207a6ec  movs r0,r0, lsr #0x1f
0207a6f0  beq 0x0207a728
0207a6f4  ldrsh r2,[r1,#0x4]
0207a6f8  ldrsh r0,[r3,#0x2]
0207a6fc  cmp r2,r0
0207a700  ldrsheq r2,[r1,#0x8]
0207a704  ldrsheq r0,[r3,#0x6]
0207a708  cmpeq r2,r0
0207a70c  ldrsheq r2,[r1,#0x6]
0207a710  ldrsheq r0,[r3,#0x4]
0207a714  cmpeq r2,r0
0207a718  ldrsheq r1,[r1,#0xa]
0207a71c  ldrsheq r0,[r3,#0x8]
0207a720  cmpeq r1,r0
0207a724  ldmiaeq sp!,{r4,r5,r6,pc}
0207a728  mov r0,r5
0207a72c  ldr r4,[r0,#0x0]
0207a730  mov r1,r6
0207a734  ldr r4,[r4,#0x24]
0207a738  add r2,r3,#0x2
0207a73c  blx r4
0207a740  ldmia sp!,{r4,r5,r6,pc}
