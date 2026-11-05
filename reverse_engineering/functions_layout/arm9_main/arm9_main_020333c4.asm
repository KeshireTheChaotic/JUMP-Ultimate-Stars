020333c4  stmdb sp!,{r4,lr}
020333c8  mov r4,r0
020333cc  bl 0x02033240
020333d0  ldr r1,[0x20333e0]
020333d4  mov r0,r4
020333d8  str r1,[r4,#0x0]
020333dc  ldmia sp!,{r4,pc}
