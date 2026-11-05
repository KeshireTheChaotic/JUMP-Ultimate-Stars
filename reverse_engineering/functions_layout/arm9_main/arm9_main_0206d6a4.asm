0206d6a4  ldr r2,[r1,#0x8]
0206d6a8  ldr r3,[r1,#0x0]
0206d6ac  mov r1,r2, lsl #0x1b
0206d6b0  mov r2,r3, lsl #0x1b
0206d6b4  orr r0,r0,r1, lsr #0x16
0206d6b8  orr r0,r0,r2, lsr #0x11
0206d6bc  mov r0,r0, lsl #0x10
0206d6c0  mov r0,r0, lsr #0x10
0206d6c4  bx lr
