0215ff74  stmdb sp!,{r3,lr}
0215ff78  ldrh r2,[r0,#0x14]
0215ff7c  cmp r2,#0x2d0
0215ff80  addls r1,r2,#0x1
0215ff84  strhls r1,[r0,#0x14]
0215ff88  ldmials sp!,{r3,pc}
0215ff8c  add r1,r0,r1, lsl #0x1
0215ff90  ldrh r1,[r1,#0x36]
0215ff94  ldr r0,[r0,#0x0]
0215ff98  bl 0x020781e4
0215ff9c  ldmia sp!,{r3,pc}
