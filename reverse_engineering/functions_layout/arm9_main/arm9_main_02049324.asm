02049324  ldr r2,[r0,#0x8]
02049328  mov r1,r1, lsl #0x1f
0204932c  bic r2,r2,#0x100
02049330  orr r1,r2,r1, lsr #0x17
02049334  str r1,[r0,#0x8]
02049338  bx lr
