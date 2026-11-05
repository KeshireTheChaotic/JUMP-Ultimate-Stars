02057b40  ldr r1,[0x2057b58]
02057b44  ldrh r0,[r1,#0x0]
02057b48  ands r2,r0,#0x1
02057b4c  bicne r0,r0,#0x1
02057b50  strhne r0,[r1,#0x0]
02057b54  bx lr
