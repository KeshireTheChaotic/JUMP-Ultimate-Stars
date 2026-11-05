0203ecb8  stmdb sp!,{r3,lr}
0203ecbc  ldr lr,[0x203ece0]
0203ecc0  ldrh r12,[lr,#0x0]
0203ecc4  and r12,r12,#0x43
0203ecc8  orr r0,r12,r0, lsl #0xe
0203eccc  orr r0,r0,r1, lsl #0x7
0203ecd0  orr r0,r0,r2, lsl #0x8
0203ecd4  orr r0,r0,r3, lsl #0x2
0203ecd8  strh r0,[lr,#0x0]
0203ecdc  ldmia sp!,{r3,pc}
