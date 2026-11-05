0203ece4  stmdb sp!,{r3,lr}
0203ece8  ldr lr,[0x203ed0c]
0203ecec  ldrh r12,[lr,#0x0]
0203ecf0  and r12,r12,#0x43
0203ecf4  orr r0,r12,r0, lsl #0xe
0203ecf8  orr r0,r0,r1, lsl #0x7
0203ecfc  orr r0,r0,r2, lsl #0x8
0203ed00  orr r0,r0,r3, lsl #0x2
0203ed04  strh r0,[lr,#0x0]
0203ed08  ldmia sp!,{r3,pc}
