0219a308  ldr r0,[0x219a324]
0219a30c  ldr r1,[r0,#0x0]
0219a310  ldr r0,[r1,#0x1c]
0219a314  cmp r0,#0x0
0219a318  movne r0,#0x0
0219a31c  strne r0,[r1,#0x1c]
0219a320  bx lr
