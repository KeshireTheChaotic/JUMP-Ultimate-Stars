0200c26c  mov r12,#0x200000
0200c270  cmp r12,r1, lsl #0x1
0200c274  movhi r1,#0x0
0200c278  movhi r0,#0x0
0200c27c  cmp r12,r3, lsl #0x1
0200c280  movhi r3,#0x0
0200c284  movhi r2,#0x0
0200c288  orrs r12,r3,r1
0200c28c  bmi 0x0200c2b8
0200c290  cmp r1,r3
0200c294  cmpeq r0,r2
0200c298  movhi r0,#0x1
0200c29c  movls r0,#0x0
0200c2a0  bx lr
0200c2b8  cmp r3,r1
0200c2bc  cmpeq r2,r0
0200c2c0  movhi r0,#0x1
0200c2c4  movls r0,#0x0
0200c2c8  bx lr
