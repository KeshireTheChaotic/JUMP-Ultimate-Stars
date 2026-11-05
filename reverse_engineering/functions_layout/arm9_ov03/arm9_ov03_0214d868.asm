0214d868  ldr r0,[0x214d880]
0214d86c  ldr r0,[r0,#0x8d8]
0214d870  tst r0,#0x1000
0214d874  movne r0,#0x1
0214d878  moveq r0,#0x0
0214d87c  bx lr
