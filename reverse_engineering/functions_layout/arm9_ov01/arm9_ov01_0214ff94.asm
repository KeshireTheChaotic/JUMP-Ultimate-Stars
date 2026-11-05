0214ff94  stmdb sp!,{r3,lr}
0214ff98  ldr r2,[0x214ffc4]
0214ff9c  ldr r1,[0x214ffc8]
0214ffa0  ldr r12,[r2,#0x0]
0214ffa4  ldr r3,[r1,#0x0]
0214ffa8  sub r12,r12,#0x1
0214ffac  ldr r1,[0x214ffcc]
0214ffb0  str r12,[r2,#0x0]
0214ffb4  str r3,[r1,r12,lsl #0x2]
0214ffb8  ldr r0,[r0,#0x4]
0214ffbc  bl 0x020314a0
0214ffc0  ldmia sp!,{r3,pc}
