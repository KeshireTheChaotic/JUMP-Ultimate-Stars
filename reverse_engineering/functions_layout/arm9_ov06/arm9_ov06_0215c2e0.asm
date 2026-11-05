0215c2e0  ldr r0,[r0,#0x10]
0215c2e4  ldr r0,[r0,#0x78]
0215c2e8  tst r0,#0x10000000
0215c2ec  movne r0,#0x1
0215c2f0  moveq r0,#0x0
0215c2f4  bx lr
