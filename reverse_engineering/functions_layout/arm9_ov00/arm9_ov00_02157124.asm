02157124  ldr r0,[r0,#0x0]
02157128  cmp r0,r1, lsl #0xc
0215712c  movle r0,#0x1
02157130  movgt r0,#0x0
02157134  bx lr
