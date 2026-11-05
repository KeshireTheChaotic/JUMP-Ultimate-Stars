02167d18  ldrb r0,[r0,#0x3]
02167d1c  mov r0,r0, lsl #0x1e
02167d20  movs r0,r0, lsr #0x1f
02167d24  movne r0,#0x1
02167d28  moveq r0,#0x0
02167d2c  bx lr
