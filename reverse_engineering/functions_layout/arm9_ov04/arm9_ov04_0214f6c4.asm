0214f6c4  ldr r0,[0x214f6e0]
0214f6c8  ldr r0,[r0,#0x0]
0214f6cc  ldrsb r0,[r0,#0xe]
0214f6d0  cmp r0,#0x0
0214f6d4  movne r0,#0x1
0214f6d8  moveq r0,#0x0
0214f6dc  bx lr
