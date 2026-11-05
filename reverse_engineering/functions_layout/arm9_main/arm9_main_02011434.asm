02011434  ldrb r2,[r0,#0x6]
02011438  sub r2,r2,#0x2
0201143c  add r2,r0,r2, lsl #0x1
02011440  add r1,r2,r1, lsl #0x1
02011444  ldrh r1,[r1,#0x14]
02011448  add r0,r0,r1
0201144c  bx lr
