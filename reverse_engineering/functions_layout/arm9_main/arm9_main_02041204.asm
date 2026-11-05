02041204  ldr r2,[r0,#0x0]
02041208  add r1,r0,#0x10
0204120c  sub r2,r2,#0x1
02041210  str r2,[r0,#0x0]
02041214  add r0,r1,r2, lsl #0x3
02041218  bx lr
