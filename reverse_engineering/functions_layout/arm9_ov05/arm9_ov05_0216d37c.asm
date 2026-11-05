0216d37c  ldr r3,[r0,#0x4]
0216d380  mov r0,#0x60
0216d384  mla r3,r1,r0,r3
0216d388  add r0,r3,r2, lsl #0x2
0216d38c  add r1,r3,#0x4
0216d390  ldr r0,[r0,#0x4]
0216d394  add r1,r1,r2, lsl #0x2
0216d398  add r0,r1,r0
0216d39c  bx lr
