0219a8a8  ldr r0,[0x219a8c0]
0219a8ac  ldr r1,[r0,#0x0]
0219a8b0  cmp r1,#0x0
0219a8b4  movne r0,#0x1
0219a8b8  strbne r0,[r1,#0x34]
0219a8bc  bx lr
