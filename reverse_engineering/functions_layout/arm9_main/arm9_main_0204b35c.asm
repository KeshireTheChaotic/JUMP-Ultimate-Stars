0204b35c  stmdb sp!,{r3,lr}
0204b360  ldr r1,[r0,#0x40]
0204b364  cmp r1,#0x0
0204b368  ldmiaeq sp!,{r3,pc}
0204b36c  blx r1
0204b370  ldmia sp!,{r3,pc}
