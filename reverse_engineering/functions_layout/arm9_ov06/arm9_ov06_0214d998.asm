0214d998  ldr r1,[0x214d9bc]
0214d99c  ldr r2,[0x214d9c0]
0214d9a0  ldr r3,[r1,#0x0]
0214d9a4  ldr r0,[0x214d9c4]
0214d9a8  ldr r2,[r2,r3,lsl #0x2]
0214d9ac  add r3,r3,#0x1
0214d9b0  str r3,[r1,#0x0]
0214d9b4  str r2,[r0,#0x0]
0214d9b8  bx lr
