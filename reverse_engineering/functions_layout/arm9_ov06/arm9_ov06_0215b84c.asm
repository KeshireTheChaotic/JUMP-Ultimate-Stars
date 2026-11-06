0215b84c  stmdb sp!,{r4,lr}
0215b850  mov r4,r0
0215b854  bl 0x0215b53c
0215b858  cmp r0,#0x0
0215b85c  ldrne r0,[0x215b86c]
0215b860  strne r0,[r4,#0xfc]
0215b864  mov r0,#0x0
0215b868  ldmia sp!,{r4,pc}
