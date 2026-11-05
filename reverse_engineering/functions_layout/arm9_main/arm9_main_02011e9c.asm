02011e9c  stmdb sp!,{r4,lr}
02011ea0  mov r4,r0
02011ea4  bl 0x02011ebc
02011ea8  ldr r1,[0x2011eb8]
02011eac  mov r0,r4
02011eb0  str r1,[r4,#0x0]
02011eb4  ldmia sp!,{r4,pc}
