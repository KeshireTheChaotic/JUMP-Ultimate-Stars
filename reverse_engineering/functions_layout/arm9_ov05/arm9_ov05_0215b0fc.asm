0215b0fc  mov r3,#0x0
0215b100  add r2,r0,r3, lsl #0x2
0215b104  ldr r2,[r2,#0x10]
0215b108  str r2,[r1,r3,lsl #0x2]
0215b10c  add r3,r3,#0x1
0215b110  cmp r3,#0x6
0215b114  blt 0x0215b100
0215b118  bx lr
