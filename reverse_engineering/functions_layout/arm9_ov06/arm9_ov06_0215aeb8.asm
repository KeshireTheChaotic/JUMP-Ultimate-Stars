0215aeb8  ldr r0,[r0,#0x10]
0215aebc  ldr r0,[r0,#0x40]
0215aec0  tst r0,#0x400000
0215aec4  movne r0,#0x1
0215aec8  moveq r0,#0x0
0215aecc  bx lr
