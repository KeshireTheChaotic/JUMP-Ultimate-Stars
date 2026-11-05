0203eda0  ldr r2,[0x203edb8]
0203eda4  ldrh r1,[r2,#0x0]
0203eda8  bic r1,r1,#0x3
0203edac  orr r0,r1,r0
0203edb0  strh r0,[r2,#0x0]
0203edb4  bx lr
