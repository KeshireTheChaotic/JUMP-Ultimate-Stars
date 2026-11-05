02039f70  stmdb sp!,{r4,lr}
02039f74  ldrh r12,[r0,#0x8]
02039f78  mov lr,r2, lsr #0x3
02039f7c  mov r4,r1, lsr #0x1
02039f80  mul r12,lr,r12
02039f84  mov r12,r12, lsr #0x3
02039f88  and r4,r4,#0x3
02039f8c  add r12,r12,r1, lsr #0x3
02039f90  mov lr,r2, lsl #0x1d
02039f94  add r2,r4,r12, lsl #0x5
02039f98  tst r1,#0x1
02039f9c  add r1,r2,lr, lsr #0x1b
02039fa0  ldr r2,[r0,#0xc]
02039fa4  ldrb r0,[r2,r1]
02039fa8  andeq r0,r0,#0xf0
02039fac  orreq r0,r3,r0
02039fb0  andne r0,r0,#0xf
02039fb4  orrne r0,r0,r3, lsl #0x4
02039fb8  strb r0,[r2,r1]
02039fbc  ldmia sp!,{r4,pc}
