02161b5c  stmdb sp!,{r4,r5,r6,lr}
02161b60  ldr r3,[r0,#0x20]
02161b64  ldr r3,[r3,#0xc]
02161b68  ldr r6,[r3,#0x24]
02161b6c  ldr r3,[r6,#0x8]
02161b70  cmp r1,r3
02161b74  ldmiacs sp!,{r4,r5,r6,pc}
02161b78  add r12,r6,#0x10
02161b7c  mov r5,r1, asr #0x5
02161b80  and r3,r1,#0x1f
02161b84  mov r4,#0x1
02161b88  mov r4,r4, lsl r3
02161b8c  ldr r3,[r12,r5,lsl #0x2]
02161b90  add r5,r12,r5, lsl #0x2
02161b94  ands r3,r3,r4
02161b98  ldmiane sp!,{r4,r5,r6,pc}
02161b9c  add r3,r6,#0x100
02161ba0  ldrh r12,[r3,#0x6a]
02161ba4  ldr r3,[r0,#0x14]
02161ba8  mul lr,r1,r12
