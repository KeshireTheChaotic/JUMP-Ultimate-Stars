0217f784  ldr r0,[r0,#0x0]
0217f788  cmp r0,#0x0
0217f78c  addne r0,r0,r1, lsl #0x2
0217f790  ldrne r0,[r0,#0x7c]
0217f794  moveq r0,#0x0
0217f798  bx lr
