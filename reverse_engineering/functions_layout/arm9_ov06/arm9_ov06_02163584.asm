02163584  ldr r0,[r0,#0x10]
02163588  cmp r1,#0x0
0216358c  ldr r1,[r0,#0x5c]
02163590  ldr r0,[r1,#0x34]
02163594  orrne r0,r0,#0x2
02163598  biceq r0,r0,#0x2
0216359c  str r0,[r1,#0x34]
021635a0  bx lr
