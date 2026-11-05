02013a3c  ldr r0,[r0,#0x0]
02013a40  cmp r0,r1, lsl #0xc
02013a44  movge r0,#0x1
02013a48  movlt r0,#0x0
02013a4c  bx lr
