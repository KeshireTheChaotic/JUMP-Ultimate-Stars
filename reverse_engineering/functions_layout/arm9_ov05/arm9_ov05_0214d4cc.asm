0214d4cc  ldr r1,[0x214d4f0]
0214d4d0  ldr r2,[0x214d4f4]
0214d4d4  ldr r3,[r1,#0x0]
0214d4d8  ldr r0,[0x214d4f8]
0214d4dc  ldr r2,[r2,r3,lsl #0x2]
0214d4e0  add r3,r3,#0x1
0214d4e4  str r3,[r1,#0x0]
0214d4e8  str r2,[r0,#0x0]
0214d4ec  bx lr
