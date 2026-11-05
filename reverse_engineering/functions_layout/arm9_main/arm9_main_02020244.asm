02020244  ldr r1,[r1,#0x0]
02020248  cmp r1,r0, lsl #0xc
0202024c  moveq r0,#0x1
02020250  movne r0,#0x0
02020254  bx lr
