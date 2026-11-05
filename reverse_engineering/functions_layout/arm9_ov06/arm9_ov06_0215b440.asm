0215b440  ldrsb r2,[r0,#0x18]
0215b444  cmp r2,#0x8
0215b448  addeq r0,r0,#0x100
0215b44c  ldrheq r0,[r0,#0x0]
0215b450  cmpeq r0,r1
0215b454  moveq r0,#0x1
0215b458  movne r0,#0x0
0215b45c  bx lr
