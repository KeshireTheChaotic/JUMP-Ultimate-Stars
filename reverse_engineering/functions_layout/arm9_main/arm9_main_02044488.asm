02044488  stmdb sp!,{r4,lr}
0204448c  mov r4,r0
02044490  bl 0x020443dc
02044494  ldr r1,[0x20444a4]
02044498  mov r0,r4
0204449c  str r1,[r4,#0x0]
020444a0  ldmia sp!,{r4,pc}
