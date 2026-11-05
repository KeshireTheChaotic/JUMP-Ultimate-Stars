02049864  ldr r3,[r0,#0x6c]
02049868  ldr r12,[r0,#0xac]
0204986c  mla r0,r2,r3,r1
02049870  mov r0,r0, lsl #0x1
02049874  ldrh r0,[r12,r0]
02049878  mov r0,r0, asr #0xa
0204987c  tst r0,#0x1
02049880  movne r0,#0x1
02049884  moveq r0,#0x0
02049888  bx lr
