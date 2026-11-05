0203e0d8  stmdb sp!,{r4,lr}
0203e0dc  ldr lr,[0x203e108]
0203e0e0  ldr r4,[sp,#0x8]
0203e0e4  ldrh r12,[lr,#0x0]
0203e0e8  and r12,r12,#0x43
0203e0ec  orr r0,r12,r0, lsl #0xe
0203e0f0  orr r0,r0,r1, lsl #0x7
0203e0f4  orr r0,r0,r2, lsl #0x8
0203e0f8  orr r0,r0,r3, lsl #0x2
0203e0fc  orr r0,r0,r4, lsl #0xd
0203e100  strh r0,[lr,#0x0]
0203e104  ldmia sp!,{r4,pc}
