0214dfe8  ldr r0,[r0,#0x0]
0214dfec  ldrsb r0,[r0,#0x8]
0214dff0  cmp r0,r1
0214dff4  moveq r0,#0x1
0214dff8  movne r0,#0x0
0214dffc  bx lr
