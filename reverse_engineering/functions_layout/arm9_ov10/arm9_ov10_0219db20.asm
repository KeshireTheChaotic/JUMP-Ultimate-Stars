0219db20  ldr r1,[0x219db40]
0219db24  mov r2,#0x1
0219db28  ldr r1,[r1,#0x0]
0219db2c  add r1,r1,#0x1000
0219db30  ldr r3,[r1,#0xc38]
0219db34  orr r0,r3,r2, lsl r0
0219db38  str r0,[r1,#0xc38]
0219db3c  bx lr
