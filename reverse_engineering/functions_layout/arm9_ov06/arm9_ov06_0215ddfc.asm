0215ddfc  ldr r1,[r0,#0x6c]
0215de00  tst r1,#0x2
0215de04  movne r2,#0x0
0215de08  ldrne r1,[0x215de1c]
0215de0c  strbne r2,[r0,#0x1df]
0215de10  strne r1,[r0,#0x1d8]
0215de14  mov r0,#0x0
0215de18  bx lr
