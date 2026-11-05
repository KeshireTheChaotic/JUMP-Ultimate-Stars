0202e2c0  stmdb sp!,{r3,lr}
0202e2c4  cmp r3,#0x0
0202e2c8  ldmiaeq sp!,{r3,pc}
0202e2cc  mov r0,r1
0202e2d0  mov r1,r3
0202e2d4  blx 0x02004b94
0202e2d8  ldmia sp!,{r3,pc}
