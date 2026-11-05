021c6b44  ldr r3,[r0,#0x0]
021c6b48  ldr r1,[r1,#0x0]
021c6b4c  smull r1,r2,r3,r1
021c6b50  mov r1,r1, lsr #0xc
021c6b54  orr r1,r1,r2, lsl #0x14
021c6b58  str r1,[r0,#0x0]
021c6b5c  bx lr
