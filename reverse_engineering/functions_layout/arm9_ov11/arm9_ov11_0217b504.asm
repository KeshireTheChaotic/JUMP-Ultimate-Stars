0217b504  ldr r0,[r0,#0x0]
0217b508  cmp r0,#0x0
0217b50c  addne r0,r0,r1, lsl #0x2
0217b510  ldrne r0,[r0,#0x6c]
0217b514  moveq r0,#0x0
0217b518  bx lr
