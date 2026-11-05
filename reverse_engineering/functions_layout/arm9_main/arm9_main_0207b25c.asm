0207b25c  cmp r0,#0x0
0207b260  bxeq lr
0207b264  ldrb r2,[r0,#0x18]
0207b268  tst r2,#0x20
0207b26c  strhne r1,[r0,#0xc]
0207b270  bx lr
