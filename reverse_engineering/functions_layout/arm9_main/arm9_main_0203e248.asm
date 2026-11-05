0203e248  ldr r2,[0x203e260]
0203e24c  ldrh r1,[r2,#0x0]
0203e250  bic r1,r1,#0x3
0203e254  orr r0,r1,r0
0203e258  strh r0,[r2,#0x0]
0203e25c  bx lr
