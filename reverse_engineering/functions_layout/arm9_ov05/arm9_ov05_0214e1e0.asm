0214e1e0  ldr r3,[0x214e234]
0214e1e4  ldr r3,[r3,#0x0]
0214e1e8  ldr r12,[r3,#0x44]
0214e1ec  cmp r12,#0x0
0214e1f0  moveq r0,#0x0
0214e1f4  bxeq lr
0214e1f8  ldrb r3,[r0,#0x6]
0214e1fc  cmp r3,#0x0
0214e200  movne r0,#0x0
0214e204  bxne lr
0214e208  ldrb r3,[r0,#0x7]
0214e20c  mov r0,#0xd4
0214e210  mla r12,r3,r0,r12
0214e214  add r0,r12,r1, lsl #0x3
0214e218  add r3,r0,r2, lsl #0x2
0214e21c  add r0,r12,#0xb4
0214e220  add r0,r0,r1, lsl #0x3
0214e224  ldr r1,[r3,#0xb4]
0214e228  add r0,r0,r2, lsl #0x2
0214e22c  add r0,r1,r0
0214e230  bx lr
