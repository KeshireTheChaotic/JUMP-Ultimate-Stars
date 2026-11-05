0215c070  ldr r0,[r0,#0x10]
0215c074  cmp r1,#0x0
0215c078  ldr r1,[r0,#0x5c]
0215c07c  ldr r0,[r1,#0x34]
0215c080  orrne r0,r0,#0x200
0215c084  biceq r0,r0,#0x200
0215c088  str r0,[r1,#0x34]
0215c08c  bx lr
