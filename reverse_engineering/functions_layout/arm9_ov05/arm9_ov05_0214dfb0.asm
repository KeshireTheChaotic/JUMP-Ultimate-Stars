0214dfb0  ldr r0,[r0,#0x0]
0214dfb4  ldrb r0,[r0,#0x6]
0214dfb8  cmp r0,r1
0214dfbc  moveq r0,#0x1
0214dfc0  movne r0,#0x0
0214dfc4  bx lr
