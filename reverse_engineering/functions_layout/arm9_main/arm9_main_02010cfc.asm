02010cfc  ldr r1,[r1,#0x0]
02010d00  ldr r0,[0x2010d14]
02010d04  cmp r1,r0
02010d08  moveq r0,#0x1
02010d0c  movne r0,#0x0
02010d10  bx lr
