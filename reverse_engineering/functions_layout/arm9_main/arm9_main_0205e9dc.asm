0205e9dc  ldrh r2,[r1,#0x2]
0205e9e0  add r3,r1,#0x10
0205e9e4  mov r2,r2, asr #0x8
0205e9e8  and r2,r2,#0x7f
0205e9ec  mov r2,r2, lsl #0x10
0205e9f0  sub r2,r1,r2, lsr #0x10
0205e9f4  str r2,[r0,#0x0]
0205e9f8  ldr r1,[r1,#0x4]
0205e9fc  add r1,r1,r3
0205ea00  str r1,[r0,#0x4]
0205ea04  bx lr
