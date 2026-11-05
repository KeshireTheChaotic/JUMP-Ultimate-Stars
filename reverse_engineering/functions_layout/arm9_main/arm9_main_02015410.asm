02015410  cmp r1,#0x0
02015414  ldrne r2,[r0,#0x70]
02015418  subne r1,r1,#0x1
0201541c  mulne r2,r1,r2
02015420  ldrne r0,[r0,#0x6c]
02015424  ldrne r0,[r0,r2]
02015428  bx lr
