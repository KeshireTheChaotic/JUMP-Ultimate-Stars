0202b2dc  ldr r2,[r0,#0x8]
0202b2e0  mov r1,r1, lsl #0x1f
0202b2e4  bic r2,r2,#0x200000
0202b2e8  orr r1,r2,r1, lsr #0xa
0202b2ec  str r1,[r0,#0x8]
0202b2f0  bx lr
