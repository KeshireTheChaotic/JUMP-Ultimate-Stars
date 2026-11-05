021610ac  ldr r0,[0x21610c8]
021610b0  ldr r0,[r0,#0x0]
021610b4  ldrb r0,[r0,#0xc0]
021610b8  cmp r0,#0x0
021610bc  moveq r0,#0x1
021610c0  movne r0,#0x0
021610c4  bx lr
