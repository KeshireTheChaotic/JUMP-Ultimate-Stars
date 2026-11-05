020333a4  stmdb sp!,{r4,lr}
020333a8  mov r4,r0
020333ac  bl 0x02033240
020333b0  ldr r1,[0x20333c0]
020333b4  mov r0,r4
020333b8  str r1,[r4,#0x0]
020333bc  ldmia sp!,{r4,pc}
