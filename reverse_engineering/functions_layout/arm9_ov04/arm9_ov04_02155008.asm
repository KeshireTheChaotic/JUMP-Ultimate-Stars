02155008  stmdb sp!,{r3,lr}
0215500c  cmp r0,#0x0
02155010  ldmiaeq sp!,{r3,pc}
02155014  ldr r0,[r0,#0x0]
02155018  mov r1,#0x1
0215501c  bl 0x02154f40
02155020  ldmia sp!,{r3,pc}
