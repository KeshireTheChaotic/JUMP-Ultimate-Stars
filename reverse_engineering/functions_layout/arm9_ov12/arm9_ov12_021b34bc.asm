021b34bc  stmdb sp!,{r3,r4,r5,lr}
021b34c0  mov r5,r0
021b34c4  mov r4,r1
021b34c8  ldrh r0,[r5,#0x6]
021b34cc  ldr r1,[r4,#0x0]
021b34d0  cmp r1,r0, lsl #0x4
021b34d4  ldmiaeq sp!,{r3,r4,r5,pc}
021b34d8  ldrb r0,[r5,#0x29]
021b34dc  cmp r0,#0x0
021b34e0  beq 0x021b3548
021b34e4  beq 0x021b3514
021b34e8  ldr r0,[0x21b3554]
021b34ec  ldr r1,[r0,#0x0]
021b34f0  cmp r1,r5
021b34f4  ldreq r1,[r5,#0xc]
021b34f8  streq r1,[r0,#0x0]
021b34fc  ldr r0,[0x21b3558]
021b3500  mov r1,r5
021b3504  ldr r0,[r0,#0x0]
021b3508  bl 0x0201cdb4
021b350c  mov r0,#0x0
021b3510  strb r0,[r5,#0x29]
021b3514  ldr r0,[r4,#0x0]
021b3518  mov r0,r0, asr #0x4
021b351c  strh r0,[r5,#0x6]
021b3520  ldrb r0,[r5,#0x29]
021b3524  cmp r0,#0x0
021b3528  ldmiane sp!,{r3,r4,r5,pc}
021b352c  ldr r0,[0x21b3558]
021b3530  mov r1,r5
021b3534  ldr r0,[r0,#0x0]
021b3538  bl 0x0201cca0
021b353c  mov r0,#0x1
021b3540  strb r0,[r5,#0x29]
021b3544  ldmia sp!,{r3,r4,r5,pc}
021b3548  mov r0,r1, asr #0x4
021b354c  strh r0,[r5,#0x6]
021b3550  ldmia sp!,{r3,r4,r5,pc}
