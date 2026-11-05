0215ffa0  stmdb sp!,{r4,lr}
0215ffa4  mov r4,r1
0215ffa8  ldrh r1,[r4,#0x0]
0215ffac  cmp r1,#0x0
0215ffb0  ldmiaeq sp!,{r4,pc}
0215ffb4  ldr r0,[r0,#0x0]
0215ffb8  bl 0x020781e4
0215ffbc  ldrh r0,[r4,#0x0]
0215ffc0  mov r0,r0, asr #0x1
0215ffc4  strh r0,[r4,#0x0]
0215ffc8  ldrh r0,[r4,#0x0]
0215ffcc  cmp r0,#0x100
0215ffd0  movcc r0,#0x0
0215ffd4  strhcc r0,[r4,#0x0]
0215ffd8  ldmia sp!,{r4,pc}
