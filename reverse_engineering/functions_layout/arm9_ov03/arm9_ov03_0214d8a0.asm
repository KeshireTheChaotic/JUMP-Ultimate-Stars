0214d8a0  ldr r0,[0x214d8b8]
0214d8a4  ldr r0,[r0,#0x8d8]
0214d8a8  tst r0,#0x4000
0214d8ac  movne r0,#0x1
0214d8b0  moveq r0,#0x0
0214d8b4  bx lr
