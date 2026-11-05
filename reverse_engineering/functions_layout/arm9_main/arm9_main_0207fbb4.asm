0207fbb4  ldrb r1,[r0,#0x18]
0207fbb8  tst r1,#0x1
0207fbbc  ldrhne r0,[r0,#0xc]
0207fbc0  cmpne r0,#0x0
0207fbc4  movne r0,#0x1
0207fbc8  moveq r0,#0x0
0207fbcc  bx lr
