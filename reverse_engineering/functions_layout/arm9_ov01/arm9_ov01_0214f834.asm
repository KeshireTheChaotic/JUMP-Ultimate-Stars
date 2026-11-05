0214f834  ldr r1,[0x214f858]
0214f838  ldr r2,[0x214f85c]
0214f83c  ldr r3,[r1,#0x0]
0214f840  ldr r0,[0x214f860]
0214f844  ldr r2,[r2,r3,lsl #0x2]
0214f848  add r3,r3,#0x1
0214f84c  str r3,[r1,#0x0]
0214f850  str r2,[r0,#0x0]
0214f854  bx lr
