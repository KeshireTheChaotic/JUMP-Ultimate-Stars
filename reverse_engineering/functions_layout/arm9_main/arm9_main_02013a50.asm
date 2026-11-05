02013a50  ldr r0,[r0,#0x40]
02013a54  tst r0,#0x1
02013a58  moveq r0,#0x1
02013a5c  movne r0,#0x0
02013a60  bx lr
