02157a44  stmdb sp!,{r3,lr}
02157a48  cmp r0,#0x0
02157a4c  ldmiaeq sp!,{r3,pc}
02157a50  ldr r0,[r0,#0x1c]
02157a54  bl 0x02150270
02157a58  ldmia sp!,{r3,pc}
