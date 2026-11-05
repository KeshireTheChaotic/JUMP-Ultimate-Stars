02156dc4  stmdb sp!,{r3,lr}
02156dc8  ldr r0,[r0,#0x1a4]
02156dcc  cmp r0,#0x0
02156dd0  ldmiaeq sp!,{r3,pc}
02156dd4  bl 0x0216002c
02156dd8  ldmia sp!,{r3,pc}
