02017a94  stmdb sp!,{r3,lr}
02017a98  ldrh lr,[r0,#0x8]
02017a9c  ldrh r12,[r0,#0xa]
02017aa0  mov r3,#0x0
02017aa4  ldr r2,[r0,#0xc]
02017aa8  mul r12,lr,r12
02017aac  add r12,r12,r12, lsr #0x1f
02017ab0  mov r12,r12, asr #0x1
02017ab4  cmp r12,#0x0
02017ab8  ldmiale sp!,{r3,pc}
02017abc  orr r1,r1,r1, lsl #0x4
02017ac0  and lr,r1,#0xff
02017ac4  b 0x02017ad0
02017ac8  strb lr,[r2],#0x1
02017acc  add r3,r3,#0x1
02017ad0  ldrh r12,[r0,#0x8]
02017ad4  ldrh r1,[r0,#0xa]
02017ad8  mul r1,r12,r1
02017adc  add r1,r1,r1, lsr #0x1f
02017ae0  cmp r3,r1, asr #0x1
02017ae4  blt 0x02017ac8
02017ae8  ldmia sp!,{r3,pc}
