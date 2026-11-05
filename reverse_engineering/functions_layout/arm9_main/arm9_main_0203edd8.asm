0203edd8  ldr r2,[0x203edf0]
0203eddc  ldrh r1,[r2,#0x0]
0203ede0  bic r1,r1,#0x3
0203ede4  orr r0,r1,r0
0203ede8  strh r0,[r2,#0x0]
0203edec  bx lr
