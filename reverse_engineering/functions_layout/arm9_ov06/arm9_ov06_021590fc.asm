021590fc  stmdb sp!,{r3,lr}
02159100  mov r3,#0x18
02159104  mla r3,r1,r3,r0
02159108  ldrh r3,[r3,#0x88]
0215910c  cmp r3,r2
02159110  ldmiane sp!,{r3,pc}
02159114  bl 0x0215911c
02159118  ldmia sp!,{r3,pc}
