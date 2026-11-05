021a06b4  add r0,r0,r1, lsl #0x2
021a06b8  ldr r0,[r0,#0x870]
021a06bc  tst r0,#0x1000
021a06c0  movne r0,#0x1
021a06c4  moveq r0,#0x0
021a06c8  bx lr
