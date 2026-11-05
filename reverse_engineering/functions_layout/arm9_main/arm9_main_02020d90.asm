02020d90  stmdb sp!,{r3,lr}
02020d94  mov r0,#0x8
02020d98  bl 0x0201a228
02020d9c  cmp r0,#0x0
02020da0  ldmiaeq sp!,{r3,pc}
02020da4  bl 0x02020dd8
02020da8  ldmia sp!,{r3,pc}
