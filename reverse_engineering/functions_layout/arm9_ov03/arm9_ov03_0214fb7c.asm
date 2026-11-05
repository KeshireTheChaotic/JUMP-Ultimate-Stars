0214fb7c  stmdb sp!,{r3,lr}
0214fb80  ldr r0,[r0,#0x4]
0214fb84  ldr r0,[r0,#0x44]
0214fb88  cmp r0,#0x0
0214fb8c  moveq r0,#0x0
0214fb90  ldmiaeq sp!,{r3,pc}
0214fb94  bl 0x0214d47c
0214fb98  ldmia sp!,{r3,pc}
