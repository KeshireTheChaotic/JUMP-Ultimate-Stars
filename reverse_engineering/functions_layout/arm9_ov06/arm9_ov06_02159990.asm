02159990  ldrh r0,[r0,#0xa0]
02159994  cmp r0,#0x1a
02159998  moveq r0,#0x1
0215999c  movne r0,#0x0
021599a0  cmp r0,#0x0
021599a4  movne r0,#0x1
021599a8  moveq r0,#0x0
021599ac  bx lr
