02039b88  stmdb sp!,{r3,lr}
02039b8c  ldrh r3,[r0,#0x8]
02039b90  mov r12,r2, lsr #0x3
02039b94  mov lr,r1, lsr #0x1
02039b98  mov r3,r3, lsr #0x3
02039b9c  mul r3,r12,r3
02039ba0  and r12,lr,#0x3
02039ba4  add r3,r3,r1, lsr #0x3
02039ba8  mov lr,r2, lsl #0x1d
02039bac  add r2,r12,r3, lsl #0x5
02039bb0  tst r1,#0x1
02039bb4  ldr r0,[r0,#0xc]
02039bb8  add r1,r2,lr, lsr #0x1b
02039bbc  ldrb r0,[r0,r1]
02039bc0  andeq r0,r0,#0xf
02039bc4  movne r0,r0, asr #0x4
02039bc8  ldmia sp!,{r3,pc}
