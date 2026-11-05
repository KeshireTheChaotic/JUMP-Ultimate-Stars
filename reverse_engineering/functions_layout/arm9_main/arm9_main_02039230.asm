02039230  stmdb sp!,{r3,lr}
02039234  ldr r0,[r0,#0x4]
02039238  cmp r0,#0x0
0203923c  ldmiaeq sp!,{r3,pc}
02039240  ldr r1,[r0,#0x0]
02039244  ldr r1,[r1,#0x8]
02039248  blx r1
0203924c  ldmia sp!,{r3,pc}
