0201e5d8  ldr r0,[r0,#0x0]
0201e5dc  cmp r0,r1, lsl #0xc
0201e5e0  moveq r0,#0x1
0201e5e4  movne r0,#0x0
0201e5e8  bx lr
