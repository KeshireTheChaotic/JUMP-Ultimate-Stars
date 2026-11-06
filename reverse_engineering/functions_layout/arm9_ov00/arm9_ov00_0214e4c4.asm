0214e4c4  stmdb sp!,{r4,lr}
0214e4c8  mov r4,r0
0214e4cc  bl 0x0214e55c
0214e4d0  cmp r0,#0x0
0214e4d4  ldrne r0,[0x214e4e0]
0214e4d8  strne r0,[r4,#0x48]
0214e4dc  ldmia sp!,{r4,pc}
