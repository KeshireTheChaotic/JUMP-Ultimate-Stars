02163e98  stmdb sp!,{r3,lr}
02163e9c  ldr r0,[r0,#0x4]
02163ea0  bl 0x02023fb0
02163ea4  cmp r0,#0x0
02163ea8  moveq r0,#0x0
02163eac  ldmiaeq sp!,{r3,pc}
02163eb0  bl 0x02163eb8
02163eb4  ldmia sp!,{r3,pc}
