02045220  ldr r2,[r0,#0x5c]
02045224  cmp r2,#0x0
02045228  moveq r0,#0x0
0204522c  movne r0,r1, lsl #0x1
02045230  ldrhne r0,[r2,r0]
02045234  addne r0,r2,r0
02045238  bx lr
