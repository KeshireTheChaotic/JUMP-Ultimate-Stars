020123c0  stmdb sp!,{r3,lr}
020123c4  bl 0x02012318
020123c8  ldr r1,[r0,#0x0]
020123cc  ldr r1,[r1,#0x40]
020123d0  blx r1
020123d4  ldmia sp!,{r3,pc}
