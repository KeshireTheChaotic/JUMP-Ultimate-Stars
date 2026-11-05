0202843c  stmdb sp!,{r3,lr}
02028440  ldr r2,[r0,#0x3c]
02028444  orr r1,r1,#0x80000000
02028448  cmp r2,r1
0202844c  ldmiaeq sp!,{r3,pc}
02028450  str r1,[r0,#0x3c]
02028454  bl 0x02027edc
02028458  ldmia sp!,{r3,pc}
