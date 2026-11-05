0214d438  ldr r1,[0x214d45c]
0214d43c  ldr r0,[0x214d460]
0214d440  ldr r3,[r1,#0x0]
0214d444  ldr r2,[r0,#0x0]
0214d448  sub r3,r3,#0x1
0214d44c  ldr r0,[0x214d464]
0214d450  str r3,[r1,#0x0]
0214d454  str r2,[r0,r3,lsl #0x2]
0214d458  bx lr
