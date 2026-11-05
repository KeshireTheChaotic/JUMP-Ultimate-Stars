0203db28  ldr r0,[0x203db40]
0203db2c  ldr r0,[r0,#0x3bc]
0203db30  cmp r0,#0x0
0203db34  movne r0,#0x1
0203db38  moveq r0,#0x0
0203db3c  bx lr
