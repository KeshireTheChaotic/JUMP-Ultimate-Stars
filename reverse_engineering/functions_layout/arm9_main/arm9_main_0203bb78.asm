0203bb78  ldr r2,[0x203bb9c]
0203bb7c  cmp r1,#0x0
0203bb80  ldrh r1,[r2,#0x0]
0203bb84  bic r1,r1,#0x3f00
0203bb88  orr r1,r1,r0, lsl #0x8
0203bb8c  ldr r0,[0x203bb9c]
0203bb90  orrne r1,r1,#0x2000
0203bb94  strh r1,[r0,#0x0]
0203bb98  bx lr
