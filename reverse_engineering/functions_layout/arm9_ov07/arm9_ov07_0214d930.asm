0214d930  stmdb sp!,{r3,lr}
0214d934  bl 0x0214d0e8
0214d938  cmp r0,#0x1
0214d93c  moveq r0,#0x1
0214d940  movne r0,#0x0
0214d944  ldmia sp!,{r3,pc}
