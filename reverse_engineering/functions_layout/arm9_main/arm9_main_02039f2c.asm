02039f2c  stmdb sp!,{r3,lr}
02039f30  ldrh r3,[r0,#0x8]
02039f34  mov r12,r2, lsr #0x3
02039f38  mov lr,r1, lsr #0x1
02039f3c  mul r3,r12,r3
02039f40  mov r3,r3, lsr #0x3
02039f44  and r12,lr,#0x3
02039f48  add r3,r3,r1, lsr #0x3
02039f4c  mov lr,r2, lsl #0x1d
02039f50  add r2,r12,r3, lsl #0x5
02039f54  tst r1,#0x1
02039f58  ldr r0,[r0,#0xc]
02039f5c  add r1,r2,lr, lsr #0x1b
02039f60  ldrb r0,[r0,r1]
02039f64  andeq r0,r0,#0xf
02039f68  movne r0,r0, asr #0x4
02039f6c  ldmia sp!,{r3,pc}
