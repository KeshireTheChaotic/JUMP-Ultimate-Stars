02157314  cmp r2,#0x0
02157318  mvneq r2,#0x0
0215731c  add r0,r0,r1, lsl #0x1
02157320  strh r2,[r0,#0x18]
02157324  bx lr
