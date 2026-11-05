021559bc  mov r3,r1, lsl #0xc
021559c0  str r3,[r0,#0x0]
021559c4  ldr r1,[r2,#0x0]
021559c8  smull r1,r2,r3,r1
021559cc  mov r1,r1, lsr #0xc
021559d0  orr r1,r1,r2, lsl #0x14
021559d4  str r1,[r0,#0x0]
021559d8  bx lr
