02156944  ldrb r1,[r0,#0x31]
02156948  cmp r1,#0x0
0215694c  movne r1,#0x0
02156950  strbne r1,[r0,#0x31]
02156954  movne r0,#0x1
02156958  moveq r0,#0x0
0215695c  bx lr
