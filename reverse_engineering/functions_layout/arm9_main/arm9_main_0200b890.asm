0200b890  cmp r0,#0x0
0200b894  mov r1,#0x0
0200b898  bxeq lr
0200b89c  mov r3,#0x400
0200b8a0  add r3,r3,#0x1e
0200b8a4  bmi 0x0200b8b4
0200b8a8  clz r12,r0
0200b8ac  movs r0,r0, lsl r12
0200b8b0  sub r3,r3,r12
0200b8b4  mov r1,r0
0200b8b8  mov r0,r1, lsl #0x15
0200b8bc  add r1,r1,r1
0200b8c0  mov r1,r1, lsr #0xc
0200b8c4  orr r1,r1,r3, lsl #0x14
0200b8c8  bx lr
