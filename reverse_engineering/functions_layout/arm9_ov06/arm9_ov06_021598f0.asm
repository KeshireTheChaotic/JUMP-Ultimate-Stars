021598f0  ldrh r0,[r0,#0xa0]
021598f4  cmp r0,#0x12
021598f8  moveq r0,#0x1
021598fc  movne r0,#0x0
02159900  cmp r0,#0x0
02159904  movne r0,#0x1
02159908  moveq r0,#0x0
0215990c  bx lr
