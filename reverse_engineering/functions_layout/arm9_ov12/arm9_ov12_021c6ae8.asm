021c6ae8  add r2,r0,r1
021c6aec  ldrb r1,[r0,r1]
021c6af0  ldrb r0,[r2,#0x1]
021c6af4  orr r0,r1,r0, lsl #0x8
021c6af8  mov r0,r0, lsl #0x10
021c6afc  mov r0,r0, lsr #0x10
021c6b00  bx lr
