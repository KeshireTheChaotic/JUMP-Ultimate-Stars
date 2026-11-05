0214f6e4  ldr r0,[0x214f700]
0214f6e8  ldr r0,[r0,#0x0]
0214f6ec  ldrsb r0,[r0,#0xf]
0214f6f0  cmp r0,#0x0
0214f6f4  movne r0,#0x1
0214f6f8  moveq r0,#0x0
0214f6fc  bx lr
