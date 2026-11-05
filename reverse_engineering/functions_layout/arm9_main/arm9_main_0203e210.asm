0203e210  ldr r2,[0x203e228]
0203e214  ldrh r1,[r2,#0x0]
0203e218  bic r1,r1,#0x3
0203e21c  orr r0,r1,r0
0203e220  strh r0,[r2,#0x0]
0203e224  bx lr
