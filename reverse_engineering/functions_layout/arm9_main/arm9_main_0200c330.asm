0200c330  mov r12,#0x200000
0200c334  cmp r12,r1, lsl #0x1
0200c338  movhi r1,#0x0
0200c33c  movhi r0,#0x0
0200c340  cmp r12,r3, lsl #0x1
0200c344  movhi r3,#0x0
0200c348  movhi r2,#0x0
0200c34c  orrs r12,r3,r1
0200c350  bmi 0x0200c37c
0200c354  cmp r1,r3
0200c358  cmpeq r0,r2
0200c35c  movcc r0,#0x1
0200c360  movcs r0,#0x0
0200c364  bx lr
0200c37c  cmp r3,r1
0200c380  cmpeq r2,r0
0200c384  movcc r0,#0x1
0200c388  movcs r0,#0x0
0200c38c  bx lr
