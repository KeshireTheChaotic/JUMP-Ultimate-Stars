0219bf28  ldr r1,[0x219bf48]
0219bf2c  mov r0,#0x0
0219bf30  ldr r1,[r1,#0x0]
0219bf34  cmp r1,#0x0
0219bf38  ldrbne r1,[r1,#0x54]
0219bf3c  cmpne r1,#0x0
0219bf40  movne r0,#0x1
0219bf44  bx lr
