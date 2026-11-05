021582fc  stmdb sp!,{r3,lr}
02158300  cmp r0,#0x0
02158304  ldmiaeq sp!,{r3,pc}
02158308  add r0,r0,r1, lsl #0x2
0215830c  ldr r0,[r0,#0x4]
02158310  mov r1,r2
02158314  bl 0x02157eb0
02158318  ldmia sp!,{r3,pc}
