0214e2d0  ldrb r1,[r0,#0x6]
0214e2d4  cmp r1,#0x0
0214e2d8  movne r0,#0x0
0214e2dc  bxne lr
0214e2e0  ldrsb r1,[r0,#0x8]
0214e2e4  subs r3,r1,#0x3
0214e2e8  movmi r0,#0x0
0214e2ec  bxmi lr
0214e2f0  ldr r1,[0x214e314]
0214e2f4  ldrb r2,[r0,#0x7]
0214e2f8  ldr r1,[r1,#0x0]
0214e2fc  mov r0,#0x3c
0214e300  ldr r1,[r1,#0x40]
0214e304  mla r0,r2,r0,r1
0214e308  add r0,r0,r3, lsl #0x2
0214e30c  ldrb r0,[r0,#0x10]
0214e310  bx lr
