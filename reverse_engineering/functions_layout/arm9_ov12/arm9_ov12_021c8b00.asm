021c8b00  ldr r1,[r1,#0x0]
021c8b04  mov r0,r0, lsl #0xc
021c8b08  cmp r0,r1
021c8b0c  movne r0,#0x1
021c8b10  moveq r0,#0x0
021c8b14  bx lr
