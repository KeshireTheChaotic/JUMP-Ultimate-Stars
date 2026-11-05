0215793c  ldr r0,[r0,#0x8]
02157940  cmp r0,#0x0
02157944  ldrne r0,[r0,#0x4]
02157948  ldrne r0,[r0,#0x64]
0215794c  ldrbne r0,[r0,#0x48]
02157950  moveq r0,#0x1
02157954  bx lr
