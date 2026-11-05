020497dc  stmdb sp!,{r4,lr}
020497e0  ldr r12,[r0,#0x6c]
020497e4  ldr r4,[r0,#0xac]
020497e8  mla r12,r2,r12,r1
020497ec  mov lr,r12, lsl #0x1
020497f0  ldrh r12,[r4,lr]
020497f4  bic r12,r12,#0xf000
020497f8  orr r3,r12,r3, lsl #0xc
020497fc  strh r3,[r4,lr]
02049800  bl 0x020474b0
02049804  ldmia sp!,{r4,pc}
