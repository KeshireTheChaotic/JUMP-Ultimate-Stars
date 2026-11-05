02011edc  stmdb sp!,{r4,lr}
02011ee0  mov r4,r0
02011ee4  bl 0x0202c4ac
02011ee8  ldr r1,[0x2011ef8]
02011eec  mov r0,r4
02011ef0  str r1,[r4,#0x0]
02011ef4  ldmia sp!,{r4,pc}
