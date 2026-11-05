0215cc04  ldrb r3,[r0,#0xc8]
0215cc08  cmp r3,#0x0
0215cc0c  bxeq lr
0215cc10  ldr r3,[r0,#0xac]
0215cc14  cmp r3,#0x0
0215cc18  addeq r3,r0,#0x1c
0215cc1c  ldreq r0,[r3,r1,lsl #0x2]
0215cc20  addeq r0,r0,r2
0215cc24  streq r0,[r3,r1,lsl #0x2]
0215cc28  bx lr
