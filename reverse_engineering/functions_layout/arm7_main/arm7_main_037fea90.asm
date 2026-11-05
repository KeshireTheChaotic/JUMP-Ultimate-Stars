037fea90  mov r3,#0x1
037fea94  mov r2,r3, lsl r0
037fea98  ldr r0,[0x37feab4]
037fea9c  add r0,r0,r1, lsl #0x2
037feaa0  ldr r0,[r0,#0x388]
037feaa4  ands r0,r2,r0
037feaa8  moveq r3,#0x0
037feaac  mov r0,r3
037feab0  bx lr
