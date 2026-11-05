027f1450  ldr r0,[0x27f148c]
027f1454  ldr r2,[r0,#0x0]
027f1458  ldr r0,[0x27f1490]
027f145c  add r3,r2,r0
027f1460  mov r1,#0x1
027f1464  add r0,r2,#0x400
027f1468  strh r1,[r0,#0xa4]
027f146c  ldr r1,[r3,#0x8]
027f1470  ldr r0,[0x27f1494]
027f1474  and r0,r1,r0
027f1478  mov r0,r0, lsr #0x1
027f147c  orr r1,r0,#0x8000
027f1480  ldr r0,[0x27f1498]
027f1484  strh r1,[r0,#0x0]
027f1488  bx lr
