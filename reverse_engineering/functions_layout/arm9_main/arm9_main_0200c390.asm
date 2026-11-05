0200c390  mov r12,#0x200000
0200c394  cmp r12,r1, lsl #0x1
0200c398  movhi r1,#0x0
0200c39c  movhi r0,#0x0
0200c3a0  cmp r12,r3, lsl #0x1
0200c3a4  movhi r3,#0x0
0200c3a8  movhi r2,#0x0
0200c3ac  orrs r12,r3,r1
0200c3b0  bmi 0x0200c3dc
0200c3b4  cmp r1,r3
0200c3b8  cmpeq r0,r2
0200c3bc  moveq r0,#0x1
0200c3c0  movne r0,#0x0
0200c3c4  bx lr
0200c3dc  cmp r3,r1
0200c3e0  cmpeq r2,r0
0200c3e4  moveq r0,#0x1
0200c3e8  movne r0,#0x0
0200c3ec  bx lr
