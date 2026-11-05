0217b7cc  cmp r1,#0x0
0217b7d0  movlt r0,#0x0
0217b7d4  bxlt lr
0217b7d8  add r1,r0,r1, lsl #0x2
0217b7dc  ldr r1,[r1,#0x8]
0217b7e0  cmp r1,#0x0
0217b7e4  movlt r0,#0x0
0217b7e8  addge r0,r0,r1
0217b7ec  bx lr
