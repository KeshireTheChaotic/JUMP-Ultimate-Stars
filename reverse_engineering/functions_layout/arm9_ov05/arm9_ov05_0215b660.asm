0215b660  add r0,r0,#0x400
0215b664  ldrsb r1,[r0,#0xdb]
0215b668  mvn r0,#0x0
0215b66c  cmp r1,r0
0215b670  movne r0,#0x1
0215b674  moveq r0,#0x0
0215b678  bx lr
