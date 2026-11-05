0200c2cc  mov r12,#0x200000
0200c2d0  cmp r12,r1, lsl #0x1
0200c2d4  movhi r1,#0x0
0200c2d8  movhi r0,#0x0
0200c2dc  cmp r12,r3, lsl #0x1
0200c2e0  movhi r3,#0x0
0200c2e4  movhi r2,#0x0
0200c2e8  orrs r12,r3,r1
0200c2ec  bmi 0x0200c31c
0200c2f0  cmp r1,r3
0200c2f4  cmpeq r0,r2
0200c2f8  movls r0,#0x1
0200c2fc  movhi r0,#0x0
0200c300  bx lr
0200c31c  cmp r3,r1
0200c320  cmpeq r2,r0
0200c324  movls r0,#0x1
0200c328  movhi r0,#0x0
0200c32c  bx lr
