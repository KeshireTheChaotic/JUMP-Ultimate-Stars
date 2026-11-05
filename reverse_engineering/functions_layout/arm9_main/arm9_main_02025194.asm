02025194  ldr r0,[r1,#0x44]
02025198  cmp r0,#0x0
0202519c  moveq r0,#0x0
020251a0  ldrne r0,[r0,#0x54]
020251a4  str r0,[r2,#0x0]
020251a8  bx lr
