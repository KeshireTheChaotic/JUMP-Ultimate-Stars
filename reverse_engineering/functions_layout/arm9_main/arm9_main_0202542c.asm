0202542c  ldr r0,[r1,#0x64]
02025430  ldr r0,[r0,#0x1c]
02025434  mov r0,r0, lsl #0x11
02025438  movs r0,r0, lsr #0x1f
0202543c  movne r0,#0x1
02025440  moveq r0,#0x0
02025444  strb r0,[r2,#0x0]
02025448  bx lr
