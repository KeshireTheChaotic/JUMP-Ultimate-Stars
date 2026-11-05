02159578  stmdb sp!,{r3,lr}
0215957c  mov r2,#0x21
02159580  bl 0x0215986c
02159584  cmp r0,#0x0
02159588  moveq r0,#0x1
0215958c  movne r0,#0x0
02159590  ldmia sp!,{r3,pc}
