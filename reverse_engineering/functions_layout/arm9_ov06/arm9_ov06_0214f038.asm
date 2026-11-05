0214f038  ldr r2,[r0,#0x0]
0214f03c  ldr r0,[r2,#0x74]
0214f040  ldr r1,[r2,#0x70]
0214f044  add r0,r2,r0, lsl #0x2
0214f048  add r1,r2,r1, lsl #0x2
0214f04c  ldr r0,[r0,#0x18]
0214f050  ldr r1,[r1,#0x18]
0214f054  mvn r0,r0
0214f058  ldr r2,[r2,#0x28]
0214f05c  and r0,r1,r0
0214f060  orr r0,r2,r0
0214f064  bx lr
