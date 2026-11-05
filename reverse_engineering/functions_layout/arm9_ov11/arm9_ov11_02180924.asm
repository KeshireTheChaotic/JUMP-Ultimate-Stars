02180924  ldrh r1,[r0,#0xd0]
02180928  cmp r1,#0x0
0218092c  subne r1,r1,#0x1
02180930  strhne r1,[r0,#0xd0]
02180934  bx lr
