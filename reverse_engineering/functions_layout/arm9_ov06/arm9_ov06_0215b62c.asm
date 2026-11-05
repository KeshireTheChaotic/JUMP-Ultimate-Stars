0215b62c  ldr r0,[r0,#0x8]
0215b630  cmp r0,#0x0
0215b634  ldrne r0,[r0,#0x4]
0215b638  ldrne r0,[r0,#0x64]
0215b63c  ldrbne r0,[r0,#0x48]
0215b640  moveq r0,#0x1
0215b644  bx lr
