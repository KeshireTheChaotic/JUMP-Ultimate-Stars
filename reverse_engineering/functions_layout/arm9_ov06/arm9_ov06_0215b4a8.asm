0215b4a8  cmp r1,#0x0
0215b4ac  ldr r1,[r0,#0x10]
0215b4b0  ldr r0,[r1,#0x40]
0215b4b4  orrne r0,r0,#0x10000000
0215b4b8  biceq r0,r0,#0x10000000
0215b4bc  str r0,[r1,#0x40]
0215b4c0  bx lr
