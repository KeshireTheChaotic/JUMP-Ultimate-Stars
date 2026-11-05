0215d904  ldr r0,[r0,#0x10]
0215d908  ldr r0,[r0,#0x78]
0215d90c  tst r0,#0x2
0215d910  movne r0,#0x1
0215d914  moveq r0,#0x0
0215d918  bx lr
