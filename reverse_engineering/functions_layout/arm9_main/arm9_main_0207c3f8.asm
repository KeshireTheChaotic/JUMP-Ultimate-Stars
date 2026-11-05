0207c3f8  ldrb r1,[r0,#0x18]
0207c3fc  tst r1,#0x1
0207c400  ldrhne r0,[r0,#0xc]
0207c404  cmpne r0,#0x0
0207c408  movne r0,#0x1
0207c40c  moveq r0,#0x0
0207c410  bx lr
