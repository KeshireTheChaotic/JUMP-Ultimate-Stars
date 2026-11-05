0203ec84  stmdb sp!,{r4,lr}
0203ec88  ldr lr,[0x203ecb4]
0203ec8c  ldr r4,[sp,#0x8]
0203ec90  ldrh r12,[lr,#0x0]
0203ec94  and r12,r12,#0x43
0203ec98  orr r0,r12,r0, lsl #0xe
0203ec9c  orr r0,r0,r1, lsl #0x7
0203eca0  orr r0,r0,r2, lsl #0x8
0203eca4  orr r0,r0,r3, lsl #0x2
0203eca8  orr r0,r0,r4, lsl #0xd
0203ecac  strh r0,[lr,#0x0]
0203ecb0  ldmia sp!,{r4,pc}
