037f81c4  mov r0,#0x0
037f81c8  ldr r1,[0x37f81e4]
037f81cc  ldrb r1,[r1,#0x0]
037f81d0  cmp r1,#0x80
037f81d4  orreq r0,r0,#0x40
037f81d8  moveq r0,r0, lsl #0x10
037f81dc  moveq r0,r0, lsr #0x10
037f81e0  bx lr
