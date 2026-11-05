0215e5a8  ldr r0,[r0,#0x10]
0215e5ac  ldr r0,[r0,#0x40]
0215e5b0  tst r0,#0x6
0215e5b4  movne r0,#0x1
0215e5b8  moveq r0,#0x0
0215e5bc  bx lr
