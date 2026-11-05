0219becc  ldr r0,[0x219bee4]
0219bed0  ldr r1,[r0,#0x0]
0219bed4  cmp r1,#0x0
0219bed8  movne r0,#0x1
0219bedc  strbne r0,[r1,#0x53]
0219bee0  bx lr
