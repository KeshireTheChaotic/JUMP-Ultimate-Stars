02159280  stmdb sp!,{r3,lr}
02159284  ldr r1,[r1,#0x4]
02159288  ldr r0,[r0,#0x1b4]
0215928c  ldrsh r1,[r1,#0x4]
02159290  mov r1,r1, lsl #0x8
02159294  bl 0x020781e4
02159298  mov r0,#0x0
0215929c  ldmia sp!,{r3,pc}
