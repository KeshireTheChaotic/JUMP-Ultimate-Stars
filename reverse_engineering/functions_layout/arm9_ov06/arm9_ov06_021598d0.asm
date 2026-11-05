021598d0  ldrh r1,[r0,#0x88]
021598d4  mov r0,#0x0
021598d8  cmp r1,#0xb
021598dc  moveq r1,#0x1
021598e0  movne r1,r0
021598e4  cmp r1,#0x0
021598e8  movne r0,#0x1
021598ec  bx lr
