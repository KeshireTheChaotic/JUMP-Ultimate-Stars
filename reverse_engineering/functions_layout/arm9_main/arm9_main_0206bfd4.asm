0206bfd4  ldr r0,[r0,#0x30]
0206bfd6  ldr r2,[r0,#0x4]
0206bfd8  mov r0,#0x2
0206bfda  ldrb r1,[r2,#0x14]
0206bfdc  bic r1,r0
0206bfde  strb r1,[r2,#0x14]
0206bfe0  mov r0,#0x1
0206bfe2  bx lr
