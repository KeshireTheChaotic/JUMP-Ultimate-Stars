0215d4e0  ldrh r1,[r0,#0x14]
0215d4e4  tst r1,#0x1
0215d4e8  movne r0,#0x0
0215d4ec  orreq r1,r1,#0x1
0215d4f0  strheq r1,[r0,#0x14]
0215d4f4  moveq r0,#0x1
0215d4f8  bx lr
