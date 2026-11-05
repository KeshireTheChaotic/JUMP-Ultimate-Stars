02180bf8  ldr r1,[r0,#0xa4]
02180bfc  cmp r1,#0x0
02180c00  movne r1,#0x1
02180c04  moveq r1,#0x3
02180c08  strb r1,[r0,#0xa8]
02180c0c  bx lr
