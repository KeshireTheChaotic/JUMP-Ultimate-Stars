02017c7c  stmdb sp!,{r3,lr}
02017c80  ldrh r12,[r0,#0x8]
02017c84  ldr lr,[r0,#0xc]
02017c88  tst r1,#0x1
02017c8c  mul r0,r2,r12
02017c90  mov r0,r0, lsr #0x1
02017c94  add r1,r0,r1, lsr #0x1
02017c98  ldrb r0,[lr,r1]
02017c9c  andeq r0,r0,#0xf0
02017ca0  orreq r0,r3,r0
02017ca4  andne r0,r0,#0xf
02017ca8  orrne r0,r0,r3, lsl #0x4
02017cac  strb r0,[lr,r1]
02017cb0  ldmia sp!,{r3,pc}
