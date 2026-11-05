0219f818  ldr r1,[0x219f830]
0219f81c  ldr r1,[r1,#0x0]
0219f820  cmp r1,#0x0
0219f824  addne r1,r1,#0x1000
0219f828  strne r0,[r1,#0xc40]
0219f82c  bx lr
