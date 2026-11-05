02160b80  ldrb r1,[r1,#0x1]
02160b84  add r0,r0,r1, lsl #0x1
02160b88  ldrh r0,[r0,#0x6e]
02160b8c  cmp r0,#0x0
02160b90  moveq r0,#0x1
02160b94  movne r0,#0x0
02160b98  bx lr
