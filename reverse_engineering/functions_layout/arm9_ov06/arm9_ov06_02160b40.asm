02160b40  ldrb r2,[r1,#0x1]
02160b44  ldrh r1,[r1,#0x2]
02160b48  add r0,r0,r2, lsl #0x1
02160b4c  ldrh r0,[r0,#0x6e]
02160b50  cmp r0,r1
02160b54  movcs r0,#0x1
02160b58  movcc r0,#0x0
02160b5c  bx lr
