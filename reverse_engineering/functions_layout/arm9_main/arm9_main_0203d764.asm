0203d764  ldrb r2,[r1,#0x3c]
0203d768  cmp r2,#0x0
0203d76c  ldreq r3,[r0,#0x4a4]
0203d770  moveq r2,#0x1
0203d774  addeq r3,r3,#0x1
0203d778  streq r3,[r0,#0x4a4]
0203d77c  strbeq r2,[r1,#0x3c]
0203d780  bx lr
