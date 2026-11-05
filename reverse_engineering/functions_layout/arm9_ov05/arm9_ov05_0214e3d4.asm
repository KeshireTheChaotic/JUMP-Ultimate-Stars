0214e3d4  ldr r2,[0x214e438]
0214e3d8  ldr r2,[r2,#0x0]
0214e3dc  ldr r3,[r2,#0x4c]
0214e3e0  cmp r3,#0x0
0214e3e4  moveq r0,#0x0
0214e3e8  bxeq lr
0214e3ec  ldrb r2,[r0,#0x6]
0214e3f0  cmp r2,#0x1
0214e3f4  movne r0,#0x0
0214e3f8  bxne lr
0214e3fc  ldrsb r2,[r0,#0x8]
0214e400  subs r12,r2,#0x1
0214e404  movmi r0,#0x0
0214e408  bxmi lr
0214e40c  ldrb r2,[r0,#0x7]
0214e410  mov r0,#0x24
0214e414  mla r3,r2,r0,r3
0214e418  add r0,r3,r12, lsl #0x3
0214e41c  add r2,r0,r1, lsl #0x2
0214e420  add r0,r3,#0x14
0214e424  add r0,r0,r12, lsl #0x3
0214e428  ldr r2,[r2,#0x14]
0214e42c  add r0,r0,r1, lsl #0x2
0214e430  add r0,r2,r0
0214e434  bx lr
