0214d51c  stmdb sp!,{r3,r4,r5,lr}
0214d520  sub sp,sp,#0x10
0214d524  mov r4,r0
0214d528  bl 0x02055238
0214d52c  ldr r1,[0x214d5c8]
0214d530  mov r2,#0x1
0214d534  mov r2,r2, lsl r4
0214d538  ldrh r1,[r1,#0xa]
0214d53c  mov r4,r2, lsl #0x10
0214d540  mov r5,r0
0214d544  tst r1,r4, lsr #0x10
0214d548  bne 0x0214d558
0214d54c  bl 0x0205524c
0214d550  mov r0,#0x0
0214d554  b 0x0214d5c0
0214d558  ldr r0,[0x214d5cc]
0214d55c  add r1,sp,#0x0
0214d560  mov r2,#0xe
0214d564  bl 0x02051890
0214d568  mov r0,r5
0214d56c  bl 0x0205524c
0214d570  ldrh r0,[sp,#0x4]
0214d574  tst r0,r4, lsr #0x10
0214d578  movne r0,#0x2
0214d57c  bne 0x0214d5c0
0214d580  ldrh r0,[sp,#0x6]
0214d584  tst r0,r4, lsr #0x10
0214d588  movne r0,#0x3
0214d58c  bne 0x0214d5c0
0214d590  ldrh r0,[sp,#0x8]
0214d594  tst r0,r4, lsr #0x10
0214d598  movne r0,#0x4
0214d59c  bne 0x0214d5c0
0214d5a0  ldrh r0,[sp,#0xa]
0214d5a4  tst r0,r4, lsr #0x10
0214d5a8  movne r0,#0x5
0214d5ac  bne 0x0214d5c0
0214d5b0  ldrh r0,[sp,#0xc]
0214d5b4  tst r0,r4, lsr #0x10
0214d5b8  movne r0,#0x6
0214d5bc  moveq r0,#0x1
0214d5c0  add sp,sp,#0x10
0214d5c4  ldmia sp!,{r3,r4,r5,pc}
