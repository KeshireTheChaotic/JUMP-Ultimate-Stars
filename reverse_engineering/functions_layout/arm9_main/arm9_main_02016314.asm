02016314  ldr r0,[r0,#0x0]
02016318  cmp r0,r1, lsl #0xc
0201631c  movlt r0,#0x1
02016320  movge r0,#0x0
02016324  bx lr
