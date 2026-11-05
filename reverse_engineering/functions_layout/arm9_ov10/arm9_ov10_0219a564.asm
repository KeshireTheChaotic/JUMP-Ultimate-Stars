0219a564  stmdb sp!,{r3,lr}
0219a568  ldr r0,[0x219a584]
0219a56c  ldr r0,[r0,#0x0]
0219a570  cmp r0,#0x0
0219a574  ldmiaeq sp!,{r3,pc}
0219a578  bl 0x0219a4b4
0219a57c  bl 0x0219a6d0
0219a580  ldmia sp!,{r3,pc}
