02155c80  stmdb sp!,{r3,lr}
02155c84  ldr r0,[r0,#0x8]
02155c88  cmp r0,#0x0
02155c8c  moveq r0,#0x1
02155c90  ldmiaeq sp!,{r3,pc}
02155c94  bl 0x02155c9c
02155c98  ldmia sp!,{r3,pc}
