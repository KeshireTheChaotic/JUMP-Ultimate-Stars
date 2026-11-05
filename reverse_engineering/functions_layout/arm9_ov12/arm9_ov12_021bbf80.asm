021bbf80  ldr r1,[0x21bbfa4]
021bbf84  ldr r0,[0x21bbfa8]
021bbf88  ldr r3,[r1,#0x0]
021bbf8c  ldr r2,[r0,#0x0]
021bbf90  sub r3,r3,#0x1
021bbf94  ldr r0,[0x21bbfac]
021bbf98  str r3,[r1,#0x0]
021bbf9c  str r2,[r0,r3,lsl #0x2]
021bbfa0  bx lr
