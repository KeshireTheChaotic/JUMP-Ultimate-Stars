02155d78  stmdb sp!,{r4,lr}
02155d7c  mov r4,r1
02155d80  ldrsb r2,[r4,#0x2]
02155d84  mov r1,#0x8
02155d88  bl 0x021565a4
02155d8c  ldrsb r1,[r4,#0x3]
02155d90  strb r1,[r0,#0x2]
02155d94  ldmia sp!,{r4,pc}
