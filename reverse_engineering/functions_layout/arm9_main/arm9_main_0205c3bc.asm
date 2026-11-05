0205c3bc  ldr r1,[0x205c3e0]
0205c3c0  ldr r1,[r1,#0x0]
0205c3c4  ldr r2,[r1,#0x84]
0205c3c8  ldr r1,[r2,#0x8]
0205c3cc  cmp r0,r1
0205c3d0  movcs r0,#0x0
0205c3d4  addcc r0,r2,r0, lsl #0x4
0205c3d8  ldrcc r0,[r0,#0x14]
0205c3dc  bx lr
