020882a8  ldr r0,[0x20882c0]
020882ac  ldrb r0,[r0,#0x3]
020882b0  tst r0,#0x2
020882b4  movne r0,#0x1
020882b8  moveq r0,#0x0
020882bc  bx lr
