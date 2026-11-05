02049a58  ldr r3,[r0,#0x6c]
02049a5c  ldr r12,[r0,#0xac]
02049a60  mla r0,r2,r3,r1
02049a64  mov r0,r0, lsl #0x1
02049a68  ldrh r0,[r12,r0]
02049a6c  mov r0,r0, asr #0xc
02049a70  and r0,r0,#0xf
02049a74  bx lr
