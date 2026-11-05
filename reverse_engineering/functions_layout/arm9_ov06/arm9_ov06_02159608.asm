02159608  stmdb sp!,{r3,lr}
0215960c  mov r2,#0x22
02159610  bl 0x0215986c
02159614  cmp r0,#0x0
02159618  moveq r0,#0x1
0215961c  movne r0,#0x0
02159620  ldmia sp!,{r3,pc}
