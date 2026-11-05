037fefd0  mov r0,r0, lsl #0x4
037fefd4  add r0,r0,#0x4000000
037fefd8  ldrb r0,[r0,#0x403]
037fefdc  ands r0,r0,#0x80
037fefe0  movne r0,#0x1
037fefe4  moveq r0,#0x0
037fefe8  bx lr
