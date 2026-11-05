0217b51c  ldr r0,[r0,#0x0]
0217b520  cmp r0,#0x0
0217b524  addne r0,r0,r1
0217b528  ldrsbne r0,[r0,#0xc0]
0217b52c  mvneq r0,#0x0
0217b530  bx lr
