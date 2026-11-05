021bc03c  ldr r1,[0x21bc060]
021bc040  ldr r2,[0x21bc064]
021bc044  ldr r3,[r1,#0x0]
021bc048  ldr r0,[0x21bc068]
021bc04c  ldr r2,[r2,r3,lsl #0x2]
021bc050  add r3,r3,#0x1
021bc054  str r3,[r1,#0x0]
021bc058  str r2,[r0,#0x0]
021bc05c  bx lr
