021b3a28  cmp r1,#0x0
021b3a2c  ldr r1,[r0,#0x8]
021b3a30  orrne r1,r1,#0x1
021b3a34  biceq r1,r1,#0x1
021b3a38  str r1,[r0,#0x8]
021b3a3c  bx lr
