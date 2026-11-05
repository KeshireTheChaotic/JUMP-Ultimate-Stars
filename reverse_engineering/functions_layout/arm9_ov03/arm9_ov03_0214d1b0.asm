0214d1b0  stmdb sp!,{r3,lr}
0214d1b4  mvn r0,#0x0
0214d1b8  cmp r1,r0
0214d1bc  ldmiaeq sp!,{r3,pc}
0214d1c0  mov r0,r1, lsl #0x10
0214d1c4  mov r0,r0, lsr #0x10
0214d1c8  cmp r0,#0x78
0214d1cc  ldmiane sp!,{r3,pc}
0214d1d0  mov r1,r1, lsr #0x10
0214d1d4  bl 0x0207342c
0214d1d8  ldmia sp!,{r3,pc}
