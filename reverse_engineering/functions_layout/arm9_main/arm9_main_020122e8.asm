020122e8  stmdb sp!,{r3,lr}
020122ec  bl 0x02012318
020122f0  ldr r1,[r0,#0x0]
020122f4  ldr r1,[r1,#0x3c]
020122f8  blx r1
020122fc  ldmia sp!,{r3,pc}
