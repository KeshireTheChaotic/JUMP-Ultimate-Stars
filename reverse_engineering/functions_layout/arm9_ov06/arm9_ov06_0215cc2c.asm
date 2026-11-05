0215cc2c  ldrb r3,[r0,#0xc8]
0215cc30  cmp r3,#0x0
0215cc34  bxeq lr
0215cc38  ldr r3,[r0,#0xac]
0215cc3c  cmp r3,#0x0
0215cc40  addeq r3,r0,#0x3c
0215cc44  ldreq r0,[r3,r1,lsl #0x2]
0215cc48  addeq r0,r0,r2
0215cc4c  streq r0,[r3,r1,lsl #0x2]
0215cc50  bx lr
