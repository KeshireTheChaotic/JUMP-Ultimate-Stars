02017528  stmdb sp!,{r3,lr}
0201752c  ldrh r3,[r0,#0x8]
02017530  ldr lr,[r0,#0x20]
02017534  ldr r12,[r0,#0xc]
02017538  mla r0,r2,r3,r1
0201753c  ldrb r0,[r12,r0]
02017540  ldr r1,[lr,#0x10]
02017544  mov r0,r0, lsl #0x1
02017548  ldrh r0,[r1,r0]
0201754c  ldmia sp!,{r3,pc}
