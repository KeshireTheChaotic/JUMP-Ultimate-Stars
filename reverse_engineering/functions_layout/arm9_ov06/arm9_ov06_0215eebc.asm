0215eebc  cmp r1,#0x0
0215eec0  ldr r1,[r0,#0x10]
0215eec4  ldr r0,[r1,#0x78]
0215eec8  orrne r0,r0,#0x200000
0215eecc  biceq r0,r0,#0x200000
0215eed0  str r0,[r1,#0x78]
0215eed4  bx lr
