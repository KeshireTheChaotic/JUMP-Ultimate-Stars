02018240  ldrsh r1,[r0,#0x2]
02018244  ldrsh r0,[r0,#0x6]
02018248  cmp r0,r1
0201824c  subgt r0,r0,r1
02018250  suble r0,r1,r0
02018254  bx lr
