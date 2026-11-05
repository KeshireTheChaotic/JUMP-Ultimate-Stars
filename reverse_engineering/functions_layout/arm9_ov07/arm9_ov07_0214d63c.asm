0214d63c  ldr r1,[0x214d664]
0214d640  mov r2,#0x1
0214d644  ldrh r1,[r1,#0xa]
0214d648  tst r1,r2, lsl r0
0214d64c  subne r1,r0,#0x1
0214d650  ldrne r2,[0x214d668]
0214d654  movne r0,#0x1e
0214d658  mlane r0,r1,r0,r2
0214d65c  moveq r0,#0x0
0214d660  bx lr
