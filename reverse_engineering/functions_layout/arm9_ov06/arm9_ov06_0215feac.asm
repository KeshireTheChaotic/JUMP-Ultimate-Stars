0215feac  stmdb sp!,{r3,lr}
0215feb0  ldrh r2,[r0,#0x10]
0215feb4  cmp r2,#0x120
0215feb8  addls r1,r2,#0x1
0215febc  strhls r1,[r0,#0x10]
0215fec0  ldmials sp!,{r3,pc}
0215fec4  add r1,r0,r1, lsl #0x1
0215fec8  ldrh r1,[r1,#0x36]
0215fecc  ldr r0,[r0,#0x0]
0215fed0  bl 0x020781e4
0215fed4  ldmia sp!,{r3,pc}
