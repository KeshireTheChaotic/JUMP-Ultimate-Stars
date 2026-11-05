037fed1c  ldr r12,[0x37fed50]
037fed20  ldrb r12,[r12,#0x0]
037fed24  ands r12,r12,#0x80
037fed28  movne r12,#0x1
037fed2c  moveq r12,#0x0
037fed30  mov r12,r12, lsl #0x7
037fed34  orr r3,r12,r3, lsl #0x5
037fed38  orr r2,r3,r2, lsl #0x4
037fed3c  orr r1,r2,r1, lsl #0x2
037fed40  orr r1,r0,r1
037fed44  ldr r0,[0x37fed50]
037fed48  strb r1,[r0,#0x0]
037fed4c  bx lr
