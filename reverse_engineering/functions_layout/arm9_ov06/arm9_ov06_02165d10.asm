02165d10  ldr r0,[r0,#0x10]
02165d14  cmp r1,#0x0
02165d18  ldr r1,[r0,#0x5c]
02165d1c  ldr r0,[r1,#0x34]
02165d20  orrne r0,r0,#0x2
02165d24  biceq r0,r0,#0x2
02165d28  str r0,[r1,#0x34]
02165d2c  bx lr
