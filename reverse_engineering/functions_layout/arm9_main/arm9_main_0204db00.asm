0204db00  ldr r1,[0x204db14]
0204db04  ldr r2,[r1,#0x30c]
0204db08  sub r2,r2,#0x1
0204db0c  str r2,[r1,#0x30c]
0204db10  bx lr
