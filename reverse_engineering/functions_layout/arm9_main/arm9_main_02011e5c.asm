02011e5c  stmdb sp!,{r4,lr}
02011e60  mov r4,r0
02011e64  bl 0x02011e7c
02011e68  ldr r1,[0x2011e78]
02011e6c  mov r0,r4
02011e70  str r1,[r4,#0x0]
02011e74  ldmia sp!,{r4,pc}
