0215b348  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0215b34c  add r2,r0,#0x100
0215b350  ldrh r3,[r2,#0x0]
0215b354  ldr r2,[0x215b3cc]
0215b358  ldr r0,[r0,#0x1a8]
0215b35c  ldrb r6,[r2,r3]
0215b360  ldr r3,[r0,#0x10]
0215b364  ldr r0,[0x215b3d0]
0215b368  mov r2,r6, lsl #0x2
0215b36c  ldrsb r0,[r0,r2]
0215b370  mov r7,r1
0215b374  ldr r5,[r3,#0x5c]
0215b378  bl 0x0215b3e0
0215b37c  ldr r2,[0x215b3d4]
0215b380  mov r3,r6, lsl #0x2
0215b384  ldr r1,[0x215b3d8]
0215b388  mov r4,r0
0215b38c  ldrsb r2,[r2,r3]
0215b390  ldr r12,[r5,#0xc]
0215b394  ldrsb r0,[r1,r3]
0215b398  add r8,r2,r12, asr #0x8
0215b39c  bl 0x0215b3e0
0215b3a0  add r1,r8,r4
0215b3a4  ldr r5,[r5,#0x10]
0215b3a8  mov r4,r6, lsl #0x2
0215b3ac  ldr r2,[0x215b3dc]
0215b3b0  mov r3,#0x0
0215b3b4  ldrsb r2,[r2,r4]
0215b3b8  add r2,r2,r5, asr #0x8
0215b3bc  sub r2,r2,r0
0215b3c0  mov r0,r7
0215b3c4  bl 0x0206c7fc
0215b3c8  ldmia sp!,{r4,r5,r6,r7,r8,pc}
