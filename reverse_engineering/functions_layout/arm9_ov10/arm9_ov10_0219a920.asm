0219a920  ldr r0,[0x219a938]
0219a924  ldr r1,[r0,#0x0]
0219a928  cmp r1,#0x0
0219a92c  movne r0,#0x0
0219a930  strbne r0,[r1,#0x35]
0219a934  bx lr
