021563b4  ldr r0,[r0,#0x7c]
021563b8  ldr r0,[r0,#0x10]
021563bc  ldr r0,[r0,#0x158]
021563c0  tst r0,#0xf
021563c4  movne r0,#0x1
021563c8  moveq r0,#0x0
021563cc  bx lr
