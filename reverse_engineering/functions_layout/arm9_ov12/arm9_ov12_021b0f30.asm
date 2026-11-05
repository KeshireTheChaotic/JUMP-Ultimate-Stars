021b0f30  ldr r3,[r1,#0x0]
021b0f34  str r3,[r0,#0x0]
021b0f38  ldr r1,[r2,#0x0]
021b0f3c  smull r1,r2,r3,r1
021b0f40  mov r1,r1, lsr #0xc
021b0f44  orr r1,r1,r2, lsl #0x14
021b0f48  str r1,[r0,#0x0]
021b0f4c  bx lr
