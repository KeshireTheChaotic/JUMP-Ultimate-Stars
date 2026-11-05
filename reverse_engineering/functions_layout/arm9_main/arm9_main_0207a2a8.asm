0207a2a8  stmdb sp!,{r3,r4,r5,lr}
0207a2ac  ldr r2,[0x207a2d8]
0207a2b0  mov r4,r1
0207a2b4  ldr r1,[r2,r4,lsl #0x2]
0207a2b8  mov r5,r0
0207a2bc  mov r2,r1
0207a2c0  bl 0x02021800
0207a2c4  ldr r1,[0x207a2dc]
0207a2c8  mov r0,r5
0207a2cc  str r1,[r5,#0x0]
0207a2d0  str r4,[r5,#0x14]
0207a2d4  ldmia sp!,{r3,r4,r5,pc}
