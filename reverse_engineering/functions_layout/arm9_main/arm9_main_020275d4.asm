020275d4  ldrb r2,[r0,#0x29]
020275d8  mov r1,r1, lsl #0x1f
020275dc  bic r2,r2,#0x80
020275e0  orr r1,r2,r1, lsr #0x18
020275e4  strb r1,[r0,#0x29]
020275e8  bx lr
