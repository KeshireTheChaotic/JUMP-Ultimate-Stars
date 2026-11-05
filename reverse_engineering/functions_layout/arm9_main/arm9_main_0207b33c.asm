0207b33c  stmdb sp!,{r4,r5,lr}
0207b340  sub sp,sp,#0xc
0207b344  mov r5,r0
0207b348  add r0,sp,#0x0
0207b34c  mov r4,r1
0207b350  bl 0x0201899c
0207b354  add r1,sp,#0x0
0207b358  mov r0,r4
0207b35c  str r4,[r5,#0x18]
0207b360  bl 0x0207afdc
0207b364  ldr r1,[sp,#0x0]
0207b368  mov r0,r1, asr #0xb
0207b36c  add r0,r1,r0, lsr #0x14
0207b370  mov r0,r0, asr #0xc
0207b374  strh r0,[r5,#0x38]
0207b378  ldrsh r0,[r5,#0x38]
0207b37c  strh r0,[r5,#0x34]
0207b380  ldr r1,[sp,#0x4]
0207b384  mov r0,r1, asr #0xb
0207b388  add r0,r1,r0, lsr #0x14
0207b38c  mov r0,r0, asr #0xc
0207b390  strh r0,[r5,#0x3a]
0207b394  ldrsh r0,[r5,#0x3a]
0207b398  strh r0,[r5,#0x3c]
0207b39c  strh r0,[r5,#0x36]
0207b3a0  ldr r0,[r5,#0x8]
0207b3a4  b 0x0207b3b0
0207b3a8  str r4,[r0,#0x8]
0207b3ac  ldr r0,[r0,#0x0]
0207b3b0  cmp r0,#0x0
0207b3b4  bne 0x0207b3a8
0207b3b8  add sp,sp,#0xc
0207b3bc  ldmia sp!,{r4,r5,pc}
