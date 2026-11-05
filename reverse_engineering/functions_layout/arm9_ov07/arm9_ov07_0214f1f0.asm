0214f1f0  ldr r2,[r0,#0x0]
0214f1f4  ldr r0,[r2,#0x74]
0214f1f8  ldr r1,[r2,#0x70]
0214f1fc  add r0,r2,r0, lsl #0x2
0214f200  add r1,r2,r1, lsl #0x2
0214f204  ldr r0,[r0,#0x18]
0214f208  ldr r1,[r1,#0x18]
0214f20c  mvn r0,r0
0214f210  and r0,r1,r0
0214f214  bx lr
