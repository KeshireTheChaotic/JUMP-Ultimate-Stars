0207a404  ldr r1,[r1,#0x10]
0207a408  ldr r0,[r0,#0x14]
0207a40c  add r0,r1,r0, lsl #0x4
0207a410  ldrb r0,[r0,#0xe]
0207a414  mov r0,r0, lsl #0x18
0207a418  mov r0,r0, lsr #0x1f
0207a41c  strh r0,[r2,#0x0]
0207a420  bx lr
