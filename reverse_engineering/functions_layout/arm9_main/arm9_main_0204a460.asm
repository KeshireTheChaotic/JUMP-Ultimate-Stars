0204a460  ldrb r2,[r0,#0x28]
0204a464  mov r1,r1, lsl #0x1f
0204a468  bic r2,r2,#0x4
0204a46c  orr r1,r2,r1, lsr #0x1d
0204a470  strb r1,[r0,#0x28]
0204a474  bx lr
