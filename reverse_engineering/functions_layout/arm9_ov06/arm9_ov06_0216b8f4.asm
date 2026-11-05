0216b8f4  cmp r1,#0x0
0216b8f8  ldr r1,[r0,#0x10]
0216b8fc  ldr r0,[r1,#0x78]
0216b900  orrne r0,r0,#0x30000
0216b904  biceq r0,r0,#0x30000
0216b908  str r0,[r1,#0x78]
0216b90c  bx lr
