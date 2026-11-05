020497b0  stmdb sp!,{r4,lr}
020497b4  ldr r12,[r0,#0x6c]
020497b8  ldr r4,[r0,#0xac]
020497bc  mla r12,r2,r12,r1
020497c0  mov lr,r12, lsl #0x1
020497c4  ldrh r12,[r4,lr]
020497c8  bic r12,r12,#0x400
020497cc  orr r3,r12,r3, lsl #0xa
020497d0  strh r3,[r4,lr]
020497d4  bl 0x020474b0
020497d8  ldmia sp!,{r4,pc}
