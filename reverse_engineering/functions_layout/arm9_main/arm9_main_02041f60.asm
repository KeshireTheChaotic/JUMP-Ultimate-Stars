02041f60  stmdb sp!,{r3,lr}
02041f64  ldrb r2,[r0,#0x431]
02041f68  cmp r2,r1
02041f6c  ldmiaeq sp!,{r3,pc}
02041f70  strb r1,[r0,#0x431]
02041f74  bl 0x02041e08
02041f78  ldmia sp!,{r3,pc}
