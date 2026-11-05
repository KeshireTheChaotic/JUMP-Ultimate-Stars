0215e91c  ldr r0,[r0,#0x8]
0215e920  cmp r0,#0x0
0215e924  ldrne r0,[r0,#0x4]
0215e928  ldrne r0,[r0,#0x64]
0215e92c  ldrbne r0,[r0,#0x48]
0215e930  moveq r0,#0x1
0215e934  bx lr
