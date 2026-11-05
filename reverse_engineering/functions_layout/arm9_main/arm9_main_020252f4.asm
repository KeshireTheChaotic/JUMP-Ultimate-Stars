020252f4  stmdb sp!,{r3,lr}
020252f8  add r2,r0,r1
020252fc  ldrh r1,[r0,r1]
02025300  ldrh r0,[r2,#0x2]
02025304  orr r0,r1,r0, lsl #0x10
02025308  str r0,[sp,#0x0]
0202530c  bl 0x0200c954
02025310  ldr r1,[0x202531c]
02025314  bl 0x0200c5ac
02025318  ldmia sp!,{r3,pc}
