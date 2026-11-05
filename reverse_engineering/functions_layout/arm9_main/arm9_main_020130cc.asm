020130cc  stmdb sp!,{r3,lr}
020130d0  ldr r0,[r1,#0x2c]
020130d4  ldr r1,[r0,#0x0]
020130d8  ldr r1,[r1,#0x80]
020130dc  blx r1
020130e0  ldmia sp!,{r3,pc}
