02157434  ldr r0,[r0,#0x8]
02157438  cmp r0,#0x0
0215743c  ldrne r0,[r0,#0x4]
02157440  ldrne r0,[r0,#0x64]
02157444  ldrbne r0,[r0,#0x48]
02157448  moveq r0,#0x1
0215744c  bx lr
