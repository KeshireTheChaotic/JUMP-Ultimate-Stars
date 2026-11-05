02157fb0  ldrb r3,[r0,#0xc8]
02157fb4  cmp r3,#0x0
02157fb8  bxeq lr
02157fbc  ldr r3,[r0,#0xac]
02157fc0  cmp r3,#0x0
02157fc4  addeq r3,r0,#0x1c
02157fc8  ldreq r0,[r3,r1,lsl #0x2]
02157fcc  addeq r0,r0,r2
02157fd0  streq r0,[r3,r1,lsl #0x2]
02157fd4  bx lr
