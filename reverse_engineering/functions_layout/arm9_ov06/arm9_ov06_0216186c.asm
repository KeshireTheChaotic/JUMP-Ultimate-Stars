0216186c  stmdb sp!,{r3,lr}
02161870  strh r1,[r0,#0x24]
02161874  strh r2,[r0,#0x26]
02161878  cmp r3,#0x0
0216187c  ldmiaeq sp!,{r3,pc}
02161880  bl 0x02161888
02161884  ldmia sp!,{r3,pc}
