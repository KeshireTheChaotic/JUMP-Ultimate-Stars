0200c3f0  mov r12,#0x200000
0200c3f4  cmp r12,r1, lsl #0x1
0200c3f8  movhi r1,#0x0
0200c3fc  movhi r0,#0x0
0200c400  cmp r12,r3, lsl #0x1
0200c404  movhi r3,#0x0
0200c408  movhi r2,#0x0
0200c40c  orrs r12,r3,r1
0200c410  bmi 0x0200c43c
0200c414  cmp r1,r3
0200c418  cmpeq r0,r2
0200c41c  movne r0,#0x1
0200c420  moveq r0,#0x0
0200c424  bx lr
0200c43c  cmp r3,r1
0200c440  cmpeq r2,r0
0200c444  movne r0,#0x1
0200c448  moveq r0,#0x0
0200c44c  bx lr
