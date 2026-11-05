02087654  stmdb sp!,{r3,lr}
02087658  bl 0x0208c51c
0208765c  cmp r0,#0x0
02087660  moveq r0,#0x0
02087664  ldmiaeq sp!,{r3,pc}
02087668  bl 0x0219cd24
0208766c  ldmia sp!,{r3,pc}
