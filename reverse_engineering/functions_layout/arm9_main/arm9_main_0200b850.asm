0200b850  ands r2,r0,#0x80000000
0200b854  rsbmi r0,r0,#0x0
0200b858  cmp r0,#0x0
0200b85c  mov r1,#0x0
0200b860  bxeq lr
0200b864  mov r3,#0x400
0200b868  add r3,r3,#0x1e
0200b86c  clz r12,r0
0200b870  movs r0,r0, lsl r12
0200b874  sub r3,r3,r12
0200b878  movs r1,r0
0200b87c  mov r0,r1, lsl #0x15
0200b880  add r1,r1,r1
0200b884  orr r1,r2,r1, lsr #0xc
0200b888  orr r1,r1,r3, lsl #0x14
0200b88c  bx lr
