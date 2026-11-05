020865b8  stmdb sp!,{r3,lr}
020865bc  mov r1,r0
020865c0  ldr r0,[r1,#0x30]
020865c4  ldr r0,[r0,#0x0]
020865c8  cmp r0,#0x0
020865cc  ldmiaeq sp!,{r3,pc}
020865d0  bl 0x020865fc
020865d4  ldmia sp!,{r3,pc}
