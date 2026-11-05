0214d5d0  stmdb sp!,{r4,lr}
0214d5d4  mov r1,#0x1
0214d5d8  mvn r0,r1, lsl r0
0214d5dc  mov r4,r0, lsl #0x10
0214d5e0  bl 0x02055238
0214d5e4  ldr r1,[0x214d638]
0214d5e8  ldrh r2,[r1,#0xa]
0214d5ec  and r2,r2,r4, lsr #0x10
0214d5f0  strh r2,[r1,#0xa]
0214d5f4  ldrh r2,[r1,#0xc]
0214d5f8  and r2,r2,r4, lsr #0x10
0214d5fc  strh r2,[r1,#0xc]
0214d600  ldrh r2,[r1,#0xe]
0214d604  and r2,r2,r4, lsr #0x10
0214d608  strh r2,[r1,#0xe]
0214d60c  ldrh r2,[r1,#0x10]
0214d610  and r2,r2,r4, lsr #0x10
0214d614  strh r2,[r1,#0x10]
0214d618  ldrh r2,[r1,#0x12]
0214d61c  and r2,r2,r4, lsr #0x10
0214d620  strh r2,[r1,#0x12]
0214d624  ldrh r2,[r1,#0x14]
0214d628  and r2,r2,r4, lsr #0x10
0214d62c  strh r2,[r1,#0x14]
0214d630  bl 0x0205524c
0214d634  ldmia sp!,{r4,pc}
