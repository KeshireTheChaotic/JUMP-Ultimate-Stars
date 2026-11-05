0200c99c  cmp r0,#0x0
0200c9a0  bxeq lr
0200c9a4  mov r3,#0x9e
0200c9a8  bmi 0x0200c9b8
0200c9ac  clz r12,r0
0200c9b0  movs r0,r0, lsl r12
0200c9b4  sub r3,r3,r12
0200c9b8  ands r2,r0,#0xff
0200c9bc  add r0,r0,r0
0200c9c0  mov r0,r0, lsr #0x9
0200c9c4  orr r0,r0,r3, lsl #0x17
0200c9c8  bxeq lr
0200c9cc  tst r2,#0x80
0200c9d0  bxeq lr
0200c9d4  ands r1,r2,#0x7f
0200c9d8  andeqs r1,r0,#0x1
0200c9dc  addne r0,r0,#0x1
0200c9e0  bx lr
