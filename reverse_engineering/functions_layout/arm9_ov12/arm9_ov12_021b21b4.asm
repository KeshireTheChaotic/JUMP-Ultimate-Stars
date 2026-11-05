021b21b4  ldrb r0,[r0,#0x32]
021b21b8  mov r0,r0, lsl #0x1e
021b21bc  movs r0,r0, lsr #0x1f
021b21c0  movne r0,#0x1
021b21c4  moveq r0,#0x0
021b21c8  bx lr
