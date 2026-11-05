021a2234  mov r3,#0x0
021a2238  add r2,r0,r3
021a223c  ldrb r2,[r2,#0x48]
021a2240  strb r2,[r1,r3]
021a2244  add r3,r3,#0x1
021a2248  cmp r3,#0x4
021a224c  blt 0x021a2238
021a2250  bx lr
