0206d6c8  ldr r2,[r1,#0x4]
0206d6cc  ldr r3,[r1,#0x0]
0206d6d0  and r1,r2,#0x1f
0206d6d4  mov r2,r3, lsl #0x1b
0206d6d8  orr r0,r1,r0, lsl #0x5
0206d6dc  orr r0,r0,r2, lsr #0x11
0206d6e0  mov r0,r0, lsl #0x10
0206d6e4  mov r0,r0, lsr #0x10
0206d6e8  bx lr
