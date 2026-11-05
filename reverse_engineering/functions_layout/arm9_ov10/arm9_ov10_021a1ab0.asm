021a1ab0  ldrb r1,[r0,#0x8]
021a1ab4  add r1,r1,#0x1
021a1ab8  mov r2,r1, lsr #0x1f
021a1abc  rsb r1,r2,r1, lsl #0x1a
021a1ac0  add r1,r2,r1, ror #0x1a
021a1ac4  strb r1,[r0,#0x8]
021a1ac8  bx lr
