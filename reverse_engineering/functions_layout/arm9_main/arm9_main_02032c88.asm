02032c88  ldr r1,[r2,#0x64]
02032c8c  ldr r1,[r1,#0x20]
02032c90  ldr r1,[r1,#0x1c]
02032c94  ldr r1,[r1,#0x4]
02032c98  cmp r1,#0x0
02032c9c  moveq r1,#0x0
02032ca0  subne r1,r1,#0x1
02032ca4  movne r1,r1, lsl #0xc
02032ca8  str r1,[r0,#0x0]
02032cac  bx lr
