021a1a60  mvn r3,#0x0
021a1a64  mov r12,#0x0
021a1a68  b 0x021a1a98
021a1a6c  ldrb r1,[r0,#0x8]
021a1a70  add r1,r1,r12
021a1a74  mov r2,r1, lsr #0x1f
021a1a78  rsb r1,r2,r1, lsl #0x1a
021a1a7c  add r1,r2,r1, ror #0x1a
021a1a80  add r1,r0,r1, lsl #0x3
021a1a84  ldrsh r1,[r1,#0xc]
021a1a88  cmp r1,#0x0
021a1a8c  blt 0x021a1aa0
021a1a90  mov r3,r1
021a1a94  add r12,r12,#0x1
021a1a98  cmp r12,#0x40
021a1a9c  blt 0x021a1a6c
021a1aa0  mov r0,r3
021a1aa4  bx lr
