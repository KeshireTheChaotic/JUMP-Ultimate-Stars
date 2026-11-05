0219a41c  ldr r0,[0x219a434]
0219a420  ldr r1,[r0,#0x0]
0219a424  cmp r1,#0x0
0219a428  movne r0,#0x1
0219a42c  strbne r0,[r1,#0x60]
0219a430  bx lr
