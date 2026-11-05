0215b2b0  and r2,r1,#0xf0
0215b2b4  mov r2,r2, asr #0x4
0215b2b8  strb r2,[r0,#0x5c]
0215b2bc  and r1,r1,#0xf
0215b2c0  strb r1,[r0,#0x5d]
0215b2c4  mov r1,#0x1
0215b2c8  strb r1,[r0,#0x5e]
0215b2cc  bx lr
