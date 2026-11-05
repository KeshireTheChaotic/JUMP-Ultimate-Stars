0214d6e8  ldr r1,[0x214d70c]
0214d6ec  ldr r2,[0x214d710]
0214d6f0  ldr r3,[r1,#0x0]
0214d6f4  ldr r0,[0x214d714]
0214d6f8  ldr r2,[r2,r3,lsl #0x2]
0214d6fc  add r3,r3,#0x1
0214d700  str r3,[r1,#0x0]
0214d704  str r2,[r0,#0x0]
0214d708  bx lr
