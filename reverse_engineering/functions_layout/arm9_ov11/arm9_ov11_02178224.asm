02178224  ldr r0,[r0,#0x4]
02178228  ldr r0,[r0,#0x10]
0217822c  ldr r0,[r0,#0xd4]
02178230  tst r0,#0x2
02178234  movne r0,#0x1
02178238  moveq r0,#0x0
0217823c  bx lr
