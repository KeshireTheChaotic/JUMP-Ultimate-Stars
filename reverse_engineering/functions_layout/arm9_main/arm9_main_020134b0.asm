020134b0  stmdb sp!,{r4,lr}
020134b4  mov r4,r0
020134b8  bl 0x02011f94
020134bc  ldr r1,[0x20134cc]
020134c0  mov r0,r4
020134c4  str r1,[r4,#0x0]
020134c8  ldmia sp!,{r4,pc}
