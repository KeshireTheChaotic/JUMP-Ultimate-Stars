0217e9a0  cmp r1,#0x0
0217e9a4  movlt r0,#0x0
0217e9a8  bxlt lr
0217e9ac  add r1,r0,r1, lsl #0x2
0217e9b0  ldr r1,[r1,#0x8]
0217e9b4  cmp r1,#0x0
0217e9b8  movlt r0,#0x0
0217e9bc  addge r0,r0,r1
0217e9c0  bx lr
