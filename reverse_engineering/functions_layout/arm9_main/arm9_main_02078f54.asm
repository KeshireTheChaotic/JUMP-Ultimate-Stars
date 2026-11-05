02078f54  ldr r1,[0x2078f78]
02078f58  ldr r0,[0x2078f7c]
02078f5c  ldr r3,[r1,#0x0]
02078f60  ldr r2,[r0,#0x0]
02078f64  sub r3,r3,#0x1
02078f68  ldr r0,[0x2078f80]
02078f6c  str r3,[r1,#0x0]
02078f70  str r2,[r0,r3,lsl #0x2]
02078f74  bx lr
