02036fe0  ldr r2,[r1,#0x0]
02036fe4  ldr r0,[0x2037000]
02036fe8  cmp r2,r0
02036fec  ldrsbeq r0,[r1,#0x4]
02036ff0  cmpeq r0,#0x0
02036ff4  moveq r0,#0x1
02036ff8  movne r0,#0x0
02036ffc  bx lr
