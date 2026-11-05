0219a8e0  ldr r0,[0x219a900]
0219a8e4  ldr r0,[r0,#0x0]
0219a8e8  cmp r0,#0x0
0219a8ec  ldrsbne r0,[r0,#0x35]
0219a8f0  cmpne r0,#0x0
0219a8f4  movne r0,#0x1
0219a8f8  moveq r0,#0x0
0219a8fc  bx lr
