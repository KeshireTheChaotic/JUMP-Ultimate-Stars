0203ec50  stmdb sp!,{r4,lr}
0203ec54  ldr lr,[0x203ec80]
0203ec58  ldr r4,[sp,#0x8]
0203ec5c  ldrh r12,[lr,#0x0]
0203ec60  and r12,r12,#0x43
0203ec64  orr r0,r12,r0, lsl #0xe
0203ec68  orr r0,r0,r1, lsl #0x7
0203ec6c  orr r0,r0,r2, lsl #0x8
0203ec70  orr r0,r0,r3, lsl #0x2
0203ec74  orr r0,r0,r4, lsl #0xd
0203ec78  strh r0,[lr,#0x0]
0203ec7c  ldmia sp!,{r4,pc}
