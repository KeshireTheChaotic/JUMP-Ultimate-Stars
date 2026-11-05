0215b1e8  cmp r1,#0x0
0215b1ec  ldr r1,[r0,#0x10]
0215b1f0  ldr r0,[r1,#0x78]
0215b1f4  orrne r0,r0,#0x4000000
0215b1f8  biceq r0,r0,#0x4000000
0215b1fc  str r0,[r1,#0x78]
0215b200  bx lr
