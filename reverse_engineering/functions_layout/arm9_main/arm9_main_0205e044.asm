0205e044  ldr r2,[r0,#0x8]
0205e048  ldr r1,[r0,#0xc]
0205e04c  cmp r2,r1
0205e050  addlt r1,r2,#0x1
0205e054  strlt r1,[r0,#0x8]
0205e058  bx lr
