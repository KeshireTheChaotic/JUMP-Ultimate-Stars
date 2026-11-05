0204988c  ldr r3,[r0,#0x6c]
02049890  ldr r12,[r0,#0xac]
02049894  mla r0,r2,r3,r1
02049898  mov r0,r0, lsl #0x1
0204989c  ldrh r0,[r12,r0]
020498a0  mov r0,r0, asr #0xc
020498a4  and r0,r0,#0xf
020498a8  bx lr
