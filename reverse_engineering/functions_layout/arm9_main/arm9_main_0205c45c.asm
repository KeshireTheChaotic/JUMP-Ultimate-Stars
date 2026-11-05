0205c45c  ldr r1,[0x205c480]
0205c460  ldr r1,[r1,#0x0]
0205c464  ldr r2,[r1,#0x84]
0205c468  ldr r1,[r2,#0x8]
0205c46c  cmp r0,r1
0205c470  movcs r0,#0x0
0205c474  addcc r0,r2,r0, lsl #0x4
0205c478  ldrcc r0,[r0,#0x10]
0205c47c  bx lr
