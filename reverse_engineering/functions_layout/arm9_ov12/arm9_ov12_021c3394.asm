021c3394  ldr r1,[0x21c33b8]
021c3398  ldr r0,[0x21c33bc]
021c339c  ldr r3,[r1,#0x0]
021c33a0  ldr r2,[r0,#0x0]
021c33a4  sub r3,r3,#0x1
021c33a8  ldr r0,[0x21c33c0]
021c33ac  str r3,[r1,#0x0]
021c33b0  str r2,[r0,r3,lsl #0x2]
021c33b4  bx lr
