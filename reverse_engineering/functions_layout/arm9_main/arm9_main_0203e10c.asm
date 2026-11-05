0203e10c  stmdb sp!,{r3,lr}
0203e110  ldr lr,[0x203e134]
0203e114  ldrh r12,[lr,#0x0]
0203e118  and r12,r12,#0x43
0203e11c  orr r0,r12,r0, lsl #0xe
0203e120  orr r0,r0,r2, lsl #0x8
0203e124  orr r0,r0,r3, lsl #0x2
0203e128  orr r0,r0,r1, lsl #0xd
0203e12c  strh r0,[lr,#0x0]
0203e130  ldmia sp!,{r3,pc}
