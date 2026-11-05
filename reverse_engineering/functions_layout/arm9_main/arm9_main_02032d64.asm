02032d64  ldr r1,[r2,#0x64]
02032d68  ldr r1,[r1,#0x20]
02032d6c  ldr r1,[r1,#0x1c]
02032d70  ldr r1,[r1,#0x4]
02032d74  cmp r1,#0x0
02032d78  moveq r1,#0x0
02032d7c  subne r1,r1,#0x1
02032d80  movne r1,r1, lsl #0xc
02032d84  str r1,[r0,#0x0]
02032d88  bx lr
