0214e370  ldr r2,[0x214e3d0]
0214e374  ldr r2,[r2,#0x0]
0214e378  ldr r12,[r2,#0x4c]
0214e37c  cmp r12,#0x0
0214e380  moveq r0,#0x0
0214e384  bxeq lr
0214e388  ldrb r2,[r0,#0x6]
0214e38c  cmp r2,#0x1
0214e390  movne r0,#0x0
0214e394  bxne lr
0214e398  ldrsb r2,[r0,#0x8]
0214e39c  subs r3,r2,#0x1
0214e3a0  movmi r0,#0x0
0214e3a4  bxmi lr
0214e3a8  ldrb r2,[r0,#0x7]
0214e3ac  mov r0,#0x24
0214e3b0  add r3,r1,r3, lsl #0x1
0214e3b4  mla r0,r2,r0,r12
0214e3b8  add r1,r0,r3, lsl #0x2
0214e3bc  add r0,r0,#0x4
0214e3c0  ldr r1,[r1,#0x4]
0214e3c4  add r0,r0,r3, lsl #0x2
0214e3c8  add r0,r1,r0
0214e3cc  bx lr
