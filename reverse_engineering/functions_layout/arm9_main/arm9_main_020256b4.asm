020256b4  stmdb sp!,{r3,lr}
020256b8  mov r0,r1
020256bc  ldr r3,[r0,#0x0]
020256c0  ldr r1,[r2,#0x0]
020256c4  ldr r3,[r3,#0x24]
020256c8  blx r3
020256cc  ldmia sp!,{r3,pc}
