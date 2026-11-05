0214d8bc  ldr r0,[0x214d8d4]
0214d8c0  ldr r0,[r0,#0x8d8]
0214d8c4  tst r0,#0x8000
0214d8c8  movne r0,#0x1
0214d8cc  moveq r0,#0x0
0214d8d0  bx lr
