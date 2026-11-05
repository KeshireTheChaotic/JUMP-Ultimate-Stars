020499a8  stmdb sp!,{r4,lr}
020499ac  ldr r12,[r0,#0x6c]
020499b0  ldr r4,[r0,#0xac]
020499b4  mla r12,r2,r12,r1
020499b8  mov lr,r12, lsl #0x1
020499bc  ldrh r12,[r4,lr]
020499c0  bic r12,r12,#0xf000
020499c4  orr r3,r12,r3, lsl #0xc
020499c8  strh r3,[r4,lr]
020499cc  bl 0x020474b0
020499d0  ldmia sp!,{r4,pc}
