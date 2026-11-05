0217ab84  ldr r3,[r0,#0x4c]
0217ab88  mov r2,#0x1
0217ab8c  tst r3,r2, lsl r1
0217ab90  mov r3,#0x2
0217ab94  strb r3,[r0,#0x39]
0217ab98  mov r2,#0x0
0217ab9c  movne r1,#0x0
0217aba0  strb r2,[r0,#0x3e]
0217aba4  strb r1,[r0,#0x3a]
0217aba8  strb r3,[r0,#0x105]
0217abac  ldr r1,[r0,#0xd4]
0217abb0  orr r1,r1,#0x400
0217abb4  str r1,[r0,#0xd4]
0217abb8  bx lr
