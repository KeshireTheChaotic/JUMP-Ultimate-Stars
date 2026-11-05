02159a74  mvn r2,#0x0
02159a78  cmp r1,r2
02159a7c  moveq r0,#0x0
02159a80  ldrne r0,[r0,#0x154]
02159a84  ldrne r0,[r0,r1,lsl #0x2]
02159a88  bx lr
