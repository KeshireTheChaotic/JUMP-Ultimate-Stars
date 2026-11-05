0215c050  ldrb r3,[r0,#0x11d]
0215c054  mvn r2,#0x0
0215c058  mov r1,#0x0
0215c05c  bic r3,r3,#0x2
0215c060  strb r3,[r0,#0x11d]
0215c064  strb r2,[r0,#0x11b]
0215c068  strb r1,[r0,#0x11c]
0215c06c  bx lr
