0214dfc8  ldr r0,[r0,#0x0]
0214dfcc  ldrsb r2,[r0,#0x8]
0214dfd0  ldrsb r0,[r0,#0x9]
0214dfd4  orr r0,r0,r2, lsl #0x8
0214dfd8  cmp r0,r1
0214dfdc  moveq r0,#0x1
0214dfe0  movne r0,#0x0
0214dfe4  bx lr
