0203a2e0  stmdb sp!,{r4,lr}
0203a2e4  mov r4,r0
0203a2e8  bl 0x0203a278
0203a2ec  ldr r1,[0x203a2fc]
0203a2f0  mov r0,r4
0203a2f4  str r1,[r4,#0x0]
0203a2f8  ldmia sp!,{r4,pc}
