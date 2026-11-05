0203e1f4  ldr r2,[0x203e20c]
0203e1f8  ldrh r1,[r2,#0x0]
0203e1fc  bic r1,r1,#0x3
0203e200  orr r0,r1,r0
0203e204  strh r0,[r2,#0x0]
0203e208  bx lr
