0215b158  ldrh r1,[r0,#0x14]
0215b15c  tst r1,#0x1
0215b160  movne r0,#0x0
0215b164  orreq r1,r1,#0x1
0215b168  strheq r1,[r0,#0x14]
0215b16c  moveq r0,#0x1
0215b170  bx lr
