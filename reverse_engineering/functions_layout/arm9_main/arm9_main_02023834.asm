02023834  stmdb sp!,{r3,lr}
02023838  ldr r2,[r0,#0x3c]
0202383c  orr r1,r1,#0x80000000
02023840  cmp r2,r1
02023844  ldmiaeq sp!,{r3,pc}
02023848  str r1,[r0,#0x3c]
0202384c  bl 0x02027edc
02023850  ldmia sp!,{r3,pc}
