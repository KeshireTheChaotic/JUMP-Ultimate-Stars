02159edc  cmp r1,#0x0
02159ee0  ldr r1,[r0,#0x10]
02159ee4  ldr r0,[r1,#0x78]
02159ee8  orrne r0,r0,#0x4000000
02159eec  biceq r0,r0,#0x4000000
02159ef0  str r0,[r1,#0x78]
02159ef4  bx lr
