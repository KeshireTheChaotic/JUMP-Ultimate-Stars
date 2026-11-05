0217e438  ldrb r1,[r0,#0x7c]
0217e43c  cmp r1,#0x0
0217e440  ldrbeq r0,[r0,#0x7f]
0217e444  cmpeq r0,#0x0
0217e448  movne r0,#0x1
0217e44c  moveq r0,#0x0
0217e450  bx lr
