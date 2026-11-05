02157fd8  ldrb r3,[r0,#0xc8]
02157fdc  cmp r3,#0x0
02157fe0  bxeq lr
02157fe4  ldr r3,[r0,#0xac]
02157fe8  cmp r3,#0x0
02157fec  addeq r3,r0,#0x2c
02157ff0  ldreq r0,[r3,r1,lsl #0x2]
02157ff4  addeq r0,r0,r2
02157ff8  streq r0,[r3,r1,lsl #0x2]
02157ffc  bx lr
