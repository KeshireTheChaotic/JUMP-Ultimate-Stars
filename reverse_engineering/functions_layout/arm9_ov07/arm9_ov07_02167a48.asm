02167a48  stmdb sp!,{r3,lr}
02167a4c  cmp r0,#0x0
02167a50  moveq r0,#0x1
02167a54  ldmiaeq sp!,{r3,pc}
02167a58  bl 0x021bad2c
02167a5c  ldmia sp!,{r3,pc}
