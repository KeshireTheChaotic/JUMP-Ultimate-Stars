0219a8c4  ldr r0,[0x219a8dc]
0219a8c8  ldr r1,[r0,#0x0]
0219a8cc  cmp r1,#0x0
0219a8d0  movne r0,#0x0
0219a8d4  strbne r0,[r1,#0x34]
0219a8d8  bx lr
