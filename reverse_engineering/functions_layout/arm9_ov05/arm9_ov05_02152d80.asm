02152d80  ldr r0,[r0,#0x4]
02152d84  ldr r0,[r0,#0x90]
02152d88  and r0,r0,#0x8
02152d8c  cmp r0,#0x8
02152d90  moveq r0,#0x1
02152d94  movne r0,#0x0
02152d98  bx lr
