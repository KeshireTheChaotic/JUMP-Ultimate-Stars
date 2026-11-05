02039d5c  stmdb sp!,{r3,lr}
02039d60  ldrh r3,[r0,#0x8]
02039d64  mov r12,r2, lsr #0x3
02039d68  and lr,r1,#0x7
02039d6c  mov r3,r3, lsr #0x3
02039d70  mul r3,r12,r3
02039d74  add r1,r3,r1, lsr #0x3
02039d78  mov r2,r2, lsl #0x1d
02039d7c  add r1,lr,r1, lsl #0x6
02039d80  ldr r3,[r0,#0xc]
02039d84  add r0,r1,r2, lsr #0x1a
02039d88  ldrb r0,[r3,r0]
02039d8c  ldmia sp!,{r3,pc}
