02165e70  ldr r0,[r0,#0x10]
02165e74  ldr r0,[r0,#0x40]
02165e78  tst r0,#0x800
02165e7c  movne r0,#0x1
02165e80  moveq r0,#0x0
02165e84  bx lr
