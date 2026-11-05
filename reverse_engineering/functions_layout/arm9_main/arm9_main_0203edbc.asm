0203edbc  ldr r2,[0x203edd4]
0203edc0  ldrh r1,[r2,#0x0]
0203edc4  bic r1,r1,#0x3
0203edc8  orr r0,r1,r0
0203edcc  strh r0,[r2,#0x0]
0203edd0  bx lr
