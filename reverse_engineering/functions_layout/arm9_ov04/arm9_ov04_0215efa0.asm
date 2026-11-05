0215efa0  cmp r1,r2
0215efa4  moveq r0,#0x1
0215efa8  bxeq lr
0215efac  add r3,r3,#0x1
0215efb0  cmp r3,r12
0215efb4  blt 0x0215ef98
0215efb8  mov r0,#0x0
0215efbc  bx lr
