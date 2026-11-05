0215fe7c  stmdb sp!,{r4,lr}
0215fe80  mov r4,r0
0215fe84  ldrh r0,[r4,#0x12]
0215fe88  cmp r0,#0x1b0
0215fe8c  bcs 0x0215fea0
0215fe90  add r0,r4,r1, lsl #0x1
0215fe94  ldrh r1,[r0,#0x16]
0215fe98  ldr r0,[r4,#0x0]
0215fe9c  bl 0x020781e4
0215fea0  mov r0,#0x0
0215fea4  strh r0,[r4,#0x12]
0215fea8  ldmia sp!,{r4,pc}
