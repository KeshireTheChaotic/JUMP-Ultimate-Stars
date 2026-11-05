0206d734  ldr r2,[r1,#0x8]
0206d738  ldr r1,[r1,#0x0]
0206d73c  and r2,r2,#0x1f
0206d740  mov r1,r1, lsl #0x1b
0206d744  orr r1,r2,r1, lsr #0x16
0206d748  orr r0,r1,r0, lsl #0xa
0206d74c  mov r0,r0, lsl #0x10
0206d750  mov r0,r0, lsr #0x10
0206d754  bx lr
