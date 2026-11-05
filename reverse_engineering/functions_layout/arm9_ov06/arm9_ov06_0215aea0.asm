0215aea0  ldr r0,[r0,#0x10]
0215aea4  ldr r0,[r0,#0x78]
0215aea8  tst r0,#0x400000
0215aeac  movne r0,#0x1
0215aeb0  moveq r0,#0x0
0215aeb4  bx lr
