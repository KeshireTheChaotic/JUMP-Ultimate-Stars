0217b0a8  ldr r0,[r0,#0x0]
0217b0ac  cmp r0,#0x0
0217b0b0  addne r0,r0,r1, lsl #0x2
0217b0b4  ldrne r0,[r0,#0x84]
0217b0b8  moveq r0,#0x0
0217b0bc  bx lr
