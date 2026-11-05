0214edac  ldr r1,[0x214edd0]
0214edb0  ldr r2,[0x214edd4]
0214edb4  ldr r3,[r1,#0x0]
0214edb8  ldr r0,[0x214edd8]
0214edbc  ldr r2,[r2,r3,lsl #0x2]
0214edc0  add r3,r3,#0x1
0214edc4  str r3,[r1,#0x0]
0214edc8  str r2,[r0,#0x0]
0214edcc  bx lr
