02049a30  ldr r3,[r0,#0x6c]
02049a34  ldr r12,[r0,#0xac]
02049a38  mla r0,r2,r3,r1
02049a3c  mov r0,r0, lsl #0x1
02049a40  ldrh r0,[r12,r0]
02049a44  mov r0,r0, asr #0xa
02049a48  tst r0,#0x1
02049a4c  movne r0,#0x1
02049a50  moveq r0,#0x0
02049a54  bx lr
