0214e554  ldrb r2,[r0,#0x6]
0214e558  cmp r2,#0x2
0214e55c  movne r0,#0x0
0214e560  bxne lr
0214e564  ldr r2,[0x214e594]
0214e568  ldrb r3,[r0,#0x7]
0214e56c  ldr r2,[r2,#0x0]
0214e570  mov r0,#0xc
0214e574  ldr r2,[r2,#0x54]
0214e578  mla r0,r3,r0,r2
0214e57c  add r2,r0,r1, lsl #0x2
0214e580  add r0,r0,#0x4
0214e584  ldr r2,[r2,#0x4]
0214e588  add r0,r0,r1, lsl #0x2
0214e58c  add r0,r2,r0
0214e590  bx lr
