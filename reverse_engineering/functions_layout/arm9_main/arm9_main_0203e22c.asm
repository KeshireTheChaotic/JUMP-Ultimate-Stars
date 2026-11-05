0203e22c  ldr r2,[0x203e244]
0203e230  ldrh r1,[r2,#0x0]
0203e234  bic r1,r1,#0x3
0203e238  orr r0,r1,r0
0203e23c  strh r0,[r2,#0x0]
0203e240  bx lr
