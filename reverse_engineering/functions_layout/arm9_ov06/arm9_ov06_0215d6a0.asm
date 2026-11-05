0215d6a0  and r2,r1,#0xf0
0215d6a4  mov r2,r2, asr #0x4
0215d6a8  strb r2,[r0,#0x5c]
0215d6ac  and r1,r1,#0xf
0215d6b0  strb r1,[r0,#0x5d]
0215d6b4  mov r1,#0x1
0215d6b8  strb r1,[r0,#0x5e]
0215d6bc  bx lr
