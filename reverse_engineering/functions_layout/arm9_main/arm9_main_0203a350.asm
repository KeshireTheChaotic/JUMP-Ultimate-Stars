0203a350  stmdb sp!,{r4,lr}
0203a354  mov r4,r0
0203a358  bl 0x02017764
0203a35c  ldr r1,[0x203a36c]
0203a360  mov r0,r4
0203a364  str r1,[r4,#0x0]
0203a368  ldmia sp!,{r4,pc}
