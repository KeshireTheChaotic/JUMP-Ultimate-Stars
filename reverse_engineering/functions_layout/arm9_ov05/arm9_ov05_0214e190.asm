0214e190  ldr r2,[0x214e1dc]
0214e194  ldr r2,[r2,#0x0]
0214e198  ldr r3,[r2,#0x44]
0214e19c  cmp r3,#0x0
0214e1a0  moveq r0,#0x0
0214e1a4  bxeq lr
0214e1a8  ldrb r2,[r0,#0x6]
0214e1ac  cmp r2,#0x0
0214e1b0  movne r0,#0x0
0214e1b4  bxne lr
0214e1b8  ldrb r2,[r0,#0x7]
0214e1bc  mov r0,#0xd4
0214e1c0  mla r0,r2,r0,r3
0214e1c4  add r2,r0,r1, lsl #0x2
0214e1c8  add r0,r0,#0x54
0214e1cc  ldr r2,[r2,#0x54]
0214e1d0  add r0,r0,r1, lsl #0x2
0214e1d4  add r0,r2,r0
0214e1d8  bx lr
