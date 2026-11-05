0214f6a0  ldr r0,[0x214f6c0]
0214f6a4  ldr r0,[r0,#0x0]
0214f6a8  ldrsh r1,[r0,#0x12]
0214f6ac  ldrsh r0,[r0,#0x10]
0214f6b0  cmp r1,r0
0214f6b4  movge r0,#0x1
0214f6b8  movlt r0,#0x0
0214f6bc  bx lr
