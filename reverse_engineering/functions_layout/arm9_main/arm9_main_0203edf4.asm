0203edf4  ldr r2,[0x203ee0c]
0203edf8  ldrh r1,[r2,#0x0]
0203edfc  bic r1,r1,#0x3
0203ee00  orr r0,r1,r0
0203ee04  strh r0,[r2,#0x0]
0203ee08  bx lr
