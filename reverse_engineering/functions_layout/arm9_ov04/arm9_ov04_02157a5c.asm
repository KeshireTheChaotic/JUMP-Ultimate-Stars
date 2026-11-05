02157a5c  stmdb sp!,{r3,lr}
02157a60  cmp r0,#0x0
02157a64  ldmiaeq sp!,{r3,pc}
02157a68  ldr r0,[r0,#0x1c]
02157a6c  bl 0x021502d4
02157a70  ldmia sp!,{r3,pc}
