0215bb78  stmdb sp!,{r4,lr}
0215bb7c  mov r4,r0
0215bb80  bl 0x0215b53c
0215bb84  cmp r0,#0x0
0215bb88  ldrne r0,[0x215bb98]
0215bb8c  strne r0,[r4,#0xfc]
0215bb90  mov r0,#0x0
0215bb94  ldmia sp!,{r4,pc}
