0219a438  ldr r0,[0x219a450]
0219a43c  ldr r1,[r0,#0x0]
0219a440  cmp r1,#0x0
0219a444  movne r0,#0x0
0219a448  strbne r0,[r1,#0x60]
0219a44c  bx lr
