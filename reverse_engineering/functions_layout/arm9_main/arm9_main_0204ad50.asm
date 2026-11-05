0204ad50  ldrb r2,[r0,#0x32]
0204ad54  mov r1,r1, lsl #0x1f
0204ad58  bic r2,r2,#0x2
0204ad5c  orr r1,r2,r1, lsr #0x1e
0204ad60  strb r1,[r0,#0x32]
0204ad64  bx lr
