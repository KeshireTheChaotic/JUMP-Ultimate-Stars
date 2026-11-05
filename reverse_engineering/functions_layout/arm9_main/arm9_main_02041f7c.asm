02041f7c  stmdb sp!,{r3,lr}
02041f80  ldrb r2,[r0,#0x432]
02041f84  cmp r2,r1
02041f88  ldmiaeq sp!,{r3,pc}
02041f8c  strb r1,[r0,#0x432]
02041f90  bl 0x02041e08
02041f94  ldmia sp!,{r3,pc}
