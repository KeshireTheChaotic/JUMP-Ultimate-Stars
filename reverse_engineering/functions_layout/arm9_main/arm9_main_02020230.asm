02020230  ldr r1,[r1,#0x0]
02020234  cmp r1,r0, lsl #0xc
02020238  movgt r0,#0x1
0202023c  movle r0,#0x0
02020240  bx lr
