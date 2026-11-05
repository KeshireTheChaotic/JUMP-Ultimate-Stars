0202836c  stmdb sp!,{r3,lr}
02028370  ldr r0,[r0,#0x4]
02028374  ldr r1,[r0,#0x0]
02028378  ldr r1,[r1,#0x60]
0202837c  blx r1
02028380  ldmia sp!,{r3,pc}
