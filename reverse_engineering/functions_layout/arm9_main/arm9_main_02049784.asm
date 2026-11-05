02049784  stmdb sp!,{r4,lr}
02049788  ldr r12,[r0,#0x6c]
0204978c  ldr r4,[r0,#0xac]
02049790  mla r12,r2,r12,r1
02049794  mov lr,r12, lsl #0x1
02049798  ldrh r12,[r4,lr]
0204979c  bic r12,r12,#0x800
020497a0  orr r3,r12,r3, lsl #0xb
020497a4  strh r3,[r4,lr]
020497a8  bl 0x020474b0
020497ac  ldmia sp!,{r4,pc}
