02049a78  ldr r3,[r0,#0x6c]
02049a7c  ldr r12,[r0,#0xac]
02049a80  mla r0,r2,r3,r1
02049a84  mov r0,r0, lsl #0x1
02049a88  ldrh r1,[r12,r0]
02049a8c  ldr r0,[0x2049a98]
02049a90  and r0,r1,r0
02049a94  bx lr
