02049a08  ldr r3,[r0,#0x6c]
02049a0c  ldr r12,[r0,#0xac]
02049a10  mla r0,r2,r3,r1
02049a14  mov r0,r0, lsl #0x1
02049a18  ldrh r0,[r12,r0]
02049a1c  mov r0,r0, asr #0xb
02049a20  tst r0,#0x1
02049a24  movne r0,#0x1
02049a28  moveq r0,#0x0
02049a2c  bx lr
