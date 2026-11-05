0206d6ec  ldr r2,[r1,#0x0]
0206d6f0  ldr r3,[r1,#0x8]
0206d6f4  and r1,r2,#0x1f
0206d6f8  mov r2,r3, lsl #0x1b
0206d6fc  orr r0,r1,r0, lsl #0x5
0206d700  orr r0,r0,r2, lsr #0x11
0206d704  mov r0,r0, lsl #0x10
0206d708  mov r0,r0, lsr #0x10
0206d70c  bx lr
