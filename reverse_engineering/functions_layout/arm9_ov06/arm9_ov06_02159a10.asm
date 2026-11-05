02159a10  ldrh r0,[r0,#0x88]
02159a14  cmp r0,#0x23
02159a18  moveq r0,#0x1
02159a1c  movne r0,#0x0
02159a20  cmp r0,#0x0
02159a24  movne r0,#0x1
02159a28  moveq r0,#0x0
02159a2c  bx lr
