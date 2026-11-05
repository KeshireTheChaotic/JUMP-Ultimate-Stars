02165e88  ldrb r3,[r0,#0xc8]
02165e8c  cmp r3,#0x0
02165e90  bxeq lr
02165e94  ldr r3,[r0,#0xac]
02165e98  cmp r3,r2
02165e9c  addeq r2,r0,#0x1c
02165ea0  ldreq r0,[r2,r1,lsl #0x2]
02165ea4  addeq r0,r0,#0x1
02165ea8  streq r0,[r2,r1,lsl #0x2]
02165eac  bx lr
