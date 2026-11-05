0218f308  ldr r1,[0x0218f318]
0218f30a  ldr r1,[r1,#0x4]
0218f30c  add r1,#0xa4
0218f30e  ldr r1,[r1,#0x0]
0218f310  cmp r1,#0x0
0218f312  beq 0x0218f316
0218f314  str r0,[r1,#0x38]
0218f316  bx lr
