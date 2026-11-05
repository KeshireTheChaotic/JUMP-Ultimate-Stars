0201f6bc  ldrb r3,[r0,#0x0]
0201f6c0  ldrb r2,[r0,#0x1]
0201f6c4  add r3,r3,r2
0201f6c8  and r2,r3,#0x1
0201f6cc  rsb r2,r2,#0x2
0201f6d0  add r3,r0,r3
0201f6d4  and r2,r2,#0x1
0201f6d8  add r2,r3,r2
0201f6dc  add r1,r2,r1, lsl #0x1
0201f6e0  ldrsh r1,[r1,#0x2]
0201f6e4  bic r1,r1,#0x1
0201f6e8  add r0,r0,r1
0201f6ec  bx lr
