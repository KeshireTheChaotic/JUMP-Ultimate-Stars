020326b0  mov r2,#0x0
020326b4  b 0x020326c8
020326b8  ldrsb r1,[r0],#0x1
020326bc  orr r1,r1,r2, lsl #0x1
020326c0  mov r1,r1, lsl #0x10
020326c4  eor r2,r2,r1, lsr #0x10
020326c8  ldrsb r1,[r0,#0x0]
020326cc  cmp r1,#0x0
020326d0  bne 0x020326b8
020326d4  mov r0,r2
020326d8  bx lr
