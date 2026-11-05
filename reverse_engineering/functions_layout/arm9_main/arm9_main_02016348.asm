02016348  ldrb r0,[r2,#0x0]
0201634c  cmp r0,#0x0
02016350  movne r0,#0x1
02016354  moveq r0,#0x0
02016358  strb r0,[r1,#0x78]
0201635c  bx lr
