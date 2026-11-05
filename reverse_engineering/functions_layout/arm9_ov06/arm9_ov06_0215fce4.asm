0215fce4  ldr r3,[r0,#0xc]
0215fce8  mov r2,#0x1
0215fcec  tst r3,r2, lsl r1
0215fcf0  addne r1,r0,r1, lsl #0x1
0215fcf4  ldrhne r1,[r1,#0x16]
0215fcf8  strhne r1,[r0,#0x64]
0215fcfc  bx lr
