02157fd0  ldr r1,[r0,#0x0]
02157fd4  mov r0,#0x1
02157fd8  ldr r2,[r1,#0x4]
02157fdc  ldrb r1,[r2,#0x28]
02157fe0  mov r1,r1, lsl #0x1e
02157fe4  movs r1,r1, lsr #0x1f
02157fe8  ldreq r1,[r2,#0x34]
02157fec  ldreq r1,[r1,#0x244]
02157ff0  cmpeq r1,#0x0
02157ff4  moveq r0,#0x0
02157ff8  bx lr
