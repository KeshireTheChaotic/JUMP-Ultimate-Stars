0219bee8  ldr r1,[0x219bf08]
0219beec  mov r0,#0x0
0219bef0  ldr r1,[r1,#0x0]
0219bef4  cmp r1,#0x0
0219bef8  ldrbne r1,[r1,#0x53]
0219befc  cmpne r1,#0x0
0219bf00  movne r0,#0x1
0219bf04  bx lr
