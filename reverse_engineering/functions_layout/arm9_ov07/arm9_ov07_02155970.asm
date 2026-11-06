02155970  stmdb sp!,{r3,lr}
02155974  bl 0x021a3264
02155978  cmp r0,#0x0
0215597c  moveq r0,#0x1
02155980  movne r0,#0x0
02155984  ldmia sp!,{r3,pc}
