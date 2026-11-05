0215a694  ldr r0,[r0,#0x10]
0215a698  ldr r0,[r0,#0x40]
0215a69c  tst r0,#0x200000
0215a6a0  movne r0,#0x1
0215a6a4  moveq r0,#0x0
0215a6a8  bx lr
