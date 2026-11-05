021650b4  cmp r1,#0x0
021650b8  ldr r1,[r0,#0x10]
021650bc  ldr r0,[r1,#0x40]
021650c0  orrne r0,r0,#0x8
021650c4  biceq r0,r0,#0x8
021650c8  str r0,[r1,#0x40]
021650cc  bx lr
