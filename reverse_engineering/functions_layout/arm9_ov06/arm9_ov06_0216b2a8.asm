0216b2a8  ldrsh r2,[r0,#0x18]
0216b2ac  sub r1,r2,#0x1
0216b2b0  strh r1,[r0,#0x18]
0216b2b4  cmp r2,#0x0
0216b2b8  movge r0,#0x1
0216b2bc  movlt r0,#0x0
0216b2c0  bx lr
