0219caf4  ldr r1,[0x219cb10]
0219caf8  ldr r1,[r1,#0x0]
0219cafc  cmp r1,#0x0
0219cb00  addne r0,r1,r0
0219cb04  ldrbne r0,[r0,#0x8e0]
0219cb08  moveq r0,#0xff
0219cb0c  bx lr
