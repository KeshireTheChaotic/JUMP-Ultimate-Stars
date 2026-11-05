0200c20c  mov r12,#0x200000
0200c210  cmp r12,r1, lsl #0x1
0200c214  movhi r1,#0x0
0200c218  movhi r0,#0x0
0200c21c  cmp r12,r3, lsl #0x1
0200c220  movhi r3,#0x0
0200c224  movhi r2,#0x0
0200c228  orrs r12,r3,r1
0200c22c  bmi 0x0200c258
0200c230  cmp r1,r3
0200c234  cmpeq r0,r2
0200c238  movcs r0,#0x1
0200c23c  movcc r0,#0x0
0200c240  bx lr
0200c258  cmp r3,r1
0200c25c  cmpeq r2,r0
0200c260  movcs r0,#0x1
0200c264  movcc r0,#0x0
0200c268  bx lr
