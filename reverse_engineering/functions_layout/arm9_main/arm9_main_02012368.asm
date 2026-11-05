02012368  stmdb sp!,{r3,lr}
0201236c  ldrb r2,[r0,#0x28]
02012370  cmp r2,r1
02012374  ldmiaeq sp!,{r3,pc}
02012378  strb r1,[r0,#0x28]
0201237c  bl 0x020123d8
02012380  ldmia sp!,{r3,pc}
