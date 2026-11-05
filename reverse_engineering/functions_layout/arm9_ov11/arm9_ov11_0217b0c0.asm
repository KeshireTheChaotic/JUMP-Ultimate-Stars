0217b0c0  ldr r0,[r0,#0x0]
0217b0c4  cmp r0,#0x0
0217b0c8  addne r0,r0,r1, lsl #0x2
0217b0cc  ldrne r0,[r0,#0x90]
0217b0d0  moveq r0,#0x0
0217b0d4  bx lr
