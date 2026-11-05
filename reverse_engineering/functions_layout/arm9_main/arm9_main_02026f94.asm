02026f94  stmdb sp!,{r3,lr}
02026f98  mov r0,#0x8
02026f9c  bl 0x0201a228
02026fa0  cmp r0,#0x0
02026fa4  ldmiaeq sp!,{r3,pc}
02026fa8  bl 0x02026ee0
02026fac  ldmia sp!,{r3,pc}
