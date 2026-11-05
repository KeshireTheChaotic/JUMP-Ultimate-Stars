02011aa8  stmdb sp!,{r3,lr}
02011aac  ldr r0,[r0,#0x4]
02011ab0  mov r1,#0x0
02011ab4  ldr r2,[r0,#0x0]
02011ab8  ldr r2,[r2,#0x60]
02011abc  blx r2
02011ac0  bl 0x02011ac8
02011ac4  ldmia sp!,{r3,pc}
