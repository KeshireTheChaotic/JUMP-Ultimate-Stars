0219a904  ldr r0,[0x219a91c]
0219a908  ldr r1,[r0,#0x0]
0219a90c  cmp r1,#0x0
0219a910  movne r0,#0x1
0219a914  strbne r0,[r1,#0x35]
0219a918  bx lr
