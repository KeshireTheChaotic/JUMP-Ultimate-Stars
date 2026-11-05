0201f6f4  ldrb r3,[r0,#0x0]
0201f6f8  ldrb r2,[r0,#0x1]
0201f6fc  add r1,r1,r3
0201f700  add r3,r3,r2
0201f704  and r2,r3,#0x1
0201f708  rsb r2,r2,#0x2
0201f70c  add r3,r0,r3
0201f710  and r2,r2,#0x1
0201f714  add r2,r3,r2
0201f718  add r1,r2,r1, lsl #0x1
0201f71c  ldrsh r1,[r1,#0x2]
0201f720  bic r1,r1,#0x1
0201f724  add r0,r0,r1
0201f728  bx lr
