0215b330  stmdb sp!,{r3,lr}
0215b334  sub sp,sp,#0x8
0215b338  ldr r2,[r0,#0x4]
0215b33c  add r1,sp,#0x4
0215b340  ldr lr,[r2,#0x10]
0215b344  add r2,sp,#0x0
0215b348  ldr r3,[lr,#0xe8]
0215b34c  add r12,r3,#0x1
0215b350  mov r3,r12, lsr #0x2
0215b354  rsb r3,r3,#0x0
0215b358  str r12,[lr,#0xe8]
0215b35c  mov r3,r3, lsl #0xc
0215b360  str r3,[sp,#0x0]
0215b364  ldr r3,[lr,#0xe8]
0215b368  mov r3,r3, lsr #0x2
0215b36c  mov r3,r3, lsl #0xc
0215b370  str r3,[sp,#0x4]
0215b374  bl 0x0214e990
0215b378  add sp,sp,#0x8
0215b37c  ldmia sp!,{r3,pc}
