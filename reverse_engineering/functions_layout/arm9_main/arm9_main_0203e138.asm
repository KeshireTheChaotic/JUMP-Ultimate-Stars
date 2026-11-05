0203e138  stmdb sp!,{r3,lr}
0203e13c  ldr lr,[0x203e160]
0203e140  ldrh r12,[lr,#0x0]
0203e144  and r12,r12,#0x43
0203e148  orr r0,r12,r0, lsl #0xe
0203e14c  orr r0,r0,r3, lsl #0x2
0203e150  orr r0,r0,r2, lsl #0x8
0203e154  orr r0,r0,r1, lsl #0xd
0203e158  strh r0,[lr,#0x0]
0203e15c  ldmia sp!,{r3,pc}
