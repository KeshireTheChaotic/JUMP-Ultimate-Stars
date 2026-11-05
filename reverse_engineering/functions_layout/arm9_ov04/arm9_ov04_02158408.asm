02158408  stmdb sp!,{r3,lr}
0215840c  cmp r0,#0x0
02158410  ldmiaeq sp!,{r3,pc}
02158414  add r0,r0,r1, lsl #0x2
02158418  ldr r0,[r0,#0x4]
0215841c  bl 0x02158044
02158420  ldmia sp!,{r3,pc}
