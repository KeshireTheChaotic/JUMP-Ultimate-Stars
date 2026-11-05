0216f338  cmp r1,#0x0
0216f33c  ldr r1,[r0,#0x10]
0216f340  ldr r0,[r1,#0x78]
0216f344  orrne r0,r0,#0x30000
0216f348  biceq r0,r0,#0x30000
0216f34c  str r0,[r1,#0x78]
0216f350  bx lr
